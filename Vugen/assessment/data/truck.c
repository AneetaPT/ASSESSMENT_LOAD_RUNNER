truck()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("sampleapp.tricentis.com", 
		"URL=https://sampleapp.tricentis.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("truck");

	web_reg_find("Text=Truck Insurance", 
		LAST);

	web_url("app.php", 
		"URL=https://sampleapp.tricentis.com/101/app.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sampleapp.tricentis.com/101/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("truck",LR_AUTO);

	return 0;
}

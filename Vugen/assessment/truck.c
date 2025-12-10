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

/*Correlation comment - Do not change!  Original value='Employee' Name ='Occupation' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=Occupation",
		"RegExp=option\\ value=\"(.*?)\">Employee",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/app.php*",
		LAST);

/*Correlation comment - Do not change!  Original value='BungeeJumping' Name ='Hobbies' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=Hobbies",
		"TagName=input",
		"Extract=value",
		"Name=Hobbies",
		"Id=bungeejumping",
		"Type=checkbox",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/app.php*",
		LAST);

/*Correlation comment - Do not change!  Original value='3000000' Name ='CorrelationParameter' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=option\\ value=\"(.*?)\">\\ 3\\.000\\.000,00",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/app.php*",
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

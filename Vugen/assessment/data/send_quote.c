send_quote()
{

	lr_start_transaction("quote");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_submit_data("quote.php", 
		"Action=https://sampleapp.tricentis.com/101/tcpdf/pdfs/quote.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://sampleapp.tricentis.com/101/app.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Make", "Value=Honda", ENDITEM, 
		"Name=[kW]", "Value=345", ENDITEM, 
		"Name=Date of Manufacture", "Value=12/6/2017", ENDITEM, 
		"Name=Number of Seats", "Value=4", ENDITEM, 
		"Name=Fuel Type", "Value=Diesel", ENDITEM, 
		"Name=Payload", "Value=242", ENDITEM, 
		"Name=Total Weight", "Value=262", ENDITEM, 
		"Name=List Price", "Value=2622", ENDITEM, 
		"Name=License Plate Number", "Value=", ENDITEM, 
		"Name=Annual Mileage", "Value=453", ENDITEM, 
		"Name=First Name", "Value=aniya", ENDITEM, 
		"Name=Last Name", "Value=benny", ENDITEM, 
		"Name=Date of Birth", "Value=03/04/2003", ENDITEM, 
		"Name=Gender", "Value=Female", ENDITEM, 
		"Name=Street Address", "Value=", ENDITEM, 
		"Name=Country", "Value=India", ENDITEM, 
		"Name=Zip Code", "Value=680655", ENDITEM, 
		"Name=City", "Value=", ENDITEM, 
		"Name=Occupation", "Value=Employee", ENDITEM, 
		"Name=Hobbies", "Value=BungeeJumping", ENDITEM, 
		"Name=Website", "Value=", ENDITEM, 
		"Name=Picture", "Value=", ENDITEM, 
		"Name=Start Date", "Value=03/03/2026", ENDITEM, 
		"Name=Insurance Sum", "Value=3000000", ENDITEM, 
		"Name=Damage Insurance", "Value=Partial Coverage", ENDITEM, 
		"Name=Optional Products[]", "Value=Yes", ENDITEM, 
		"Name=Price Sum", "Value=785.00", ENDITEM, 
		"Name=Select Option", "Value=Gold", ENDITEM, 
		"Name=Quote Type", "Value=S", ENDITEM, 
		"Name=E-Mail", "Value=aniyabenny@gmail.com", ENDITEM, 
		"Name=Phone", "Value=", ENDITEM, 
		"Name=Username", "Value=aniya", ENDITEM, 
		"Name=Password", "Value=Pass@123", ENDITEM, 
		"Name=Confirm Password", "Value=Pass@123", ENDITEM, 
		"Name=Comments", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("quote",LR_AUTO);

	return 0;
}
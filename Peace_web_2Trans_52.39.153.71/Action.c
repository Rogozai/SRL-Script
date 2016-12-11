Action()
{
	
	lr_start_transaction("Tran1");

	web_url("52.39.153.71", 
		"URL=http://52.39.153.71/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Tran1", LR_AUTO);
	
	lr_start_transaction("Tran2");
	web_url("secondPage.html", 
		"URL=http://52.39.153.71/secondPage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://52.39.153.71/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("Tran2", LR_AUTO);
	return 0;
}
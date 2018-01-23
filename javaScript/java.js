var cost1=0; var cost2=0; var cost3=0; var cost4=0; var cost5=0; var cost6=0; var subTotal =0; var total=0;

function TotalCost1(Qty){
	var selIndex = Qty.optionList.value;
	cost1 = selIndex * 1500;
	document.getElementById("result").innerHTML= cost1;
	
}
function TotalCost2(Qty){
	var selIndex = Qty.optionList.value;
	cost2 = selIndex * 160.99;
	document.getElementById("result1").innerHTML= cost2;
}

function TotalCost3(Qty){
	var selIndex = Qty.optionList.value;
	cost3 = selIndex * 540.99;
	document.getElementById("result2").innerHTML= cost3;
}

function TotalCost4(Qty){
	var selIndex = Qty.optionList.value;
	cost4 = selIndex * 700.99;
	document.getElementById("result3").innerHTML= cost4;
}

function TotalCost5(Qty){
	
	var selIndex = Qty.optionList.value;
	cost5 = selIndex * 80.99;
	document.getElementById("result4").innerHTML= cost5;
}

function TotalCost6(Qty){
	var selIndex = Qty.optionList.value;
	cost6 = selIndex * 500;
	document.getElementById("result5").innerHTML= cost6;
}

function subTotalCost1(Qty){

	subTotal= cost1+cost2+cost3+cost4+cost5+cost6;
	document.getElementById("sub_total").innerHTML= subTotal;
			}

function Total(Qty){
	vat = (cost1 + cost2 +cost3 +cost4+cost5+cost6) *0.15;
	document.getElementById("total").innerHTML =  vat + subTotal;
			}
			
function submitFunction(){
	var a=document.forms["contact_us"]["fname"].value;
	var b=document.forms["contact_us"]["lname"].value;
	var c=document.forms["contact_us"]["subject"].value;
	var c=document.forms["contact_us"]["subject"].value;
	if(a==null||a==""||b==null||b==""||c==null||c==""){
		alert("fields can't be empty.");
	}
	else{
		alert("we shall get back to you soon");
	}
}

function submitFunction(){
	var a=document.forms["myForm"]["subs"].value;

	if(a==null||a==""){
		alert("Please enter your email.");
	}
	else{
		alert("thank you for signing up for Our newsletter");
	}
}
var slideIndex = 1;
showImage(slideIndex);

function showImage(n) {
    
    var slide = document.getElementsByClassName("mySlides");
    if (n > slide.length){slideIndex = 1};
	if (n < 1){slideIndex = slide.length};
	
	for(var i = 0; i < slide.length; i++){
		slide[i].style.display="none";
	};
	 slideIndex++;
    if (slideIndex > slide.length) {slideIndex = 1}    
    slide[slideIndex-1].style.display = "block";  
    setTimeout(showImage, 5000); // Change image every 5 seconds
}

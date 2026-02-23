<?php
class Student
{
 public $name;
 public $rollNo;
 function __construct($name, $rollNo)
 {
 $this->name = $name;
 $this->rollNo = $rollNo;
 }
 public function display()
 {
 echo "Name: " . $this->name . "<br>";
 echo "Roll No: " . $this->rollNo . "<br>";
 }
}
// Create object
$stu = new Student("Amit", 101);
// Introspection Functions
echo "Class Name: " . get_class($stu) . "<br><br>";
echo "Object Properties:<br>";
print_r(get_object_vars($stu));
echo "<br><br>";
echo "Class Methods:<br>";
print_r(get_class_methods($stu));
echo "<br><br>";
if (method_exists($stu, "display")) {
 echo "Method display() exists in Student class<br>";
}
if (property_exists($stu, "name")) {
 echo "Property name exists in Student class<br>";
}
?>
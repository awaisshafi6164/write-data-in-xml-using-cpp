#include "pugixml.cpp"
#include <iostream>
using namespace std;
using namespace pugi;

int main()
{
    xml_document doc;

    auto declarationNode = doc.append_child(node_declaration);
    declarationNode.append_attribute("version") = "1.0";
    declarationNode.append_attribute("encoding") = "UTF-8";

    xml_node node = doc.append_child("EmployeeList");

    xml_node emp = node.append_child("employee");
    xml_node name = emp.append_child("Name");
    name.append_child(node_pcdata).set_value("M Awais Shafi");

    xml_node salary = emp.append_child("Salary");
    salary.append_child(node_pcdata).set_value("10,000");

    xml_node position = emp.append_child("Position");
    position.append_child(node_pcdata).set_value("Full-end Developer");

    xml_node emp1 = node.append_child("employee");
    xml_node name1 = emp1.append_child("Name");
    name1.append_child(node_pcdata).set_value("Arslan Shafi");

    xml_node salary1 = emp1.append_child("Salary");
    salary1.append_child(node_pcdata).set_value("20,000");

    xml_node position1 = emp1.append_child("Position");
    position1.append_child(node_pcdata).set_value("Electric Engineer");

    //doc.print(cout);
    doc.save_file("EmployeeDetails.xml");
    cout<<"File Has Been Created Successfully.\n";
}

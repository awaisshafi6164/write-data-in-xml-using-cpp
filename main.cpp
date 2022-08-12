#include "XmlWriter.cpp"
#include <iostream>
using namespace std;


int main() {

    XmlWriter xml;

    if (xml.open("autowrite.xml")) {
        xml.writeOpenTag("testTag1");
        xml.writeStartElementTag("test_1");
        xml.writeString("This is my first tag string!");
        xml.writeEndElementTag();

        xml.writeOpenTag("testTag2");
        xml.writeStartElementTag("test_2");
        xml.writeAttribute("testAtt=\"TestAttribute\"");
        xml.writeString("I sometimes amaze myself.");
        xml.writeEndElementTag();

        xml.writeOpenTag("testTag3");
        xml.writeStartElementTag("test_3");
        xml.writeAttribute("testAtt2=\"TestAttrib2\"");
        xml.writeString("Though i'm sure someone can make something even better");
        xml.writeEndElementTag();

        xml.writeCloseTag();
        xml.writeCloseTag();
        xml.writeCloseTag();

        xml.close();
        cout << "Success!\n";
    } else {
        cout << "Error opening file.\n";
    }

    return 0;

}

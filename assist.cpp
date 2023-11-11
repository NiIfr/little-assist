#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {

	if(argc == 3) {

		if(string(argv[1]) == "create" && string(argv[2]) == "project") {

			mkdir("assets");
			mkdir("assets/css");
			mkdir("assets/js");

			ofstream html_file;
			html_file.open("index.html");

			html_file << "<!DOCTYPE html>\n";
			html_file << "<html lang=\"en\">\n";
			html_file << "  <head>\n";
			html_file << "	<meta charset=\"UTF-8\">\n";
			html_file << "	<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n";
			html_file << "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
			html_file << "	<title>Document</title>\n";
			html_file << "	<link rel=\"stylesheet\" href=\"assets/css/style.css\">\n";
			html_file << "  </head>\n";
			html_file << "  <body>\n";
			html_file << "	 <h1>Hello World</h1>\n";
			html_file << "   <script src=\"assets/js/script.js\"></script>\n";
			html_file << "  </body>\n";
			html_file << "</html>\n";

			html_file.close();


			ofstream css_file;
			css_file.open("assets/css/style.css");
			css_file << "*{\n";
			css_file << "  margin: 0;\n";
			css_file << "  padding: 0;\n";
			css_file << "  box-sizing: border-box;\n";
			css_file << "}";
			css_file.close();


			ofstream js_file;
			html_file.open("assets/js/script.js");
			html_file.close();


		}


	}


	return 0;
}
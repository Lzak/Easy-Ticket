/*
	Title: Mojo API C++ Implementation
	Author: Lasha Zakariashvili
*/

#include <string>
#include <fstream>

class MojoAPI {
	public:
		MojoAPI();
		~MojoAPI();

		bool createTicket();
		bool deleteTicket();
		bool editTicket();
		bool showTicket();
		bool commentTicket();

		query();
	private:
		string apikey;
};

MojoAPI::MojoAPI() {
	ifstream in("settings.dat");
	if(!in) {
		//do something
	} else {
		//do something
	}
}

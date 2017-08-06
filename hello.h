#include <string>


class Grabadora {

	private:
		std::string m_message;

	public:

		Grabadora(std::string m) {m_message=m}

		std::string displayMessage() {return m_message;}

		void setMessage();

};

// Libraries
#include <string>
#include <ctime>
#include <iomanip>
#include <iostream>

// Timestamp
std::string Timestamp(std::string Time_Format = "") {

    // Get time
    time_t now = time(nullptr);

    // Control Time Format
    if (Time_Format.empty())
        return std::to_string(now);
	
	// Create Time Structure
    tm tm;

    // Safe Turn LocalTime
    if (localtime_s(&tm, &now) != 0)
		return "";

    // Create Buffer and Fill
    char Buffer[256];
    strftime(Buffer, sizeof(Buffer), Time_Format.c_str(), &tm);

    // Return Timestamp
    return std::string(Buffer);
}

// Main Function
int main(int argc, char *argv[]) {
	
	// Get Timestamp and Display
	std::string now = (argc > 1) ? Timestamp(argv[1]) : Timestamp();
    std::cout << now << " - " << time(nullptr) << std::endl;
	
	// Return Function
    return 0;
}

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
    if (Time_Format.empty()) return std::to_string(now);

    // Safe Turn LocalTime
    struct tm *time_info = nullptr;
    time_info = localtime(&now);

    // Create Buffer and Fill
    char Buffer[Time_Format.size() * 4 + 20];
    strftime(Buffer, sizeof(Buffer), Time_Format.c_str(), time_info);

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

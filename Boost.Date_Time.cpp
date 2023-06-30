#include <iostream>
#include <boost/date_time.hpp>

int main() {
    using namespace boost::gregorian;
    using namespace boost::posix_time;

    // Get the current date
    date today = day_clock::local_day();
    std::cout << "Today's date: " << today << std::endl;

    // Calculate future dates
    date_duration twoDays(2);
    date futureDate = today + twoDays;
    std::cout << "Future date (2 days from today): " << futureDate << std::endl;

    // Calculate past dates
    date_duration tenDays(10);
    date pastDate = today - tenDays;
    std::cout << "Past date (10 days before today): " << pastDate << std::endl;

    // Calculate time differences
    ptime now = second_clock::local_time();
    ptime futureTime = now + hours(24);
    time_duration diff = futureTime - now;
    std::cout << "Time difference (in hours): " << diff.hours() << std::endl;

    // Handling time zones
    ptime utcTime = second_clock::universal_time();
    std::cout << "UTC time: " << utcTime << std::endl;

    return 0;
}

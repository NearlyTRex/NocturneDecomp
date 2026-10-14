#pragma once

#include <ctime>
#include <stdexcept>
#include <string>

namespace nocturne::common {

// What displayErrorAndQuit reports: the message, where it was raised and errno at the time.
class CFatalError : public std::runtime_error {
public:
    CFatalError(const std::string &message, std::string file, int line, int error_number);

    [[nodiscard]] const std::string &getFile() const;
    [[nodiscard]] int getLine() const;
    // The entry the original appends to gtfo.txt, stamped with local_time.
    [[nodiscard]] std::string getLogEntry(const std::tm &local_time) const;

private:
    std::string file_;
    int line_;
    int error_number_;
};

} // namespace nocturne::common

#include "engine/dosio/dosio_functions.h"

#include <format>

namespace nocturne::engine {

// nocedit 0x004816c0
std::string getRelativeFilePath(std::string_view directory, std::string_view filename) {
    if (directory.empty()) {
        return std::string(filename);
    }
    return std::format("{}\\{}", directory, filename);
}

} // namespace nocturne::engine

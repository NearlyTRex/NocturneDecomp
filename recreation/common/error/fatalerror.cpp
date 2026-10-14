#include "common/error/fatalerror.h"

#include "common/text/asctime.h"

#include <cstring>
#include <format>
#include <utility>

namespace nocturne::common {

CFatalError::CFatalError(const std::string &message, std::string file, int line, int error_number)
    : std::runtime_error(message), file_(std::move(file)), line_(line),
      error_number_(error_number) {}

const std::string &CFatalError::getFile() const {
    return file_;
}

int CFatalError::getLine() const {
    return line_;
}

std::string CFatalError::getLogEntry(const std::tm &local_time) const {
    return std::format("{:-<64}\nMsg: {}\nFile: {} line {}\nTime: {}errno = {} ({})\n", "", what(),
                       file_, line_, formatAsctime(local_time), error_number_,
                       std::strerror(error_number_));
}

} // namespace nocturne::common

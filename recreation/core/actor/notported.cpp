#include "core/actor/notported.h"

#include "common/error/error.h"

#include <format>
#include <string_view>

namespace nocturne::core {

void quitNotPorted(std::string_view class_name, std::string_view function) {
    common::displayErrorAndQuit(std::format("{}::{} is not ported yet", class_name, function));
}

} // namespace nocturne::core

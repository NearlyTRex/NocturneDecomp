#include "platform/filelog.h"

#include "platform/filesystem.h"
#include "platform/log.h"

#include <array>
#include <cstddef>
#include <format>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::platform {
namespace {

// By ELogSubsystem.
constexpr std::array<std::string_view, 6> kSubsystemNames{"render", "sound", "frontend",
                                                          "fileio", "input", "netplay"};

} // namespace

CFileLog::CFileLog(IFileSystem &file_system) : file_system_(file_system) {}

void CFileLog::write(ELogSubsystem subsystem, std::string_view line) {
    const auto index = static_cast<std::size_t>(std::to_underlying(subsystem));
    const std::string filename = std::format("nocturne_{}.log", kSubsystemNames.at(index));
    const std::string text = std::format("{}\n", line);
    if (started_.at(index)) {
        file_system_.appendFile(filename, text);
        return;
    }
    started_.at(index) = file_system_.writeFile(filename, text);
}

} // namespace nocturne::platform

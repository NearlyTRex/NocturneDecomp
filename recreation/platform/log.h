#pragma once

#include <concepts>
#include <cstdint>
#include <format>
#include <source_location>
#include <string_view>
#include <type_traits>
#include <utility>

namespace nocturne::platform {

// The developer logs, each its own file, as the decomp's DLOG names them.
enum class ELogSubsystem : std::uint8_t {
    Render,
    Sound,
    Frontend,
    FileIo,
    Input,
    Netplay,
};

// A log line's format, and the place in the source that wrote it.
template <typename... TArgs>
struct SLogFormat {
    template <typename TText>
        requires std::convertible_to<const TText &, std::string_view>
    // NOLINTNEXTLINE(google-explicit-constructor): a call site passes the bare literal.
    consteval SLogFormat(const TText &text,
                         std::source_location where = std::source_location::current())
        : format(text), location(where) {}

    std::format_string<TArgs...> format;
    std::source_location location;
};

// The enhanced game's developer logs: what the game and its renderer did, for whoever is chasing
// a problem, apart from the game's own messages.
class ILog {
public:
    virtual ~ILog() = default;

    // One line as it goes in the file, without its newline.
    virtual void write(ELogSubsystem subsystem, std::string_view line) = 0;

    // std::format's syntax, the line led by the file and line that wrote it, as DLOG's were.
    template <typename... TArgs>
    void print(ELogSubsystem subsystem, SLogFormat<std::type_identity_t<TArgs>...> format,
               TArgs &&...args) {
        std::string_view file = format.location.file_name();
        file.remove_prefix(file.find_last_of("/\\") + 1);
        write(subsystem, std::format("[{}:{}] {}", file, format.location.line(),
                                     std::format(format.format, std::forward<TArgs>(args)...)));
    }
};

} // namespace nocturne::platform

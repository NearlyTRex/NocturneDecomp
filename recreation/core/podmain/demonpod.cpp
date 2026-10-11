#include "core/podmain/demonpod.h"

#include "common/text/scan.h"
#include "engine/dosio/filefinder.h"
#include "platform/filesystem.h"

#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

// The next whitespace-separated word, as fscanf's "%s" reads it; empty at the end.
std::string_view nextWord(std::string_view &text) {
    constexpr std::string_view kWhitespace = " \t\n\v\f\r";
    const std::size_t start = text.find_first_not_of(kWhitespace);
    text.remove_prefix(start == std::string_view::npos ? text.size() : start);
    const std::size_t end = text.find_first_of(kWhitespace);
    const std::string_view word = text.substr(0, end);
    text.remove_prefix(word.size());
    return word;
}

} // namespace

// nocedit 0x00551b00
CDemonPod::CDemonPod(platform::IFileSystem &file_system, const engine::CDosIo &dosio)
    : CPod(file_system, dosio) {}

// nocedit 0x00551b20
CDemonPod::~CDemonPod() = default;

// pod.ini is a count, then that many names. The retail build mounts them in that order, without
// the editor's dependency sort.
// nocedit 0x005519c0
void CDemonPod::load() {
    const std::optional<std::string> list = getFileSystem().readFile("pod.ini");
    if (!list) {
        engine::CFileFinder finder(getFileSystem());
        finder.openSearch("*.pod");
        while (!finder.getFilename().empty()) {
            mount(finder.getFilename());
            finder.findNext();
        }
        return;
    }
    std::string_view text = *list;
    const int count = common::scanInteger(nextWord(text)).value_or(0);
    // The original mounted its last name again for each one the list was short of.
    for (int i = 0; i < count; ++i) {
        const std::string_view name = nextWord(text);
        if (name.empty()) {
            return;
        }
        mount(name);
    }
}

} // namespace nocturne::core

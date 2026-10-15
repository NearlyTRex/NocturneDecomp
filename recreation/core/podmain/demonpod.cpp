#include "core/podmain/demonpod.h"

#include "common/text/scan.h"
#include "common/text/textscanner.h"
#include "engine/dosio/filefinder.h"
#include "platform/filesystem.h"

#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {

// staticInit built the global instance and registered its destructor; its owner constructs it now.
// nocedit 0x00551990
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
    common::CTextScanner text(*list);
    // The original left the count uninitialised when the list didn't start with a number.
    const int count = common::scanInteger(text.scanWord()).value_or(0);
    // The original mounted its last name again for each one the list was short of.
    for (int i = 0; i < count; ++i) {
        const std::string_view name = text.scanWord();
        if (name.empty()) {
            return;
        }
        mount(name);
    }
}

} // namespace nocturne::core

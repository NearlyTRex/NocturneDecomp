#pragma once

#include <cstdint>

namespace nocturne::core {

// What START offers: the stories, a browser of every mission for the developers (Ctrl), or the
// stories with each one's chapters to choose from (Ctrl+Shift).
enum class EChapterSelectMode : std::uint8_t {
    kStories = 0,
    kMissionBrowser = 1,
    kChapters = 2,
};

} // namespace nocturne::core

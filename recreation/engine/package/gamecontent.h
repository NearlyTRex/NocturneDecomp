#pragma once

#include <array>
#include <functional>
#include <map>
#include <optional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::engine {

struct SGameChapter {
    std::string name;
    std::string mission;
    // Listed only when the whole game is installed.
    bool needs_full_install = false;

    bool operator==(const SGameChapter &) const = default;
};

// The key in nocturne.ini's Game section, and the value there that opens a story's chapters.
struct SStoryUnlock {
    std::string key;
    int code = 0;

    bool operator==(const SStoryUnlock &) const = default;
};

struct SGameStory {
    std::string id;
    // Its line in the list of stories.
    std::string name;
    // Over its chapters, and over the screen as its session starts.
    std::string title;
    // Shown with the title; 0 shows none.
    int year = 0;
    // A loading picture's id, or empty for none.
    std::string loading;
    std::optional<SStoryUnlock> unlock;
    // Stories whose chapters must all be open before this one is listed.
    std::vector<std::string> required_stories;
    std::vector<SGameChapter> chapters;

    bool operator==(const SGameStory &) const = default;
};

// Where the moon indicator turns over a loading picture, and its tint.
struct SMoonWindow {
    int x = 0;
    int y = 0;
    // Red, green and blue, from 0 to 0xff00.
    std::array<int, 3> tint{};

    bool operator==(const SMoonWindow &) const = default;
};

// A 640x480 picture the loading screen shows.
struct SLoadingPicture {
    std::string id;
    // For the moon indicator; without it the moon is drawn as it is without a picture.
    std::optional<SMoonWindow> moon;
    // One of those a mission without a story picks from.
    bool random = false;

    bool operator==(const SLoadingPicture &) const = default;
};

// What the credits roll: a text file in "data", the picture beside them, and the music under them.
struct SGameCredits {
    std::string text;
    std::string image;
    // Empty for none.
    std::string music;

    bool operator==(const SGameCredits &) const = default;
};

// A point on the front end's 640x480 layout.
struct SLayoutPoint {
    int x = 0;
    int y = 0;

    bool operator==(const SLayoutPoint &) const = default;
};

// Where the menus' lists go on the front end's layout, a list moving up to fit the screen.
struct SMenuLayout {
    // The items' left edge.
    int left = 0;
    // A list without a title, the main menu's among them.
    int top = 0;
    int titled_top = 0;
    // The trademark sign beside the title art, or none.
    std::optional<SLayoutPoint> trademark;

    bool operator==(const SMenuLayout &) const = default;
};

// English text to a language's, as msglist.txt maps it.
using TranslationTable = std::map<std::string, std::string, std::less<>>;

// What the shipped binary hard-coded about its own game, as a package gives it. Whatever a
// package leaves unset an earlier one's gives.
struct SGameContent {
    // The game's name as its own folders spell it, such as the one in the user's cache.
    std::optional<std::string> title;
    // The menus the game runs.
    std::optional<std::string> front_end;
    // What shows a level loading.
    std::optional<std::string> loading_indicator;
    std::optional<std::string> copyright;
    // With the (c), which only the OS fonts have.
    std::optional<std::string> copyright_os_font;
    std::optional<SGameCredits> credits;
    std::optional<SMenuLayout> menu;
    std::vector<SLoadingPicture> loading;
    std::vector<SGameStory> stories;
    // By language code.
    std::map<std::string, TranslationTable, std::less<>> translations;

    bool operator==(const SGameContent &) const = default;
};

struct SMergedGameContent {
    SGameContent content;
    // A story naming a loading picture or another story that no package has.
    std::vector<std::string> notes;
};

// The packages' content, first loaded first. A later package's value wins, and its story or
// loading picture replaces an earlier one with the same id where it stands; new ones go at the end.
[[nodiscard]] SMergedGameContent mergeGameContent(std::span<const SGameContent *const> in_order);

} // namespace nocturne::engine

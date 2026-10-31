#include "common/text/ascii.h"
#include "core/game/chapterselectmode.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/inivar/inivar.h"
#include "core/level/levelloader.h"
#include "core/loadingscreen.h"
#include "core/mission/demonmission.h"
#include "engine/dosio/dosio.h"
#include "engine/ini/inifile.h"
#include "platform/file.h"
#include "platform/filesystem.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <optional>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

struct SChapter {
    std::string_view name;
    std::string_view mission;
    // Listed only when the whole game is installed.
    bool needs_full_install = false;
};

// A story: its line in the list of them, its title over its chapters, and nocturne.ini's key
// and value that open its chapters, where it has one.
struct SStory {
    std::string_view name;
    std::string_view title;
    std::string_view unlock_key;
    int unlock_code;
    std::span<const SChapter> chapters;
};

constexpr std::array<SChapter, 5> kVolume1{{
    {.name = "Chapter 1 - 'Your New Partner'", .mission = "hq-act1.msn"},
    {.name = "Chapter 2 - 'Sentinels'", .mission = "gtown.msn"},
    {.name = "Chapter 3 - 'Werewolf Forest'", .mission = "forest.msn"},
    {.name = "Chapter 4 - 'Castle Gaustadt'", .mission = "castle1.msn"},
    {.name = "Chapter 5 - 'Dungeon'", .mission = "dungeon.msn"},
}};
constexpr std::array<SChapter, 7> kVolume2{{
    {.name = "Chapter 1 - 'Train to Redeye'", .mission = "train.msn"},
    {.name = "Chapter 2 - 'Zombie Town'", .mission = "town.msn"},
    {.name = "Chapter 3 - 'Underground Mine'", .mission = "mine.msn"},
    {.name = "Chapter 4 - 'Hidden Entrance'", .mission = "trans.msn"},
    {.name = "Chapter 5 - 'Temple of the God'", .mission = "temple.msn"},
    {.name = "Chapter 6 - 'Epilogue'", .mission = "town2.msn"},
    {.name = "Chapter X - 'Failure'", .mission = "hq-act2b.msn", .needs_full_install = true},
}};
constexpr std::array<SChapter, 11> kVolume3{{
    {.name = "Chapter 1 - 'Headquarters'", .mission = "hq-act3.msn"},
    {.name = "Chapter 2 - 'Chicago River'", .mission = "chicago1.msn"},
    {.name = "Chapter 3 - 'The Vendome'", .mission = "speak.msn"},
    {.name = "Chapter 4 - 'Night on the Town'", .mission = "chicago2.msn"},
    {.name = "Chapter 5 - 'Water Works'", .mission = "wworks.msn"},
    {.name = "Chapter 6 - 'Windy City'", .mission = "chicago3.msn"},
    {.name = "Chapter 7 - 'Crescent Theater'", .mission = "theater.msn"},
    {.name = "Chapter 8 - 'Rooftop to Rooftop'", .mission = "chicago4.msn"},
    {.name = "Chapter 9 - 'Warehouse of Hell'", .mission = "ware2.msn"},
    {.name = "Chapter 10 - 'Mobster Factory'", .mission = "factory.msn"},
    {.name = "Chapter 11 - 'Not You Again'", .mission = "intfact.msn"},
}};
constexpr std::array<SChapter, 4> kVolume4{{
    {.name = "Chapter 1 - 'Headquarters'", .mission = "hq-act4.msn"},
    {.name = "Chapter 2 - 'Graveyard'", .mission = "grave.msn"},
    {.name = "Chapter 3 - 'House of Hell'", .mission = "mansion.msn"},
    {.name = "Chapter 4 - 'Back from Hell'", .mission = "hq-act4b.msn"},
}};
constexpr std::array<SChapter, 1> kVolume5{{
    {.name = "Chapter 1 - 'Headquarters'", .mission = "hq-act5.msn"},
}};

// The first four open with their act's code; the epilogue has none, and is listed once all four
// do.
constexpr std::array<SStory, 5> kStories{{
    {.name = "Volume 1 - 'Dark Reign of the Vampire King'",
     .title = "'Dark Reign of the Vampire King'",
     .unlock_key = "Act1Code",
     .unlock_code = 0x331,
     .chapters = kVolume1},
    {.name = "Volume 2 - 'Tomb of the Underground God'",
     .title = "'Tomb of the Underground God'",
     .unlock_key = "Act2Code",
     .unlock_code = 0x3cc,
     .chapters = kVolume2},
    {.name = "Volume 3 - 'Windy City Massacre'",
     .title = "'Windy City Massacre'",
     .unlock_key = "Act3Code",
     .unlock_code = 0x3ac,
     .chapters = kVolume3},
    {.name = "Volume 4 - 'The House on the Edge of Hell'",
     .title = "'The House on the Edge of Hell'",
     .unlock_key = "Act4Code",
     .unlock_code = 0xd6,
     .chapters = kVolume4},
    {.name = "Volume 5 - 'Epilogue'",
     .title = "'Epilogue'",
     .unlock_key = {},
     .unlock_code = 0,
     .chapters = kVolume5},
}};
constexpr std::size_t kActStories = 4;
constexpr std::string_view kIniSection = "Game";
constexpr int kLoadingFrames = 10;
constexpr int kNoSelection = -1;

struct SChoice {
    std::size_t story;
    std::size_t chapter;
};

// What choosing a story and chapter reads, offers its lists with and remembers between them.
class CChapterChooser {
public:
    CChapterChooser(const SChapterSelectOwners &owners, const engine::CDosIo &dosio,
                    bool full_install, bool show_chapters)
        : owners_(owners), dosio_(dosio), full_install_(full_install),
          show_chapters_(show_chapters) {
        const engine::CIniFile file(owners.ini, kIniFilename, kIniSection);
        for (std::size_t i = 0; i < kActStories; ++i) {
            unlocked_[i] = file.getInteger(kStories[i].unlock_key, 0) == kStories[i].unlock_code;
        }
    }

    // Backing out of a story's chapters offers the stories again.
    [[nodiscard]] std::optional<SChoice> choose() {
        for (;;) {
            shape::CPickList list(owners_.pick_list);
            const int story = pickStory(list);
            if (story < 0) {
                return std::nullopt;
            }
            const auto index = static_cast<std::size_t>(story);
            // Once opened, every story offers its chapters until START is left.
            if (index < kActStories && unlocked_[index]) {
                show_chapters_ = true;
            }
            if (!show_chapters_) {
                return SChoice{.story = index, .chapter = 0};
            }
            const int chapter = pickChapter(list, kStories[index]);
            if (chapter >= 0) {
                return SChoice{.story = index, .chapter = static_cast<std::size_t>(chapter)};
            }
        }
    }

private:
    [[nodiscard]] bool isMissionPresent(std::string_view mission) const {
        return dosio_.getFile("world", mission, platform::EFileMode::Read) != nullptr;
    }

    void add(shape::CPickList &list, std::string_view name) const {
        list.add(owners_.messages.getLocalizedString(name));
    }

    // A story whose first mission is missing is greyed out only in a whole install.
    int pickStory(shape::CPickList &list) const {
        const bool epilogue_unlocked =
            std::ranges::all_of(unlocked_, [](bool open) { return open; });
        const std::size_t count = epilogue_unlocked ? kStories.size() : kActStories;
        for (std::size_t i = 0; i < count; ++i) {
            add(list, kStories[i].name);
        }
        for (std::size_t i = 0; full_install_ && i < count; ++i) {
            if (!isMissionPresent(kStories[i].chapters.front().mission)) {
                list.enableItem(static_cast<int>(i), false);
            }
        }
        return list.displayChoicesAndWaitForInput(
            owners_.messages.getLocalizedString("Choose a story to play"), kNoSelection);
    }

    int pickChapter(shape::CPickList &list, const SStory &story) const {
        list.clear();
        for (const SChapter &chapter : story.chapters) {
            if (full_install_ || !chapter.needs_full_install) {
                add(list, chapter.name);
            }
        }
        for (int i = 0; i < list.getItemCount(); ++i) {
            if (!isMissionPresent(story.chapters[static_cast<std::size_t>(i)].mission)) {
                list.enableItem(i, false);
            }
        }
        return list.displayChoicesAndWaitForInput(owners_.messages.getLocalizedString(story.title),
                                                  kNoSelection);
    }

    const SChapterSelectOwners &owners_;
    const engine::CDosIo &dosio_;
    bool full_install_;
    bool show_chapters_;
    std::array<bool, kActStories> unlocked_{};
};

} // namespace

// The original also sent START to the browser when pod.ini was there, put its lists in the menu
// font, which the main menu that calls it has them in already, and checked the chosen mission's
// file again, which the lists' greying of every missing one makes unneeded.
// deferred: zeroing the act's enemy and kill counts and its game and play times, with
//   CGame::displayActStats
// deferred: showing the story's year and title for eight seconds, or nothing after the browser,
//   with CGame::renderOverlay and CGame::updateStatusDisplays
// deferred: clearing the events' game flags, with CEventList::resetGameFlags
// deferred: running the mission, then loading the save a run asks to reload, with
//   CDemonMission::run and CGame::loadGame
// nocedit 0x004e1cb0
void CGame::showChapterSelect(const SChapterSelectOwners &owners, EChapterSelectMode select_mode) {
    is_loading = false;
    // Without enemy.pod the install is partial: every story offers its chapters, the stories
    // aren't greyed for a missing first mission, and Volume 2 has no 'Failure'.
    const bool full_install =
        owners_.dosio.getFile("", "enemy.pod", platform::EFileMode::Read) != nullptr;
    std::string filename;
    // The browser's mission has no story, and the loading screen picks a picture for it.
    int story = CLevelLoader::kRandomImage;
    if (select_mode == EChapterSelectMode::kMissionBrowser) {
        if (!owners.editor_tools.showFileSelectionDialog(owners.file_selection,
                                                         "Select mission to play", "world", "*.msn",
                                                         filename, false)) {
            return;
        }
    } else {
        CChapterChooser chooser(owners, owners_.dosio, full_install,
                                select_mode != EChapterSelectMode::kStories || !full_install);
        const std::optional<SChoice> choice = chooser.choose();
        if (!choice) {
            return;
        }
        filename = kStories[choice->story].chapters[choice->chapter].mission;
        story = static_cast<int>(choice->story);
    }
    const bool keep_assets = common::equalsIgnoringAsciiCase(current_save_file_, filename);
    if (!keep_assets) {
        current_save_file_ = filename;
    }
    owners.loading_screen.show(kLoadingFrames, false, story);
    owners.mission.load(filename, keep_assets);
    if (!owners.mission.createHeros(nullptr)) {
        return;
    }
    // The original ran the mission whether or not it started.
    static_cast<void>(owners.mission.startMission());
}

const std::string &CGame::getCurrentSaveFile() const {
    return current_save_file_;
}

const engine::CDosIo &CGame::getDosIo() const {
    return owners_.dosio;
}

} // namespace nocturne::core

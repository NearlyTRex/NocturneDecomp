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
#include "engine/package/gamecontent.h"
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
#include <vector>

namespace nocturne::core {
namespace {

constexpr std::string_view kIniSection = "Game";
constexpr int kLoadingFrames = 10;
constexpr float kChapterTitleSeconds = 8.0F;
constexpr int kNoSelection = -1;

struct SChoice {
    std::size_t story;
    std::size_t chapter;
};

// A story is open when nocturne.ini holds its code.
bool isUnlocked(const engine::CIniFile &file, const engine::SGameStory &story) {
    return story.unlock && file.getInteger(story.unlock->key, 0) == story.unlock->code;
}

// What choosing a story and chapter reads, offers its lists with and remembers between them.
class CChapterChooser {
public:
    CChapterChooser(const SChapterSelectOwners &owners, const engine::CDosIo &dosio,
                    std::span<const engine::SGameStory> stories, bool full_install,
                    bool show_chapters)
        : owners_(owners), dosio_(dosio), stories_(stories), full_install_(full_install),
          show_chapters_(show_chapters) {
        const engine::CIniFile file(owners.ini, kIniFilename, kIniSection);
        for (const engine::SGameStory &story : stories) {
            unlocked_.push_back(isUnlocked(file, story));
        }
        for (std::size_t i = 0; i < stories.size(); ++i) {
            if (isListed(stories[i])) {
                listed_.push_back(i);
            }
        }
    }

    // Backing out of a story's chapters offers the stories again.
    [[nodiscard]] std::optional<SChoice> choose() {
        for (;;) {
            shape::CPickList list(owners_.pick_list);
            const int line = pickStory(list);
            if (line < 0) {
                return std::nullopt;
            }
            const std::size_t index = listed_[static_cast<std::size_t>(line)];
            // Once opened, every story offers its chapters until START is left.
            if (unlocked_[index]) {
                show_chapters_ = true;
            }
            if (!show_chapters_) {
                return SChoice{.story = index, .chapter = 0};
            }
            const int chapter = pickChapter(list, stories_[index]);
            if (chapter >= 0) {
                return SChoice{.story = index, .chapter = static_cast<std::size_t>(chapter)};
            }
        }
    }

private:
    // Once every story it requires is open.
    [[nodiscard]] bool isListed(const engine::SGameStory &story) const {
        return std::ranges::all_of(story.required_stories, [this](const std::string &id) {
            const auto found = std::ranges::find(stories_, id, &engine::SGameStory::id);
            return found != stories_.end() &&
                   unlocked_[static_cast<std::size_t>(found - stories_.begin())];
        });
    }

    [[nodiscard]] bool isMissionPresent(std::string_view mission) const {
        return dosio_.getFile("world", mission, platform::EFileMode::Read) != nullptr;
    }

    void add(shape::CPickList &list, std::string_view name) const {
        list.add(owners_.messages.getLocalizedString(name));
    }

    // A story whose first mission is missing is greyed out only in a whole install.
    int pickStory(shape::CPickList &list) const {
        for (const std::size_t index : listed_) {
            add(list, stories_[index].name);
        }
        for (std::size_t line = 0; full_install_ && line < listed_.size(); ++line) {
            if (!isMissionPresent(stories_[listed_[line]].chapters.front().mission)) {
                list.enableItem(static_cast<int>(line), false);
            }
        }
        return list.displayChoicesAndWaitForInput(
            owners_.messages.getLocalizedString("Choose a story to play"), kNoSelection);
    }

    // The chapter's index in the story, or -1. The original took the line for the index, which
    // held only while the one chapter a partial install leaves out was the last.
    int pickChapter(shape::CPickList &list, const engine::SGameStory &story) const {
        list.clear();
        std::vector<std::size_t> offered;
        for (std::size_t i = 0; i < story.chapters.size(); ++i) {
            if (full_install_ || !story.chapters[i].needs_full_install) {
                add(list, story.chapters[i].name);
                offered.push_back(i);
            }
        }
        for (std::size_t line = 0; line < offered.size(); ++line) {
            if (!isMissionPresent(story.chapters[offered[line]].mission)) {
                list.enableItem(static_cast<int>(line), false);
            }
        }
        const int line = list.displayChoicesAndWaitForInput(
            owners_.messages.getLocalizedString(story.title), kNoSelection);
        return line < 0 ? line : static_cast<int>(offered[static_cast<std::size_t>(line)]);
    }

    const SChapterSelectOwners &owners_;
    const engine::CDosIo &dosio_;
    std::span<const engine::SGameStory> stories_;
    bool full_install_;
    bool show_chapters_;
    std::vector<bool> unlocked_;
    // The stories the list offers, by index.
    std::vector<std::size_t> listed_;
};

// The picture's index among the packages', or none.
int findLoadingPicture(const engine::SGameContent &content, std::string_view id) {
    const auto found = std::ranges::find(content.loading, id, &engine::SLoadingPicture::id);
    if (id.empty() || found == content.loading.end()) {
        return CLevelLoader::kNoImage;
    }
    return static_cast<int>(found - content.loading.begin());
}

} // namespace

// The stories are the packages'; the original's table had four acts, each opened by its code,
// and an epilogue listed once all four were. The original also sent START to the browser when
// pod.ini was there, put its lists in the menu font, which the main menu that calls it has them
// in already, and checked the chosen mission's file again, which the lists' greying of every
// missing one makes unneeded.
// deferred: zeroing the act's enemy and kill counts and its game and play times, with
//   CGame::displayActStats
// deferred: clearing the events' game flags, with CEventList::resetGameFlags
// deferred: loading the save a run asks to reload, then the editor's font as it was, with
//   CGame::loadGame and the play loop
// nocedit 0x004e1cb0
void CGame::showChapterSelect(const SChapterSelectOwners &owners, EChapterSelectMode select_mode) {
    is_loading = false;
    // Without enemy.pod the install is partial: every story offers its chapters, the stories
    // aren't greyed for a missing first mission, and chapters needing a full install aren't
    // listed.
    const bool full_install =
        owners_.dosio.getFile("", "enemy.pod", platform::EFileMode::Read) != nullptr;
    std::string filename;
    // The browser's mission has no story, and the loading screen picks a picture for it.
    int picture = CLevelLoader::kRandomImage;
    if (select_mode == EChapterSelectMode::kMissionBrowser) {
        if (!owners.editor_tools.showFileSelectionDialog(owners.file_selection,
                                                         "Select mission to play", "world", "*.msn",
                                                         filename, false)) {
            return;
        }
        chapter_year_ = 0;
        chapter_title_.clear();
        chapter_title_timer_ = 0.0F;
    } else {
        const engine::SGameContent &content = owners_.content;
        CChapterChooser chooser(owners, owners_.dosio, content.stories, full_install,
                                select_mode != EChapterSelectMode::kStories || !full_install);
        const std::optional<SChoice> choice = chooser.choose();
        if (!choice) {
            return;
        }
        const engine::SGameStory &chosen = content.stories[choice->story];
        filename = chosen.chapters[choice->chapter].mission;
        picture = findLoadingPicture(content, chosen.loading);
        chapter_year_ = chosen.year;
        chapter_title_ = owners.messages.getLocalizedString(chosen.title);
        chapter_title_timer_ = kChapterTitleSeconds;
    }
    const bool keep_assets = common::equalsIgnoringAsciiCase(current_save_file_, filename);
    if (!keep_assets) {
        current_save_file_ = filename;
    }
    owners.loading_screen.show(kLoadingFrames, false, picture);
    owners.mission.load(filename, keep_assets);
    if (!owners.mission.createHeros(nullptr)) {
        return;
    }
    // The original ran the mission whether or not it started.
    static_cast<void>(owners.mission.startMission());
    owners.mission.run(*this, owners.session);
}

const std::string &CGame::getCurrentSaveFile() const {
    return current_save_file_;
}

const engine::CDosIo &CGame::getDosIo() const {
    return owners_.dosio;
}

} // namespace nocturne::core

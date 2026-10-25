// =============================================================================
// CHAPTER SELECT — the story to play, and the name of the place a mission is in
// =============================================================================

#include "../gl/ini_support.h"
#include "game/chapter_select.h"
#include "menus_support.h"
#include "nocturne_test.h"

#include <filesystem>
#include <string>
#include <system_error>

using namespace menus_support;

namespace {

void in_a_game_directory() {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_chapter_select_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::values.clear();
}

std::string place(const char *mission_name) {
    const char *name = nocturne_chapter_environment_name(mission_name);
    return name != nullptr ? name : "(none)";
}

} // namespace

// The volumes are listed in order, a volume whose first chapter is not
// installed greyed out, and the Epilogue left off until all four acts are
// done. Picking one plays its first chapter, in the menu's own font.
NOCTURNE_TEST(a_volume_picked_plays_its_first_chapter) {
    in_a_game_directory();
    stand.reset();
    stand.missions = {"hq-act1.msn", "train.msn", "hq-act3.msn"};
    stand.choices.push_back(1);
    char out[64] = "";
    CHECK_EQ(nocturne_chapter_pick_mission(out, sizeof(out)), 1);
    CHECK_EQ(std::string(out), std::string("train.msn"));
    CHECK_EQ(stand.rows.size(), (size_t)4);
    CHECK(stand.disabled == std::set<int>({3}));
    CHECK_EQ(stand.title, std::string("Choose a story to play"));
    CHECK(g_EditorFont == nullptr);

    // Too small a buffer takes what fits.
    char small[4];
    stand.choices.push_back(0);
    CHECK_EQ(nocturne_chapter_pick_mission(small, sizeof(small)), 1);
    CHECK_EQ(std::string(small), std::string("hq-"));
}

// Escape, or a volume that is not installed, plays nothing; with nothing
// installed the list is not even shown.
NOCTURNE_TEST(nothing_playable_plays_nothing) {
    in_a_game_directory();
    stand.reset();
    stand.missions = {"hq-act1.msn"};
    char out[64] = "";
    CHECK_EQ(nocturne_chapter_pick_mission(out, sizeof(out)), 0);
    stand.choices.push_back(3);
    CHECK_EQ(nocturne_chapter_pick_mission(out, sizeof(out)), 0);
    stand.missions.clear();
    const int shown = stand.lists_shown;
    CHECK_EQ(nocturne_chapter_pick_mission(out, sizeof(out)), 0);
    CHECK_EQ(stand.lists_shown, shown);
    CHECK_EQ(nocturne_chapter_pick_mission(nullptr, 64), 0);
    CHECK_EQ(nocturne_chapter_pick_mission(out, 0), 0);
}

// All four acts finished, as the game records them, unlocks the Epilogue; any
// one short does not.
NOCTURNE_TEST(the_epilogue_opens_once_every_act_is_done) {
    in_a_game_directory();
    stand.reset();
    stand.missions = {"hq-act5.msn"};
    const char *codes[] = {"817", "972", "940", "214"};
    const char *keys[] = {"Act1Code", "Act2Code", "Act3Code", "Act4Code"};
    for (int i = 0; i < 3; i++)
        ini_support::save("Game", keys[i], codes[i]);
    char out[64] = "";
    nocturne_chapter_pick_mission(out, sizeof(out));
    CHECK_EQ(stand.rows.size(), (size_t)4);
    ini_support::save("Game", keys[3], codes[3]);
    stand.choices.push_back(4);
    CHECK_EQ(nocturne_chapter_pick_mission(out, sizeof(out)), 1);
    CHECK_EQ(stand.rows.size(), (size_t)5);
    CHECK_EQ(std::string(out), std::string("hq-act5.msn"));
}

// A mission is named by the place it is set in, whatever the spelling of its
// name; an editor mission, or no name, has none.
NOCTURNE_TEST(a_mission_is_named_by_its_place) {
    stand.reset();
    CHECK_EQ(place("castle1"), std::string("Castle Gaustadt"));
    CHECK_EQ(place("world\\CASTLE1.MSN"), std::string("Castle Gaustadt"));
    CHECK_EQ(place("CHICAGO2"), std::string("Night on the Town"));
    CHECK_EQ(place("hq-act5"), std::string("Headquarters"));
    CHECK_EQ(place("editor1"), std::string("(none)"));
    CHECK_EQ(place(""), std::string("(none)"));
    CHECK_EQ(place(std::string(80, 'x').c_str()), std::string("(none)"));
}

// A translation without both quotes is used whole, and one too long is cut.
NOCTURNE_TEST(a_translation_is_used_as_it_comes) {
    stand.reset();
    stand.localized["Chapter 4 - 'Castle Gaustadt'"] = "Chapitre 4 : Le château";
    CHECK_EQ(place("castle1"), std::string("Chapitre 4 : Le château"));
    stand.localized["Chapter 4 - 'Castle Gaustadt'"] = "Chapter 4 - 'Castle";
    CHECK_EQ(place("castle1"), std::string("Chapter 4 - 'Castle"));
    stand.localized["Chapter 4 - 'Castle Gaustadt'"] = std::string(100, 'c');
    CHECK_EQ(place("castle1"), std::string(63, 'c'));
}

NOCTURNE_TEST_MAIN()

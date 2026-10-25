// =============================================================================
// SAVE SLOTS — numbered saves, the autosave, and the single-player submenu
// =============================================================================
//
// The finder lists what menus_support names; the saves it reads are real
// files under save\ in a directory of the test's own.

#include "game/save_slots.h"
#include "menus_support.h"
#include "nocturne_test.h"

#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>
#include <vector>

using namespace menus_support;

namespace {

namespace fs = std::filesystem;

const char *kMarker = "// Root name of mission\n";

void in_a_game_directory() {
    std::error_code ec;
    const fs::path dir = fs::temp_directory_path(ec) / "nocturne_save_slots_test";
    fs::remove_all(dir, ec);
    fs::create_directories(dir / "save", ec);
    fs::current_path(dir, ec);
}

// A save of `text`, listed with `stamp`; `compressed` puts the magic in front,
// which the stand-in decoder reads through.
void write_save(const std::string &name, const std::string &text, uint stamp,
                const char *magic = nullptr) {
    std::string bytes = (magic != nullptr) ? std::string(magic, 4) + text : text;
    std::ofstream(fs::path("save") / name, std::ios::binary) << bytes;
    stand.saves.push_back({name, (uint)bytes.size(), stamp});
}

std::string in_mission(const char *root) {
    return std::string("// .NOC file version\n9\n") + kMarker + root + "\r\nmore\n";
}

// The second tab-separated field of a row.
std::string column(const std::string &row, int n) {
    std::string::size_type start = 0;
    for (int i = 0; i < n; i++)
        start = row.find('\t', start) + 1;
    return row.substr(start, row.find('\t', start) - start);
}

} // namespace

// The load list is the autosave first, then the newest save first; each row
// names the slot, the place and the time.
NOCTURNE_TEST(the_load_list_is_autosave_then_newest) {
    in_a_game_directory();
    stand.reset();
    write_save("SLOT01.NOC", in_mission("castle1"), 100, "EFD\0");
    write_save("slot02.noc", in_mission("EDITOR1"), 300);
    write_save("AUTO.NOC", in_mission("CHICAGO2"), 50, "LZW!");
    write_save("MYSAVE.NOC", "", 200);
    std::snprintf(g_CurrentSaveFile, sizeof(g_CurrentSaveFile), "SLOT01.NOC");
    stand.choices.push_back(2);
    char out[64] = "";
    CHECK_EQ(nocturne_load_pick_slot(out, sizeof(out)), 1);
    CHECK_EQ(std::string(out), std::string("MYSAVE.NOC"));
    CHECK_EQ(stand.title, std::string("Select file to load"));
    CHECK_EQ(stand.initial, 3);
    CHECK_EQ(stand.rows.size(), (size_t)4);
    if (stand.rows.size() == 4) {
        CHECK_EQ(column(stand.rows[0], 0), std::string("Autosave"));
        CHECK_EQ(column(stand.rows[0], 1), std::string("Night on the Town"));
        CHECK_EQ(column(stand.rows[1], 0), std::string("Slot 2"));
        CHECK_EQ(column(stand.rows[1], 1), std::string("EDITOR1"));
        CHECK_EQ(column(stand.rows[2], 0), std::string("MYSAVE.NOC"));
        CHECK_EQ(column(stand.rows[2], 1), std::string(""));
        CHECK_EQ(column(stand.rows[3], 1), std::string("Castle Gaustadt"));
        CHECK_EQ(column(stand.rows[3], 2).size(), (size_t)17); // "mm/dd/yy hh:mm AM"
    }

    // Escape loads nothing; an empty directory says so.
    CHECK_EQ(nocturne_load_pick_slot(out, sizeof(out)), 0);
    stand.saves.clear();
    CHECK_EQ(nocturne_load_pick_slot(out, sizeof(out)), 0);
    CHECK_EQ(stand.errors.size(), (size_t)1);
}

// Only SLOTnn.NOC from 01 to 99, and AUTO.NOC, are slots; any other name is a
// save listed by its own name.
NOCTURNE_TEST(only_slotnn_names_are_slots) {
    in_a_game_directory();
    stand.reset();
    for (const char *name : {"SLOT00.NOC", "SLOTA1.NOC", "SLOT1A.NOC", "SLOT 1.NOC", "SLOT1 .NOC",
                             "SLOT01.BAK", "SAVE01.NOC"}) {
        write_save(name, "", 1);
    }
    stand.choices.push_back(0);
    char out[64] = "";
    nocturne_save_pick_slot(out, sizeof(out));
    CHECK_EQ(std::string(out), std::string("SLOT01.NOC"));
    for (size_t i = 1; i < stand.rows.size(); i++) {
        CHECK(column(stand.rows[i], 0).rfind("Slot ", 0) != 0);
    }
}

// A save's place is read from just its head, compressed or not, and remembered
// for as long as its size and time are the same; one that cannot be read, or
// has no mission line, has no place.
NOCTURNE_TEST(a_saves_place_is_read_once) {
    in_a_game_directory();
    stand.reset();
    write_save("SLOT01.NOC", in_mission("castle1"), 10);
    write_save("SLOT02.NOC", std::string(5000, '#') + kMarker + "castle1\n", 20, "EFD\0");
    write_save("SLOT03.NOC", "xyz", 30);
    write_save("SLOT04.NOC", std::string("text, but no marker\n"), 40);
    write_save("SLOT05.NOC", std::string("ends at the marker // Root name of mission"), 50);
    write_save("SLOT06.NOC", std::string(kMarker) + "castle1", 60);
    stand.saves.push_back({"SLOT07.NOC", 10, 70}); // listed, not on disk
    write_save("SLOT08.NOC", std::string(kMarker) + "\r\n", 1);
    nocturne_save_slots_prewarm();
    stand.choices.push_back(-1);
    char out[64] = "";
    nocturne_load_pick_slot(out, sizeof(out));
    // Newest first, SLOT07 down to SLOT01 and then SLOT08: only SLOT06's line
    // and SLOT01's are there to read; SLOT08's is blank.
    const std::vector<std::string> places = {"", "Castle Gaustadt", "", "", "",
                                             "", "Castle Gaustadt", ""};
    CHECK_EQ(stand.rows.size(), places.size());
    for (size_t i = 0; i < stand.rows.size() && i < places.size(); i++) {
        CHECK_EQ_AT(column(stand.rows[i], 1), places[i], stand.rows[i].c_str());
    }

    // Rewritten in place at the same size and time, it is not read again; at a
    // new time, it is.
    std::ofstream(fs::path("save") / "SLOT01.NOC", std::ios::binary) << in_mission("grave00");
    nocturne_load_pick_slot(out, sizeof(out));
    CHECK_EQ(column(stand.rows[6], 1), std::string("Castle Gaustadt"));
    stand.saves[0].timestamp = 11;
    nocturne_load_pick_slot(out, sizeof(out));
    CHECK_EQ(column(stand.rows[6], 1), std::string("grave00"));
}

// The list holds a hundred and twenty-eight; so does the memory of what was
// read, and a name past that is read each time.
NOCTURNE_TEST(the_list_and_its_memory_are_capped) {
    in_a_game_directory();
    stand.reset();
    for (int i = 0; i < 130; i++) {
        stand.saves.push_back({"OLD" + std::to_string(i) + ".NOC", 1, (uint)i});
    }
    char out[64] = "";
    nocturne_load_pick_slot(out, sizeof(out));
    CHECK_EQ(stand.rows.size(), (size_t)128);
    stand.saves.clear();
    for (int i = 0; i < 4; i++) {
        stand.saves.push_back({"NEW" + std::to_string(i) + ".NOC", 1, (uint)i});
    }
    nocturne_load_pick_slot(out, sizeof(out));
    CHECK_EQ(stand.rows.size(), (size_t)4);
}

// NEW SAVE takes the lowest free number; an existing slot is written over only
// once the player agrees, and the autosave's row is not his to choose.
NOCTURNE_TEST(a_save_takes_the_lowest_free_slot_or_one_agreed_to) {
    in_a_game_directory();
    stand.reset();
    write_save("SLOT01.NOC", in_mission("castle1"), 10);
    write_save("SLOT03.NOC", in_mission("castle1"), 30);
    write_save("AUTO.NOC", in_mission("castle1"), 40);
    char out[64] = "";
    stand.choices.push_back(0);
    CHECK_EQ(nocturne_save_pick_slot(out, sizeof(out)), 1);
    CHECK_EQ(std::string(out), std::string("SLOT02.NOC"));
    CHECK_EQ(stand.rows[0], std::string("* NEW SAVE *"));
    CHECK(stand.disabled == std::set<int>({1}));

    stand.choices.push_back(2); // SLOT03, the newest after the autosave
    CHECK_EQ(nocturne_save_pick_slot(out, sizeof(out)), 1);
    CHECK_EQ(std::string(out), std::string("SLOT03.NOC"));
    stand.confirm = 0;
    stand.choices.push_back(2);
    CHECK_EQ(nocturne_save_pick_slot(out, sizeof(out)), 0);
    stand.choices.push_back(1);
    CHECK_EQ(nocturne_save_pick_slot(out, sizeof(out)), 0);
    CHECK_EQ(nocturne_save_pick_slot(out, sizeof(out)), 0);
}

// With every number taken, NEW SAVE is shown but refused.
NOCTURNE_TEST(with_every_slot_taken_new_save_is_refused) {
    in_a_game_directory();
    stand.reset();
    for (int i = 1; i <= 99; i++) {
        char name[16];
        std::snprintf(name, sizeof(name), "SLOT%02d.NOC", i);
        stand.saves.push_back({name, 1, (uint)i});
    }
    stand.choices.push_back(0);
    char out[64] = "";
    CHECK_EQ(nocturne_save_pick_slot(out, sizeof(out)), 0);
    CHECK(stand.disabled.count(0) == 1);
}

// Continue is the newest save, whatever its name; with none there is nothing
// to continue.
NOCTURNE_TEST(continue_is_the_newest_save) {
    stand.reset();
    char out[64] = "";
    CHECK_EQ(nocturne_save_continue_target(out, sizeof(out)), 0);
    stand.saves = {{"SLOT01.NOC", 1, 50}, {"MINE.NOC", 1, 90}, {"AUTO.NOC", 1, 70}};
    CHECK_EQ(nocturne_save_continue_target(out, sizeof(out)), 1);
    CHECK_EQ(std::string(out), std::string("MINE.NOC"));
}

// The submenu is Continue, Start and Load; it waits until one is picked or the
// menu is backed out of.
NOCTURNE_TEST(the_submenu_answers_what_was_picked) {
    stand.reset();
    const int answers[] = {NOCTURNE_SP_MENU_CONTINUE, NOCTURNE_SP_MENU_START,
                           NOCTURNE_SP_MENU_LOAD};
    for (int i = 0; i < 3; i++) {
        stand.menu_choices = {-1, i};
        CHECK_EQ(nocturne_single_player_menu(), answers[i]);
    }
    CHECK_EQ(stand.menu_counts.back(), 3);
    stand.cancelled = 1;
    CHECK_EQ(nocturne_single_player_menu(), NOCTURNE_SP_MENU_CANCEL);
}

// The autosave writes on entering a mission by play, not by loading, and on
// leaving each cutscene; never during one, and not in a network game.
NOCTURNE_TEST(the_autosave_follows_missions_and_cutscenes) {
    stand.reset();
    nocturne_autosave_session_start();
    run_mission("castle1");
    nocturne_autosave_poll(game);
    CHECK(stand.saved == std::vector<std::string>({"AUTO.NOC"}));
    CHECK(stand.messages == std::vector<std::string>({"Autosaved"}));

    // Same mission, nothing new.
    nocturne_autosave_poll(game);
    CHECK_EQ(stand.saved.size(), (size_t)1);
    // A cutscene, then out of it.
    game->letterbox_mode = 1;
    nocturne_autosave_poll(game);
    nocturne_autosave_poll(game);
    CHECK_EQ(stand.saved.size(), (size_t)1);
    game->letterbox_mode = 0;
    nocturne_autosave_poll(game);
    CHECK_EQ(stand.saved.size(), (size_t)2);

    // A mission reached by loading is not written over.
    game->is_loading = 1;
    run_mission("grave");
    nocturne_autosave_poll(game);
    CHECK_EQ(stand.saved.size(), (size_t)2);
    game->is_loading = 0;

    // One that opens in a cutscene saves once it ends.
    run_mission("mansion");
    game->letterbox_mode = 1;
    nocturne_autosave_poll(game);
    CHECK_EQ(stand.saved.size(), (size_t)2);
    game->letterbox_mode = 0;
    nocturne_autosave_poll(game);
    CHECK_EQ(stand.saved.size(), (size_t)3);

    // Netplay forgets where it was, so the first mission after is new again.
    stand.net_active = 1;
    nocturne_autosave_poll(game);
    stand.net_active = 0;
    nocturne_autosave_poll(game);
    CHECK_EQ(stand.saved.size(), (size_t)4);

    // No game, no mission, no party: nothing.
    nocturne_autosave_session_start();
    nocturne_autosave_poll(nullptr);
    g_HeroCount = 0;
    nocturne_autosave_poll(game);
    g_HeroCount = 1;
    g_CDemonMissionPtr = nullptr;
    nocturne_autosave_poll(game);
    CHECK_EQ(stand.saved.size(), (size_t)4);
}

NOCTURNE_TEST_MAIN()

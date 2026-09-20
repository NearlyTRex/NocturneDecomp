// =============================================================================
// SAVE SLOTS — implementation
// =============================================================================
//
// See save_slots.h for what a slot is, why the row text is read out of the save
// rather than an index file, and what holding CTRL still reaches.

#include "game/save_slots.h"
#include "game/chapter_select.h"
#include "shim_config.h"

#include "nocturne.h"
#include "watcom/stream_compat.h"

#include <cstdio>
#include <cstring>
#include <ctime>
#include <sstream>
#include <string>

#if !NOCTURNE_AUTHENTIC_SAVE_SLOTS || !NOCTURNE_AUTHENTIC_AUTOSAVE

namespace {

// The autosave's own file. Not a SLOTnn: the pick list has to be able to tell
// it apart to keep a manual save out of it. Shared, because the slot list has
// to recognise the name the autosave writes.
const char *const k_auto_name = "AUTO.NOC";

} // namespace

#endif

#if !NOCTURNE_AUTHENTIC_SAVE_SLOTS

namespace {

// Highest SLOTnn the two-digit name can hold. The list grows to whatever is
// there, so this is the ceiling on NEW SAVE rather than a slot count.
#define SAVE_SLOT_MAX 99

// A directory listing is capped because the whole model is the directory, and
// a save\ full of unrelated .noc files should degrade into a long list rather
// than into unbounded work at menu-open.
#define SAVE_LIST_MAX 128

struct SlotInfo {
    char filename[64];  // "SLOT03.NOC", as save\ spells it
    int  slot;          // 1..99, 0 for AUTO, -1 for a save this build did not name
    char mission[64];   // mission root name out of the save, "" when unreadable
    uint timestamp;     // CFileFinder's, the same field the shipped list dated rows with
    uint size;
};

SlotInfo s_slots[SAVE_LIST_MAX];
int      s_slot_count = 0;

// ---------------------------------------------------------------------------
// Metadata cache
// ---------------------------------------------------------------------------
//
// Decompressing every save on every menu open would be paid per open; saves
// here reach 1.2 MB. Size and timestamp together are the identity, so a file
// rewritten between two opens is read again and a file merely re-listed is not.

struct CacheEntry {
    char filename[64];
    uint timestamp;
    uint size;
    char mission[64];
};

CacheEntry s_cache[SAVE_LIST_MAX];
int        s_cache_count = 0;

const CacheEntry *cache_find(const char *filename, uint timestamp, uint size)
{
    int i;

    for (i = 0; i < s_cache_count; i++) {
        if ((s_cache[i].timestamp == timestamp) && (s_cache[i].size == size) &&
            (_stricmp(s_cache[i].filename, (char *)filename) == 0)) {
            return &s_cache[i];
        }
    }
    return (const CacheEntry *)0;
}

void cache_store(const char *filename, uint timestamp, uint size,
                 const char *mission)
{
    CacheEntry *entry;
    int         i;

    entry = (CacheEntry *)0;
    for (i = 0; i < s_cache_count; i++) {
        if (_stricmp(s_cache[i].filename, (char *)filename) == 0) {
            entry = &s_cache[i];
            break;
        }
    }
    if (entry == (CacheEntry *)0) {
        if (s_cache_count >= SAVE_LIST_MAX) {
            return;
        }
        entry = &s_cache[s_cache_count];
        s_cache_count = s_cache_count + 1;
    }
    snprintf(entry->filename, sizeof(entry->filename), "%s", filename);
    snprintf(entry->mission, sizeof(entry->mission), "%s", mission);
    entry->timestamp = timestamp;
    entry->size      = size;
}

// ---------------------------------------------------------------------------
// Reading a save
// ---------------------------------------------------------------------------

// How much of a save is read. The only thing wanted out of it is the mission
// root name, which CDemonMission::writeFile prints about seventy bytes in,
// behind two comments and a version line — so the read stops well before the
// actor list that makes up the rest of the file.
//
// The cap is on the COMPRESSED input, which is what
// CLZWDictionary::readCodeFromStream counts down: at `*bytes_remaining < 1` it
// returns -1 and CLZWDecompress::process ends its loop, so a short budget is an
// ordinary end of stream rather than a failure. Saves here reach 1.2 MB and
// decompress to several times that, so reading the whole of every one to date a
// list would be most of a second per open for two lines of text.
#define SAVE_HEAD_BYTES 4096

// The head of the save's text, decompressed if it needs it. Empty on any
// failure — an unreadable save still gets a row, it just gets the filename for
// a label.
//
// The magic test is CGame::loadGame's: "EFD" over four bytes is the compressed
// form CGame::saveGame writes at NOCTURNE_AUTHENTIC_SAVE=1, "LZW" over three is
// the older one it still loads, and anything else is the plain text
// NOCTURNE_AUTHENTIC_SAVE=0 writes directly.
std::string read_save_text(const char *filename, uint size)
{
    std::ifstream  ifs;
    char           path[512];
    char           magic[4];
    CLZWDecompress decoder;
    int            remaining;

    snprintf(path, sizeof(path), "%s\\%s", "save", filename);
    watcom_stream_open(ifs, path, std::ios::in | std::ios::binary);
    if (ifs.fail()) {
        return std::string();
    }

    magic[0] = '\0';
    magic[1] = '\0';
    magic[2] = '\0';
    magic[3] = '\0';
    ifs.read(magic, 4);
    if (ifs.gcount() < 4) {
        return std::string();
    }

    if ((memcmp(magic, "EFD", 4) != 0) && (memcmp(magic, "LZW", 3) != 0)) {
        std::string plain;

        ifs.clear();
        ifs.seekg(0);
        plain.resize(SAVE_HEAD_BYTES);
        ifs.read(&plain[0], SAVE_HEAD_BYTES);
        plain.resize((size_t)ifs.gcount());
        return plain;
    }

    {
        std::ostringstream out;

        ifs.clear();
        ifs.seekg(4);
        remaining = (int)size - 4;
        if (SAVE_HEAD_BYTES < remaining) {
            remaining = SAVE_HEAD_BYTES;
        }

        support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490(&decoder, 0x8000, 8);
        support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0(&decoder);
        support_codec_cpp_CLZWDecompress_process_FUN_0043f510(
            &decoder, watcom_istream_from(ifs), &remaining, watcom_ostream_from(out));
        support_codec_cpp_CLZWDecompress_finalize_FUN_0043f590(&decoder,
                                                               watcom_ostream_from(out));
        support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&decoder.lzw_dict, 0);
        support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&decoder.base, 1);

        return out.str();
    }
}

// The line following `marker`, trimmed of its line ending.
std::string line_after(const std::string &text, const char *marker)
{
    std::string::size_type at;
    std::string::size_type start;
    std::string::size_type end;

    at = text.find(marker);
    if (at == std::string::npos) {
        return std::string();
    }
    // From the end of the marker: one of them opens with the newline that ends
    // the line before it, and searching from `at` would find that one again.
    start = text.find('\n', at + strlen(marker));
    if (start == std::string::npos) {
        return std::string();
    }
    start = start + 1;
    end   = text.find('\n', start);
    if (end == std::string::npos) {
        end = text.size();
    }
    while ((end > start) && ((text[end - 1] == '\r') || (text[end - 1] == '\n'))) {
        end = end - 1;
    }
    return text.substr(start, end - start);
}

// Fills in the mission the save is in. The marker is the comment
// CDemonMission::writeFile prints above the mission's root name.
void read_metadata(SlotInfo *slot)
{
    const CacheEntry *cached;
    std::string       text;
    std::string       line;

    slot->mission[0] = '\0';

    cached = cache_find(slot->filename, slot->timestamp, slot->size);
    if (cached != (const CacheEntry *)0) {
        snprintf(slot->mission, sizeof(slot->mission), "%s", cached->mission);
        return;
    }

    text = read_save_text(slot->filename, slot->size);
    if (!text.empty()) {
        line = line_after(text, "// Root name of mission");
        snprintf(slot->mission, sizeof(slot->mission), "%s", line.c_str());
    }
    cache_store(slot->filename, slot->timestamp, slot->size, slot->mission);
}

// ---------------------------------------------------------------------------
// Listing save\
// ---------------------------------------------------------------------------

// The SLOTnn number a filename carries, 0 for the autosave, -1 for anything
// else. Case-insensitive, because save\ is matched case-insensitively
// everywhere else in the engine.
int slot_number_of(const char *filename)
{
    int number;

    if (_stricmp((char *)filename, (char *)k_auto_name) == 0) {
        return 0;
    }
    if (_strnicmp((char *)filename, (char *)"SLOT", 4) != 0) {
        return -1;
    }
    if ((filename[4] < '0') || ('9' < filename[4]) || (filename[5] < '0') ||
        ('9' < filename[5])) {
        return -1;
    }
    if (_stricmp((char *)(filename + 6), (char *)".NOC") != 0) {
        return -1;
    }
    number = ((filename[4] - '0') * 10) + (filename[5] - '0');
    if (number < 1) {
        return -1;
    }
    return number;
}

// Newest first, with the autosave held at the top. The autosave is the row the
// player is most often after and the one that moves under them, so it reads
// better in a fixed place than sliding through the list as it is rewritten.
void sort_slots(void)
{
    SlotInfo tmp;
    int      i;
    int      j;

    for (i = 1; i < s_slot_count; i++) {
        for (j = i; j > 0; j--) {
            int  prev_auto = (s_slots[j - 1].slot == 0);
            int  this_auto = (s_slots[j].slot == 0);
            bool swap;

            if (prev_auto != this_auto) {
                swap = (this_auto != 0);
            }
            else {
                swap = (s_slots[j - 1].timestamp < s_slots[j].timestamp);
            }
            if (!swap) {
                break;
            }
            tmp            = s_slots[j - 1];
            s_slots[j - 1] = s_slots[j];
            s_slots[j]     = tmp;
        }
    }
}

// Rebuilds s_slots from save\*.noc. Returns the count.
//
// `read_rows` also opens each save for its mission name. Whatever that costs is
// normally paid at startup instead — see nocturne_save_slots_prewarm — and a
// save the cache already holds at the size and timestamp it was listed with is
// not opened again, so a list built after the prewarm reads only what has been
// written since.
int refresh(int read_rows)
{
    CFileFinder finder;
    int         i;

    s_slot_count = 0;

    engine_dosio_cpp_CFileFinder_ctor_FUN_00481c30(&finder);
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00481c70(&finder, (char *)"save\\*.noc");
    while ((finder.filename[0] != '\0') && (s_slot_count < SAVE_LIST_MAX)) {
        SlotInfo *slot = &s_slots[s_slot_count];

        snprintf(slot->filename, sizeof(slot->filename), "%s", finder.filename);
        slot->slot      = slot_number_of(slot->filename);
        slot->timestamp = finder.timestamp;
        slot->size      = finder.file_size;
        slot->mission[0] = '\0';
        s_slot_count     = s_slot_count + 1;

        engine_dosio_cpp_CFileFinder_findNext_FUN_00481cf0(&finder);
    }
    engine_dosio_cpp_CFileFinder_closeSearch_FUN_00481d70(&finder);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00481c50(&finder, 0);

    if (read_rows != 0) {
        for (i = 0; i < s_slot_count; i++) {
            read_metadata(&s_slots[i]);
        }
    }

    sort_slots();
    return s_slot_count;
}

// ---------------------------------------------------------------------------
// Row text
// ---------------------------------------------------------------------------

// Tab-separated, because CPickList::renderDialog splits a row on tabs and lays
// the pieces out in columns of its own measuring — see tab_column_widths.
void build_row(const SlotInfo *slot, char *out, int out_size)
{
    char        label[64];
    char        when[32];
    const char *place;
    char       *environment;
    time_t      stamp;
    _tm        *broken_down;

    if (slot->slot == 0) {
        snprintf(label, sizeof(label), "%s",
                 support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Autosave"));
    }
    else if (slot->slot > 0) {
        // The word, not the bare number: the first column is drawn in the
        // theme font, where a lone "1" reads as a letter.
        snprintf(label, sizeof(label), "%s %d",
                 support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Slot"),
                 slot->slot);
    }
    else {
        // A save the shipped typed-filename dialog named. Its own name is the
        // only label it has.
        snprintf(label, sizeof(label), "%s", slot->filename);
    }

    // The place, not the chapter: a chapter number is a position in the story,
    // and two chapters share a set. nocturne_chapter_environment_name reads the
    // same g_ChapterMissionFiles the mission list is built from, so it and the
    // chapter picker cannot disagree.
    environment = nocturne_chapter_environment_name(slot->mission);
    if (environment != (char *)0x0) {
        place = environment;
    }
    else if (slot->mission[0] != '\0') {
        place = slot->mission;
    }
    else {
        place = "";
    }

    stamp       = (time_t)slot->timestamp;
    broken_down = _localtime(&stamp);
    when[0]     = '\0';
    if (broken_down != (_tm *)0x0) {
        _strftime(when, sizeof(when), (char *)"%m/%d/%y %I:%M %p", broken_down);
    }

    snprintf(out, (size_t)out_size, "%s\t%s\t%s", label, place, when);
}

// The lowest SLOTnn with no file, or 0 when every one of them is taken.
int next_free_slot(void)
{
    int number;
    int i;

    for (number = 1; number <= SAVE_SLOT_MAX; number++) {
        bool taken = false;

        for (i = 0; i < s_slot_count; i++) {
            if (s_slots[i].slot == number) {
                taken = true;
                break;
            }
        }
        if (!taken) {
            return number;
        }
    }
    return 0;
}

} // namespace

#endif // !NOCTURNE_AUTHENTIC_SAVE_SLOTS

// ---------------------------------------------------------------------------
// Picking a slot
// ---------------------------------------------------------------------------

#if !NOCTURNE_AUTHENTIC_SAVE_SLOTS

extern "C" void nocturne_save_slots_prewarm(void)
{
    refresh(1);
}

extern "C" int nocturne_save_pick_slot(char *out, int out_size)
{
    CPickList list;
    char      row[256];
    char     *title;
    int       free_slot;
    int       choice;
    int       i;

    refresh(1);
    free_slot = next_free_slot();

    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&list);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(
        &list.base,
        support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"* NEW SAVE *"));
    for (i = 0; i < s_slot_count; i++) {
        build_row(&s_slots[i], row, (int)sizeof(row));
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&list.base, row);
    }

    // NEW SAVE with every number taken, and the autosave's own row, are both
    // shown and both refused — a row that vanishes is harder to understand than
    // one that will not take the selection.
    if (free_slot == 0) {
        shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&list, 0, 0);
    }
    for (i = 0; i < s_slot_count; i++) {
        if (s_slots[i].slot == 0) {
            shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&list, i + 1, 0);
        }
    }

    title  = support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Save game");
    choice = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(
        &list, title, 0, 0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&list, 0);

    // Negative is Escape. displayChoicesAndWaitForInput returns the index.
    if (choice < 0) {
        return 0;
    }
    if (choice == 0) {
        if (free_slot == 0) {
            return 0;
        }
        snprintf(out, (size_t)out_size, "SLOT%02d.NOC", free_slot);
        return 1;
    }

    i = choice - 1;
    if ((i < 0) || (s_slot_count <= i) || (s_slots[i].slot == 0)) {
        return 0;
    }
    if (shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060(
            g_CEditorToolsPtr, (char *)"%s",
            support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Overwrite save")) ==
        0) {
        return 0;
    }
    snprintf(out, (size_t)out_size, "%s", s_slots[i].filename);
    return 1;
}

extern "C" int nocturne_load_pick_slot(char *out, int out_size)
{
    CPickList list;
    char      row[256];
    char     *title;
    int       choice;
    int       initial;
    int       i;

    if (refresh(1) < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(
            g_CEditorToolsPtr, (char *)"%s",
            support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"No files found"));
        return 0;
    }

    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&list);
    initial = -1;
    for (i = 0; i < s_slot_count; i++) {
        build_row(&s_slots[i], row, (int)sizeof(row));
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&list.base, row);
        // The shipped file browser opened on the save already in play, which is
        // what its `flags & 1` did; keep that.
        if (_stricmp(g_CurrentSaveFile, s_slots[i].filename) == 0) {
            initial = i;
        }
    }

    title  = support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Select file to load");
    choice = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(
        &list, title, initial, 0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&list, 0);

    if ((choice < 0) || (s_slot_count <= choice)) {
        return 0;
    }
    snprintf(out, (size_t)out_size, "%s", s_slots[choice].filename);
    return 1;
}

#else

extern "C" void nocturne_save_slots_prewarm(void) { }
extern "C" int  nocturne_save_pick_slot(char *, int) { return 0; }
extern "C" int  nocturne_load_pick_slot(char *, int) { return 0; }

#endif // !NOCTURNE_AUTHENTIC_SAVE_SLOTS

// ---------------------------------------------------------------------------
// The single-player submenu
// ---------------------------------------------------------------------------

#if !NOCTURNE_AUTHENTIC_SINGLE_PLAYER_MENU

// Continue, Start, Load — the most the submenu ever lists.
#define SP_MENU_MAX_ITEMS 3

// The main menu's own start-y, so the submenu's lines land where the ones it
// replaced on screen were.
#define SP_MENU_START_Y 0xfa

extern "C" int nocturne_single_player_menu(void)
{
    char  continue_line[256];
    char  start_line[256];
    char  load_line[256];
    char *menu_ptrs[SP_MENU_MAX_ITEMS];
    int   continue_item;
    int   start_item;
    int   load_item;
    int   selected = 0;
    int   menu_count;
    int   choice;
    int   menu_ch;
    int   menu_y;

    // The caller reached here on a RETURN that renderMenuAndGetChoice has
    // already consumed, but the key can still be down; without this the
    // submenu would see it and pick its first item on the same press.
    engine_2d_c_clearInputAndWait_FUN_00403260();

    for (;;) {
        core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
        core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,
                                                g_CGamePtr->delta_time_float);
        core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);

        // Rebuilt every frame, as the main menu rebuilds its own: the strings
        // are localized and the language can change under the options screen.
        // Each row keeps its own index, so Continue's absence shifts nothing.
        menu_count    = 0;
        continue_item = -1;
        strcpy(continue_line,
               support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"C O N T I N U E"));
        strcpy(start_line,
               support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"S T A R T"));
        strcpy(load_line,
               support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"L O A D"));
#if !NOCTURNE_AUTHENTIC_AUTOSAVE
        continue_item          = menu_count;
        menu_ptrs[menu_count]  = continue_line;
        menu_count             = menu_count + 1;
#endif
        start_item             = menu_count;
        menu_ptrs[menu_count]  = start_line;
        menu_count             = menu_count + 1;
        load_item              = menu_count;
        menu_ptrs[menu_count]  = load_line;
        menu_count             = menu_count + 1;

        // An untitled menu double-spaces its lines (see renderMenuAndGetChoice),
        // so each entry occupies two character heights. Lift the start where a
        // short window would otherwise push the last line under the copyright.
        menu_ch = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont, 0x58);
        menu_y  = SP_MENU_START_Y;
        if (g_WindowHeight < menu_y + (menu_count * 2 + 1) * menu_ch) {
            menu_y = g_WindowHeight - (menu_count * 2 + 1) * menu_ch;
        }
        if (menu_y < 0) {
            menu_y = 0;
        }

        choice = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(
                     menu_ptrs, menu_count, &selected, menu_y, (char *)0x0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();

        if (choice >= 0) {
            if (choice == continue_item) {
                return NOCTURNE_SP_MENU_CONTINUE;
            }
            if (choice == start_item) {
                return NOCTURNE_SP_MENU_START;
            }
            if (choice == load_item) {
                return NOCTURNE_SP_MENU_LOAD;
            }
            return NOCTURNE_SP_MENU_CANCEL;
        }
        if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_ESCAPE) != 0) {
            return NOCTURNE_SP_MENU_CANCEL;
        }
        // Set when the window is closed. The main menu treats it as a quit, so
        // this must not sit here spinning through a shutdown.
        if (g_InputDisabled != 0) {
            return NOCTURNE_SP_MENU_CANCEL;
        }
    }
}

// The newest save in save\, which is what Continue resumes.
//
// Its own directory walk rather than the slot listing's: this answers a
// question about filenames and timestamps, and tying it to the slot machinery
// would make where the main menu puts Load depend on what the picker looks
// like. The two flags are independent, so the code behind them is too.
extern "C" int nocturne_save_continue_target(char *out, int out_size)
{
    CFileFinder finder;
    char        newest_name[64];
    uint        newest_stamp;
    int         found;

    found           = 0;
    newest_stamp    = 0;
    newest_name[0]  = '\0';

    engine_dosio_cpp_CFileFinder_ctor_FUN_00481c30(&finder);
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00481c70(&finder, (char *)"save\\*.noc");
    while (finder.filename[0] != '\0') {
        if ((found == 0) || (newest_stamp < finder.timestamp)) {
            snprintf(newest_name, sizeof(newest_name), "%s", finder.filename);
            newest_stamp = finder.timestamp;
            found        = 1;
        }
        engine_dosio_cpp_CFileFinder_findNext_FUN_00481cf0(&finder);
    }
    engine_dosio_cpp_CFileFinder_closeSearch_FUN_00481d70(&finder);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00481c50(&finder, 0);

    if (found == 0) {
        return 0;
    }
    snprintf(out, (size_t)out_size, "%s", newest_name);
    return 1;
}

#else

extern "C" int nocturne_single_player_menu(void) { return NOCTURNE_SP_MENU_CANCEL; }
extern "C" int nocturne_save_continue_target(char *, int) { return 0; }

#endif // !NOCTURNE_AUTHENTIC_SINGLE_PLAYER_MENU

// ---------------------------------------------------------------------------
// Autosave
// ---------------------------------------------------------------------------

#if !NOCTURNE_AUTHENTIC_AUTOSAVE

namespace {

int  s_prev_letterbox = 0;
char s_prev_mission[256] = { '\0' };

void autosave_write(CGame *game)
{
    char *message;

    // CGame::saveGame ends by pointing g_CurrentSaveFile at what it just wrote,
    // so an autosave becomes the save in play, exactly as F6's quicksave does.
    core_game_cpp_CGame_saveGame_FUN_004e0cd0(game, (char *)k_auto_name);

    message = support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Autosaved");
    core_game_cpp_CGame_displayMessage_FUN_004d7f20(game, message, 2.0f);
}

} // namespace

extern "C" void nocturne_autosave_session_start(void)
{
    s_prev_mission[0] = '\0';
    s_prev_letterbox  = 0;
}

extern "C" void nocturne_autosave_poll(CGame *game)
{
    const char *mission;
    int         letterbox;
    int         mission_changed;

    if ((game == (CGame *)0x0) || (g_CDemonMissionPtr == (CDemonMission *)0x0) ||
        (g_HeroCount < 1)) {
        return;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
        s_prev_mission[0] = '\0';
        s_prev_letterbox  = 0;
        return;
    }

    mission         = g_CDemonMissionPtr->mission_name;
    letterbox       = game->letterbox_mode;
    mission_changed = (_stricmp(s_prev_mission, (char *)mission) != 0);

    if (mission_changed) {
        snprintf(s_prev_mission, sizeof(s_prev_mission), "%s", mission);
        // A mission reached by loading is already saved — that is what was
        // loaded. CGame::loadGame holds is_loading up across the session it
        // starts, and CGame::showChapterSelect drops it, so this separates the
        // two ways in.
        if (game->is_loading != 0) {
            s_prev_letterbox = letterbox;
            return;
        }
    }
    else if ((s_prev_letterbox == 0) || (letterbox != 0)) {
        s_prev_letterbox = letterbox;
        return;
    }

    s_prev_letterbox = letterbox;

    // CGame::saveGame refuses outright during a cinematic, with an error box.
    // A mission that opens in one is caught by the cutscene edge instead.
    if (letterbox != 0) {
        return;
    }
    autosave_write(game);
}

#else

extern "C" void nocturne_autosave_session_start(void) { }
extern "C" void nocturne_autosave_poll(CGame *) { }

#endif // !NOCTURNE_AUTHENTIC_AUTOSAVE

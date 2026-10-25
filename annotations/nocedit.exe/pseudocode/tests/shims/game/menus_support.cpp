// =============================================================================
// MENUS SUPPORT — see menus_support.h
// =============================================================================

#include "menus_support.h"

#include "core/menu_font.h"
#include "core/menu_screen.h"
#include "game/cheats.h"
#include "net/net_session.h"
#include "watcom/stream_compat.h"

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <memory>

// --- the globals the menus read ------------------------------------------------

CDemonMission *g_CDemonMissionPtr = nullptr;
CEventList *g_CEventListPtr = nullptr;
CGame *g_CGamePtr = nullptr;
int g_HeroCount = 0;
CBitFont *g_EditorFont = nullptr;
CBitFont *g_ThemeFont = nullptr;
CEditorTools *g_CEditorToolsPtr = nullptr;
char g_CurrentSaveFile[256] = {};

namespace menus_support {

Stand stand;

namespace {

std::unique_ptr<CDemonMission> s_mission(new CDemonMission());
std::unique_ptr<CGame> s_game(new CGame());
CEventList s_events;
CBitFont *const s_menu_font = (CBitFont *)0x10;

// What getFile hands back for a world\ file it found; only ever closed.
char s_handle;

std::string lower(std::string text) {
    std::transform(text.begin(), text.end(), text.begin(),
                   [](unsigned char c) { return (char)std::tolower(c); });
    return text;
}

// Where the finder is in the listing.
size_t s_listed = 0;

void fill(CFileFinder *finder) {
    if (s_listed < stand.saves.size()) {
        const Listed &l = stand.saves[s_listed];
        std::snprintf(finder->filename, sizeof(finder->filename), "%s", l.name.c_str());
        finder->file_size = l.size;
        finder->timestamp = l.timestamp;
    } else {
        finder->filename[0] = '\0';
    }
}

} // namespace

CDemonMission *mission = s_mission.get();
CGame *game = s_game.get();

void run_mission(const char *name) {
    std::snprintf(mission->mission_name, sizeof(mission->mission_name), "%s", name);
}

void Stand::reset() {
    *this = Stand();
    std::memset(mission, 0, sizeof(*mission));
    std::memset(game, 0, sizeof(*game));
    g_CDemonMissionPtr = mission;
    g_CEventListPtr = &s_events;
    g_CGamePtr = game;
    g_HeroCount = 1;
    g_EditorFont = nullptr;
    g_CurrentSaveFile[0] = '\0';
}

} // namespace menus_support

using menus_support::stand;

// --- pick lists ----------------------------------------------------------------

CPickList *__cdecl shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(CPickList *this_ptr) {
    stand.rows.clear();
    stand.disabled.clear();
    return this_ptr;
}

CPickList *__cdecl shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(CPickList *this_ptr, uint) {
    return this_ptr;
}

void __cdecl shape_edittool_cpp_CStrList_add_FUN_004a2b80(CStrList *, char *string_data) {
    stand.rows.push_back(string_data);
}

void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(CPickList *, int item_index,
                                                                  int enable_flag) {
    if (enable_flag == 0)
        stand.disabled.insert(item_index);
}

int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(
    CPickList *, char *dialog_title, int initial_selected_index, uint) {
    stand.title = dialog_title;
    stand.initial = initial_selected_index;
    stand.lists_shown++;
    if (stand.choices.empty())
        return -1;
    const int choice = stand.choices.front();
    stand.choices.pop_front();
    return choice;
}

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **, int menu_count, int *, int,
                                                              char *) {
    stand.menu_counts.push_back(menu_count);
    if (stand.menu_choices.empty())
        return -1;
    const int choice = stand.menu_choices.front();
    stand.menu_choices.pop_front();
    return choice;
}

void __cdecl engine_2d_c_clearInputAndWait_FUN_00403260(void) {}

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void) {}

// --- dialogs -------------------------------------------------------------------

int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060(
    CEditorTools *, char *, ...) {
    return stand.confirm;
}

void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(CEditorTools *, char *format,
                                                                    ...) {
    stand.errors.push_back(format);
}

char *__cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key) {
    std::map<std::string, std::string>::iterator it = stand.localized.find(key);
    return (it != stand.localized.end()) ? &it->second[0] : key;
}

// --- the world and the saves -----------------------------------------------------

_FILE *__cdecl engine_dosio_cpp_getFile_FUN_00481a50(char *, char *filename, char *) {
    return stand.missions.count(menus_support::lower(filename)) != 0
               ? (_FILE *)&menus_support::s_handle
               : nullptr;
}

int __cdecl shape_memdbg_cpp_closeFile_FUN_0050f9b0(_FILE *, char *, int) {
    return 0;
}

CFileFinder *__cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00481c30(CFileFinder *this_ptr) {
    return this_ptr;
}

int __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00481c70(CFileFinder *this_ptr, char *) {
    menus_support::s_listed = 0;
    menus_support::fill(this_ptr);
    return 1;
}

int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_00481cf0(CFileFinder *this_ptr) {
    menus_support::s_listed++;
    menus_support::fill(this_ptr);
    return 1;
}

void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00481d70(CFileFinder *) {}

CFileFinder *__cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00481c50(CFileFinder *this_ptr, uint) {
    return this_ptr;
}

// The decoder hands its input through, as far as its budget, as if the save had
// been stored uncompressed behind the magic.
CLZWDecompress *__cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490(CLZWDecompress *this_ptr,
                                                                           int, int) {
    return this_ptr;
}

void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0(CLZWDecompress *) {}

int __cdecl support_codec_cpp_CLZWDecompress_process_FUN_0043f510(CLZWDecompress *,
                                                                  _istream *istream,
                                                                  int *byte_count,
                                                                  _ostream *ostream) {
    std::istream &in = std_istream_from(istream);
    std::ostream &out = std_ostream_from(ostream);
    char c;
    while (*byte_count > 0 && in.get(c)) {
        out.put(c);
        (*byte_count)--;
    }
    return 1;
}

int __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_0043f590(CLZWDecompress *, _ostream *) {
    return 1;
}

CLZWDictionary *__cdecl support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary *this_ptr,
                                                                           uint) {
    return this_ptr;
}

CCodec *__cdecl support_codec_cpp_CCodec_dtor_FUN_0043e9b0(CCodec *this_ptr, uint) {
    return this_ptr;
}

// --- the game ------------------------------------------------------------------

void __cdecl core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame *, char *save_filename) {
    stand.saved.push_back(save_filename);
}

int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004aabe0(CEventList *, char *commands) {
    stand.commands.push_back(commands);
    return 1;
}

void __cdecl core_game_cpp_CGame_displayMessage_FUN_004d7f20(CGame *, char *message, float) {
    stand.messages.push_back(message);
}

// --- the other shims -------------------------------------------------------------

int nocturne_cheat_active(int index) {
    return (index == NOCTURNE_CHEAT_WARPS) ? stand.warps_cheat : 0;
}

int nocturne_net_session_active(void) {
    return stand.net_active;
}

CBitFont *nocturne_menu_font(void) {
    return menus_support::s_menu_font;
}

void nocturne_menu_backdrop_frame(void) {}

int nocturne_menu_start_y(int rows) {
    return rows * 10;
}

int nocturne_menu_cancelled(void) {
    return stand.cancelled;
}

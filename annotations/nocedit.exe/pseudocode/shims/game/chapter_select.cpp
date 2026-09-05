// =============================================================================
// CHAPTER SELECTION — implementation
// =============================================================================
//
// See chapter_select.h for what this is and where the names come from.

#include "game/chapter_select.h"
#include "nocturne.h"

namespace {

// The Volume titles, in g_ChapterMissionFiles order. The only strings needed:
// the chapters within a volume are never listed, for the same reason
// CGame::showChapterSelect does not list them - see below.
const char *const k_volume_names[] = {
    "Volume 1 - 'Dark Reign of the Vampire King'",
    "Volume 2 - 'Tomb of the Underground God'",
    "Volume 3 - 'Windy City Massacre'",
    "Volume 4 - 'The House on the Edge of Hell'",
    "Volume 5 - 'Epilogue'",
};

#define CHAPTER_VOLUME_COUNT \
    ((int)(sizeof(k_volume_names) / sizeof(k_volume_names[0])))

// Indexed together with the mission table, so they have to describe the same
// game.
static_assert(CHAPTER_VOLUME_COUNT ==
                  (int)(sizeof(g_ChapterMissionFiles) /
                        sizeof(g_ChapterMissionFiles[0])),
              "k_volume_names must cover every volume in g_ChapterMissionFiles");

// Whether a mission file is present in world\, the test showChapterSelect uses
// to decide which entries to grey out.
int mission_exists(const char *mission_filename)
{
    _FILE *handle;

    if (mission_filename == (const char *)0x0) {
        return 0;
    }
    handle = engine_dosio_cpp_getFile_FUN_00481a50
                 ((char *)"world", (char *)mission_filename, (char *)"rt");
    if (handle == (_FILE *)0x0) {
        return 0;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(handle, (char *)"..\\shims\\chapter_select.cpp", 0);
    return 1;
}

} // namespace

extern "C" int nocturne_chapter_pick_mission(char *out, int out_size)
{
    CPickList list;
    CBitFont *saved_font;
    const char *title;
    const char *mission;
    int volume;
    int playable;
    int i;

    if (out == (char *)0x0 || out_size < 1) {
        return 0;
    }

    // showChapterSelect swaps the theme font in around its pick lists; match it
    // so this looks like the menu it is standing in for.
    saved_font = g_EditorFont;
    g_EditorFont = g_ThemeFont;

    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&list);
    playable = 0;
    for (i = 0; i < CHAPTER_VOLUME_COUNT; i++) {
        title = support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)k_volume_names[i]);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&list.base, (char *)title);
        // Chapter 0 specifically, because chapter 0 is what starting this
        // volume plays - the same test, on the same entry, that
        // showChapterSelect greys its volume list out with.
        if (mission_exists(g_ChapterMissionFiles[i][0]) == 0) {
            shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&list, i, 0);
        } else {
            playable = 1;
        }
    }

    volume = -1;
    if (playable != 0) {
        title = support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Choose a story to play");
        volume = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     (&list, (char *)title, -1, 0);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&list, 0);
    g_EditorFont = saved_font;

    if (volume < 0 || volume >= CHAPTER_VOLUME_COUNT) {
        return 0;
    }

    // The volume's opening chapter, and only that. showChapterSelect reaches
    // its per-chapter list solely when select_mode is set, which happens when
    // the matching Act<n>Code in nocturne.ini is the unlock value; ordinary
    // play falls through to `iVar6 = 0` and plays the first chapter. Listing
    // the chapters here offered what that gating exists to keep back - a
    // volume's optional and bad-ending missions, "Chapter X - 'Failure'" among
    // them - as if they were ordinary places to begin. Hosting a specific
    // mission is what holding CTRL is for; see hostNetworkGame.
    mission = g_ChapterMissionFiles[volume][0];
    if (mission_exists(mission) == 0) {
        return 0;
    }

    strncpy(out, mission, (size_t)out_size - 1);
    out[out_size - 1] = '\0';
    return 1;
}

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

// The chapter titles, cell for cell against g_ChapterMissionFiles, so
// [volume][chapter] names the same mission in both.
//
// Every string is the game's own, taken from the lists CGame::showChapterSelect
// builds when a volume is unlocked for chapter selection. That function adds
// them in g_ChapterMissionFiles order and indexes the same [volume][chapter]
// pair to choose the mission, which is what makes the pairing here exact.
//
// Keep the strings verbatim: they are the keys getLocalizedString looks up, so
// an edited string loses its translation silently.
//
// Volume 2's last entry is "Chapter X" rather than a numbered one -- it is that
// act's failure ending, which showChapterSelect lists only when enemy.pod is
// missing. Chapter counts are uneven (5, 7, 11, 4, 1), so each row's unused tail
// is null: the row length is g_ChapterMissionFiles's, not any volume's count.
const char *const k_chapter_names[CHAPTER_VOLUME_COUNT][13] = {
    { "Chapter 1 - 'Your New Partner'",
      "Chapter 2 - 'Sentinels'",
      "Chapter 3 - 'Werewolf Forest'",
      "Chapter 4 - 'Castle Gaustadt'",
      "Chapter 5 - 'Dungeon'" },

    { "Chapter 1 - 'Train to Redeye'",
      "Chapter 2 - 'Zombie Town'",
      "Chapter 3 - 'Underground Mine'",
      "Chapter 4 - 'Hidden Entrance'",
      "Chapter 5 - 'Temple of the God'",
      "Chapter 6 - 'Epilogue'",
      "Chapter X - 'Failure'" },

    { "Chapter 1 - 'Headquarters'",
      "Chapter 2 - 'Chicago River'",
      "Chapter 3 - 'The Vendome'",
      "Chapter 4 - 'Night on the Town'",
      "Chapter 5 - 'Water Works'",
      "Chapter 6 - 'Windy City'",
      "Chapter 7 - 'Crescent Theater'",
      "Chapter 8 - 'Rooftop to Rooftop'",
      "Chapter 9 - 'Warehouse of Hell'",
      "Chapter 10 - 'Mobster Factory'",
      "Chapter 11 - 'Not You Again'" },

    { "Chapter 1 - 'Headquarters'",
      "Chapter 2 - 'Graveyard'",
      "Chapter 3 - 'House of Hell'",
      "Chapter 4 - 'Back from Hell'" },

    { "Chapter 1 - 'Headquarters'" },
};

static_assert(sizeof(k_chapter_names[0]) / sizeof(k_chapter_names[0][0]) ==
                  sizeof(g_ChapterMissionFiles[0]) /
                      sizeof(g_ChapterMissionFiles[0][0]),
              "k_chapter_names rows must be as long as g_ChapterMissionFiles's, "
              "so [volume][chapter] means the same thing in both");

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

// The bare mission name from anything that names a mission: no directory, no
// extension. Both sides of the match go through this, since the two sources
// spell it differently -- g_ChapterMissionFiles holds "castle1.msn", while
// CDemonMission::readMissionFile fills mission_name from the .MSN's own
// root-name line, which is the stem alone.
void mission_stem(const char *name, char *out, int out_size)
{
    const char *start;
    int i;

    out[0] = '\0';
    if (name == (const char *)0x0) {
        return;
    }

    // Last separator wins, so "world\castle1.msn" and "castle1.msn" agree.
    start = name;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\\' || name[i] == '/') {
            start = &name[i + 1];
        }
    }

    for (i = 0; i < out_size - 1 && start[i] != '\0' && start[i] != '.'; i++) {
        out[i] = start[i];
    }
    out[i] = '\0';
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

extern "C" char *nocturne_chapter_environment_name(const char *mission_name)
{
    // The extracted name rather than the table string: the result is a slice of
    // a localized line and needs storage. One buffer suffices for a single
    // running mission; a caller that needs the name past the next call should
    // copy it.
    static char name[64];

    char        wanted[64];
    char        candidate[64];
    const char *line;
    const char *open_quote;
    const char *close_quote;
    int         volume;
    int         chapter;
    int         length;

    name[0] = '\0';
    mission_stem(mission_name, wanted, (int)sizeof(wanted));
    if (wanted[0] == '\0') {
        return (char *)0x0;
    }

    line = (const char *)0x0;
    for (volume = 0; volume < CHAPTER_VOLUME_COUNT && line == (const char *)0x0;
         volume++) {
        for (chapter = 0;
             chapter < (int)(sizeof(g_ChapterMissionFiles[0]) /
                             sizeof(g_ChapterMissionFiles[0][0]));
             chapter++) {
            // A null entry is the end of the volume's chapters, and the tail of
            // the row past it is null too.
            if (g_ChapterMissionFiles[volume][chapter] == (char *)0x0) {
                break;
            }
            mission_stem(g_ChapterMissionFiles[volume][chapter], candidate,
                         (int)sizeof(candidate));
            // Case-insensitive: the shipped root names are inconsistent about
            // case (castle1, CHICAGO2, Mansion, HQ-ACT1), and the engine's own
            // name comparisons ignore it for the same reason.
            if (_stricmp(candidate, wanted) == 0) {
                line = k_chapter_names[volume][chapter];
                break;
            }
        }
    }

    if (line == (const char *)0x0) {
        return (char *)0x0;      // an editor mission, or one of ours
    }

    line = support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)line);

    // The place name, without the chapter number in front of it. Single quotes
    // are the game's own convention for the title within these lines. A
    // translation that omits them falls back to the whole line, which is still
    // correct information, only longer.
    open_quote  = strchr(line, '\'');
    close_quote = strrchr(line, '\'');
    if (open_quote != (const char *)0x0 && close_quote > open_quote) {
        line   = open_quote + 1;
        length = (int)(close_quote - open_quote) - 1;
    } else {
        length = (int)strlen(line);
    }
    if (length > (int)sizeof(name) - 1) {
        length = (int)sizeof(name) - 1;
    }
    memcpy(name, line, (size_t)length);
    name[length] = '\0';
    return name;
}

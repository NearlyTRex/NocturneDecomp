#pragma once

// =============================================================================
// CHAPTER SELECTION — the retail storyline picker, reusable
// =============================================================================
//
// An addition, not a reconstruction, though everything it shows is the game's
// own. CGame::showChapterSelect offers a Volume list built from
// g_ChapterMissionFiles and a set of localized names, and then plays that
// volume's first chapter. It is welded into the middle of a function that also
// loads the mission, starts the heroes and runs it, so nothing else in the game
// can offer that choice; the multiplayer host got
// showFileSelectionDialog("*.msn") instead, a raw listing of world\ with no
// indication of which file is which chapter.
//
// This is the pick, and only the pick: it returns a mission filename and does
// nothing with it. The mission names come from g_ChapterMissionFiles, so this
// and the game cannot disagree about what a volume starts with.
//
// A VOLUME, NOT A CHAPTER. showChapterSelect only ever lists the chapters
// inside a volume when select_mode is set, which happens when the matching
// Act<n>Code in nocturne.ini holds the unlock value; ordinary play falls
// through to `iVar6 = 0` and starts the volume at its first chapter. That
// gating is what keeps a volume's optional and bad-ending missions - "Chapter X
// - 'Failure'" among them - from reading as ordinary places to begin, so this
// does the same and stops at the volume. Hosting one specific mission is what
// holding CTRL is for; see hostNetworkGame.
//
// A volume whose opening mission is not present is shown disabled, the same
// test on the same entry that showChapterSelect greys its list out with, so a
// partial install offers what it can actually play.
//
// One deliberate difference from showChapterSelect: Volume 5 ('Epilogue') is
// offered whenever its mission file exists, rather than being gated behind the
// four act-completion codes in nocturne.ini. Those codes are a single-player
// story unlock, and the host here is choosing a map to share.

#ifdef __cplusplus
extern "C" {
#endif

// Runs the Volume pick list and writes the filename of that volume's opening
// mission ("castle1.msn" and so on) into `out`. Returns 1 on a choice, 0 if the
// player backed out or nothing was playable.
//
// `out` is untouched when 0 is returned, so a caller can leave whatever mission
// it already had in place.
int nocturne_chapter_pick_mission(char *out, int out_size);

// The localized name of the place a mission is set in -- "Castle Gaustadt" for
// castle1.msn -- or a null pointer for a mission outside the shipped set.
//
// Accepts a bare root name, a filename or a path, so both
// g_CDemonMissionPtr->mission_name ("castle1", "CHICAGO2", "Mansion") and
// g_ChapterMissionFiles ("castle1.msn") work. Matching is case-insensitive, as
// the engine's own name comparisons are.
//
// The titles are the game's own: each is a string in the binary, and the lookup
// key is g_ChapterMissionFiles itself, so this and CGame::showChapterSelect
// cannot disagree about which mission is which place. The returned value is the
// quoted portion only -- the chapter number is a position in the story rather
// than a place name.
//
// Not const: the engine's string type is plain char *, and callers pass the
// result directly into drawing code that takes one.
char *nocturne_chapter_environment_name(const char *mission_name);

#ifdef __cplusplus
}
#endif

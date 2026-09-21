#pragma once

// =============================================================================
// OS FONT — which of the engine's two text paths is used
// =============================================================================
//
// Gated by NOCTURNE_OS_FONT_OPTION, which carries the reasoning; the short
// version is that the engine has always been able to draw text through OS fonts
// instead of its bitmap sheets, and nothing in either shipped binary ever turns
// that on.
//
// The choice is read at startup by CGame::initFonts, which is the only place
// that acts on it — it is what decides whether the CWinFont objects are built.
// Setting it later changes a variable nothing re-reads, so the Options line
// says the choice applies next launch.

#ifdef __cplusplus
extern "C" {
#endif

// AUTO leaves the engine's own answer alone. CSupport::readMessageFile parses
// g_UseOSFonts out of msglist.txt — field two, with the font name in field
// three — so a localisation that needs glyphs the bitmap sheets do not carry
// asks for OS fonts there. Overriding that unasked would break exactly the
// case the mechanism exists for, so AUTO is the default and the other two are
// deliberate overrides.
//
// The shipped POD carries no msglist.txt, so under AUTO the file is absent,
// readMessageFile returns before reading anything, and the global keeps its
// zero — bitmap sheets, as today.
#define NOCTURNE_OS_FONT_AUTO   0
#define NOCTURNE_OS_FONT_BITMAP 1
#define NOCTURNE_OS_FONT_SYSTEM 2
#define NOCTURNE_OS_FONT_COUNT  3

// The stored choice, read from [Graphics] osFont in system\nocturne.ini on
// first use and cached after. Defaults to NOCTURNE_OS_FONT_AUTO.
int nocturne_os_font_get(void);

// Stores the choice and writes it to the INI. Does not rebuild the fonts: see
// nocturne_os_font_apply, and the flag's doc comment for why.
void nocturne_os_font_set(int mode);

// Steps the choice by `step` and stores it, for a left/right press on the
// Options line. Returns the new value.
int nocturne_os_font_cycle(int step);

// "Auto", "Bitmap" or "System", for the menu line.
const char *nocturne_os_font_name(int mode);

// Pushes the stored choice into g_UseOSFonts, which CGame::initFonts tests to
// decide whether to build the CWinFont objects. Called from the top of
// initFonts, which runs after readMessageFile has had its say — so under AUTO
// this deliberately does nothing and the message file's answer stands.
void nocturne_os_font_apply(void);

#ifdef __cplusplus
}
#endif

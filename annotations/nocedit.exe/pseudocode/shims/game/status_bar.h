#pragma once

// =============================================================================
// STATUS BARS SIZED BY MAXIMUM HEALTH
// =============================================================================
//
// The fix side of NOCTURNE_AUTHENTIC_STATUS_BAR_WIDTH.
//
// CGame::setStatusDisplay stores a name and a fill fraction, nothing else, and
// CGame::renderOverlay draws every bar a quarter of the screen wide. A
// character's bar therefore says how hurt it is but not how much it can take:
// IcePick at 300 and a Stranger at 100 get the same length.
//
// Each CHero that posts a bar (a network player other than the local one, or a
// companion) has its max_hit_points recorded against the bar's name, and the
// overlay draws that bar max_hit_points / 100 of the shipped width, 100 being
// CCharacter::ctor's default maximum. Any other bar (a hostage, the vampire
// boss) is drawn at the shipped width. Nothing here is read by the simulation.

struct CCharacter;

#ifdef __cplusplus
extern "C" {
#endif

// After CCharacter::process or processDamage posts this character's bar.
void nocturne_status_bar_note(struct CCharacter *character);

// The right edge for the bar called name, whose shipped extent is left..right.
int nocturne_status_bar_right(char *name, int left, int right);

#ifdef __cplusplus
}
#endif

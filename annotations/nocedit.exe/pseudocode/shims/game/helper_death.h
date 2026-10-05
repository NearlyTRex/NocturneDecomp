#pragma once

// =============================================================================
// A HELPER'S DEATH ENDS THE MISSION
// =============================================================================
//
// The fix side of NOCTURNE_AUTHENTIC_HELPER_DEATH.
//
// A companion who must survive (Svetlana in ACT1, Scat in ACT2, Icepick in
// ACT3) is watched by the mission script:
//
//     if (isDead(Svetlana))
//         setfocusactor(Svetlana)  ...  wait(5)  fadeout  end
//
// The bare "end" command appears in the shipped scripts only in these
// branches; a mission that succeeds leaves through chainToMission, gtfo,
// finishedAct or rollCredits. "end" sets CScript::mission_ended, the session
// loop exits with the hero alive, and the Game Over menu - shown only for a
// dead hero - is skipped, dropping the player at the main menu.
//
// While the branch waits, the script's main loop does not run, so the hazards
// it polls (the drowning and pit triggers) never fire and the hero walks
// through them. The hero is held still for as long as the script camera is on
// a dead character who is not a player hero, which is how every one of these
// branches starts.

#ifdef __cplusplus
extern "C" {
#endif

// Clears the failed-mission mark. Called when a game session starts.
void nocturne_helper_death_reset(void);

// Records that the script ran "end". Called from CScript::step.
void nocturne_helper_death_note_end(void);

// 1 when the session ended through "end", so it closes on the Game Over menu.
int nocturne_helper_death_game_over(void);

// 1 while hero input should be withheld: the script focus actor is a
// character the script's isDead would call dead, and not one of g_HeroActors.
int nocturne_helper_death_hold_hero(void);

#ifdef __cplusplus
}
#endif

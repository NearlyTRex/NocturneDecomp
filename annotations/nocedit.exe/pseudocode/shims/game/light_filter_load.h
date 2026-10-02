#pragma once

// =============================================================================
// LIGHT FILTERS A SCRIPT ADDED, AFTER A SAVE LOAD
// =============================================================================
//
// The fix side of NOCTURNE_AUTHENTIC_LIGHT_FILTER_LOAD, called from
// CGame::loadGame once CScript::loadState has restored the script position.
//
// Every HQ script opens by appending the briefing slides to the "projector"
// light with addLightFilter. A load re-reads the .SET through startMission,
// which resets the light to its single shipped filter, and the save does not
// record filters, so the slides are gone.
//
// This re-applies the addLightFilter lines of the script's opening run - the
// lines before its first wait - that lie before the restored position. A save
// taken before those lines ran leaves them for the script to run itself.

struct CScript;

#ifdef __cplusplus
extern "C" {
#endif

void nocturne_light_filter_load_replay(struct CScript *script);

#ifdef __cplusplus
}
#endif

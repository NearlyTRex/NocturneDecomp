#pragma once

// Function prototypes for core/game.cpp
// Generated from Ghidra function signatures

// Original: core_game.cpp_staticInit_FUN_004d76d0
// Address: 004d76d0
void __cdecl staticInit(void);

// Original: core_game.cpp_PleaseEnterValidInteger_FUN_004d7730
// Address: 004d7730
void __cdecl PleaseEnterValidInteger(void);

// Original: core_game.cpp_FUN_004d7810
// Address: 004d7810
void __cdecl FUN_004d7810(void);

// Original: core_game.cpp_CGame_ctor_FUN_004d7b40
// Address: 004d7b40
CGame * __cdecl CGame::ctor(CGame *this_ptr);

// Original: core_game.cpp_CGame_dtor_FUN_004d7d70
// Address: 004d7d70
CGame * __cdecl CGame::dtor(CGame *this_ptr);

// Original: core_game.cpp_CGame_saveClockTime_FUN_004d7d80
// Address: 004d7d80
void __cdecl CGame::saveClockTime(CGame *this_ptr);

// Original: core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
// Address: 004d7d90
void __cdecl CGame::updateDeltaTime(CGame *this_ptr);

// Original: core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50
// Address: 004d7e50
void __cdecl CGame::drawScreenBorder(CGame *this_ptr);

// Original: core_game.cpp_CGame_displayMessage_FUN_004d7f20
// Address: 004d7f20
void __cdecl CGame::displayMessage(CGame *this_ptr,char *message,float duration);

// Original: core_game.cpp_CGame_FUN_004d7f80
// Address: 004d7f80
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_FUN_004d7fa0
// Address: 004d7fa0
void __cdecl FUN_004d7fa0(void);

// Original: core_game.cpp_CGame_renderOverlay_FUN_004d8040
// Address: 004d8040
void __cdecl CGame::renderOverlay(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004d85a0
// Address: 004d85a0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004d8730
// Address: 004d8730
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004d8750
// Address: 004d8750
int __cdecl CGame(CGame *this_ptr,float delta_time,int additional_param);

// Original: core_game.cpp_FUN_004d8890
// Address: 004d8890
void __cdecl FUN_004d8890(void);

// Original: core_game.cpp_FUN_004d8910
// Address: 004d8910
void __cdecl FUN_004d8910(void);

// Original: core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
// Address: 004d89d0
void __cdecl CGame::showCustomizableKeys(CGame *this_ptr);

// Original: core_game.cpp_CGame_processFrame_FUN_004da100
// Address: 004da100
void __cdecl CGame::processFrame(CGame *this_ptr);

// Original: core_game.cpp_CGame_setGameRes_FUN_004dade0
// Address: 004dade0
void __cdecl CGame::setGameRes(CGame *this_ptr);

// Original: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
// Address: 004daed0
void __cdecl CGame::setScreenResolutionAndDisplayFangs(CGame *this_ptr);

// Original: core_game.cpp_CGame_runGameSession_FUN_004daf80
// Address: 004daf80
int __cdecl CGame::runGameSession(CGame *this_ptr);

// Original: core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
// Address: 004dbbc0
void __cdecl CGame::restoreDefaultControls(CGame *this_ptr);

// Original: core_game.cpp_CGame_playerControls_FUN_004dbd80
// Address: 004dbd80
void __cdecl CGame::playerControls(CGame *this_ptr);

// Original: core_game.cpp_CGame_resetKeyState_FUN_004dbe60
// Address: 004dbe60
void __cdecl CGame::resetKeyState(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004dc230
// Address: 004dc230
void __cdecl CGame(CGame *this_ptr,SPlayerControl *player_control);

// Original: core_game.cpp_FUN_004dc270
// Address: 004dc270
void __cdecl FUN_004dc270(void);

// Original: core_game.cpp_FUN_004dc2a0
// Address: 004dc2a0
void __cdecl FUN_004dc2a0(void);

// Original: core_game.cpp_FUN_004dc2d0
// Address: 004dc2d0
void __cdecl FUN_004dc2d0(void);

// Original: core_game.cpp_FUN_004dc370
// Address: 004dc370
void __cdecl FUN_004dc370(void);

// Original: core_game.cpp_CGame_FUN_004dc3e0
// Address: 004dc3e0
void __cdecl CGame(CGame *this_ptr,SPlayerControl *player_control);

// Original: core_game.cpp_CGame_FUN_004dccc0
// Address: 004dccc0
void __cdecl CGame(CGame *this_ptr,SPlayerControl *player_control);

// Original: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
// Address: 004dce70
void __cdecl CGame::resetInputAndCenterCursor(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004dcee0
// Address: 004dcee0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_FUN_004dd7f0
// Address: 004dd7f0
int __cdecl FUN_004dd7f0(void);

// Original: core_game.cpp_giveHeroWeapon_FUN_004dd870
// Address: 004dd870
void __cdecl giveHeroWeapon(char *p1);

// Original: core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930
// Address: 004dd930
void __cdecl giveHeroWeaponAmmo(char *p1,EAmmoType p3);

// Original: core_game.cpp_FUN_004dd9d0
// Address: 004dd9d0
void __cdecl FUN_004dd9d0(void);

// Original: core_game.cpp_CGame_FUN_004dda80
// Address: 004dda80
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
// Address: 004ddaf0
void __cdecl CGame::processCheatCodes(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004e07a0
// Address: 004e07a0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_beginFadeIn_FUN_004e0920
// Address: 004e0920
void __cdecl CGame::beginFadeIn(CGame *this_ptr);

// Original: core_game.cpp_CGame_beginFadeOut_FUN_004e0960
// Address: 004e0960
void __cdecl CGame::beginFadeOut(CGame *this_ptr);

// Original: core_game.cpp_FUN_004e09a0
// Address: 004e09a0
void __cdecl FUN_004e09a0(void);

// Original: core_game.cpp_CGame_FUN_004e09c0
// Address: 004e09c0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004e0aa0
// Address: 004e0aa0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_fadeIn_FUN_004e0b90
// Address: 004e0b90
uint __cdecl CGame::fadeIn(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004e0bb0
// Address: 004e0bb0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004e0bd0
// Address: 004e0bd0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004e0bf0
// Address: 004e0bf0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_saveGame_FUN_004e0cd0
// Address: 004e0cd0
void __cdecl CGame::saveGame(CGame *this_ptr,char *save_filename);

// Original: core_game.cpp_CGame_loadGame_FUN_004e12b0
// Address: 004e12b0
void __cdecl CGame::loadGame(CGame *this_ptr,char *save_filename,int load_mode,char *chapter_name);

// Original: core_game.cpp_FUN_004e1c30
// Address: 004e1c30
void __cdecl FUN_004e1c30(void);

// Original: core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
// Address: 004e1cb0
void __cdecl CGame::showChapterSelect(CGame *this_ptr,int unknown);

// Original: core_game.cpp_CGame_displayBitmap_FUN_004e2890
// Address: 004e2890
void __cdecl CGame::displayBitmap(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004e2910
// Address: 004e2910
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_FUN_004e2f10
// Address: 004e2f10
void __cdecl FUN_004e2f10(void);

// Original: core_game.cpp_FUN_004e2fc0
// Address: 004e2fc0
void __cdecl FUN_004e2fc0(void);

// Original: core_game.cpp_CGame_slamDT_FUN_004e3080
// Address: 004e3080
void __cdecl CGame::slamDT(CGame *this_ptr,float delta_time);

// Original: core_game.cpp_FUN_004e30f0
// Address: 004e30f0
void __cdecl FUN_004e30f0(void);

// Original: core_game.cpp_FUN_004e3110
// Address: 004e3110
void __cdecl FUN_004e3110(void);

// Original: core_game.cpp_CGame_process_FUN_004e3190
// Address: 004e3190
void __cdecl CGame::process(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004e36f0
// Address: 004e36f0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_displayActStats_FUN_004e3800
// Address: 004e3800
void __cdecl CGame::displayActStats(CGame *this_ptr);

// Original: core_game.cpp_CGame_finishAct_FUN_004e3b90
// Address: 004e3b90
void __cdecl CGame::finishAct(CGame *this_ptr);

// Original: core_game.cpp_CGame_rollCredits_FUN_004e4010
// Address: 004e4010
void __cdecl CGame::rollCredits(CGame *this_ptr);

// Original: core_game.cpp_FUN_004e4440
// Address: 004e4440
void * __cdecl FUN_004e4440(void);

// Original: core_game.cpp_FUN_004e4450
// Address: 004e4450
void * __cdecl FUN_004e4450(void);

// Original: core_game.cpp_FUN_004e4460
// Address: 004e4460
void * __cdecl FUN_004e4460(void);

#pragma once

// Function prototypes for core/game.cpp
// Generated from Ghidra function signatures

// Original: core_game.cpp_staticInit_FUN_0049a1e0
// Address: 0049a1e0
void __cdecl staticInit(void);

// Original: core_game.cpp_setupMovieRecording_FUN_0049a240
// Address: 0049a240
void __cdecl setupMovieRecording(void);

// Original: core_game.cpp_FUN_0049a320
// Address: 0049a320
void FUN_0049a320(void);

// Original: core_game.cpp_CGame_ctor_FUN_0049a650
// Address: 0049a650
CGame * __cdecl CGame::ctor(CGame *this_ptr);

// Original: core_game.cpp_CGame_dtor_FUN_0049a880
// Address: 0049a880
CGame * __cdecl CGame::dtor(CGame *this_ptr,uint flags);

// Original: core_game.cpp_CGame_saveClockTime_FUN_0049a890
// Address: 0049a890
void __cdecl CGame::saveClockTime(CGame *this_ptr);

// Original: core_game.cpp_CGame_updateDT_FUN_0049a8a0
// Address: 0049a8a0
void __cdecl CGame::updateDT(CGame *this_ptr);

// Original: core_game.cpp_CGame_drawScreenBorder_FUN_0049a960
// Address: 0049a960
void __cdecl CGame::drawScreenBorder(CGame *this_ptr);

// Original: core_game.cpp_CGame_displayMessage_FUN_0049aa30
// Address: 0049aa30
void __cdecl CGame::displayMessage(CGame *this_ptr,char *message,float duration);

// Original: core_game.cpp_CGame_clearOverlay_FUN_0049aa90
// Address: 0049aa90
void __cdecl CGame::clearOverlay(CGame *this_ptr);

// Original: core_game.cpp_drawHealthBar_FUN_0049aab0
// Address: 0049aab0
void __cdecl drawHealthBar(int x1,int y1,int x2,int y2,float fill_percent);

// Original: core_game.cpp_CGame_renderOverlay_FUN_0049ab50
// Address: 0049ab50
void __cdecl CGame::renderOverlay(CGame *this_ptr);

// Original: core_game.cpp_CGame_updateStatusDisplays_FUN_0049b0b0
// Address: 0049b0b0
void __cdecl CGame::updateStatusDisplays(CGame *this_ptr);

// Original: core_game.cpp_CGame_setFudgeTarget_FUN_0049b240
// Address: 0049b240
void __cdecl CGame::setFudgeTarget(CGame *this_ptr,CVector3f *fudge_target,float fudge_step);

// Original: core_game.cpp_CGame_processFudge_FUN_0049b260
// Address: 0049b260
void __cdecl CGame::processFudge(CGame *this_ptr);

// Original: core_game.cpp_drawCreditsLine_FUN_0049b3a0
// Address: 0049b3a0
void __cdecl drawCreditsLine(char *text_string);

// Original: core_game.cpp_drawKeyBindingEntry_FUN_0049b420
// Address: 0049b420
void __cdecl drawKeyBindingEntry(EInputCodeType key_code,char *action_name);

// Original: core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0
// Address: 0049b4e0
void __cdecl CGame::showCustomizableKeys(CGame *this_ptr);

// Original: core_game.cpp_CGame_processFrame_FUN_0049cc10
// Address: 0049cc10
void __cdecl CGame::processFrame(CGame *this_ptr);

// Original: core_game.cpp_CGame_setGameRes_FUN_0049d870
// Address: 0049d870
void __cdecl CGame::setGameRes(CGame *this_ptr);

// Original: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960
// Address: 0049d960
void __cdecl CGame::setScreenResolutionAndDisplayFangs(CGame *this_ptr);

// Original: core_game.cpp_CGame_runGameSession_FUN_0049da10
// Address: 0049da10
int __cdecl CGame::runGameSession(CGame *this_ptr);

// Original: core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610
// Address: 0049e610
void __cdecl CGame::restoreDefaultControls(CGame *this_ptr);

// Original: core_game.cpp_CGame_playerControls_FUN_0049e7d0
// Address: 0049e7d0
void __cdecl CGame::playerControls(CGame *this_ptr);

// Original: core_game.cpp_CGame_resetKeyState_FUN_0049e8b0
// Address: 0049e8b0
void __cdecl CGame::resetKeyState(CGame *this_ptr);

// Original: core_game.cpp_CGame_processJoystickControls_FUN_0049ec80
// Address: 0049ec80
void __cdecl CGame::processJoystickControls(CGame *this_ptr,SPlayerInput *player_control);

// Original: core_game.cpp_pollKeyStateOnChange_FUN_0049ecc0
// Address: 0049ecc0
void __cdecl pollKeyStateOnChange(int key_index,int *output_state);

// Original: core_game.cpp_pollKeyEdgeTrigger_FUN_0049ecf0
// Address: 0049ecf0
void __cdecl pollKeyEdgeTrigger(int key_index,uint *out_state);

// Original: core_game.cpp_rampControlAxis_FUN_0049ed20
// Address: 0049ed20
void __cdecl rampControlAxis(int negative_key,int positive_key,float *axis_value,float ramp_time,float max_value);

// Original: core_game.cpp_dampControlAxis_FUN_0049edc0
// Address: 0049edc0
void __cdecl dampControlAxis(float *axis_value,float damp_time,float damp_rate);

// Original: core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30
// Address: 0049ee30
void __cdecl CGame::processKeyboardControls(CGame *this_ptr,SPlayerInput *player_control);

// Original: core_game.cpp_CGame_processMouseControls_FUN_0049f710
// Address: 0049f710
void __cdecl CGame::processMouseControls(CGame *this_ptr,SPlayerInput *player_control);

// Original: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
// Address: 0049f8c0
void __cdecl CGame::resetInputAndCenterCursor(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_0049f930
// Address: 0049f930
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_checkCheatCode_FUN_004a0260
// Address: 004a0260
int __cdecl checkCheatCode(char *cheat_string);

// Original: core_game.cpp_giveHeroWeapon_FUN_004a02e0
// Address: 004a02e0
void __cdecl giveHeroWeapon(char *class_name);

// Original: core_game.cpp_FUN_004a03a0
// Address: 004a03a0
void __cdecl FUN_004a03a0(char *param_1,EAmmoType param_2);

// Original: core_game.cpp_checkCheatAndGiveWeapon_FUN_004a0430
// Address: 004a0430
void __cdecl checkCheatAndGiveWeapon(char *cheat_code,char *class_name,char *message);

// Original: core_game.cpp_scaleBoneRecursive_FUN_004a04e0
// Address: 004a04e0
void __cdecl scaleBoneRecursive(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index);

// Original: core_game.cpp_CGame_processCheatCodes_FUN_004a0550
// Address: 004a0550
void __cdecl CGame::processCheatCodes(CGame *this_ptr);

// Original: core_game.cpp_CGame_loadAssets_FUN_004a3660
// Address: 004a3660
void __cdecl CGame::loadAssets(CGame *this_ptr);

// Original: core_game.cpp_CGame_beginFadeIn_FUN_004a37e0
// Address: 004a37e0
void __cdecl CGame::beginFadeIn(CGame *this_ptr);

// Original: core_game.cpp_CGame_beginFadeOut_FUN_004a3820
// Address: 004a3820
void __cdecl CGame::beginFadeOut(CGame *this_ptr);

// Original: core_game.cpp_calculateIrisFadeCenter_FUN_004a3860
// Address: 004a3860
void __cdecl calculateIrisFadeCenter(void);

// Original: core_game.cpp_CGame_updateFadeTransition_FUN_004a3880
// Address: 004a3880
void __cdecl CGame::updateFadeTransition(CGame *this_ptr);

// Original: core_game.cpp_CGame_renderIrisFade_FUN_004a3960
// Address: 004a3960
void __cdecl CGame::renderIrisFade(CGame *this_ptr);

// Original: core_game.cpp_CGame_fadeIn_FUN_004a3a50
// Address: 004a3a50
uint __cdecl CGame::fadeIn(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004a3a70
// Address: 004a3a70
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_FUN_004a3a90
// Address: 004a3a90
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0
// Address: 004a3ab0
void __cdecl CGame::setStatusDisplay(CGame *this_ptr,char *name,int value,float duration);

// Original: core_game.cpp_CGame_FUN_004a3b90
// Address: 004a3b90
void __cdecl CGame(CGame *this_ptr,char *save_filename);

// Original: core_game.cpp_CGame_FUN_004a4170
// Address: 004a4170
void __cdecl CGame(CGame *this_ptr,char *save_filename,int load_mode);

// Original: core_game.cpp_CGame_FUN_004a4b50
// Address: 004a4b50
void __cdecl CGame(CGame *this_ptr,int select_mode);

// Original: core_game.cpp_CGame_displayBitmap_FUN_004a5740
// Address: 004a5740
void __cdecl CGame::displayBitmap(CGame *this_ptr,char *filename,int width,int height);

// Original: core_game.cpp_CGame_FUN_004a57c0
// Address: 004a57c0
void __cdecl CGame(CGame *this_ptr);

// Original: core_game.cpp_joinNetworkGame_FUN_004a5e40
// Address: 004a5e40
void __cdecl joinNetworkGame(void);

// Original: core_game.cpp_CGame_slamDT_FUN_004a5f00
// Address: 004a5f00
void __cdecl CGame::slamDT(CGame *this_ptr,float delta_time);

// Original: core_game.cpp_CGame_process_FUN_004a6010
// Address: 004a6010
void __cdecl CGame::process(CGame *this_ptr);

// Original: core_game.cpp_CGame_promptLoadGame_FUN_004a6570
// Address: 004a6570
void __cdecl CGame::promptLoadGame(CGame *this_ptr);

// Original: core_game.cpp_CGame_displayActStats_FUN_004a6680
// Address: 004a6680
void __cdecl CGame::displayActStats(CGame *this_ptr);

// Original: core_game.cpp_CGame_finishAct_FUN_004a6a10
// Address: 004a6a10
void __cdecl CGame::finishAct(CGame *this_ptr);

// Original: core_game.cpp_CGame_rollCredits_FUN_004a6e90
// Address: 004a6e90
void __cdecl CGame::rollCredits(CGame *this_ptr);

// Original: core_game.cpp_CSlew_ctor_FUN_004a72a0
// Address: 004a72a0
CSlew * __cdecl CSlew::ctor(CSlew *this_ptr);

// Original: core_game.cpp_CSlew_dtor_FUN_004a72b0
// Address: 004a72b0
CSlew * __cdecl CSlew::dtor(CSlew *this_ptr,uint flags);

// Name: engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
// Address: 00410520
// Address Range: [[00410520, 00410538]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e3812 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3c9d [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e404c [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 (004daed0) at 004daf16 [UNCONDITIONAL_CALL]
//   core_inv.cpp_staticInit_FUN_004fcc30 (004fcc30) at 004fcc83 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0 (00503dc0) at 00503e94 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005080ae [UNCONDITIONAL_CALL]
//   core_main.c_staticInit_FUN_00506e80 (00506e80) at 00506ec4 [UNCONDITIONAL_CALL]
//   core_menu.cpp_staticInit_FUN_0050fdb0 (0050fdb0) at 0050fe24 [UNCONDITIONAL_CALL]
//   core_moon.cpp_staticInit_FUN_005299f0 (005299f0) at 005299f5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap *this_ptr)

{
  this_ptr->ptrOpa = (char *)0x0;
  this_ptr->ptrAct = (uint *)0x0;
  this_ptr->ptrRaw = (char *)0x0;
  return;
}


// Assembly code:
// 00410520: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: Stack[0x4] (READ)
// 00410524: MOV dword ptr [EAX + 0x4],0x0
// 0041052b: MOV dword ptr [EAX + 0x8],0x0
// 00410532: MOV dword ptr [EAX],0x0
// 00410538: RET

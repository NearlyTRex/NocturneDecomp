// Name: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
// Address: 00410540
// Address Range: [[00410540, 00410551]]
// Convention: __cdecl
// Signature: CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e3b7b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3ffe [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e42ea [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 (004daed0) at 004daf5c [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0 (00503dc0) at 00503f22 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005080fd [UNCONDITIONAL_CALL]
// Function calls:
//   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560

#include "nocturne.h"

CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap *this_ptr)

{
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00410540: PUSH EBX
//   Label: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
// 00410541: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00410545: PUSH EBX
// 00410546: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 0041054b: ADD ESP,0x4
// 0041054e: MOV EAX,EBX
// 00410550: POP EBX
// 00410551: RET

// Name: core_game.cpp_FUN_004e30f0
// Address: 004e30f0
// Address Range: [[004e30f0, 004e3109]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e30f0()
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81ca8
//   int g_ProfileStartTime
// Function calls:
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void core_game_cpp_FUN_004e30f0(void)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  return;
}


// Assembly code:
// 004e30f0: MOV EAX,[0x0067b654]
//   Label: core_game.cpp_FUN_004e30f0
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (DATA)
// 004e30f5: CMP dword ptr [EAX + 0x20c],0x1
//   XREF to: 02d81ca8 (READ)
// 004e30fc: JZ 0x004e30ff
//   XREF to: 004e30ff (CONDITIONAL_JUMP)
// 004e30fe: RET
// 004e30ff: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_004e30ff
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e3104: MOV [0x02d831fc],EAX
//   XREF to: 02d831fc (WRITE)
// 004e3109: RET

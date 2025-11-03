// Name: core_game.cpp_CGame_fadeIn_FUN_004e0b90
// Address: 004e0b90
// Address Range: [[004e0b90, 004e0ba7]]
// Convention: __cdecl
// Signature: undefined4 core_game.cpp_CGame_fadeIn_FUN_004e0b90(CGame * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004af173 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004dbb43 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055cf8e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d831ec

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_CGame_fadeIn_FUN_004e0b90() */

undefined4 __cdecl core_game_cpp_CGame_fadeIn_FUN_004e0b90(CGame *this_ptr)

{
  if ((DAT_02d831ec != 0) && (DAT_02d831ec != 5)) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 004e0b90: MOV EDX,dword ptr [0x02d831ec]
//   Label: core_game.cpp_CGame_fadeIn_FUN_004e0b90
//   XREF to: 02d831ec (READ)
// 004e0b96: TEST EDX,EDX
// 004e0b98: JZ 0x004e0b9f
//   XREF to: 004e0b9f (CONDITIONAL_JUMP)
// 004e0b9a: CMP EDX,0x5
// 004e0b9d: JNZ 0x004e0ba5
//   XREF to: 004e0ba5 (CONDITIONAL_JUMP)
// 004e0b9f: MOV EAX,0x1
//   Label: LAB_004e0b9f
// 004e0ba4: RET
// 004e0ba5: XOR EAX,EAX
//   Label: LAB_004e0ba5
// 004e0ba7: RET

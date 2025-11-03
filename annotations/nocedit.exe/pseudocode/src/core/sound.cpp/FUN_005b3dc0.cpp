// Name: core_sound.cpp_FUN_005b3dc0
// Address: 005b3dc0
// Address Range: [[005b3dc0, 005b3dd2]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b3dc0()
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ab545 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03f6b7b4
//   undefined4 DAT_03f6b7b8

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_sound.cpp_FUN_005b3dc0(undefined1 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_sound_cpp_FUN_005b3dc0(void)

{
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _DAT_03f6b7b4 = in_stack_00000008;
  _DAT_03f6b7b8 = in_stack_0000000c;
  return;
}


// Assembly code:
// 005b3dc0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_sound.cpp_FUN_005b3dc0
//   XREF to: Stack[0x8] (READ)
// 005b3dc4: MOV [0x03f6b7b4],EAX
//   XREF to: 03f6b7b4 (WRITE)
// 005b3dc9: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005b3dcd: MOV [0x03f6b7b8],EAX
//   XREF to: 03f6b7b8 (WRITE)
// 005b3dd2: RET

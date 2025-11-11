// Name: core_sound.cpp_CSound_FUN_005b3dc0
// Address: 005b3dc0
// Address Range: [[005b3dc0, 005b3dd2]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_FUN_005b3dc0(CSound * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ab545 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03f6b7b4
//   undefined4 DAT_03f6b7b8

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_FUN_005b3dc0(CSound *this_ptr)

{
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _DAT_03f6b7b4 = in_stack_00000008;
  _DAT_03f6b7b8 = in_stack_0000000c;
  return;
}


// Assembly code:
// 005b3dc0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_sound.cpp_CSound_FUN_005b3dc0
//   XREF to: Stack[0x8] (READ)
// 005b3dc4: MOV [0x03f6b7b4],EAX
//   XREF to: 03f6b7b4 (WRITE)
// 005b3dc9: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005b3dcd: MOV [0x03f6b7b8],EAX
//   XREF to: 03f6b7b8 (WRITE)
// 005b3dd2: RET

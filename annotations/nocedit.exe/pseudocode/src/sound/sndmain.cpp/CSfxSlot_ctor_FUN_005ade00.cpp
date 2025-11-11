// Name: sound_sndmain.cpp_CSfxSlot_ctor_FUN_005ade00
// Address: 005ade00
// Address Range: [[005ade00, 005ade11]]
// Convention: __cdecl
// Signature: CSfxSlot * sound_sndmain.cpp_CSfxSlot_ctor_FUN_005ade00(CSfxSlot * this_ptr)
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_reset_FUN_005a8830

#include "nocturne.h"

CSfxSlot * __cdecl sound_sndmain_cpp_CSfxSlot_ctor_FUN_005ade00(CSfxSlot *this_ptr)

{
  sound_sndmain_cpp_CSfxSlot_reset_FUN_005a8830(this_ptr);
  return this_ptr;
}


// Assembly code:
// 005ade00: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_ctor_FUN_005ade00
// 005ade01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ade05: PUSH EBX
// 005ade06: CALL sound_sndmain.cpp_CSfxSlot_reset_FUN_005a8830
//   XREF to: 005a8830 (UNCONDITIONAL_CALL)
// 005ade0b: ADD ESP,0x4
// 005ade0e: MOV EAX,EBX
// 005ade10: POP EBX
// 005ade11: RET

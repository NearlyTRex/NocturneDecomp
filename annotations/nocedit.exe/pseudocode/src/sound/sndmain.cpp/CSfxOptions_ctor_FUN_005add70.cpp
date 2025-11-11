// Name: sound_sndmain.cpp_CSfxOptions_ctor_FUN_005add70
// Address: 005add70
// Address Range: [[005add70, 005add81]]
// Convention: __cdecl
// Signature: CSfxOptions * sound_sndmain.cpp_CSfxOptions_ctor_FUN_005add70(CSfxOptions * this_ptr)
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_reset_FUN_005a8830

#include "nocturne.h"

CSfxOptions * __cdecl sound_sndmain_cpp_CSfxOptions_ctor_FUN_005add70(CSfxOptions *this_ptr)

{
  sound_sndmain_cpp_CSfxSlot_reset_FUN_005a8830((CSfxSlot *)this_ptr);
  return this_ptr;
}


// Assembly code:
// 005add70: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxOptions_ctor_FUN_005add70
// 005add71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005add75: PUSH EBX
// 005add76: CALL sound_sndmain.cpp_CSfxSlot_reset_FUN_005a8830
//   XREF to: 005a8830 (UNCONDITIONAL_CALL)
// 005add7b: ADD ESP,0x4
// 005add7e: MOV EAX,EBX
// 005add80: POP EBX
// 005add81: RET

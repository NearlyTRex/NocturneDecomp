// Name: sound_sndmain.cpp_SfxOptions_ctor_FUN_005add70
// Address: 005add70
// Address Range: [[005add70, 005add81]]
// Convention: __cdecl
// Signature: SfxOptions * sound_sndmain.cpp_SfxOptions_ctor_FUN_005add70(SfxOptions * this_ptr)
// Function calls:
//   sound_sndmain.cpp_FUN_005a8830

#include "nocturne.h"

SfxOptions * __cdecl sound_sndmain_cpp_SfxOptions_ctor_FUN_005add70(SfxOptions *this_ptr)

{
  sound_sndmain_cpp_FUN_005a8830();
  return this_ptr;
}


// Assembly code:
// 005add70: PUSH EBX
//   Label: sound_sndmain.cpp_SfxOptions_ctor_FUN_005add70
// 005add71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005add75: PUSH EBX
// 005add76: CALL sound_sndmain.cpp_FUN_005a8830
//   XREF to: 005a8830 (UNCONDITIONAL_CALL)
// 005add7b: ADD ESP,0x4
// 005add7e: MOV EAX,EBX
// 005add80: POP EBX
// 005add81: RET

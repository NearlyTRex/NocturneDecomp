// Name: sound_sndmain.cpp_SfxSample_dtor_FUN_005a6150
// Address: 005a6150
// Address Range: [[005a6150, 005a6161]]
// Convention: __cdecl
// Signature: SfxSample * sound_sndmain.cpp_SfxSample_dtor_FUN_005a6150(SfxSample * this_ptr)
// Function calls:
//   sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0

#include "nocturne.h"

SfxSample * __cdecl sound_sndmain_cpp_SfxSample_dtor_FUN_005a6150(SfxSample *this_ptr)

{
  sound_sndmain_cpp_SfxSample_freeMemory_FUN_005a62c0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 005a6150: PUSH EBX
//   Label: sound_sndmain.cpp_SfxSample_dtor_FUN_005a6150
// 005a6151: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a6155: PUSH EBX
// 005a6156: CALL sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a615b: ADD ESP,0x4
// 005a615e: MOV EAX,EBX
// 005a6160: POP EBX
// 005a6161: RET

// Name: core_sound.cpp_CSound_FUN_005b2ce0
// Address: 005b2ce0
// Address Range: [[005b2ce0, 005b2cfd]]
// Convention: __cdecl
// Signature: CSound * core_sound.cpp_CSound_FUN_005b2ce0(CSound * this_ptr)
// Cross-references:
//   core_sound.cpp_staticInit_FUN_005b1760 (005b1760) at 005b1765 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00
//   sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0

#include "nocturne.h"

CSound * __cdecl core_sound_cpp_CSound_FUN_005b2ce0(CSound *this_ptr)

{
  this_ptr->field0_0x0 = 0x1400;
  sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005a9de0(3);
  sound_sndmain_cpp_resetSoundSystemDefaults_FUN_005aae00();
  return this_ptr;
}


// Assembly code:
// 005b2ce0: PUSH EBX
//   Label: core_sound.cpp_CSound_FUN_005b2ce0
// 005b2ce1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b2ce5: PUSH 0x3
// 005b2ce7: MOV dword ptr [EBX],0x1400
// 005b2ced: CALL sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0
//   XREF to: 005a9de0 (UNCONDITIONAL_CALL)
// 005b2cf2: ADD ESP,0x4
// 005b2cf5: CALL sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00
//   XREF to: 005aae00 (UNCONDITIONAL_CALL)
// 005b2cfa: MOV EAX,EBX
// 005b2cfc: POP EBX
// 005b2cfd: RET

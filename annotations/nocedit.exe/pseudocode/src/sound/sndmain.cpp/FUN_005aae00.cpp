// Name: sound_sndmain.cpp_FUN_005aae00
// Address: 005aae00
// Address Range: [[005aae00, 005aaeab]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aae00()
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b2ce0 (005b2ce0) at 005b2cf5 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   sound_sndmain.cpp_FUN_005aa020
//   sound_sndmain.cpp_FUN_005aa0a0
//   sound_sndmain.cpp_FUN_005aa1c0
//   sound_sndmain.cpp_FUN_005aa240
//   sound_sndmain.cpp_FUN_005ab990
//   sound_sndmain.cpp_GetCurrentSoundDevice_FUN_005ab6c0
//   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
//   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005aae00(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0();
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  sound_sndmain_cpp_FUN_005aa240();
  sound_sndmain_cpp_FUN_005aa020();
  sound_sndmain_cpp_FUN_005aa0a0();
  sound_sndmain_cpp_FUN_005aa1c0();
  iVar1 = sound_sndmain_cpp_GetCurrentSoundDevice_FUN_005ab6c0();
  sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar1);
  sound_sndmain_cpp_FUN_005ab990();
  sound_sndmain_cpp_selectRecordingDevice_FUN_005ab860();
  return;
}


// Assembly code:
// 005aae00: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005aae00
// 005aae01: XOR EBX,EBX
// 005aae03: PUSH 0x3f800000
//   Label: LAB_005aae03
// 005aae08: PUSH EBX
// 005aae09: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 005aae0e: ADD ESP,0x8
// 005aae11: PUSH 0x1
// 005aae13: PUSH EBX
// 005aae14: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005aae19: INC EBX
// 005aae1a: ADD ESP,0x8
// 005aae1d: CMP EBX,0x20
// 005aae20: JL 0x005aae03
//   XREF to: 005aae03 (CONDITIONAL_JUMP)
// 005aae22: PUSH 0x3ff00000
// 005aae27: PUSH 0x0
// 005aae29: CALL sound_sndmain.cpp_FUN_005aa240
//   XREF to: 005aa240 (UNCONDITIONAL_CALL)
// 005aae2e: ADD ESP,0x8
// 005aae31: PUSH 0x0
// 005aae33: PUSH 0x0
// 005aae35: PUSH 0x0
// 005aae37: PUSH 0x0
// 005aae39: PUSH 0x0
// 005aae3b: PUSH 0x0
// 005aae3d: CALL sound_sndmain.cpp_FUN_005aa020
//   XREF to: 005aa020 (UNCONDITIONAL_CALL)
// 005aae42: ADD ESP,0x18
// 005aae45: PUSH 0x3ff00000
// 005aae4a: PUSH 0x0
// 005aae4c: PUSH 0x0
// 005aae4e: PUSH 0x0
// 005aae50: PUSH 0x0
// 005aae52: PUSH 0x0
// 005aae54: PUSH 0x0
// 005aae56: PUSH 0x0
// 005aae58: PUSH 0x3ff00000
// 005aae5d: PUSH 0x0
// 005aae5f: PUSH 0x0
// 005aae61: PUSH 0x0
// 005aae63: PUSH 0x0
// 005aae65: PUSH 0x0
// 005aae67: PUSH 0x0
// 005aae69: PUSH 0x0
// 005aae6b: PUSH 0x3ff00000
// 005aae70: PUSH 0x0
// 005aae72: CALL sound_sndmain.cpp_FUN_005aa0a0
//   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)
// 005aae77: ADD ESP,0x48
// 005aae7a: PUSH 0x0
// 005aae7c: PUSH 0x0
// 005aae7e: PUSH 0x0
// 005aae80: PUSH 0x0
// 005aae82: PUSH 0x0
// 005aae84: PUSH 0x0
// 005aae86: CALL sound_sndmain.cpp_FUN_005aa1c0
//   XREF to: 005aa1c0 (UNCONDITIONAL_CALL)
// 005aae8b: ADD ESP,0x18
// 005aae8e: CALL sound_sndmain.cpp_GetCurrentSoundDevice_FUN_005ab6c0
//   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)
// 005aae93: PUSH EAX
// 005aae94: CALL sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
//   XREF to: 005ab4c0 (UNCONDITIONAL_CALL)
// 005aae99: ADD ESP,0x4
// 005aae9c: CALL sound_sndmain.cpp_FUN_005ab990
//   XREF to: 005ab990 (UNCONDITIONAL_CALL)
// 005aaea1: PUSH EAX
// 005aaea2: CALL sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
//   XREF to: 005ab860 (UNCONDITIONAL_CALL)
// 005aaea7: ADD ESP,0x4
// 005aaeaa: POP EBX
// 005aaeab: RET

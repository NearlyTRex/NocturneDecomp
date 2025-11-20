// Name: core_sound.cpp_CSound_FUN_005b2f70
// Address: 005b2f70
// Address Range: [[005b2f70, 005b2fbb]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_FUN_005b2f70(CSound * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db754 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dcf63 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053ec32 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SoundAudioInitialized
//   undefined4 DAT_03f6b7c8
//   undefined4 DAT_03f6b7d8
//   uint g_TrainRailNoiseHandle
//   uint g_TrainExteriorAmbientHandle
// Function calls:
//   sound_sndmain.cpp_killSfx_FUN_005a9c40
//   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_FUN_005b2f70(CSound *this_ptr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  g_SoundAudioInitialized = 0;
  do {
    puVar1 = (uint *)((int)&g_TrainNoiseArray[0].sound_handle + iVar2);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainRailNoiseHandle);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  return;
}


// Assembly code:
// 005b2f70: PUSH EBX
//   Label: core_sound.cpp_CSound_FUN_005b2f70
// 005b2f71: PUSH ESI
// 005b2f72: XOR EDX,EDX
// 005b2f74: XOR EBX,EBX
// 005b2f76: MOV dword ptr [0x03f6b7ac],EDX
//   XREF to: 03f6b7ac (WRITE)
// 005b2f7c: MOV ECX,dword ptr [EBX + 0x3f6b7c8]
//   Label: LAB_005b2f7c
//   XREF to: 03f6b7c8 (READ)
//   XREF to: 03f6b7d8 (READ)
// 005b2f82: PUSH ECX
// 005b2f83: ADD EBX,0x10
// 005b2f86: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b2f8b: ADD ESP,0x4
// 005b2f8e: CMP EBX,0xa0
// 005b2f94: JNZ 0x005b2f7c
//   XREF to: 005b2f7c (CONDITIONAL_JUMP)
// 005b2f96: MOV EBX,dword ptr [0x03f6b870]
//   XREF to: 03f6b870 (READ)
// 005b2f9c: PUSH EBX
// 005b2f9d: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b2fa2: ADD ESP,0x4
// 005b2fa5: MOV ESI,dword ptr [0x03f6b874]
//   XREF to: 03f6b874 (READ)
// 005b2fab: PUSH ESI
// 005b2fac: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b2fb1: ADD ESP,0x4
// 005b2fb4: CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 005b2fb9: POP ESI
// 005b2fba: POP EBX
// 005b2fbb: RET

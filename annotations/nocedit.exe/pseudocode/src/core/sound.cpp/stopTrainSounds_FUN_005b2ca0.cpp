// Name: core_sound.cpp_stopTrainSounds_FUN_005b2ca0
// Address: 005b2ca0
// Address Range: [[005b2ca0, 005b2cdc]]
// Convention: __watcallRegister
// Signature: void core_sound.cpp_stopTrainSounds_FUN_005b2ca0(void)
// Globals:
//   undefined4 DAT_03f6b7c8
//   undefined4 DAT_03f6b7d8
//   uint g_TrainRailNoiseHandle
//   uint g_TrainExteriorAmbientHandle
// Function calls:
//   sound_sndmain.cpp_killSfx_FUN_005a9c40

#include "nocturne.h"

void core_sound_cpp_stopTrainSounds_FUN_005b2ca0(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = (uint *)((int)&g_TrainNoiseArray[0].sound_handle + iVar2);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainRailNoiseHandle);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
  return;
}


// Assembly code:
// 005b2ca0: PUSH EBX
//   Label: core_sound.cpp_stopTrainSounds_FUN_005b2ca0
// 005b2ca1: XOR EBX,EBX
// 005b2ca3: MOV EDX,dword ptr [EBX + 0x3f6b7c8]
//   Label: LAB_005b2ca3
//   XREF to: 03f6b7c8 (READ)
//   XREF to: 03f6b7d8 (READ)
// 005b2ca9: PUSH EDX
// 005b2caa: ADD EBX,0x10
// 005b2cad: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b2cb2: ADD ESP,0x4
// 005b2cb5: CMP EBX,0xa0
// 005b2cbb: JNZ 0x005b2ca3
//   XREF to: 005b2ca3 (CONDITIONAL_JUMP)
// 005b2cbd: MOV ECX,dword ptr [0x03f6b870]
//   XREF to: 03f6b870 (READ)
// 005b2cc3: PUSH ECX
// 005b2cc4: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b2cc9: ADD ESP,0x4
// 005b2ccc: MOV EBX,dword ptr [0x03f6b874]
//   XREF to: 03f6b874 (READ)
// 005b2cd2: PUSH EBX
// 005b2cd3: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b2cd8: ADD ESP,0x4
// 005b2cdb: POP EBX
// 005b2cdc: RET

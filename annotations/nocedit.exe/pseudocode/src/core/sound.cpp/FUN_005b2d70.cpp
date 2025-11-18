// Name: core_sound.cpp_FUN_005b2d70
// Address: 005b2d70
// Address Range: [[005b2d70, 005b2dc7]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b2d70()
// Globals:
//   undefined4 DAT_03f6b7b0
// Function calls:
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sound_cpp_FUN_005b2d70(void)

{
  int iVar1;
  float fVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar1 != 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,fVar2 * _DAT_03f6b7b0);
    return;
  }
  sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  return;
}


// Assembly code:
// 005b2d70: SUB ESP,0x4
//   Label: core_sound.cpp_FUN_005b2d70
// 005b2d73: PUSH 0x0
// 005b2d75: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 005b2d7a: ADD ESP,0x4
// 005b2d7d: TEST EAX,EAX
// 005b2d7f: JZ 0x005b2db9
//   XREF to: 005b2db9 (CONDITIONAL_JUMP)
// 005b2d81: PUSH 0x1
// 005b2d83: PUSH 0x3
// 005b2d85: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005b2d8a: ADD ESP,0x8
// 005b2d8d: PUSH 0x0
// 005b2d8f: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005b2d94: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005b2d98: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005b2d9c: ADD ESP,0x4
// 005b2d9f: FMUL float ptr [0x03f6b7b0]
//   XREF to: 03f6b7b0 (READ)
// 005b2da5: SUB ESP,0x4
// 005b2da8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005b2dab: PUSH 0x3
// 005b2dad: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 005b2db2: ADD ESP,0x8
// 005b2db5: ADD ESP,0x4
// 005b2db8: RET
// 005b2db9: PUSH EAX
//   Label: LAB_005b2db9
// 005b2dba: PUSH 0x3
// 005b2dbc: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005b2dc1: ADD ESP,0x8
// 005b2dc4: ADD ESP,0x4
// 005b2dc7: RET

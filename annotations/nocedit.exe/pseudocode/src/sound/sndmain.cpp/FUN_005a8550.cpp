// Name: sound_sndmain.cpp_FUN_005a8550
// Address: 005a8550
// Address Range: [[005a8550, 005a8570]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8550()
// Cross-references:
//   sound_snddx.cpp_DirectSoundDevice_getSfxPlaybackPos_FUN_005afd60 (005afd60) at 005afdcd [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a4450 (005a4450) at 005a44f2 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aa6a0 (005aa6a0) at 005aa762 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005add90 (005add90) at 005add95 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4f84 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReallocSomething_FUN_005a6170 (005a6170) at 005a6267 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_lock_FUN_005a6430 (005a6430) at 005a64ba [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_seek_FUN_005a65a0 (005a65a0) at 005a664c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a6889 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005a8550(undefined4 param_1) */

int sound_sndmain_cpp_FUN_005a8550(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x104) * *(int *)(in_stack_00000004 + 0x108);
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}


// Assembly code:
// 005a8550: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_FUN_005a8550
//   XREF to: Stack[0x4] (READ)
// 005a8554: MOV ECX,dword ptr [EAX + 0x108]
// 005a855a: MOV EDX,dword ptr [EAX + 0x104]
// 005a8560: IMUL EDX,ECX
// 005a8563: MOV EAX,EDX
// 005a8565: SAR EDX,0x1f
// 005a8568: SHL EDX,0x3
// 005a856b: SBB EAX,EDX
// 005a856d: SAR EAX,0x3
// 005a8570: RET

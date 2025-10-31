// Name: sound_sndmain.cpp_FUN_005a8480
// Address: 005a8480
// Address Range: [[005a8480, 005a84ca]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8480()
// Cross-references:
//   core_event.cpp_FUN_004b0db0 (004b0db0) at 004b0e80 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da941 [UNCONDITIONAL_CALL]
//   core_sound.cpp_GetSampleInfo_FUN_005b3ba0 (005b3ba0) at 005b3bb1 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de4c4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad3c2 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_ctor_FUN_005a60f0 (005a60f0) at 005a60f5 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0066315c
//   undefined4 DAT_00663160
//   undefined4 DAT_00681b38
//   undefined4 DAT_03f5daa0
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 sound_sndmain.cpp_FUN_005a8480(undefined4 param_1) */

void * sound_sndmain_cpp_FUN_005a8480(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *in_stack_00000004;
  
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004,0,0x150);
  fVar1 = (float)_DAT_00681b38;
  fVar2 = _DAT_03f5daa0 * fVar1;
  fVar3 = _DAT_00663160 * fVar1;
  *(float *)((int)in_stack_00000004 + 0x114) = _DAT_0066315c * fVar1;
  *(float *)((int)in_stack_00000004 + 0x118) = fVar2;
  *(float *)((int)in_stack_00000004 + 0x11c) = fVar3;
  return in_stack_00000004;
}


// Assembly code:
// 005a8480: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a8480
// 005a8481: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a8485: PUSH 0x150
// 005a848a: PUSH 0x0
// 005a848c: PUSH EBX
// 005a848d: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005a8492: FLD double ptr [0x00681b38]
//   XREF to: 00681b38 (READ)
// 005a8498: FLD float ptr [0x0066315c]
//   XREF to: 0066315c (READ)
// 005a849e: FMUL ST1
// 005a84a0: FLD float ptr [0x03f5daa0]
//   XREF to: 03f5daa0 (READ)
// 005a84a6: FMUL ST2
// 005a84a8: FLD float ptr [0x00663160]
//   XREF to: 00663160 (READ)
// 005a84ae: FMULP ST3
// 005a84b0: ADD ESP,0xc
// 005a84b3: MOV EAX,EBX
// 005a84b5: FXCH
// 005a84b7: FSTP float ptr [EBX + 0x114]
// 005a84bd: FSTP float ptr [EBX + 0x118]
// 005a84c3: FSTP float ptr [EBX + 0x11c]
// 005a84c9: POP EBX
// 005a84ca: RET

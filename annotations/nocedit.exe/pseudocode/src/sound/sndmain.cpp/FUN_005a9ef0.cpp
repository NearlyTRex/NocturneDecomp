// Name: sound_sndmain.cpp_FUN_005a9ef0
// Address: 005a9ef0
// Address Range: [[005a9ef0, 005a9f22]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a9ef0()
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da92a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_SfxSlots[0].field7_0x74
//   undefined4 DAT_03f5db1c
//   undefined4 DAT_03f5dc40
//   undefined4 DAT_03f5dc44

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005a9ef0() */

uint sound_sndmain_cpp_FUN_005a9ef0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  while ((*(int *)(g_SfxSlots[0].field_124 + iVar1 + -4) == 0 ||
         (*(int *)(g_SfxSlots[0].field_124 + iVar1 + -8) == 0))) {
    iVar1 = iVar1 + 0x128;
    uVar2 = uVar2 + 1;
    if (0x49ff < iVar1) {
      return 0;
    }
  }
  return *(int *)(g_SfxSlots[0].field_124 + iVar1 + -8) << 6 | uVar2;
}


// Assembly code:
// 005a9ef0: PUSH ESI
//   Label: sound_sndmain.cpp_FUN_005a9ef0
// 005a9ef1: XOR EAX,EAX
// 005a9ef3: XOR EDX,EDX
// 005a9ef5: XOR ECX,ECX
// 005a9ef7: CMP ECX,dword ptr [EAX + 0x3f5db1c]
//   Label: LAB_005a9ef7
//   XREF to: 03f5db1c (READ)
//   XREF to: 03f5dc44 (READ)
// 005a9efd: JZ 0x005a9f09
//   XREF to: 005a9f09 (CONDITIONAL_JUMP)
// 005a9eff: MOV ESI,dword ptr [EAX + 0x3f5db18]
//   XREF to: 03f5db18 (READ)
//   XREF to: 03f5dc40 (READ)
// 005a9f05: CMP ECX,ESI
// 005a9f07: JNZ 0x005a9f1a
//   XREF to: 005a9f1a (CONDITIONAL_JUMP)
// 005a9f09: ADD EAX,0x128
//   Label: LAB_005a9f09
// 005a9f0e: INC EDX
// 005a9f0f: CMP EAX,0x4a00
// 005a9f14: JL 0x005a9ef7
//   XREF to: 005a9ef7 (CONDITIONAL_JUMP)
// 005a9f16: XOR EAX,EAX
// 005a9f18: POP ESI
// 005a9f19: RET
// 005a9f1a: MOV EAX,ESI
//   Label: LAB_005a9f1a
// 005a9f1c: SHL EAX,0x6
// 005a9f1f: OR EAX,EDX
// 005a9f21: POP ESI
// 005a9f22: RET

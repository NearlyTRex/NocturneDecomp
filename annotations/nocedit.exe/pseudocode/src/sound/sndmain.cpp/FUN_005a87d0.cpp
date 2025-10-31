// Name: sound_sndmain.cpp_FUN_005a87d0
// Address: 005a87d0
// Address Range: [[005a87d0, 005a8809]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a87d0()
// Cross-references:
//   sound_sndmain.cpp_FUN_005a86f0 (005a86f0) at 005a8726 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a8810 (005a8810) at 005a8815 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollHwHandle_FUN_005a7fe0 (005a7fe0) at 005a8055 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a67f5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_updatePlaybackPos_FUN_005a8170 (005a8170) at 005a8329 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005a87d0(undefined4 param_1) */

undefined4 sound_sndmain_cpp_FUN_005a87d0(void)

{
  int in_stack_00000004;
  
  if (((*(int *)(in_stack_00000004 + 0x124) < 2) &&
      (*(int *)(in_stack_00000004 + 0x110) == *(int *)(in_stack_00000004 + 0x128))) &&
     (*(int *)(in_stack_00000004 + 0x13c) < 1)) {
    if (*(int *)(in_stack_00000004 + 0x13c) == 0) {
      return 1;
    }
    return 0;
  }
  return 2;
}


// Assembly code:
// 005a87d0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a87d0
// 005a87d1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a87d5: CMP dword ptr [EAX + 0x124],0x1
// 005a87dc: JG 0x005a87f6
//   XREF to: 005a87f6 (CONDITIONAL_JUMP)
// 005a87de: MOV ECX,dword ptr [EAX + 0x110]
// 005a87e4: CMP ECX,dword ptr [EAX + 0x128]
// 005a87ea: JNZ 0x005a87f6
//   XREF to: 005a87f6 (CONDITIONAL_JUMP)
// 005a87ec: MOV EBX,dword ptr [EAX + 0x13c]
// 005a87f2: TEST EBX,EBX
// 005a87f4: JLE 0x005a87fd
//   XREF to: 005a87fd (CONDITIONAL_JUMP)
// 005a87f6: MOV EAX,0x2
//   Label: LAB_005a87f6
// 005a87fb: POP EBX
// 005a87fc: RET
// 005a87fd: JNZ 0x005a8806
//   Label: LAB_005a87fd
//   XREF to: 005a8806 (CONDITIONAL_JUMP)
// 005a87ff: MOV EAX,0x1
// 005a8804: POP EBX
// 005a8805: RET
// 005a8806: XOR EAX,EAX
//   Label: LAB_005a8806
// 005a8808: POP EBX
// 005a8809: RET

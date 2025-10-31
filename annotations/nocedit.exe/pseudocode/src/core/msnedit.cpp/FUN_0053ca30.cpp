// Name: core_msnedit.cpp_FUN_0053ca30
// Address: 0053ca30
// Address Range: [[0053ca30, 0053ca7e]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053ca30()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a48b [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053ca30(undefined4 param_1, undefined4 param_2) */

void core_msnedit_cpp_FUN_0053ca30(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000008;
  if (in_stack_00000008 == 0) {
    iVar1 = in_stack_00000004[0x152];
  }
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar1 + 0x14c);
      if (iVar1 == 0) {
        iVar1 = in_stack_00000004[0x152];
      }
      if (iVar1 == in_stack_00000008) {
        return;
      }
      if ((*in_stack_00000004 == *(int *)(iVar1 + 0x2c)) && (*(int *)(iVar1 + 0x148) == 0)) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 1000);
  }
  return;
}


// Assembly code:
// 0053ca30: PUSH ESI
//   Label: core_msnedit.cpp_FUN_0053ca30
// 0053ca31: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0053ca35: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0053ca39: MOV EAX,ESI
// 0053ca3b: TEST ESI,ESI
// 0053ca3d: JNZ 0x0053ca45
//   XREF to: 0053ca45 (CONDITIONAL_JUMP)
// 0053ca3f: MOV EAX,dword ptr [ECX + 0x548]
// 0053ca45: TEST EAX,EAX
//   Label: LAB_0053ca45
// 0053ca47: JZ 0x0053ca71
//   XREF to: 0053ca71 (CONDITIONAL_JUMP)
// 0053ca49: PUSH EDI
// 0053ca4a: XOR EDX,EDX
// 0053ca4c: MOV EAX,dword ptr [EAX + 0x14c]
//   Label: LAB_0053ca4c
// 0053ca52: TEST EAX,EAX
// 0053ca54: JNZ 0x0053ca5c
//   XREF to: 0053ca5c (CONDITIONAL_JUMP)
// 0053ca56: MOV EAX,dword ptr [ECX + 0x548]
// 0053ca5c: CMP EAX,ESI
//   Label: LAB_0053ca5c
// 0053ca5e: JZ 0x0053ca70
//   XREF to: 0053ca70 (CONDITIONAL_JUMP)
// 0053ca60: MOV EDI,dword ptr [ECX]
// 0053ca62: CMP EDI,dword ptr [EAX + 0x2c]
// 0053ca65: JZ 0x0053ca73
//   XREF to: 0053ca73 (CONDITIONAL_JUMP)
// 0053ca67: INC EDX
//   Label: LAB_0053ca67
// 0053ca68: CMP EDX,0x3e8
// 0053ca6e: JL 0x0053ca4c
//   XREF to: 0053ca4c (CONDITIONAL_JUMP)
// 0053ca70: POP EDI
//   Label: LAB_0053ca70
// 0053ca71: POP ESI
//   Label: LAB_0053ca71
// 0053ca72: RET
// 0053ca73: CMP dword ptr [EAX + 0x148],0x0
//   Label: LAB_0053ca73
// 0053ca7a: JNZ 0x0053ca67
//   XREF to: 0053ca67 (CONDITIONAL_JUMP)
// 0053ca7c: POP EDI
// 0053ca7d: POP ESI
// 0053ca7e: RET

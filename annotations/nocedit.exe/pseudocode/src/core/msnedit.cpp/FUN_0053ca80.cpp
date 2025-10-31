// Name: core_msnedit.cpp_FUN_0053ca80
// Address: 0053ca80
// Address Range: [[0053ca80, 0053cace]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053ca80()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539cf3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053ca80(undefined4 param_1, undefined4 param_2) */

void core_msnedit_cpp_FUN_0053ca80(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000008;
  if (in_stack_00000008 == 0) {
    iVar1 = in_stack_00000004[0x153];
  }
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar1 + 0x150);
      if (iVar1 == 0) {
        iVar1 = in_stack_00000004[0x153];
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
// 0053ca80: PUSH ESI
//   Label: core_msnedit.cpp_FUN_0053ca80
// 0053ca81: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0053ca85: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0053ca89: MOV EAX,ESI
// 0053ca8b: TEST ESI,ESI
// 0053ca8d: JNZ 0x0053ca95
//   XREF to: 0053ca95 (CONDITIONAL_JUMP)
// 0053ca8f: MOV EAX,dword ptr [ECX + 0x54c]
// 0053ca95: TEST EAX,EAX
//   Label: LAB_0053ca95
// 0053ca97: JZ 0x0053cac1
//   XREF to: 0053cac1 (CONDITIONAL_JUMP)
// 0053ca99: PUSH EDI
// 0053ca9a: XOR EDX,EDX
// 0053ca9c: MOV EAX,dword ptr [EAX + 0x150]
//   Label: LAB_0053ca9c
// 0053caa2: TEST EAX,EAX
// 0053caa4: JNZ 0x0053caac
//   XREF to: 0053caac (CONDITIONAL_JUMP)
// 0053caa6: MOV EAX,dword ptr [ECX + 0x54c]
// 0053caac: CMP EAX,ESI
//   Label: LAB_0053caac
// 0053caae: JZ 0x0053cac0
//   XREF to: 0053cac0 (CONDITIONAL_JUMP)
// 0053cab0: MOV EDI,dword ptr [ECX]
// 0053cab2: CMP EDI,dword ptr [EAX + 0x2c]
// 0053cab5: JZ 0x0053cac3
//   XREF to: 0053cac3 (CONDITIONAL_JUMP)
// 0053cab7: INC EDX
//   Label: LAB_0053cab7
// 0053cab8: CMP EDX,0x3e8
// 0053cabe: JL 0x0053ca9c
//   XREF to: 0053ca9c (CONDITIONAL_JUMP)
// 0053cac0: POP EDI
//   Label: LAB_0053cac0
// 0053cac1: POP ESI
//   Label: LAB_0053cac1
// 0053cac2: RET
// 0053cac3: CMP dword ptr [EAX + 0x148],0x0
//   Label: LAB_0053cac3
// 0053caca: JNZ 0x0053cab7
//   XREF to: 0053cab7 (CONDITIONAL_JUMP)
// 0053cacc: POP EDI
// 0053cacd: POP ESI
// 0053cace: RET

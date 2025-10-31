// Name: core_skeleton.cpp_FUN_0059fd60
// Address: 0059fd60
// Address Range: [[0059fd60, 0059fdce]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_0059fd60()
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820

#include "nocturne.h"

void core_skeleton_cpp_FUN_0059fd60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  iVar3 = 0;
  iVar2 = in_stack_00000004;
  if (0 < *(int *)(iVar1 + 0x28558)) {
    do {
      *(float *)(iVar2 + 0xe8c) = *in_stack_00000008 + *(float *)(iVar2 + 0xe8c);
      *(float *)(iVar2 + 0xe9c) = in_stack_00000008[1] + *(float *)(iVar2 + 0xe9c);
      iVar3 = iVar3 + 1;
      *(float *)(iVar2 + 0xeac) = in_stack_00000008[2] + *(float *)(iVar2 + 0xeac);
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < *(int *)(iVar1 + 0x28558));
  }
  *(undefined4 *)(in_stack_00000004 + 0x2230) = 0xffffffff;
  return;
}


// Assembly code:
// 0059fd60: PUSH EBX
//   Label: core_skeleton.cpp_FUN_0059fd60
// 0059fd61: PUSH ESI
// 0059fd62: PUSH EDI
// 0059fd63: PUSH EBP
// 0059fd64: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059fd68: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059fd6c: PUSH ESI
// 0059fd6d: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059fd72: ADD ESP,0x4
// 0059fd75: MOV ECX,EAX
// 0059fd77: MOV EDI,dword ptr [EAX + 0x28558]
// 0059fd7d: XOR EDX,EDX
// 0059fd7f: TEST EDI,EDI
// 0059fd81: JLE 0x0059fdc0
//   XREF to: 0059fdc0 (CONDITIONAL_JUMP)
// 0059fd83: MOV EAX,ESI
// 0059fd85: FLD float ptr [EBX]
//   Label: LAB_0059fd85
// 0059fd87: FADD float ptr [EAX + 0xe8c]
// 0059fd8d: FSTP float ptr [EAX + 0xe8c]
// 0059fd93: FLD float ptr [EBX + 0x4]
// 0059fd96: FADD float ptr [EAX + 0xe9c]
// 0059fd9c: FSTP float ptr [EAX + 0xe9c]
// 0059fda2: FLD float ptr [EBX + 0x8]
// 0059fda5: FADD float ptr [EAX + 0xeac]
// 0059fdab: INC EDX
// 0059fdac: FSTP float ptr [EAX + 0xeac]
// 0059fdb2: MOV EBP,dword ptr [ECX + 0x28558]
// 0059fdb8: ADD EAX,0x30
// 0059fdbb: CMP EDX,EBP
// 0059fdbd: JL 0x0059fd85
//   XREF to: 0059fd85 (CONDITIONAL_JUMP)
// 0059fdbf: NOP
// 0059fdc0: MOV dword ptr [ESI + 0x2230],0xffffffff
//   Label: LAB_0059fdc0
// 0059fdca: POP EBP
// 0059fdcb: POP EDI
// 0059fdcc: POP ESI
// 0059fdcd: POP EBX
// 0059fdce: RET

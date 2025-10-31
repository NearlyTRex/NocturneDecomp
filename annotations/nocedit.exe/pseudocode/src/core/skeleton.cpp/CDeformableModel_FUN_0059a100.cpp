// Name: core_skeleton.cpp_CDeformableModel_FUN_0059a100
// Address: 0059a100
// Address Range: [[0059a100, 0059a136]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059a100()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0 (0059e0a0) at 0059e682 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f750 (0059f750) at 0059f7a8 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20 (0059ff20) at 0059ff92 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndDunno_FUN_005a00f0 (005a00f0) at 005a0116 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_SomethingUnkWriteMe_FUN_0059f260 (0059f260) at 0059f582 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50 (0059eb50) at 0059ef33 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059f6e0 (0059f6e0) at 0059f70e [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059a100(CDeformableModel* param_1,
   undefined4 param_2, undefined4 param_3) */

int core_skeleton_cpp_CDeformableModel_FUN_0059a100(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = 0;
  if (in_stack_00000008 != in_stack_0000000c) {
    do {
      in_stack_00000008 = *(int *)(in_stack_00000004 + 0x2857c + in_stack_00000008 * 0x24);
      iVar1 = iVar1 + 1;
      if (in_stack_00000008 < 0) {
        if (in_stack_0000000c < 0) {
          return iVar1;
        }
        return -1;
      }
    } while (in_stack_00000008 != in_stack_0000000c);
  }
  return iVar1;
}


// Assembly code:
// 0059a100: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059a100
// 0059a101: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0059a105: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0059a109: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0059a10d: XOR EDX,EDX
// 0059a10f: CMP EAX,ECX
// 0059a111: JZ 0x0059a126
//   XREF to: 0059a126 (CONDITIONAL_JUMP)
// 0059a113: IMUL EAX,EAX,0x24
//   Label: LAB_0059a113
// 0059a116: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2857c]
// 0059a11d: INC EDX
// 0059a11e: TEST EAX,EAX
// 0059a120: JL 0x0059a12a
//   XREF to: 0059a12a (CONDITIONAL_JUMP)
// 0059a122: CMP EAX,ECX
// 0059a124: JNZ 0x0059a113
//   XREF to: 0059a113 (CONDITIONAL_JUMP)
// 0059a126: MOV EAX,EDX
//   Label: LAB_0059a126
// 0059a128: POP EBX
// 0059a129: RET
// 0059a12a: TEST ECX,ECX
//   Label: LAB_0059a12a
// 0059a12c: JL 0x0059a126
//   XREF to: 0059a126 (CONDITIONAL_JUMP)
// 0059a12e: MOV EDX,0xffffffff
// 0059a133: MOV EAX,EDX
// 0059a135: POP EBX
// 0059a136: RET

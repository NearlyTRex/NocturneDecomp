// Name: core_skeledit.cpp_FUN_0058e600
// Address: 0058e600
// Address Range: [[0058e600, 0058e68d]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058e600()
// Cross-references:
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597c17 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e4e0 (0058e4e0) at 0058e5bc [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_FUN_0058e600(int param_1, float* param_2, undefined4 param_3)
    */

void core_skeledit_cpp_FUN_0058e600(void)

{
  CSkeleton *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CSkeleton *pCVar4;
  CDeformableModel *in_stack_0000000c;
  float *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  pCVar1 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_0000000c);
  iVar3 = 0;
  if (0 < pCVar1->bone_count) {
    pCVar2 = in_stack_0000000c->vertex_pool;
    pCVar4 = pCVar1;
    do {
      if (pCVar4->bone_list[0].parent_index < 0) {
        pCVar2->x = *in_stack_00000010 + pCVar2->x;
        pCVar2->y = in_stack_00000010[1] + pCVar2->y;
        pCVar2->z = in_stack_00000010[2] + pCVar2->z;
      }
      pCVar4 = (CSkeleton *)((pCVar4->motion_list).state_names[1] + 2);
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < pCVar1->bone_count);
  }
  in_stack_0000000c->bbox_pool[0].min.x = *in_stack_00000010 + in_stack_0000000c->bbox_pool[0].min.x
  ;
  in_stack_0000000c->bbox_pool[0].min.y =
       in_stack_00000010[1] + in_stack_0000000c->bbox_pool[0].min.y;
  in_stack_0000000c->bbox_pool[0].min.z =
       in_stack_00000010[2] + in_stack_0000000c->bbox_pool[0].min.z;
  return;
}


// Assembly code:
// 0058e600: PUSH 0x18
//   Label: core_skeledit.cpp_FUN_0058e600
// 0058e605: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058e60a: PUSH EBX
// 0058e60b: PUSH ESI
// 0058e60c: PUSH EDI
// 0058e60d: PUSH EBP
// 0058e60e: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058e612: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058e616: PUSH EDI
// 0058e617: CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 0058e61c: ADD ESP,0x4
// 0058e61f: MOV ESI,EAX
// 0058e621: MOV EDX,dword ptr [EAX + 0x28558]
// 0058e627: XOR ECX,ECX
// 0058e629: TEST EDX,EDX
// 0058e62b: JLE 0x0058e651
//   XREF to: 0058e651 (CONDITIONAL_JUMP)
// 0058e62d: LEA EBP,[EDI + 0x7c90]
// 0058e633: MOV EDX,EAX
// 0058e635: MOV EAX,EBP
// 0058e637: CMP dword ptr [EDX + 0x2857c],0x0
//   Label: LAB_0058e637
// 0058e63e: JL 0x0058e674
//   XREF to: 0058e674 (CONDITIONAL_JUMP)
// 0058e640: ADD EDX,0x24
//   Label: LAB_0058e640
// 0058e643: INC ECX
// 0058e644: MOV EBP,dword ptr [ESI + 0x28558]
// 0058e64a: ADD EAX,0xc
// 0058e64d: CMP ECX,EBP
// 0058e64f: JL 0x0058e637
//   XREF to: 0058e637 (CONDITIONAL_JUMP)
// 0058e651: LEA EAX,[EDI + 0x8140]
//   Label: LAB_0058e651
// 0058e657: FLD float ptr [EBX]
// 0058e659: FADD float ptr [EAX]
// 0058e65b: FSTP float ptr [EAX]
// 0058e65d: FLD float ptr [EBX + 0x4]
// 0058e660: FADD float ptr [EAX + 0x4]
// 0058e663: FSTP float ptr [EAX + 0x4]
// 0058e666: FLD float ptr [EBX + 0x8]
// 0058e669: FADD float ptr [EAX + 0x8]
// 0058e66c: FSTP float ptr [EAX + 0x8]
// 0058e66f: POP EBP
// 0058e670: POP EDI
// 0058e671: POP ESI
// 0058e672: POP EBX
// 0058e673: RET
// 0058e674: FLD float ptr [EBX]
//   Label: LAB_0058e674
// 0058e676: FADD float ptr [EAX]
// 0058e678: FSTP float ptr [EAX]
// 0058e67a: FLD float ptr [EBX + 0x4]
// 0058e67d: FADD float ptr [EAX + 0x4]
// 0058e680: FSTP float ptr [EAX + 0x4]
// 0058e683: FLD float ptr [EBX + 0x8]
// 0058e686: FADD float ptr [EAX + 0x8]
// 0058e689: FSTP float ptr [EAX + 0x8]
// 0058e68c: JMP 0x0058e640
//   XREF to: 0058e640 (UNCONDITIONAL_JUMP)

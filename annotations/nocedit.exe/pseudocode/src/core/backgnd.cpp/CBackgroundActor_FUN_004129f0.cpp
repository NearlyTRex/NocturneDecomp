// Name: core_backgnd.cpp_CBackgroundActor_FUN_004129f0
// Address: 004129f0
// Address Range: [[004129f0, 00412a2e]]
// Convention: __cdecl
// Signature: int core_backgnd.cpp_CBackgroundActor_FUN_004129f0(CBackgroundActor * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int __cdecl core_backgnd_cpp_CBackgroundActor_FUN_004129f0(CBackgroundActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int in_stack_0000000c;
  
  if (this_ptr->collide_with_me == 0) {
    return 0;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
    *(char **)(in_stack_0000000c + 0x24) = this_ptr->model_name;
  }
  return 1;
}


// Assembly code:
// 004129f0: PUSH EBX
//   Label: core_backgnd.cpp_CBackgroundActor_FUN_004129f0
// 004129f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004129f5: CMP dword ptr [EBX + 0x2d4],0x0
// 004129fc: JNZ 0x00412a02
//   XREF to: 00412a02 (CONDITIONAL_JUMP)
// 004129fe: XOR EAX,EAX
// 00412a00: POP EBX
// 00412a01: RET
// 00412a02: LEA EAX,[EBX + 0x158]
//   Label: LAB_00412a02
// 00412a08: PUSH EAX
// 00412a09: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00412a0e: MOV ECX,dword ptr [EAX + 0x5698]
// 00412a14: ADD ESP,0x4
// 00412a17: TEST ECX,ECX
// 00412a19: JZ 0x00412a28
//   XREF to: 00412a28 (CONDITIONAL_JUMP)
// 00412a1b: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00412a1f: ADD EBX,0x158
// 00412a25: MOV dword ptr [EAX + 0x24],EBX
// 00412a28: MOV EAX,0x1
//   Label: LAB_00412a28
// 00412a2d: POP EBX
// 00412a2e: RET

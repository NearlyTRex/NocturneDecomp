// Name: core_door.cpp_CDoor_hasCollision_FUN_00480d90
// Address: 00480d90
// Address Range: [[00480d90, 00480dc7]]
// Convention: __cdecl
// Signature: int core_door.cpp_CDoor_hasCollision_FUN_00480d90(CDoor * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_hasCollision_FUN_00480d90(CDoor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return 1;
  }
  *(int *)(in_stack_0000000c + 0x24) = in_stack_00000008 + 0x158;
  return 1;
}


// Assembly code:
// 00480d90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_door.cpp_CDoor_hasCollision_FUN_00480d90
//   XREF to: Stack[0x4] (READ)
// 00480d94: ADD EAX,0x158
// 00480d99: PUSH EAX
// 00480d9a: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00480d9f: MOV EDX,dword ptr [EAX + 0x5698]
// 00480da5: ADD ESP,0x4
// 00480da8: TEST EDX,EDX
// 00480daa: JNZ 0x00480db2
//   XREF to: 00480db2 (CONDITIONAL_JUMP)
// 00480dac: MOV EAX,0x1
// 00480db1: RET
// 00480db2: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00480db2
//   XREF to: Stack[0x4] (READ)
// 00480db6: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00480dba: ADD EAX,0x158
// 00480dbf: MOV dword ptr [EDX + 0x24],EAX
// 00480dc2: MOV EAX,0x1
// 00480dc7: RET

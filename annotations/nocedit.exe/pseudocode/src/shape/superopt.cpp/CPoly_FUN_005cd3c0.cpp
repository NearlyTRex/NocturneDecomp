// Name: shape_superopt.cpp_CPoly_FUN_005cd3c0
// Address: 005cd3c0
// Address Range: [[005cd3c0, 005cd40f]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cd3c0(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cd3c0(CPoly *this_ptr)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint in_stack_00000008;
  
  pvVar2 = this_ptr->parent_obj->vertex_data;
  iVar3 = this_ptr->vertex_idx_0 * 0x38;
  uVar4 = ~in_stack_00000008;
  *(uint *)((int)pvVar2 + iVar3 + 0x34) = *(uint *)((int)pvVar2 + iVar3 + 0x34) & uVar4;
  puVar1 = (uint *)((int)pvVar2 + this_ptr->vertex_idx_1 * 0x38 + 0x34);
  *puVar1 = *puVar1 & uVar4;
  puVar1 = (uint *)((int)pvVar2 + this_ptr->vertex_idx_2 * 0x38 + 0x34);
  *puVar1 = *puVar1 & uVar4;
  this_ptr->field8_0x60 = this_ptr->field8_0x60 & uVar4;
  return;
}


// Assembly code:
// 005cd3c0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cd3c0
// 005cd3c1: PUSH ESI
// 005cd3c2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005cd3c6: MOV EAX,dword ptr [EDX + 0x4]
// 005cd3c9: SHL EAX,0x3
// 005cd3cc: MOV EBX,dword ptr [EDX]
// 005cd3ce: MOV ECX,EAX
// 005cd3d0: SHL EAX,0x3
// 005cd3d3: MOV EBX,dword ptr [EBX + 0x4]
// 005cd3d6: SUB EAX,ECX
// 005cd3d8: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005cd3dc: MOV ESI,dword ptr [EBX + EAX*0x1 + 0x34]
// 005cd3e0: NOT ECX
// 005cd3e2: AND ESI,ECX
// 005cd3e4: MOV dword ptr [EBX + EAX*0x1 + 0x34],ESI
// 005cd3e8: MOV EAX,dword ptr [EDX + 0x8]
// 005cd3eb: SHL EAX,0x3
// 005cd3ee: MOV ESI,EAX
// 005cd3f0: SHL EAX,0x3
// 005cd3f3: SUB EAX,ESI
// 005cd3f5: AND dword ptr [EBX + EAX*0x1 + 0x34],ECX
// 005cd3f9: MOV EAX,dword ptr [EDX + 0xc]
// 005cd3fc: SHL EAX,0x3
// 005cd3ff: MOV ESI,EAX
// 005cd401: SHL EAX,0x3
// 005cd404: SUB EAX,ESI
// 005cd406: AND dword ptr [EBX + EAX*0x1 + 0x34],ECX
// 005cd40a: AND dword ptr [EDX + 0x60],ECX
// 005cd40d: POP ESI
// 005cd40e: POP EBX
// 005cd40f: RET

// Name: core_dmodel.cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0
// Address: 0047a3b0
// Address Range: [[0047a3b0, 0047a3d6]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0(CKeyFramedModel *this_ptr)

{
  this_ptr->part_count = 1;
  this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
  this_ptr->part_list[0].poly_count = this_ptr->poly_count;
  return;
}


// Assembly code:
// 0047a3b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0
//   XREF to: Stack[0x4] (READ)
// 0047a3b4: MOV EDX,dword ptr [EAX + 0x104]
// 0047a3ba: MOV dword ptr [EAX + 0x5584],0x1
// 0047a3c4: MOV dword ptr [EAX + 0x5588],EDX
// 0047a3ca: MOV EDX,dword ptr [EAX + 0x110]
// 0047a3d0: MOV dword ptr [EAX + 0x558c],EDX
// 0047a3d6: RET

// Name: core_dmodel.cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0
// Address: 0047a3b0
// Address Range: [[0047a3b0, 0047a3d6]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0(CKeyFramedModel *this_ptr)

{
  this_ptr->part_count = 1;
  this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
  this_ptr->part_list[0].poly_count = this_ptr->poly_count;
  return;
}

// Name: core_dmodel.cpp_SRA4HQPoint_copy_FUN_0047ef60
// Address: 0047ef60
// Address Range: [[0047ef60, 0047ef86]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_SRA4HQPoint_copy_FUN_0047ef60(SRA4HQPoint *this_ptr,SRA4HQPoint *other)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_SRA4HQPoint_copy_FUN_0047ef60(SRA4HQPoint *this_ptr,SRA4HQPoint *other)

{
  (this_ptr->impl).vertex_index = (other->impl).vertex_index;
  (this_ptr->impl).texture_u = (other->impl).texture_u;
  (this_ptr->impl).texture_v = (other->impl).texture_v;
  return;
}

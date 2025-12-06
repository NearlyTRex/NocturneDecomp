// Name: core_dmodel.cpp_SRA4HQPoint_copy_FUN_0047ef60
// Address: 0047ef60
// Address Range: [[0047ef60, 0047ef86]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_SRA4HQPoint_copy_FUN_0047ef60(SRA4HQPoint * this_ptr, SRA4HQPoint * other)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_SRA4HQPoint_copy_FUN_0047ef60(SRA4HQPoint *this_ptr,SRA4HQPoint *other)

{
  *(uint *)this_ptr->field0_0x0 = *(uint *)other->field0_0x0;
  *(uint *)(this_ptr->field0_0x0 + 4) = *(uint *)(other->field0_0x0 + 4);
  *(uint *)(this_ptr->field0_0x0 + 8) = *(uint *)(other->field0_0x0 + 8);
  return;
}

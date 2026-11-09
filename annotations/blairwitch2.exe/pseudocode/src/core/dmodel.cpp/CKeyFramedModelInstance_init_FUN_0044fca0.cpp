// Name: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_0044fca0
// Address: 0044fca0
// Address Range: [[0044fca0, 0044fcb6]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_0044fca0(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_0044fca0(CKeyFramedModelInstance *this_ptr)

{
  byte *puVar1;
  
  puVar1 = &this_ptr->field_0x78;
  do {
    *(uint *)this_ptr = 1;
    this_ptr = (CKeyFramedModelInstance *)&this_ptr->field_0x4;
  } while (this_ptr != (CKeyFramedModelInstance *)puVar1);
  return this_ptr;
}

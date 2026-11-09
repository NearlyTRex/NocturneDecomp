// Name: shape_edittool.cpp_CEdButton_ctor_FUN_00486020
// Address: 00486020
// Address Range: [[00486020, 0048604c]]
// Convention: __cdecl
// Signature: CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_00486020(CEdButton *this_ptr)

#include "nocturne.h"

CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_00486020(CEdButton *this_ptr)

{
  uint uVar1;
  
  this_ptr->field_0x4 = 0;
  this_ptr->field_0x1c = 0;
  *(uint *)&this_ptr->field_0x14 = 0;
  *(uint *)&this_ptr->field_0x18 = 0;
  *(uint *)this_ptr = 0;
  uVar1 = *(uint *)&this_ptr->field_0x14;
  *(uint *)&this_ptr->field_0x10 = uVar1;
  *(uint *)&this_ptr->field_0xc = uVar1;
  *(uint *)&this_ptr->field_0x8 = uVar1;
  return this_ptr;
}

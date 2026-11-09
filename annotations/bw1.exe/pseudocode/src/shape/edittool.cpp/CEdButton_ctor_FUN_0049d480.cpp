// Name: shape_edittool.cpp_CEdButton_ctor_FUN_0049d480
// Address: 0049d480
// Address Range: [[0049d480, 0049d4ac]]
// Convention: __cdecl
// Signature: CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_0049d480(CEdButton *this_ptr)

#include "nocturne.h"

CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_0049d480(CEdButton *this_ptr)

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

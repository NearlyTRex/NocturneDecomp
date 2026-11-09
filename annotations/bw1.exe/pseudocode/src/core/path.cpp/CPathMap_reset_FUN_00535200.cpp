// Name: core_path.cpp_CPathMap_reset_FUN_00535200
// Address: 00535200
// Address Range: [[00535200, 00535270]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_reset_FUN_00535200(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_reset_FUN_00535200(CPathMap *this_ptr)

{
  uint uVar1;
  
  memset(&this_ptr->field_0x9c70,0x7f,40000);
  *(uint *)&this_ptr->field_0x138bc = 0;
  *(uint *)&this_ptr->field_0x138c8 = 0;
  *(uint *)&this_ptr->field_0x138c4 = *(uint *)&this_ptr->field_0x138c8;
  *(uint *)&this_ptr->field_0x138c0 = *(uint *)&this_ptr->field_0x138c4;
  *(uint *)&this_ptr->field_0x138c0 = 0x7149f2ca;
  *(uint *)&this_ptr->field_0x138d4 = 0;
  *(uint *)&this_ptr->field_0x138d0 = *(uint *)&this_ptr->field_0x138d4;
  *(uint *)&this_ptr->field_0x138cc = *(uint *)&this_ptr->field_0x138d0;
  uVar1 = rand();
  *(uint *)&this_ptr->field_0x138d8 = uVar1 & 0x3fff;
  return;
}

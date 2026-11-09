// Name: shape_edittool.cpp_CEdScrollBar_ctor_FUN_00485510
// Address: 00485510
// Address Range: [[00485510, 00485549]]
// Convention: __cdecl
// Signature: CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_ctor_FUN_00485510(CEdScrollBar *this_ptr)

#include "nocturne.h"

CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_ctor_FUN_00485510(CEdScrollBar *this_ptr)

{
  uint uVar1;
  
  *(uint *)(this_ptr + 4) = 1;
  *(uint *)this_ptr = 0;
  *(uint *)(this_ptr + 8) = 1;
  *(uint *)(this_ptr + 0x20) = 0;
  *(uint *)(this_ptr + 0xc) = 1;
  *(uint *)(this_ptr + 0x10) = 0;
  uVar1 = *(uint *)(this_ptr + 0x20);
  *(uint *)(this_ptr + 0x1c) = uVar1;
  *(uint *)(this_ptr + 0x18) = uVar1;
  *(uint *)(this_ptr + 0x14) = uVar1;
  return this_ptr;
}

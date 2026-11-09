// Name: core_box.cpp_CBox_ctor_FUN_005b1bc0
// Address: 005b1bc0
// Address Range: [[005b1bc0, 005b1c6d]]
// Convention: __cdecl
// Signature: CBox * __cdecl core_box_cpp_CBox_ctor_FUN_005b1bc0(CBox *this_ptr)

#include "nocturne.h"

CBox * __cdecl core_box_cpp_CBox_ctor_FUN_005b1bc0(CBox *this_ptr)

{
  int iVar1;
  
  iVar1 = __arrinit(this_ptr + 0xb4,8,&g_SScrapeTypeInfo);
  *(uint *)(iVar1 + -0xac) = 0;
  *(uint *)(iVar1 + -0xb0) = *(uint *)(iVar1 + -0xac);
  *(uint *)(iVar1 + -0xb4) = *(uint *)(iVar1 + -0xac);
  *(uint *)(iVar1 + -0xa0) = 0;
  *(uint *)(iVar1 + -0xa4) = *(uint *)(iVar1 + -0xa0);
  *(uint *)(iVar1 + -0xa8) = *(uint *)(iVar1 + -0xa4);
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -0xc) = *(uint *)(iVar1 + -8);
  *(uint *)(iVar1 + -0x10) = *(uint *)(iVar1 + -0xc);
  *(uint *)(iVar1 + -0x20) = 0;
  *(uint *)(iVar1 + -0x60) = 0;
  *(uint *)(iVar1 + -100) = *(uint *)(iVar1 + -0x60);
  *(uint *)(iVar1 + -0x68) = *(uint *)(iVar1 + -100);
  *(uint *)(iVar1 + -0x6c) = 0;
  *(uint *)(iVar1 + -0x70) = *(uint *)(iVar1 + -0x6c);
  *(uint *)(iVar1 + -0x74) = *(uint *)(iVar1 + -0x70);
  *(uint *)(iVar1 + -0x3c) = 0;
  *(uint *)(iVar1 + -0x40) = *(uint *)(iVar1 + -0x3c);
  *(uint *)(iVar1 + -0x44) = *(uint *)(iVar1 + -0x40);
  *(uint *)(iVar1 + 0x1a0) = 0;
  return (CBox *)(iVar1 + -0xb4);
}

// Name: core_box.cpp_CBox_ctor_FUN_0041a610
// Address: 0041a610
// Address Range: [[0041a610, 0041a6bd]]
// Convention: __cdecl
// Signature: CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041a610(CBox *this_ptr)

#include "nocturne.h"

CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041a610(CBox *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit
                     (this_ptr->scrape_points,8,&g_SScrapeTypeInfo_0059aa60);
  *(uint *)((int)pvVar1 + -0xac) = 0;
  *(float *)((int)pvVar1 + -0xb0) = *(float *)((int)pvVar1 + -0xac);
  (((CBox *)((int)pvVar1 + -0xb4))->position).x = *(float *)((int)pvVar1 + -0xac);
  *(uint *)((int)pvVar1 + -0xa0) = 0;
  *(uint *)((int)pvVar1 + -0xa4) = *(uint *)((int)pvVar1 + -0xa0);
  *(uint *)((int)pvVar1 + -0xa8) = *(uint *)((int)pvVar1 + -0xa4);
  *(uint *)((int)pvVar1 + -8) = 0;
  *(uint *)((int)pvVar1 + -0xc) = *(uint *)((int)pvVar1 + -8);
  *(uint *)((int)pvVar1 + -0x10) = *(uint *)((int)pvVar1 + -0xc);
  *(uint *)((int)pvVar1 + -0x20) = 0;
  *(uint *)((int)pvVar1 + -0x60) = 0;
  *(uint *)((int)pvVar1 + -100) = *(uint *)((int)pvVar1 + -0x60);
  *(uint *)((int)pvVar1 + -0x68) = *(uint *)((int)pvVar1 + -100);
  *(uint *)((int)pvVar1 + -0x6c) = 0;
  *(uint *)((int)pvVar1 + -0x70) = *(uint *)((int)pvVar1 + -0x6c);
  *(uint *)((int)pvVar1 + -0x74) = *(uint *)((int)pvVar1 + -0x70);
  *(uint *)((int)pvVar1 + -0x3c) = 0;
  *(uint *)((int)pvVar1 + -0x40) = *(uint *)((int)pvVar1 + -0x3c);
  *(uint *)((int)pvVar1 + -0x44) = *(uint *)((int)pvVar1 + -0x40);
  *(uint *)((int)pvVar1 + 0x1a0) = 0;
  return (CBox *)((int)pvVar1 + -0xb4);
}

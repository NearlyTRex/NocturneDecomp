// Name: core_morph.cpp_FUN_0052b310
// Address: 0052b310
// Address Range: [[0052b310, 0052b32e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_FUN_0052b310(CMorphModel *a)

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_0052b310(CMorphModel *a)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(a,2,&g_CMorphModelTypeInfo);
  *(uint *)((int)pvVar1 + 0xc28) = 1;
  return;
}

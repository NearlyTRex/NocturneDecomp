// Name: core_morph.cpp_CMorph_ctor_FUN_004e0050
// Address: 004e0050
// Address Range: [[004e0050, 004e006e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_ctor_FUN_004e0050(undefined4 param_1)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_ctor_FUN_004e0050(uint param_1)

{
  int iVar1;
  
  iVar1 = __arrinit(param_1,2,&g_CMorphModelTypeInfo_005a0ce0);
  *(uint *)(iVar1 + 0xc28) = 1;
  return;
}

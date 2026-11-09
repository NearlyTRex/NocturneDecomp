// Name: core_inv.cpp_loadItem_FUN_004da320
// Address: 004da320
// Address Range: [[004da320, 004da350]]
// Convention: __cdecl
// Signature: bool __cdecl core_inv_cpp_loadItem_FUN_004da320(int param_1,undefined4 param_2)

#include "nocturne.h"

bool __cdecl core_inv_cpp_loadItem_FUN_004da320(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = _fscanf(param_2,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n",param_1,param_1 + 0x100,param_1 + 0x200);
  return iVar1 == 3;
}

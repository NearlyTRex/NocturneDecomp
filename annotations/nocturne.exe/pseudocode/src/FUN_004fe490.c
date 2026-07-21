// Name: FUN_004fe490
// Address: 004fe490
// Address Range: [[004fe490, 004fe4c6]]
// Convention: unknown
// Signature: int FUN_004fe490(int param_1)

#include "nocturne.h"

int FUN_004fe490(int param_1)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00473b60(param_1 + 0x30);
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -0x14) = 0;
  *(uint *)(iVar1 + -0x10) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  return iVar1 + -0x30;
}

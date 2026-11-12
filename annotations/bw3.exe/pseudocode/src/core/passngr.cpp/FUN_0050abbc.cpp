// Name: core_passngr.cpp_FUN_0050abbc
// Address: 0050abbc
// Address Range: [[0050abbc, 0050ac35]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_0050abbc(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_passngr_cpp_FUN_0050abbc(int param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  
  *(byte *)(param_3 * 100 + param_1 + 0x1ed02b8) = param_4;
  _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
  *(int *)(&DAT_01ec184c + _DAT_01ed02b0 * 0xc) = param_1;
  *(uint *)(&DAT_01ec1850 + _DAT_01ed02b0 * 0xc) = param_2;
  iVar1 = _DAT_01ed02b0 + 1;
  *(int *)(&DAT_01ec1854 + _DAT_01ed02b0 * 0xc) = param_3;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01ed02b0 = iVar1;
  return;
}

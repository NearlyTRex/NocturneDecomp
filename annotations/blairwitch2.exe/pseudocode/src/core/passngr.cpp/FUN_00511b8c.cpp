// Name: core_passngr.cpp_FUN_00511b8c
// Address: 00511b8c
// Address Range: [[00511b8c, 00511c05]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_00511b8c(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_passngr_cpp_FUN_00511b8c(int param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  
  *(byte *)(param_3 * 100 + param_1 + 0x1e5ec78) = param_4;
  _DAT_01e613ec = _DAT_01e613ec + 1;
  *(int *)(&DAT_01e5020c + _DAT_01e5ec70 * 0xc) = param_1;
  *(uint *)(&DAT_01e50210 + _DAT_01e5ec70 * 0xc) = param_2;
  iVar1 = _DAT_01e5ec70 + 1;
  *(int *)(&DAT_01e50214 + _DAT_01e5ec70 * 0xc) = param_3;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e5ec70 = iVar1;
  return;
}

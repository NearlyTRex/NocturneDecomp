// Name: unkafter_passngr.cpp_FUN_00532edc
// Address: 00532edc
// Address Range: [[00532edc, 00532f55]]
// Convention: unknown
// Signature: void unkafter_passngr_cpp_FUN_00532edc(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_passngr_cpp_FUN_00532edc(int param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  
  *(byte *)(param_3 * 100 + param_1 + 0x1e7abe8) = param_4;
  _DAT_01e7d35c = _DAT_01e7d35c + 1;
  *(int *)(&DAT_01e6c17c + _DAT_01e7abe0 * 0xc) = param_1;
  *(uint *)(&DAT_01e6c180 + _DAT_01e7abe0 * 0xc) = param_2;
  iVar1 = _DAT_01e7abe0 + 1;
  *(int *)(&DAT_01e6c184 + _DAT_01e7abe0 * 0xc) = param_3;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e7abe0 = iVar1;
  return;
}

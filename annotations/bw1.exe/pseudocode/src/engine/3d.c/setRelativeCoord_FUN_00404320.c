// Name: engine_3d.c_setRelativeCoord_FUN_00404320
// Address: 00404320
// Address Range: [[00404320, 00404363]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_setRelativeCoord_FUN_00404320(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_setRelativeCoord_FUN_00404320(int param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)_DAT_01c51d2c;
  _DAT_01c51d2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)_DAT_01c51d30;
  _DAT_01c51d30 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)_DAT_01c51d34;
  _DAT_01c51d34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return param_1 + 8;
}

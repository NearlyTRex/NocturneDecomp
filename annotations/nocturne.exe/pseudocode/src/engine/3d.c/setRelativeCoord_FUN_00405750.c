// Name: engine_3d.c_setRelativeCoord_FUN_00405750
// Address: 00405750
// Address Range: [[00405750, 00405793]]
// Convention: unknown
// Signature: int engine_3d_c_setRelativeCoord_FUN_00405750(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_setRelativeCoord_FUN_00405750(int param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)_DAT_01c039b8;
  _DAT_01c039b8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)_DAT_01c039bc;
  _DAT_01c039bc = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)_DAT_01c039c0;
  _DAT_01c039c0 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return param_1 + 8;
}

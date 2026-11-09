// Name: engine_3d.c_processCameraRelativePoint_FUN_00403830
// Address: 00403830
// Address Range: [[00403830, 00403889]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_processCameraRelativePoint_FUN_00403830(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_processCameraRelativePoint_FUN_00403830(int param_1)

{
  DAT_0070ca88 = *(uint *)(param_1 + 4);
  DAT_0070ca8c = *(uint *)(param_1 + 8);
  DAT_0070ca90 = *(uint *)(param_1 + 0xc);
  _DAT_01c38b6c = _DAT_01c38b78 - *(int *)(param_1 + 4);
  _DAT_01c38b70 = _DAT_01c38b7c - *(int *)(param_1 + 8);
  _DAT_01c38b74 = _DAT_01c38b80 - *(int *)(param_1 + 0xc);
  return param_1 + 0x10;
}

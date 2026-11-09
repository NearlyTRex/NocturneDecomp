// Name: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
// Address Range: [[004037e0, 00403839]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(int param_1)

{
  DAT_00730408 = *(uint *)(param_1 + 4);
  DAT_0073040c = *(uint *)(param_1 + 8);
  DAT_00730410 = *(uint *)(param_1 + 0xc);
  _DAT_01c6e2cc = _DAT_01c6e2d8 - *(int *)(param_1 + 4);
  _DAT_01c6e2d0 = _DAT_01c6e2dc - *(int *)(param_1 + 8);
  _DAT_01c6e2d4 = _DAT_01c6e2e0 - *(int *)(param_1 + 0xc);
  return param_1 + 0x10;
}

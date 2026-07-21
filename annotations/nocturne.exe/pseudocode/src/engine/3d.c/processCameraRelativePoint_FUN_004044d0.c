// Name: engine_3d.c_processCameraRelativePoint_FUN_004044d0
// Address: 004044d0
// Address Range: [[004044d0, 00404529]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_processCameraRelativePoint_FUN_004044d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_processCameraRelativePoint_FUN_004044d0(int param_1)

{
  DAT_006b028c = *(uint *)(param_1 + 4);
  DAT_006b0290 = *(uint *)(param_1 + 8);
  DAT_006b0294 = *(uint *)(param_1 + 0xc);
  _DAT_01c039b8 = _DAT_01c039c4 - *(int *)(param_1 + 4);
  _DAT_01c039bc = _DAT_01c039c8 - *(int *)(param_1 + 8);
  _DAT_01c039c0 = _DAT_01c039cc - *(int *)(param_1 + 0xc);
  return param_1 + 0x10;
}

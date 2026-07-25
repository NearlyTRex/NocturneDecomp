// Name: FUN_00406a00
// Address: 00406a00
// Address Range: [[00406a00, 00406ad3]]
// Convention: unknown
// Signature: int FUN_00406a00(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00406a00(int param_1)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1010 [1016];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  bVar2 = 0;
  local_28 = *(uint *)(param_1 + 8);
  local_24 = *(uint *)(param_1 + 0xc);
  local_20 = *(uint *)(param_1 + 0x10);
  FUN_004cde10(&stack0xffffffd8);
  local_28 = local_1c;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = FUN_005300ec;
      }
      else {
        _DAT_01c00c7c = FUN_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = FUN_0052f823;
    }
    _DAT_01c039a0 = 1;
    _DAT_01c039a4 = 2;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
    engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}

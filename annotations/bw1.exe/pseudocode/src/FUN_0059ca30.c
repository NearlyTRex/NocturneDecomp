// Name: FUN_0059ca30
// Address: 0059ca30
// Address Range: [[0059ca30, 0059cb14]]
// Convention: unknown
// Signature: byte FUN_0059ca30(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0059ca30(uint *param_1)

{
  int iVar1;
  byte bVar2;
  uint *puStack_334;
  uint *puStack_330;
  uint *puStack_32c;
  uint *puStack_328;
  uint local_318;
  uint local_314;
  byte auStack_228 [20];
  uint local_214;
  uint local_210;
  byte auStack_134 [36];
  uint local_110;
  uint local_10c;
  uint local_c;
  uint uStack_8;
  
  bVar2 = 0;
  iVar1 = FUN_0059c970();
  if (iVar1 == 0) {
    return 4;
  }
  local_214 = 1;
  local_210 = *param_1;
  local_318 = 1;
  local_314 = *param_1;
  local_110 = 1;
  local_10c = *param_1;
  puStack_328 = &local_c;
  puStack_32c = &local_110;
  puStack_330 = &local_318;
  puStack_334 = &local_214;
  local_c = _DAT_02c8ae50;
  (&uStack_8)[(uint)bVar2 * -2] = *(uint *)(&DAT_02c8ae54 + (uint)bVar2 * -8);
  Ordinal_18(0);
  iVar1 = Ordinal_151(*param_1,auStack_228);
  bVar2 = iVar1 != 0;
  iVar1 = Ordinal_151(*param_1,&puStack_334);
  if (iVar1 != 0) {
    bVar2 = bVar2 | 2;
  }
  iVar1 = Ordinal_151(*param_1,auStack_134);
  if (iVar1 != 0) {
    bVar2 = bVar2 | 4;
  }
  return bVar2;
}

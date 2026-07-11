// Name: FUN_004df040
// Address: 004df040
// Address Range: [[004df040, 004df160]]
// Convention: unknown
// Signature: void FUN_004df040(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df040(int param_1)

{
  int iVar1;
  byte bVar2;
  int aiStackY_101c [1014];
  int local_34;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar2 = 0;
  FUN_0052ee70();
  FUN_0052eed4();
  FUN_00460700(DAT_005ae704,&DAT_02dd1184);
  FUN_00460c00(DAT_005ae704,0x42600000);
  FUN_00460780(DAT_005ae704,&DAT_02dd1184);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x42100000;
  FUN_00460a00(DAT_005ae704,&stack0xffffffe4);
  *(uint *)(0x01E57284 + 0x15aa88) = 1;
  local_28 = _DAT_01c038f8 + -0x8000;
  local_24 = _DAT_01c038fc + -0x8000;
  local_20 = 0x8000;
  FUN_004cde90(&stack0xffffffd8);
  iVar1 = 0x01E57284;
  local_28 = local_34;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(int *)(0x01E57284 + 0x15aa8c) = local_28;
  *(int *)(iVar1 + 0x15aa90) = local_24;
  *(uint *)(iVar1 + 0x15aa94) = local_20;
  *(uint *)(iVar1 + 0x15aa98) = 0x280;
  FUN_00453040(param_1 + 8,0,0,0x205);
  *(uint *)(0x01E57284 + 0x15aa88) = 0;
  return;
}

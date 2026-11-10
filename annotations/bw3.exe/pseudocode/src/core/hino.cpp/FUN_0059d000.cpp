// Name: core_hino.cpp_FUN_0059d000
// Address: 0059d000
// Address Range: [[0059d000, 0059d110]]
// Convention: unknown
// Signature: bool core_hino_cpp_FUN_0059d000(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hino_cpp_FUN_0059d000(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_102c [1016];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  char *local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  iVar4 = 0;
  local_18 = 100.0;
  for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
    pcVar2 = (char *)core_actor_cpp_castToClassHash_FUN_0040c840
                               (*(uint *)((int)g_CDemonSetPtr->actors + iVar4),
                                g_CWayPointClassInfo.name_hash);
    if (pcVar2 != (char *)0x0) {
      iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      local_44 = *(float *)(iVar1 + 0x20) - *(float *)(pcVar2 + 0x20);
      local_40 = *(float *)(iVar1 + 0x24) - *(float *)(pcVar2 + 0x24);
      local_3c = *(float *)(iVar1 + 0x28) - *(float *)(pcVar2 + 0x28);
      local_2c = local_44;
      (&stack0xffffffd8)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (&stack0xffffffc8 != &stack0xffffffd4) {
        local_38 = local_2c;
        local_34 = local_28;
        local_30 = local_24;
      }
      local_20 = local_30 * local_30 + local_38 * local_38 + local_34 * local_34;
      local_14 = (float)(((int)local_20 >> 1) + _DAT_01d1a0a4);
      if (local_14 < local_18) {
        local_1c = pcVar2;
        local_18 = local_14;
      }
    }
    iVar4 = iVar4 + 4;
  }
  pcVar2 = strstr(local_1c,"@Platform" + 1);
  return pcVar2 != (char *)0x0;
}

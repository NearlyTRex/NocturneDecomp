// Name: core_setcolid.cpp_CDemonSet_isPointInWater_FUN_005595a0
// Address: 005595a0
// Address Range: [[005595a0, 005596e3]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_005595a0(CDemonSet *this_ptr,CVector3f *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_005595a0(CDemonSet *this_ptr,CVector3f *point)

{
  int iVar1;
  CDemonSet *pCVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1014 [1004];
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  int local_14;
  
  bVar5 = 0;
  if ((ABS(g_CWaterPtr->water_level_y) == 0.0) || (g_CWaterPtr->water_level_y <= point->y)) {
    local_14 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (pCVar2->actors[0],g_CWaterActorClassInfo.name_hash);
        if (iVar1 != 0) {
          core_actor_cpp_FUN_00408bb0(iVar1,point);
          local_2c = local_20;
          *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
          puVar3 = (uint *)&stack0xffffffa4;
          puVar4 = &stack0xffffffbc;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          fStack_40 = fStack_40 + _DAT_005f0fc9;
          if ((((local_44 <= local_2c) && (fStack_40 <= fStack_28)) && (fStack_3c <= fStack_24)) &&
             (((local_2c <= fStack_38 && (fStack_28 <= fStack_34)) && (fStack_24 <= fStack_30)))) {
            return 1;
          }
        }
        local_14 = local_14 + 1;
        pCVar2 = (CDemonSet *)pCVar2->cameras;
      } while (local_14 < this_ptr->actor_count);
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

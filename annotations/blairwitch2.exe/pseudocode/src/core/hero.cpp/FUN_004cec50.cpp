// Name: core_hero.cpp_FUN_004cec50
// Address: 004cec50
// Address Range: [[004cec50, 004cee85]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004cec50(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hero_cpp_FUN_004cec50(int param_1)

{
  CDemonSet *pCVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
  float afStackY_105c [1001];
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_74;
  uint uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar4 = (uint *)&stack0xffffff74;
  puVar5 = &stack0xffffff5c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  fStack_44 = local_a4 + fStack_98;
  fStack_40 = fStack_a0 + fStack_94;
  fStack_3c = fStack_9c + fStack_90;
  fStack_68 = local_a4 + fStack_98;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  fStack_5c = fStack_68 * _DAT_005d9c64;
  fStack_58 = fStack_64 * _DAT_005d9c64;
  fStack_54 = fStack_60 * _DAT_005d9c64;
  fStack_74 = fStack_68 * _DAT_005d9c64;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8);
  *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffac + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  uStack_28 = uStack_70;
  uStack_2c = 0;
  uStack_24 = 0x3fc00000;
  core_actor_cpp_FUN_00408d70(param_1,&stack0xffffffd4);
  uStack_50 = uStack_38;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffcc + (uint)bVar7 * -8);
  *(uint *)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  fStack_18 = 1e+30;
  iVar3 = 0;
  for (iVar6 = 0; iVar6 < g_CDemonSetPtr->actor_count; iVar6 = iVar6 + 1) {
    uStack_20 = *(uint *)((int)g_CDemonSetPtr->actors + iVar3);
    iStack_1c = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(uStack_20,g_CWeaponClassInfo.name_hash);
    fStack_a8 = -1.0;
    if (iStack_1c == 0) {
      iVar2 = *(int *)((int)g_CDemonSetPtr->actors + iVar3);
      fStack_a8 = (float)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0x68))
                                   (iVar2,param_1,&stack0xffffffb0,&stack0xffffffe0);
      fStack_14 = fStack_a8;
    }
    else {
      iVar2 = core_weapon_cpp_FUN_0058a5f0(iStack_1c);
      if ((iVar2 == 0) || (iStack_1c == 0)) {
        iVar2 = *(int *)((int)g_CDemonSetPtr->actors + iVar3);
        fStack_a8 = (float)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0x68))
                                     (iVar2,param_1,&stack0xffffffb0,&stack0xffffffe0);
        fStack_14 = fStack_a8;
      }
    }
    pCVar1 = g_CDemonSetPtr;
    if ((0.0 <= fStack_a8) && (fStack_a8 < fStack_18)) {
      fStack_18 = fStack_a8;
      *(uint *)(param_1 + 0x255f0) = 1;
      *(uint *)(param_1 + 0x255f4) = *(uint *)((int)pCVar1->actors + iVar3);
      *(uint *)(param_1 + 0x25600) = 0;
      *(uint *)(param_1 + 0x255f8) = uStack_20;
    }
    iVar3 = iVar3 + 4;
  }
  return *(int *)(param_1 + 0x255f0) == 1;
}

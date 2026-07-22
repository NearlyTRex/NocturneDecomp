// Name: core_hero.cpp_CHero_tryPushNearbyBox_FUN_004b54c0
// Address: 004b54c0
// Address Range: [[004b54c0, 004b56e5]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_hero_cpp_CHero_tryPushNearbyBox_FUN_004b54c0(int param_1)

#include "nocturne.h"

uint __cdecl core_hero_cpp_CHero_tryPushNearbyBox_FUN_004b54c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  byte auStack_5c [12];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  float fStack_3c;
  byte auStack_38 [4];
  float fStack_34;
  float fStack_30;
  byte auStack_2c [12];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_004294f0(param_1);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x1fa0c) == 0) {
      iVar1 = 0;
      for (iVar5 = 0; iVar5 < *(int *)(0x01E57284 + 0x14cd6c); iVar5 = iVar5 + 1) {
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar1 + 0x14cd70 + 0x01E57284),DAT_00764838);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 0x314) != 0)) && (*(int *)(iVar3 + 0x318) == 0)) {
          (**(code **)(*(int *)(iVar3 + 0x14c) + 0x14))(iVar3,&local_80);
          fStack_68 = local_80 + fStack_74;
          fStack_64 = fStack_7c + fStack_70;
          fStack_50 = fStack_68 * 0.5f;
          fStack_4c = fStack_64 * 0.5f;
          fStack_60 = fStack_78 + fStack_6c;
          fStack_48 = fStack_60 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(iVar3,auStack_5c,&fStack_50);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,auStack_38,auStack_5c);
          fStack_20 = fStack_74 - local_80;
          fStack_18 = fStack_6c - fStack_78;
          fStack_44 = fStack_20 * 0.5f;
          fStack_3c = fStack_18 * 0.5f;
          uStack_40 = 0;
          fStack_1c = fStack_70 - fStack_7c;
          if (((fStack_30 - SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44) <=
                (float)1.2) && (1.0 <= (double)fStack_34)) &&
             ((double)fStack_34 <= 5)) {
            iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                              (auStack_2c,auStack_38);
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                         (*(uint *)(iVar4 + 4));
            if (ABS(fStack_14) <= (float)0.61086523818055505) {
              *(int *)(param_1 + 0x1fa0c) = iVar3;
              break;
            }
          }
        }
        iVar1 = iVar1 + 4;
      }
      if (*(int *)(param_1 + 0x1fa0c) == 0) goto LAB_004b5550;
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890(*(int *)(param_1 + 0x1fa0c),DAT_00764838);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x318) = param_1;
        uVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x28))(iVar1,iVar1 + 0x324);
        *(uint *)(iVar1 + 800) = uVar2;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_004b5550:
    uVar2 = 0;
  }
  return uVar2;
}

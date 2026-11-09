// Name: core_trap.cpp_FUN_00599df0
// Address: 00599df0
// Address Range: [[00599df0, 0059a00b]]
// Convention: unknown
// Signature: void core_trap_cpp_FUN_00599df0(int param_1)

#include "nocturne.h"

void core_trap_cpp_FUN_00599df0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1018 [979];
  SDamageInfo aSStack_c4 [4];
  uint uStack_c0;
  byte auStack_88 [28];
  float fStack_6c;
  float afStack_60 [6];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float afStack_2c [4];
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    iVar1 = *(int *)(param_1 + 0x2d8);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
      if (iVar1 == 0) {
        return;
      }
      *(uint *)(*(int *)(param_1 + 0x2d8) + 0xc294) = 0;
      *(uint *)(param_1 + 0x2d8) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    iStack_14 = 0;
    iStack_18 = 0;
    pfVar2 = afStack_60;
    pfVar3 = &fStack_48;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
      pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    }
    for (; iStack_14 < *(int *)&g_CDemonSetPtr->field_0x150fec; iStack_14 = iStack_14 + 1) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iStack_18),
                         g_CWerewolfClassInfo.name_hash);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc294) == 0)) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0((SCollisionInfo *)auStack_88);
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x3c))(iVar1,auStack_88);
        if ((*(float *)(iVar1 + 0x24) <= *(float *)(param_1 + 0x24) + fStack_38) &&
           (*(float *)(param_1 + 0x24) + fStack_44 <=
            *(float *)(iVar1 + 0x24) + (float)auStack_88._24_4_)) {
          core_actor_cpp_FUN_00408bb0(param_1,iVar1 + 0x20);
          afStack_2c[2] = fStack_30;
          afStack_2c[(uint)bVar4 * -2 + 3] = afStack_2c[(uint)bVar4 * -2];
          afStack_2c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_2c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          if ((((fStack_48 <= afStack_2c[2] + fStack_6c) && (afStack_2c[2] - fStack_6c <= fStack_3c)
               ) && (fStack_40 <= fStack_1c + fStack_6c)) && (fStack_1c - fStack_6c <= fStack_34)) {
            *(int *)(param_1 + 0x2d8) = iVar1;
            *(uint *)(iVar1 + 0xc298) = 0x40000000;
            *(int *)(iVar1 + 0xc294) = param_1;
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_c4);
            uStack_c0 = 0x41200000;
            (**(code **)(*(int *)(iVar1 + 0x154) + 0x108))(iVar1,aSStack_c4);
            return;
          }
        }
      }
      iStack_18 = iStack_18 + 4;
    }
  }
  return;
}

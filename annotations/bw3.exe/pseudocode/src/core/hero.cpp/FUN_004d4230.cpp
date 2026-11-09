// Name: core_hero.cpp_FUN_004d4230
// Address: 004d4230
// Address Range: [[004d4230, 004d43da]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004d4230(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_hero_cpp_FUN_004d4230(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1030 [985];
  byte auStack_c0 [120];
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  int iStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  
  bVar3 = 0;
  iStack_1c = 0;
  *param_2 = 9999.9;
  iStack_20 = 0;
  pfStack_18 = (float *)(param_1 + 0x20);
  iStack_28 = 0;
  for (; iStack_1c < *(int *)&g_CDemonSetPtr->field_0x150fec; iStack_1c = iStack_1c + 1) {
    iVar1 = *(int *)(&g_CDemonSetPtr->field_0x150ff0 + iStack_20);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x70))(iVar1);
      if (iVar2 == 0) {
        __arrinit(auStack_c0,10,&g_CVectorTypeInfo);
        iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x54))(iVar1,auStack_c0);
        if (0 < iVar2) {
          fStack_48 = *pfStack_18 - *(float *)(iVar1 + 0x20);
          afStack_44[0] = pfStack_18[1] - *(float *)(iVar1 + 0x24);
          afStack_44[1] = pfStack_18[2] - *(float *)(iVar1 + 0x28);
          afStack_44[2] = fStack_48;
          afStack_44[(uint)bVar3 * -2 + 3] = afStack_44[(uint)bVar3 * -2];
          afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          afStack_44[3] = afStack_44[3] * (float)_DAT_005c4e85;
          fStack_24 = fStack_34 * fStack_34 +
                      afStack_44[2] * afStack_44[2] + afStack_44[3] * afStack_44[3];
          if (fStack_24 < *param_2) {
            *param_2 = fStack_24;
            iStack_28 = iVar1;
          }
        }
      }
    }
    iStack_20 = iStack_20 + 4;
  }
  if (iStack_28 == 0) {
    return 0;
  }
  *param_2 = SQRT(*param_2);
  return iStack_28;
}

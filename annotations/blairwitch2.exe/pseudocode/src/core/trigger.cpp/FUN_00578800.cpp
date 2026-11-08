// Name: FUN_00578800
// Address: 00578800
// Address Range: [[00578800, 00578b8c]]
// Convention: unknown
// Signature: undefined4 FUN_00578800(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00578800(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1068 [979];
  float *pfVar8;
  float fStack_10c;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  bVar7 = 0;
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_2 + 0x2b0) + 0x24))(param_2);
    puVar5 = (uint *)&stack0xffffff20;
    puVar6 = &stack0xffffff50;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    fStack_80 = local_b0 + fStack_a4;
    fStack_7c = fStack_ac + fStack_a0;
    fStack_78 = fStack_a8 + fStack_9c;
    fStack_5c = local_b0 + fStack_a4;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffff84 + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    pfVar8 = &stack0xffffffb0;
    fStack_2c = fStack_5c * _DAT_005ecf7e;
    fStack_28 = fStack_58 * _DAT_005ecf7e;
    fStack_24 = fStack_54 * _DAT_005ecf7e;
    fStack_50 = fStack_5c * _DAT_005ecf7e;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffd8 + (uint)bVar7 * -8);
    *(uint *)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    FUN_00408d70(param_2,pfVar8);
    fStack_68 = fStack_38;
    (&stack0xffffff9c)[(uint)bVar7 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffcc + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    if (*(int *)(param_1 + 0x374) != 0) {
      iVar4 = FUN_0040c8f0(param_2,DAT_007bdc94);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x2570) == 0)) {
        return 0;
      }
      fStack_64 = *(float *)(param_2 + 0x24);
    }
    fVar1 = fStack_68 - *(float *)(param_1 + 0x20);
    fVar3 = fStack_64 - *(float *)(param_1 + 0x24);
    fVar2 = fStack_60 - *(float *)(param_1 + 0x28);
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        *(float *)(param_1 + 0x2b4) * *(float *)(param_1 + 0x2b4)) {
      FUN_00408de0(param_1,&stack0xffffff98);
      fStack_44 = fStack_74;
      (&stack0xffffffc0)[(uint)bVar7 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff90 + (uint)bVar7 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      if (&stack0xffffff98 != &stack0xffffffbc) {
        fStack_68 = fStack_44;
        fStack_64 = fStack_40;
        fStack_60 = fStack_3c;
      }
      if (*(int *)(param_1 + 0x2cc) == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
        puVar5 = (uint *)&stack0xffffff38;
        puVar6 = &stack0xffffff08;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        if (((((fStack_f8 <= fStack_68) && (fStack_f4 <= fStack_64)) && (fStack_f0 <= fStack_60)) &&
            ((fStack_68 <= fStack_ec && (fStack_64 <= fStack_e8)))) && (fStack_60 <= fStack_e4)) {
          return 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x2cc) != 1) {
          _DAT_01d046a0 = "..\\core\\trigger.cpp";
          _DAT_01d046a4 = 0x391;
          FUN_004e4500("CTrigger::containsActor - invalid trigger shape %d for %s",*(uint *)(param_1 + 0x2cc),param_1)
          ;
          _DAT_01d046a0 = "..\\core\\trigger.cpp";
          _DAT_01d046a4 = 0x397;
          FUN_004e4500("Hell froze...");
          return 0;
        }
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
        puVar5 = (uint *)&stack0xffffff68;
        puVar6 = (uint *)&stack0xfffffef0;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        if ((fStack_10c <= fStack_64) && (fStack_64 <= fStack_100)) {
          if (fStack_68 * fStack_68 + fStack_60 * fStack_60 <=
              *(float *)(param_1 + 700) * *(float *)(param_1 + 0x2c4) * (float)_DAT_005ecf82) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}

// Name: FUN_004091b0
// Address: 004091b0
// Address Range: [[004091b0, 004096ba]]
// Convention: unknown
// Signature: float FUN_004091b0(int param_1,float *param_2,float *param_3,undefined4 *param_4,int param_5,uint param_6,int param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004091b0(int param_1,float *param_2,float *param_3,uint *param_4,int param_5,uint param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1084 [976];
  float local_118;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_9c;
  float local_98;
  float local_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_78;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint local_54;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_30;
  float local_24;
  float local_14;
  
  bVar5 = 0;
  if (param_6 == 0) {
    return 2.0;
  }
  FUN_00408f00();
  puVar3 = (uint *)&stack0xfffffeec;
  puVar4 = (uint *)&stack0xffffff04;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  if (param_7 == 0) {
    if (&stack0xffffff1c != param_2) {
      local_e4 = *param_2;
      local_e0 = param_2[1];
      local_dc = param_2[2];
    }
    if (&stack0xffffff28 != param_2) {
      local_d8 = *param_2;
      local_d4 = param_2[1];
      local_d0 = param_2[2];
    }
    local_9c = *param_2 + *param_3;
    local_98 = param_2[1] + param_3[1];
    local_94 = param_2[2] + param_3[2];
    local_24 = *param_2 + *param_3;
    *(float *)((int)&stack0xffffffc8 + ((uint)bVar5 * -2 + 6) * 4) =
         (&stack0xffffff68)[(uint)bVar5 * 0xfffffffe];
    *(float *)((int)&stack0xffffffc8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4) =
         (&stack0xffffff68)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    FUN_0041d840();
    iVar2 = FUN_0041e910();
  }
  else {
    iVar2 = FUN_0041e910();
  }
  if (iVar2 == 0) {
    return 2.0;
  }
  FUN_00408bf0();
  local_78 = local_54;
  (&stack0xffffff68)[(uint)bVar5 * -2 + 9] = (&stack0xffffff68)[(uint)bVar5 * -2 + 0x12];
  (&stack0xffffff68)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       (&stack0xffffff68)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
  FUN_00408b40();
  local_3c = local_60;
  *(float *)((int)&stack0xffffffc8 + (uint)bVar5 * 0xfffffffe * 4) =
       (&stack0xffffff68)[(uint)bVar5 * -2 + 0xf];
  *(float *)((int)&stack0xffffffc8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       (&stack0xffffff68)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  param_4[3] = 0xffffffff;
  param_4[4] = 0xffffffff;
  param_4[5] = 0xffffffff;
  param_4[6] = 0xffffffff;
  if (param_6 < 2) {
    if (param_6 == 1) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      puVar3 = (uint *)&stack0xffffff4c;
      puVar4 = (uint *)&stack0xffffff34;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      local_118 = (float)FUN_0041e220(&stack0xffffff34);
      local_14 = local_118;
      goto LAB_004093ad;
    }
  }
  else {
    if (param_6 < 3) {
      local_118 = (float)FUN_00408100(param_5);
      local_14 = local_118;
      goto LAB_004093ad;
    }
    if (param_6 == 3) {
      local_118 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xb8))(param_1);
      local_14 = local_118;
      FUN_00408b40();
      uStack_6c = uStack_30;
      (&stack0xffffff68)[(uint)bVar5 * -2 + 0xc] =
           (float)*(uint *)((int)&stack0xffffffc8 + ((uint)bVar5 * -2 + 3) * 4);
      (&stack0xffffff68)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           (float)*(uint *)
                   ((int)&stack0xffffffc8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
      if (&stack0xffffffb8 != &stack0xffffff94) {
        local_48 = uStack_6c;
        uStack_44 = uStack_68;
        uStack_40 = uStack_64;
      }
      goto LAB_004093ad;
    }
  }
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x4ac;
  FUN_004e4330();
LAB_004093ad:
  if ((local_118 < 0.0) || (1.0 < local_118)) {
    return 2.0;
  }
  if (*(int *)(0x01ED78C8 + 0x15f6f4) == 0) {
    if (*(int *)(param_5 + 0x20) == 0) {
      if (*(int *)(param_5 + 0x24) != 0) {
        uVar1 = FUN_004625a0(*(uint *)(param_5 + 0x24),0);
        local_118 = (float)FUN_004618a0(uVar1);
        if (local_118 < 0.0) {
          return 2.0;
        }
        local_14 = local_118;
        if (1.0 < local_118) {
          return 2.0;
        }
      }
    }
    else {
      local_118 = (float)FUN_0054f400();
      if (local_118 < 0.0) {
        return 2.0;
      }
      if (1.0 < local_118) {
        return 2.0;
      }
      param_4[3] = _DAT_0272af44;
      param_4[4] = _DAT_0272af54;
      param_4[5] = _DAT_0272af58;
      local_14 = local_118;
      FUN_0054ea40();
      uVar1 = FUN_0054bde0();
      param_4[6] = uVar1;
      if (&stack0x00000000 != (byte *)0x272af90) {
        local_48 = _DAT_0272af48;
        uStack_44 = _DAT_0272af4c;
        uStack_40 = _DAT_0272af50;
      }
    }
  }
  FUN_00408b00();
  uStack_90 = uStack_84;
  (&stack0xffffff68)[(uint)bVar5 * -2 + 3] = (&stack0xffffff68)[(uint)bVar5 * -2 + 6];
  (&stack0xffffff68)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       (&stack0xffffff68)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  if (param_4 != &stack0xffffff70) {
    *param_4 = uStack_90;
    param_4[1] = uStack_8c;
    param_4[2] = uStack_88;
  }
  return local_118;
}

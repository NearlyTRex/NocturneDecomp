// Name: FUN_004093a0
// Address: 004093a0
// Address Range: [[004093a0, 0040982a]]
// Convention: unknown
// Signature: float FUN_004093a0(int param_1,float *param_2,float *param_3,undefined4 *param_4,int param_5,uint param_6,int param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004093a0(int param_1,float *param_2,float *param_3,uint *param_4,int param_5,uint param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_106c [976];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  uint local_84;
  float local_78;
  float local_6c;
  float local_68;
  float local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  uint local_48;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_24;
  float local_14;
  
  bVar5 = 0;
  if (param_6 == 0) {
    return 2.0;
  }
  FUN_004090f0();
  puVar3 = (uint *)&stack0xffffff1c;
  puVar4 = (uint *)&stack0xffffff64;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  if (param_7 == 0) {
    if (&stack0xffffff04 != param_2) {
      local_fc = *param_2;
      local_f8 = param_2[1];
      local_f4 = param_2[2];
    }
    if (&stack0xffffff10 != param_2) {
      local_f0 = *param_2;
      local_ec = param_2[1];
      local_e8 = param_2[2];
    }
    local_6c = *param_2 + *param_3;
    local_68 = param_2[1] + param_3[1];
    local_64 = param_2[2] + param_3[2];
    local_78 = *param_2 + *param_3;
    *(uint *)((int)&stack0xffffff80 + ((uint)bVar5 * -2 + 3) * 4) =
         *(uint *)((int)&stack0xffffff80 + ((uint)bVar5 * -2 + 6) * 4);
    *(uint *)((int)&stack0xffffff80 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
         *(uint *)((int)&stack0xffffff80 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4);
    FUN_0041a590();
    iVar2 = FUN_0041b660();
  }
  else {
    iVar2 = FUN_0041b660();
  }
  if (iVar2 == 0) {
    return 2.0;
  }
  FUN_00408de0();
  local_84 = local_30;
  *(uint *)((int)&stack0xffffff80 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffb0 + ((uint)bVar5 * -2 + 9) * 4);
  *(uint *)((int)&stack0xffffff80 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       *(uint *)((int)&stack0xffffffb0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4);
  FUN_00408d30();
  local_48 = local_54;
  *(uint *)((int)&stack0xffffffb0 + ((uint)bVar5 * -2 + 3) * 4) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffb0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
       *(uint *)((int)&stack0xffffffb0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
  if (param_6 < 2) {
    if (param_6 == 1) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
      puVar3 = (uint *)&stack0xffffff34;
      puVar4 = (uint *)&stack0xffffff4c;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      local_100 = (float)FUN_0041af70(&stack0xffffff4c);
      local_14 = local_100;
      goto LAB_0040957e;
    }
  }
  else {
    if (param_6 < 3) {
      local_100 = (float)FUN_00408290(param_5);
      local_14 = local_100;
      goto LAB_0040957e;
    }
    if (param_6 == 3) {
      local_100 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xc0))(param_1);
      local_14 = local_100;
      goto LAB_0040957e;
    }
  }
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0x4ab;
  FUN_004e4500();
LAB_0040957e:
  if ((local_100 < 0.0) || (1.0 < local_100)) {
    return 2.0;
  }
  param_4[4] = 0xffffffff;
  param_4[5] = 0xffffffff;
  param_4[6] = 0xffffffff;
  iVar2 = 0x01E661B8;
  param_4[3] = 0xffffffff;
  if (*(int *)(iVar2 + 0x15f6f0) == 0) {
    if (*(int *)(param_5 + 0x20) == 0) {
      if (*(int *)(param_5 + 0x24) != 0) {
        uVar1 = FUN_0044fd20(*(uint *)(param_5 + 0x24),0);
        local_100 = (float)FUN_0044f020(uVar1);
        if (local_100 < 0.0) {
          return 2.0;
        }
        local_14 = local_100;
        if (1.0 < local_100) {
          return 2.0;
        }
      }
    }
    else {
      local_100 = (float)FUN_005481d0();
      if (local_100 < 0.0) {
        return 2.0;
      }
      if (1.0 < local_100) {
        return 2.0;
      }
      param_4[3] = _DAT_020ccfdc;
      param_4[4] = _DAT_020ccfec;
      param_4[5] = _DAT_020ccff0;
      local_14 = local_100;
      FUN_00547810();
      uVar1 = FUN_00544bb0();
      param_4[6] = uVar1;
      if (&stack0x00000000 != (byte *)0x20cd040) {
        local_60 = _DAT_020ccfe0;
        uStack_5c = _DAT_020ccfe4;
        uStack_58 = _DAT_020ccfe8;
      }
    }
  }
  FUN_00408cf0();
  uStack_3c = uStack_24;
  *(uint *)((int)&stack0xffffffb0 + ((uint)bVar5 * -2 + 6) * 4) =
       *(uint *)((int)&stack0xffffffb0 + ((uint)bVar5 * -2 + 0xc) * 4);
  *(uint *)((int)&stack0xffffffb0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4) =
       *(uint *)((int)&stack0xffffffb0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4);
  if (param_4 != &stack0xffffffc4) {
    *param_4 = uStack_3c;
    param_4[1] = uStack_38;
    param_4[2] = uStack_34;
  }
  return local_100;
}

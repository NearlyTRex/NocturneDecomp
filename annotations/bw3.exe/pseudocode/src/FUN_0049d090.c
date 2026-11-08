// Name: FUN_0049d090
// Address: 0049d090
// Address Range: [[0049d090, 0049d4fd]]
// Convention: unknown
// Signature: uint FUN_0049d090(uint *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0049d090(uint *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1070 [1011];
  uint *puVar5;
  float local_88;
  float local_7c;
  uint local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_28 [2];
  float local_20;
  float local_1c;
  float local_18;
  
  bVar4 = 0;
  fVar1 = (float)param_1[0xf7];
  uVar3 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                        (ushort)(fVar1 == 0.0) << 0xe);
  if (0.0 < fVar1) {
    local_1c = *(float *)(0x01D2130C + 0x314);
    fVar1 = (float)param_1[0xf7];
    param_1[0xf7] = (uint)(fVar1 - local_1c);
    local_18 = local_1c;
    if (0.0 < fVar1 - local_1c) {
      if (&local_4c != (float *)(param_1 + 0x70)) {
        local_4c = (float)param_1[0x70];
        local_48 = (float)param_1[0x71];
        local_44 = (float)param_1[0x72];
      }
      FUN_0041b410(param_1 + 0x60,local_1c);
      local_3c[2] = local_4c - (float)param_1[0x70];
      local_3c[3] = local_48 - (float)param_1[0x71];
      local_2c = local_44 - (float)param_1[0x72];
      local_28[0] = local_4c - (float)param_1[0x70];
      local_3c[(uint)bVar4 * 0xfffffffe + 6] = local_3c[(uint)bVar4 * 0xfffffffe + 3];
      local_3c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7] =
           local_3c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4];
      if (&stack0xffffff84 != local_3c + 5) {
        local_7c = local_28[0];
        local_74 = local_20;
      }
      local_78 = 0;
      if (((0.0 < SQRT(local_74 * local_74 + local_7c * local_7c)) ||
          (local_48 < (float)param_1[0x71])) &&
         ((float)_DAT_005c0760 < (float)param_1[0xf8] - (float)param_1[0xf7])) {
        uVar3 = *param_1;
        puVar5 = param_1 + 0x60;
        if (uVar3 == 1) {
          FUN_004a3f70(0x01C73654,puVar5,1,0);
          FUN_005609d0(0x02CF5680,param_1,"wp_bindevil.wav",puVar5);
          param_1[0xf7] = 0;
        }
        else if (uVar3 == 2) {
          FUN_004a36e0(0x01C73654,puVar5,0x41000000,0x42c80000,0x40800000,3);
          FUN_0049cca0(puVar5);
          param_1[0xf7] = 0;
        }
        else if (uVar3 == 3) {
          iVar2 = 0;
          FUN_004a3fd0(0x01C73654,param_1[0x60],param_1[0x61],param_1[0x62]);
          do {
            iVar2 = iVar2 + 1;
            FUN_004a3f20(0x01C73654,puVar5,0);
          } while (iVar2 < 0x10);
          param_1[0xf7] = 0;
        }
      }
      uVar3 = *param_1;
      if (((uVar3 != 0) && (1 < uVar3)) && (uVar3 != 2)) {
        return uVar3;
      }
      puVar5 = param_1 + 1;
      local_70 = _DAT_02cfd900;
      (&stack0xffffff94)[(uint)bVar4 * 0xfffffffe] =
           (float)*(uint *)(&DAT_02cfd904 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffff98 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&DAT_02cfd908 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      iVar2 = FUN_004625a0(puVar5);
      local_68 = local_68 + *(float *)(iVar2 + 0x34c);
      FUN_0045b800(param_1 + 0x66,&stack0xffffff90);
      local_58 = local_88;
      *(uint *)((int)&stack0xffffffac + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff7c + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff80 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      local_40 = (float)param_1[0x60] + local_58;
      local_3c[0] = (float)param_1[0x61] + local_54;
      local_3c[1] = (float)param_1[0x62] + local_50;
      local_64 = (float)param_1[0x60] + local_58;
      (&stack0xffffffa0)[(uint)bVar4 * 0xfffffffe] = local_3c[(uint)bVar4 * 0xfffffffe];
      *(float *)((int)&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           local_3c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
      if (&stack0xffffff90 != &stack0xffffff9c) {
        local_70 = local_64;
        local_6c = local_60;
        local_68 = local_5c;
      }
      uVar3 = FUN_004a23c0(0x01C73654,&stack0xffffff90,0,0x20000,0x10000,0,0xffff);
      return uVar3;
    }
    uVar3 = *param_1;
    switch(uVar3) {
    case 0:
      FUN_004a36e0(0x01C73654,param_1 + 0x60,0x41800000,0x42c80000,0x40800000,0);
      uVar3 = FUN_00556be0(param_1[0xf9]);
      break;
    case 1:
      FUN_004a3f70(0x01C73654,param_1 + 0x60,1,0);
      uVar3 = FUN_005609d0(0x02CF5680,param_1,"wp_bindevil.wav",param_1 + 0x60);
      return uVar3;
    case 2:
      FUN_004a36e0(0x01C73654,param_1 + 0x60,0x41000000,0x42c80000,0x40800000,3);
      uVar3 = FUN_0049cca0(param_1 + 0x60);
      return uVar3;
    case 3:
      FUN_004a3fd0(0x01C73654,param_1[0x60],param_1[0x61],param_1[0x62]);
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        uVar3 = FUN_004a3f20(0x01C73654,param_1 + 0x60,0);
      } while (iVar2 < 0x10);
      return uVar3;
    }
  }
  return uVar3;
}

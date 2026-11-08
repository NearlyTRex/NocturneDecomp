// Name: FUN_0046f200
// Address: 0046f200
// Address Range: [[0046f200, 0046f606]]
// Convention: unknown
// Signature: void FUN_0046f200(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046f200(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint auStackY_19c0 [1520];
  uint *puVar4;
  uint *puVar5;
  float fVar6;
  uint local_1e4;
  uint local_1d4;
  uint local_1c4;
  uint local_1b4;
  uint local_1a4;
  uint local_194;
  uint local_184;
  uint local_174;
  uint local_164;
  uint local_154;
  uint local_144;
  uint local_134;
  uint local_124;
  uint local_114;
  uint local_104;
  uint local_f4;
  uint local_e4;
  uint local_d4;
  uint local_c4;
  uint local_b4;
  uint local_a4;
  uint local_94;
  uint local_84;
  uint local_74;
  uint local_64;
  uint local_54;
  uint local_44;
  float local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar3 = 0;
  if (param_2 == 0) {
    local_1c = _DAT_01b68820;
    local_20 = _DAT_01b68848;
    FUN_005b7b30(0x3fc90fdb);
    local_1d4 = local_164;
    *(uint *)((int)&stack0xfffffe30 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffea0 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffe34 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffea4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffe34 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffea4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005b7b70(0x3fc90fdb);
    local_1c4 = local_f4;
    *(uint *)((int)&stack0xfffffe40 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff10 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffe44 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff14 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffe44 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff14 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    iVar2 = param_1 + 0x1ffe0;
  }
  else {
    local_1c = _DAT_01b68824;
    local_20 = _DAT_01b6884c;
    FUN_005b7b30(0xbfc90fdb);
    local_1d4 = local_e4;
    *(uint *)((int)&stack0xfffffe30 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff20 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffe34 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff24 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffe34 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff24 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005b7b70(0xbfc90fdb);
    local_1c4 = local_1b4;
    *(uint *)((int)&stack0xfffffe40 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe50 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffe44 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffe54 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffe44 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe54 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    iVar2 = param_1 + 0x1ffc0;
  }
  fVar6 = (*(float *)(param_1 + 0x2c9c) + (float)_DAT_005da094) * (float)_DAT_005da09c;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  fVar6 = (1.0 - (1.0 - *(float *)(iVar2 + 0x14)) * fVar6) * fVar6;
  if (0.0 < fVar6) {
    local_18 = param_1 + 0x158;
    uVar1 = FUN_00569f30(local_18,*(int *)(param_1 + 0x2c98) * 0x38 + param_1 + 0x27d0,1,fVar6);
    uVar1 = FUN_005240c0(uVar1);
    local_28 = FUN_00525110(local_18,uVar1,*(uint *)(param_1 + 0x2c9c));
    local_14 = local_28;
    FUN_00568100(local_18,uVar1,local_28,fVar6,local_1c,&LAB_00567360);
    local_2c = *(float *)(iVar2 + 8) + (float)_DAT_005da0a4;
    FUN_005b7b30(*(uint *)(iVar2 + 0xc));
    puVar4 = &stack0xffffffbc;
    local_44 = local_d4;
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff30 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff34 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff34 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005b7af0(local_2c,puVar4);
    local_174 = local_64;
    *(uint *)((int)&stack0xfffffe90 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffe94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffe94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005b77b0(&stack0xfffffe8c);
    puVar4 = &stack0xfffffe2c;
    uVar1 = 0x3f733333;
    local_184 = local_114;
    *(uint *)((int)&stack0xfffffe80 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffef0 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffe84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffef4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffe84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffef4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005b7940(&DAT_006081e0,puVar4,uVar1);
    puVar4 = &stack0xfffffe7c;
    puVar5 = &stack0xfffffe3c;
    local_154 = local_104;
    *(uint *)((int)&stack0xfffffeb0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff00 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffeb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff04 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffeb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff04 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005b77b0(&stack0xfffffe2c,puVar5,puVar4);
    local_134 = local_54;
    *(uint *)((int)&stack0xfffffed0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffed4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffed4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005b77b0(&stack0xfffffecc);
    local_144 = local_74;
    *(uint *)((int)&stack0xfffffec0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff90 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffec4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffec4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    local_24 = param_1 + 0x808;
    FUN_005b7750(local_20 * 0x10 + local_24,&stack0xfffffebc);
    local_1e4 = local_1a4;
    *(uint *)((int)&stack0xfffffe20 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe60 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffe24 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffe64 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffe24 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe64 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005b77b0(&stack0xfffffe1c);
    local_124 = local_194;
    *(uint *)((int)&stack0xfffffee0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe70 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffee4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffe74 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffee4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005695e0(local_18,&stack0xfffffedc,fVar6,local_1c,&LAB_00567360);
    if ((float)_DAT_005da0ac < *(float *)(param_1 + 0x20060)) {
      FUN_005b7af0(0x3fc90fdb);
      puVar4 = &stack0xffffff7c;
      local_84 = local_b4;
      *(uint *)((int)&stack0xffffff80 + (uint)bVar3 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff50 + (uint)bVar3 * -8);
      *(uint *)(&stack0xffffff84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffff54 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      *(uint *)
       ((int)(&stack0xffffff84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff54 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
              ((uint)bVar3 * -2 + 1) * 4);
      FUN_005b77b0(&stack0xfffffeac,puVar4);
      local_94 = local_a4;
      *(uint *)((int)&stack0xffffff70 + (uint)bVar3 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff60 + (uint)bVar3 * -8);
      *(uint *)(&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffff64 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      *(uint *)
       ((int)(&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff64 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
              ((uint)bVar3 * -2 + 1) * 4);
      iVar2 = local_1c * 0x10;
      FUN_005b7940(local_24 + iVar2,&stack0xffffff6c,*(uint *)(param_1 + 0x20060));
      puVar4 = (uint *)(iVar2 + 0x808 + param_1);
      puVar5 = puVar4 + (uint)bVar3 * -2 + 1;
      *puVar4 = local_c4;
      *puVar5 = *(uint *)(&stack0xffffff40 + (uint)bVar3 * -8);
      puVar5[(uint)bVar3 * -2 + 1] =
           *(uint *)(&stack0xffffff44 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      (puVar5 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffff44 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
            ((uint)bVar3 * -2 + 1) * 4);
      return;
    }
  }
  return;
}

// Name: core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
// Address: 00425050
// Address Range: [[00425050, 0042595a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(int param_1,uint *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(int param_1,uint *param_2)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  char *pcVar10;
  int iVar11;
  byte bVar12;
  float afStackY_1064 [985];
  float local_c8;
  uint auStack_c4 [2];
  uint uStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  byte local_88 [12];
  char local_7c [4];
  float afStack_78 [4];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int local_58;
  int local_54;
  uint *local_50;
  uint *local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  int local_3c;
  float local_38;
  float *local_34;
  float *local_30;
  uint *local_2c;
  uint *local_28;
  int local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar12 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&local_94,param_2);
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x24);
    local_94 = local_94 + *(float *)(param_1 + 0xe0);
    local_8c = local_8c + *(float *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0xe8) = 0;
    *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe4);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0xf0) + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0x38);
    *(uint *)(param_1 + 0xf4) = 0;
    *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf4);
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xf0);
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  }
  DAT_00765a9c = 0;
  if (((((param_2[2] & 0x7fffffff) == 0) && ((*param_2 & 0x7fffffff) == 0)) &&
      ((float)param_2[1] <= 0.0)) &&
     ((*(int *)(param_1 + 0xdc) == 0 && (*(float *)(param_1 + 0x24) == *(float *)(param_1 + 0x240c))
      ))) {
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    *(uint *)(param_1 + 0x2428) = 0;
    *(uint *)(param_1 + 0x2424) = *(uint *)(param_1 + 0x2428);
    *(uint *)(param_1 + 0x2420) = *(uint *)(param_1 + 0x2424);
    return;
  }
  if (*(char *)(param_1 + 0x23b0) != '\0') {
    pcVar6 = (char *)core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                               (param_1 + 0x150);
    uVar7 = 0xffffffff;
    pcVar10 = pcVar6;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
    } while (cVar2 != '\0');
    iVar8 = ~uVar7 - 0xc;
    local_7c[0] = "noCollision"[0];
    local_7c[1] = "noCollision"[1];
    local_7c[2] = "noCollision"[2];
    local_7c[3] = "noCollision"[3];
    afStack_78[(uint)bVar12 * -2] = *(float *)("noCollision" + (uint)bVar12 * -8 + 4);
    afStack_78[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    iVar11 = 0;
    local_18 = iVar8;
    if (-1 < iVar8) {
      do {
        iVar8 = _strnicmp(pcVar6,local_7c,0xb);
        if (iVar8 == 0) {
          *(uint *)(param_1 + 0x2428) = 0;
          *(uint *)(param_1 + 0x2424) = *(uint *)(param_1 + 0x2428);
          *(uint *)(param_1 + 0x2420) = *(uint *)(param_1 + 0x2424);
          return;
        }
        iVar11 = iVar11 + 1;
        pcVar6 = pcVar6 + 1;
      } while (iVar11 <= local_18);
    }
  }
  local_1c = param_1 + 0x2c54;
  iVar8 = 0;
  local_4c = (uint *)(param_1 + 0x2d08);
  local_50 = (uint *)(param_1 + 0x2c78);
  do {
    puVar4 = (uint *)(iVar8 * 0x24 + local_1c);
    puVar9 = local_4c;
    do {
      puVar4[2] = 0;
      puVar4[1] = puVar4[2];
      *puVar4 = puVar4[2];
      puVar9[2] = 0;
      puVar4 = puVar4 + 3;
      puVar9[1] = puVar9[2];
      *puVar9 = puVar9[2];
      puVar9 = puVar9 + 3;
    } while (puVar4 != local_50);
    iVar8 = iVar8 + 1;
    local_4c = local_4c + 9;
    local_50 = local_50 + 9;
  } while (iVar8 < 5);
  pfVar1 = (float *)(param_1 + 0x20);
  local_ac = *pfVar1;
  local_a8 = *(float *)(param_1 + 0x24);
  local_a4 = *(uint *)(param_1 + 0x28);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  local_3c = 0;
  local_20 = (float)param_2[1];
  local_24 = param_1 + 0x2d08;
  local_58 = param_1 + 0x2c54;
  local_28 = (uint *)(param_1 + 0x2c60);
  puVar9 = (uint *)(param_1 + 0x2d14);
  local_2c = (uint *)(param_1 + 0x2d20);
  puVar4 = (uint *)(param_1 + 0x2c6c);
  local_34 = pfVar1;
  local_30 = pfVar1;
  do {
    local_90 = 0.0;
    local_38 = *(float *)(param_1 + 0x2de8) * *(float *)(param_1 + 0x2614);
    if (local_38 < *(float *)(param_1 + 0x2de4) * *(float *)(param_1 + 0x2614)) {
      local_38 = *(float *)(param_1 + 0x2398);
    }
    fVar3 = *(float *)(param_1 + 0x2de4) * *(float *)(param_1 + 0x2614);
    if (local_38 < fVar3) {
      local_38 = *(float *)(param_1 + 0x2614) * (float)0.5 + fVar3;
    }
    local_14 = (float)core_setcolid_cpp_FUN_00510a40
                                (0x01E57284,*(uint *)(param_1 + 0x20),
                                 *(uint *)(param_1 + 0x28),local_94,local_8c,
                                 *(float *)(param_1 + 0x2dd8) * *(float *)(param_1 + 0x2614),
                                 *(float *)(param_1 + 0x2de4) * *(float *)(param_1 + 0x2614) +
                                 *(float *)(param_1 + 0x24),*(float *)(param_1 + 0x24) + local_38);
    if (DAT_00765a9c == 0) {
      DAT_00765a9c = *(int *)(0x01E57284 + 0x14cd5c);
    }
    puVar5 = (uint *)(local_3c * 0x24 + local_58);
    if (puVar5 != (uint *)&DAT_014b89e8) {
      *puVar5 = _DAT_014b89e8;
      puVar5[1] = _DAT_014b89ec;
      puVar5[2] = _DAT_014b89f0;
    }
    if (local_28 != (uint *)&DAT_014b89f4) {
      *local_28 = _DAT_014b89f4;
      local_28[1] = _DAT_014b89f8;
      local_28[2] = _DAT_014b89fc;
    }
    if (puVar4 != (uint *)&DAT_014b8a00) {
      *puVar4 = _DAT_014b8a00;
      puVar4[1] = _DAT_014b8a04;
      puVar4[2] = _DAT_014b8a08;
    }
    if (0.0 <= local_14) {
      local_c8 = local_14;
      if (1.0 < local_14) {
        local_c8 = 1.0;
      }
      afStack_78[2] = local_94 * local_c8;
      afStack_78[3] = local_90 * local_c8;
      local_68 = local_8c * local_c8;
      *local_34 = *local_34 + afStack_78[2];
      local_34[1] = local_34[1] + afStack_78[3];
      iVar8 = 0x01E57284;
      local_34[2] = local_34[2] + local_68;
      local_b8 = *(float *)(iVar8 + 0x14cd40);
      local_b4 = *(float *)(iVar8 + 0x14cd44);
      local_b0 = *(float *)(iVar8 + 0x14cd48);
      local_14 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0x38))
                                  (param_1,*(uint *)(param_1 + 0x2dd4),local_88);
      local_54 = 0;
      puVar5 = (uint *)(local_3c * 0x24 + local_24);
      *(float *)(param_1 + 0x240c) = local_14;
      if (puVar5 != (uint *)&DAT_014b89e8) {
        *puVar5 = _DAT_014b89e8;
        puVar5[1] = _DAT_014b89ec;
        puVar5[2] = _DAT_014b89f0;
      }
      if (puVar9 != (uint *)&DAT_014b89f4) {
        *puVar9 = _DAT_014b89f4;
        puVar9[1] = _DAT_014b89f8;
        puVar9[2] = _DAT_014b89fc;
      }
      if (local_2c != (uint *)&DAT_014b8a00) {
        *local_2c = _DAT_014b8a00;
        local_2c[1] = _DAT_014b8a04;
        local_2c[2] = _DAT_014b8a08;
      }
      iVar8 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      if ((param_1 == iVar8) && (local_c8 < 1.0)) {
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                  (iVar8,auStack_c4,0x01E57284 + 0x14cd40);
        xxx_unk_c_FUN_004940d0(INT_005b9284,auStack_c4[0],uStack_bc);
      }
      if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x240c)) {
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x240c);
        local_a8 = *(float *)(param_1 + 0x24);
      }
      if ((float)0.90000000000000002 < local_c8) break;
      local_b4 = 0.0;
      fVar3 = SQRT(local_b0 * local_b0 + local_b8 * local_b8);
      if (0.0 < fVar3) {
        fStack_40 = 1.0 / fVar3;
        local_b8 = local_b8 * fStack_40;
        local_b4 = fStack_40 * 0.0;
        local_b0 = local_b0 * fStack_40;
      }
      fStack_44 = (float)0.90000000000000002 - local_c8;
      local_94 = local_94 * fStack_44;
      local_90 = local_90 * fStack_44;
      local_8c = local_8c * fStack_44;
      fVar3 = local_b0 * local_8c + local_b8 * local_94 + local_b4 * local_90;
      if (0.0 <= fVar3) break;
      fVar3 = fVar3 * (float)1.2;
      fStack_64 = local_b8 * fVar3;
      fStack_60 = local_b4 * fVar3;
      fStack_5c = local_b0 * fVar3;
      local_94 = local_94 - fStack_64;
      local_90 = local_90 - fStack_60;
      local_8c = local_8c - fStack_5c;
    }
    else {
      local_48 = local_14 + (float)-0.01;
      local_a0 = *(float *)(0x01E57284 + 0x14cd40) * local_48;
      local_9c = *(float *)(0x01E57284 + 0x14cd44) * local_48;
      local_98 = *(float *)(0x01E57284 + 0x14cd48) * local_48;
      *local_30 = *local_30 - local_a0;
      local_30[1] = local_30[1] - local_9c;
      local_54 = 1;
      local_30[2] = local_30[2] - local_98;
    }
    puVar4 = puVar4 + 9;
    puVar9 = puVar9 + 9;
    local_2c = local_2c + 9;
    local_3c = local_3c + 1;
    local_28 = local_28 + 9;
  } while (local_3c < 3);
  if (local_54 != 0) {
    local_14 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0x38))
                                (param_1,*(uint *)(param_1 + 0x2dd4),0);
    *(float *)(param_1 + 0x240c) = local_14;
  }
  fVar3 = *(float *)(param_1 + 0x24) + local_20;
  *(float *)(param_1 + 0x24) = fVar3;
  if (*(float *)(param_1 + 0x240c) <= fVar3) {
    if ((*(int *)(param_1 + 0x2408) != 0) &&
       (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x240c) + (float)0.5)) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x240c);
      local_a8 = *(float *)(param_1 + 0x24);
    }
  }
  else {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x240c);
  }
  *(uint *)(param_1 + 0x2428) = 0;
  *(uint *)(param_1 + 0x2424) = *(uint *)(param_1 + 0x2428);
  *(uint *)(param_1 + 0x2420) = *(uint *)(param_1 + 0x2424);
  iVar8 = 0x01E57284;
  *(float *)(param_1 + 0x2424) =
       (*(float *)(param_1 + 0x24) - local_a8) / *(float *)(0x01C775EC + 0x264);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(iVar8);
  return;
}

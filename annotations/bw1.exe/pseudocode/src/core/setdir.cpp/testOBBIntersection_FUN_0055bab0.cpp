// Name: core_setdir.cpp_testOBBIntersection_FUN_0055bab0
// Address: 0055bab0
// Address Range: [[0055bab0, 0055bf00]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_setdir_cpp_testOBBIntersection_FUN_0055bab0(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint __cdecl core_setdir_cpp_testOBBIntersection_FUN_0055bab0(float *param_1,float *param_2)

{
  uint uVar1;
  float *pfVar2;
  byte bVar3;
  uint auStackY_1104 [984];
  byte *puVar4;
  byte *puVar5;
  float *pfVar6;
  uint uVar7;
  float local_194 [24];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118 [2];
  float local_110;
  uint auStack_10c [2];
  float local_104;
  float local_100 [4];
  float local_f0;
  float local_ec;
  uint auStack_e8 [2];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac [4];
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float afStack_70 [5];
  float local_5c [3];
  double local_50;
  double local_48;
  double local_40;
  uint local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float *local_24;
  uint local_20;
  float *local_1c;
  float local_18;
  float local_14;
  
  bVar3 = 0;
  local_bc = -param_2[3];
  local_b8 = -param_2[4];
  local_b4 = -param_2[5];
  if (&local_134 != &local_bc) {
    local_134 = local_bc;
    local_130 = local_b8;
    local_12c = local_b4;
  }
  if (&local_128 != param_2 + 3) {
    local_128 = param_2[3];
    local_124 = param_2[4];
    local_120 = param_2[5];
  }
  local_80 = local_bc;
  local_7c = local_b8;
  local_78 = local_b4;
  __arrinit(local_194,8,&g_CVectorTypeInfo);
  local_1c = param_2 + 6;
  local_34 = param_1 + 6;
  local_20 = 0;
  do {
    local_30 = param_1[3];
    local_24 = (float *)((int)local_194 + local_20 * 0xc);
    while( true ) {
      local_e0 = local_30;
      if ((local_20 & 2) == 0) {
        local_2c = param_1[4];
      }
      else {
        local_2c = -param_1[4];
      }
      local_dc = local_2c;
      if ((local_20 & 4) == 0) {
        local_28 = param_1[5];
      }
      else {
        local_28 = -param_1[5];
      }
      local_d8 = local_28;
      core_dirmat_cpp_FUN_0045f690(local_34,&local_e0);
      local_d0[2] = afStack_70[2];
      *(uint *)((int)local_d0 + ((uint)bVar3 * -2 + 3) * 4) =
           *(uint *)((int)afStack_70 + ((uint)bVar3 * -2 + 3) * 4);
      *(uint *)((int)local_d0 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 4) * 4) =
           *(uint *)((int)afStack_70 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 4) * 4);
      local_b0 = local_d0[2] + *param_1;
      local_ac[0] = local_d0[3] + param_1[1];
      local_ac[1] = local_c0 + param_1[2];
      local_104 = local_d0[2] + *param_1;
      *(uint *)((int)local_100 + (uint)bVar3 * 0xfffffff8) =
           *(uint *)((int)local_ac + (uint)bVar3 * 0xfffffff8);
      *(uint *)((int)local_100 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 1) * 4) =
           *(uint *)((int)local_ac + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 1) * 4);
      if (&local_e0 != &local_104) {
        local_e0 = local_104;
        local_dc = local_100[0];
        local_d8 = local_100[1];
      }
      local_ac[2] = local_e0 - *param_2;
      local_ac[3] = local_dc - param_2[1];
      local_9c = local_d8 - param_2[2];
      local_110 = local_e0 - *param_2;
      *(uint *)((int)auStack_10c + (uint)bVar3 * 0xfffffff8) =
           *(uint *)((int)local_ac + ((uint)bVar3 * -2 + 3) * 4);
      *(uint *)((int)auStack_10c + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 1) * 4) =
           *(uint *)((int)local_ac + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 4) * 4);
      core_dirmat_cpp_FUN_0045f700(local_1c,&local_110);
      local_98 = local_8c;
      *(uint *)((int)local_ac + ((uint)bVar3 * -2 + 6) * 4) =
           *(uint *)((int)local_ac + ((uint)bVar3 * -2 + 9) * 4);
      pfVar2 = local_24;
      *(uint *)((int)local_ac + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 7) * 4) =
           *(uint *)((int)local_ac + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 10) * 4);
      if (&local_e0 != &local_98) {
        local_e0 = local_98;
        local_dc = local_94;
        local_d8 = local_90;
      }
      if (((((local_134 <= local_e0) && (local_130 <= local_dc)) && (local_12c <= local_d8)) &&
          ((local_e0 <= local_128 && (local_dc <= local_124)))) && (local_d8 <= local_120)) {
        return 1;
      }
      if (&local_e0 != local_24) {
        *local_24 = local_e0;
        pfVar2[1] = local_dc;
        pfVar2[2] = local_d8;
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + 3;
      if (7 < (int)local_20) {
        pfVar2 = local_194;
        local_38 = 0;
        while( true ) {
          uVar1 = local_38 ^ 1;
          uVar7 = 0;
          puVar5 = (byte *)&local_74;
          local_d4 = *(float *)((int)local_194 + uVar1 * 0xc) - *pfVar2;
          local_d0[0] = local_194[uVar1 * 3 + 1] - pfVar2[1];
          puVar4 = (byte *)&local_134;
          local_d0[1] = local_194[uVar1 * 3 + 2] - pfVar2[2];
          local_74 = *(float *)((int)local_194 + uVar1 * 0xc) - *pfVar2;
          *(uint *)((int)afStack_70 + (uint)bVar3 * 0xfffffff8) =
               *(uint *)((int)local_d0 + (uint)bVar3 * 0xfffffff8);
          pfVar6 = pfVar2;
          *(uint *)((int)afStack_70 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 1) * 4) =
               *(uint *)((int)local_d0 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 1) * 4);
          local_14 = (float)core_box_cpp_FUN_00420ee0(puVar4,pfVar6,puVar5,uVar7);
          local_18 = local_14;
          local_40 = (double)local_14;
          if ((0.0 <= local_40) && (local_40 <= 1.0)) {
            return 1;
          }
          uVar1 = local_38 ^ 2;
          uVar7 = 0;
          puVar4 = (byte *)local_5c;
          local_100[2] = *(float *)((int)local_194 + uVar1 * 0xc) - *pfVar2;
          local_100[3] = local_194[uVar1 * 3 + 1] - pfVar2[1];
          puVar5 = (byte *)&local_134;
          local_f0 = local_194[uVar1 * 3 + 2] - pfVar2[2];
          local_5c[0] = *(float *)((int)local_194 + uVar1 * 0xc) - *pfVar2;
          *(uint *)((int)afStack_70 + ((uint)bVar3 * -2 + 6) * 4) =
               *(uint *)((int)local_100 + ((uint)bVar3 * -2 + 3) * 4);
          pfVar6 = pfVar2;
          *(uint *)((int)afStack_70 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 7) * 4) =
               *(uint *)((int)local_100 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 4) * 4);
          local_14 = (float)core_box_cpp_FUN_00420ee0(puVar5,pfVar6,puVar4,uVar7);
          local_48 = (double)local_14;
          if ((0.0 <= local_48) && (local_48 <= 1.0)) break;
          uVar1 = local_38 ^ 4;
          uVar7 = 0;
          puVar4 = (byte *)&local_ec;
          local_11c = *(float *)((int)local_194 + uVar1 * 0xc) - *pfVar2;
          local_118[0] = local_194[uVar1 * 3 + 1] - pfVar2[1];
          puVar5 = (byte *)&local_134;
          local_118[1] = local_194[uVar1 * 3 + 2] - pfVar2[2];
          local_ec = *(float *)((int)local_194 + uVar1 * 0xc) - *pfVar2;
          *(uint *)((int)auStack_e8 + (uint)bVar3 * 0xfffffff8) =
               *(uint *)((int)local_118 + (uint)bVar3 * 0xfffffff8);
          pfVar6 = pfVar2;
          *(uint *)((int)auStack_e8 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 1) * 4) =
               *(uint *)((int)local_100 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + -5) * 4);
          local_14 = (float)core_box_cpp_FUN_00420ee0(puVar5,pfVar6,puVar4,uVar7);
          local_50 = (double)local_14;
          if ((0.0 <= local_50) && (local_50 <= 1.0)) {
            return 1;
          }
          local_38 = local_38 + 1;
          pfVar2 = pfVar2 + 3;
          if (7 < (int)local_38) {
            return 0;
          }
        }
        return 1;
      }
      if ((local_20 & 1) == 0) break;
      local_30 = -param_1[3];
    }
  } while( true );
}

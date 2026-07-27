// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20
// Address: 004f0c20
// Address Range: [[004f0c20, 004f14fe]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_004f0c20(float *param_1,float *param_2,undefined4 *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_004f0c20(float *param_1,float *param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *unaff_EBX;
  float *unaff_ESI;
  int iVar6;
  uint uVar7;
  byte bVar8;
  float10 fVar9;
  int unaff_retaddr;
  float afStackY_1040 [959];
  float fStack_128;
  float fStack_124;
  float *pfStack_120;
  float *apfStack_11c [3];
  float local_110;
  float local_10c;
  float fStack_108;
  byte local_f8 [28];
  float local_dc;
  float local_d8;
  float local_d4;
  byte local_d0 [8];
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  int local_b0;
  uint local_ac;
  int iStack_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  float local_8c;
  float local_88;
  float fStack_84;
  byte local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float afStack_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [3];
  uint local_2c;
  uint local_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  bVar8 = 0;
  apfStack_11c[0] = param_2;
  pfStack_120 = (float *)&DAT_01fba938;
  fStack_124 = 7.259422e-39;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700();
  param_1[6] = local_58;
  param_1[(uint)bVar8 * -2 + 7] = afStack_54[(uint)bVar8 * -2];
  (param_1 + (uint)bVar8 * -2 + 7)[(uint)bVar8 * -2 + 1] =
       afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  local_a0 = 0.0;
  local_9c = 0.0;
  local_98 = 0;
  switch(param_4 % 9) {
  case 1:
    local_a0 = 5.60519e-45;
    break;
  case 2:
    local_a0 = -NAN;
    break;
  case 3:
    local_98 = 4;
    break;
  case 4:
    local_98 = 0xfffffffc;
    break;
  case 5:
    local_98 = 4;
    local_a0 = 5.60519e-45;
    break;
  case 6:
    local_98 = 4;
    local_a0 = -NAN;
    break;
  case 7:
    local_98 = 0xfffffffc;
    local_a0 = -NAN;
    break;
  case 8:
    local_98 = 0xfffffffc;
    local_a0 = 5.60519e-45;
  }
  local_ac = (int)param_1[3] - (int)param_1[6];
  if (0x31 < (int)((local_ac ^ (int)local_ac >> 0x1f) - ((int)local_ac >> 0x1f))) {
    afStack_54[2] = *param_1 - *param_2;
    afStack_54[3] = param_1[1] - param_2[1];
    local_44 = param_1[2] - param_2[2];
    apfStack_11c[0] = afStack_54 + 2;
    pfStack_120 = (float *)local_d0;
LAB_004f0ce0:
    puVar1 = (uint *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
    if (puVar1 != unaff_EBX) {
      *unaff_EBX = *puVar1;
      unaff_EBX[1] = puVar1[1];
      unaff_EBX[2] = puVar1[2];
    }
    return 2;
  }
  local_a4 = (float)((int)param_1[5] - (int)param_1[8]);
  if (0x31 < (int)(((uint)local_a4 ^ (int)local_a4 >> 0x1f) - ((int)local_a4 >> 0x1f))) {
    local_64 = *param_1 - *param_2;
    local_60 = param_1[1] - param_2[1];
    local_5c = param_1[2] - param_2[2];
    apfStack_11c[0] = &local_64;
    pfStack_120 = &local_88;
    fStack_124 = 7.26003e-39;
    puVar1 = (uint *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
    if (puVar1 == param_3) {
      return 2;
    }
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = puVar1[2];
    return 2;
  }
  _DAT_01e3161c = (int)param_1[6] - (int)param_1[9];
  _DAT_01e31628 = 0x32;
  _DAT_01e31624 = 0x32;
  _DAT_01e31620 = (int)param_1[8] - (int)param_1[0xb];
  if ((((_DAT_01e3161c < 0) || (99 < _DAT_01e3161c)) || (_DAT_01e31620 < 0)) || (99 < _DAT_01e31620)
     ) {
    local_dc = *param_1 - *param_2;
    local_d8 = param_1[1] - param_2[1];
    local_d4 = param_1[2] - param_2[2];
    apfStack_11c[0] = &local_dc;
    pfStack_120 = &local_c4;
    fStack_124 = 7.260253e-39;
    puVar1 = (uint *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
    if (puVar1 == param_3) {
      return 2;
    }
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = puVar1[2];
    return 2;
  }
  if ((_DAT_01e3161c == 0x32) && (_DAT_01e31620 == 0x32)) {
    local_40 = *param_1 - *param_2;
    local_3c = param_1[1] - param_2[1];
    local_38[0] = param_1[2] - param_2[2];
    apfStack_11c[0] = &local_40;
    pfStack_120 = (float *)local_70;
    fStack_124 = 7.261122e-39;
    puVar1 = (uint *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
    if (puVar1 != param_3) {
      *param_3 = *puVar1;
      param_3[1] = puVar1[1];
      param_3[2] = puVar1[2];
    }
    return 1;
  }
  apfStack_11c[0] = (float *)0x4f0ef9;
  fVar9 = (float10)round((float10)*param_1);
  local_18 = (int)ROUND(fVar9);
  pfStack_120 = (float *)0x4f0f07;
  fVar9 = (float10)round((float10)*param_2);
  local_1c = (int)ROUND(fVar9);
  fStack_124 = 7.260452e-39;
  fVar9 = (float10)round((float10)param_1[2]);
  iStack_20 = (int)ROUND(fVar9);
  fStack_128 = 7.260473e-39;
  fVar9 = (float10)round((float10)*(float *)(unaff_retaddr + 8));
  iStack_24 = (int)ROUND(fVar9);
  uVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                    (param_1,_DAT_01e31620,_DAT_01e3161c,param_1[7]);
  uVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                    (param_1,_DAT_01e31628,_DAT_01e31624,param_1[4]);
  iVar4 = core_path_cpp_CPathMap_isLineWalkable_FUN_004f0540
                    (param_1,_DAT_01e3161c,_DAT_01e31620,uVar2,_DAT_01e31624,_DAT_01e31628,uVar3);
  if (iVar4 != 0) {
    local_44 = _DAT_01fba96c;
    local_40 = _DAT_01fba970;
    local_3c = _DAT_01fba974;
    if (&local_8c != param_1) {
      local_8c = *param_1;
      local_88 = param_1[1];
      fStack_84 = param_1[2];
    }
    iStack_24 = iStack_a8;
    local_8c = (float)local_b0 * _DAT_01fba96c + local_8c;
    fStack_84 = (float)iStack_a8 * _DAT_01fba974 + fStack_84;
    fStack_c8 = *param_1 - *unaff_ESI;
    local_c4 = param_1[1] - unaff_ESI[1];
    fStack_c0 = param_1[2] - unaff_ESI[2];
    puVar1 = (uint *)
             core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_38,&fStack_c8);
    if (puVar1 != unaff_EBX) {
      *unaff_EBX = *puVar1;
      unaff_EBX[1] = puVar1[1];
      unaff_EBX[2] = puVar1[2];
    }
    return 1;
  }
  iVar4 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790
                    (param_1,_DAT_01e31624,_DAT_01e31628,_DAT_01e3161c,_DAT_01e31620);
  if (iVar4 == 0) {
    iVar4 = core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(param_1,param_1[7]);
    if (iVar4 != 0) {
      uVar5 = (int)param_1[_DAT_01e31628 * 100 + _DAT_01e31624 + 0xc] - (int)param_1[4] >> 0x1f;
      if (3 < (int)(((int)param_1[_DAT_01e31628 * 100 + _DAT_01e31624 + 0xc] - (int)param_1[4] ^
                    uVar5) - uVar5)) {
        local_a4 = *param_1 - *unaff_ESI;
        local_a0 = param_1[1] - unaff_ESI[1];
        local_9c = param_1[2] - unaff_ESI[2];
        puVar1 = (uint *)
                 core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                           (local_f8,&local_a4);
        if (puVar1 == unaff_EBX) {
          return 2;
        }
        *unaff_EBX = *puVar1;
        unaff_EBX[1] = puVar1[1];
        unaff_EBX[2] = puVar1[2];
        return 2;
      }
      local_28 = 0xffffffff;
      iVar4 = _DAT_01e31624;
      iVar6 = _DAT_01e31628;
      uVar5 = 0xffffffff;
      do {
        uVar7 = (uint)*(byte *)(iVar6 * 100 + 0x1e40098 + iVar4);
        local_2c = local_28;
        local_28 = uVar5;
        if (uVar7 == 0) {
          fStack_128 = *param_1 - *unaff_ESI;
          fStack_124 = param_1[1] - unaff_ESI[1];
          pfStack_120 = (float *)(param_1[2] - unaff_ESI[2]);
          puVar1 = (uint *)
                   core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                             (apfStack_11c,&stack0xfffffed8);
          if (puVar1 == unaff_EBX) {
            return 2;
          }
          *unaff_EBX = *puVar1;
          unaff_EBX[1] = puVar1[1];
          unaff_EBX[2] = puVar1[2];
          return 2;
        }
        iVar4 = iVar4 - *(int *)(&DAT_005be0e8 + uVar7 * 4);
        iVar6 = iVar6 - *(int *)(&DAT_005be10c + uVar7 * 4);
        if (iVar4 < 0) {
          PTR_01cc4800 = "..\\core\\path.cpp";
          INT_01cc4804 = 0x547;
          core_main_c_FUN_004c8440("Out of bounds1!");
        }
        if (iVar6 < 0) {
          PTR_01cc4800 = "..\\core\\path.cpp";
          INT_01cc4804 = 0x548;
          core_main_c_FUN_004c8440("Out of bounds2!");
        }
        if (99 < iVar4) {
          PTR_01cc4800 = "..\\core\\path.cpp";
          INT_01cc4804 = 0x549;
          core_main_c_FUN_004c8440("Out of bounds3!");
        }
        if (99 < iVar6) {
          PTR_01cc4800 = "..\\core\\path.cpp";
          INT_01cc4804 = 0x54a;
          core_main_c_FUN_004c8440("Out of bounds4!");
        }
        uVar5 = uVar7;
      } while ((iVar4 != _DAT_01e3161c) || (iVar6 != _DAT_01e31620));
      *unaff_EBX = 0;
      unaff_EBX[2] = 0;
      uVar2 = core_path_cpp_CPathMap_getDirection_FUN_004efeb0
                        (param_1,uVar7,local_28,local_2c,unaff_ESI);
      unaff_EBX[1] = uVar2;
      return 1;
    }
    local_110 = *param_1 - *unaff_ESI;
    local_10c = param_1[1] - unaff_ESI[1];
    fStack_108 = param_1[2] - unaff_ESI[2];
    goto LAB_004f0ce0;
  }
  if (iVar4 == 1) {
    if (_DAT_01e31624 <= _DAT_01e3161c) {
      if (_DAT_01e31624 < _DAT_01e3161c) {
        uVar2 = 4;
      }
      else if (_DAT_01e31620 < _DAT_01e31628) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      goto LAB_004f1185;
    }
  }
  else {
    if (_DAT_01e31620 < _DAT_01e31628) {
      uVar2 = 1;
      goto LAB_004f1185;
    }
    if (_DAT_01e31628 < _DAT_01e31620) {
      uVar2 = 2;
      goto LAB_004f1185;
    }
    if (_DAT_01e31624 <= _DAT_01e3161c) {
      uVar2 = 4;
      goto LAB_004f1185;
    }
  }
  uVar2 = 3;
LAB_004f1185:
  *unaff_EBX = 0;
  unaff_EBX[2] = 0;
  uVar2 = core_path_cpp_CPathMap_getDirection_FUN_004efeb0
                    (param_1,uVar2,0xffffffff,0xffffffff,unaff_ESI);
  unaff_EBX[1] = uVar2;
  return 1;
}

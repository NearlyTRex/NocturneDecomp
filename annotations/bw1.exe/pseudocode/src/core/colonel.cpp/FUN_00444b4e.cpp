// Name: core_colonel.cpp_FUN_00444b4e
// Address: 00444b4e
// Address Range: [[00444b4e, 00445137]]
// Convention: unknown
// Signature: void core_colonel_cpp_FUN_00444b4e(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_colonel_cpp_FUN_00444b4e(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  CPathMap *this_ptr;
  byte bVar4;
  float afStackY_10b4 [1007];
  float fStack_e0;
  float fStack_dc;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [6];
  float fStack_b0;
  float fStack_a8;
  float afStack_a4 [5];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  iStack_28 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  iStack_24 = 0;
  fStack_1c = 0.25;
  fStack_2c = 0.7853982;
  memset((void *)(param_1 + 0xc1d8),0,0x30);
  if (*(int *)(param_1 + 0x1ffa8) != 0) {
    iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    fStack_a8 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
    afStack_a4[0] = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
    afStack_a4[1] = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
    fStack_84 = fStack_a8;
    afStack_a4[(uint)bVar4 * -2 + 9] = afStack_a4[(uint)bVar4 * -2];
    afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_44 = SQRT(fStack_7c * fStack_7c + fStack_84 * fStack_84 + fStack_80 * fStack_80);
    if ((((*(int *)(param_1 + 0x1ffa8) == 3) || (fStack_44 < _DAT_005d6cb3)) &&
        ((*(int *)(param_1 + 0x1ffa8) == 2 || (*(int *)(param_1 + 0x1ffa8) == 3)))) &&
       ((iVar2 = core_hero_cpp_FUN_004ec350(param_1,&fStack_e0), iVar2 != 0 &&
        (fStack_e0 < (float)_DAT_005d6cb7)))) {
      iStack_28 = iVar2;
      iStack_24 = 1;
    }
    fStack_cc = *(float *)(iStack_28 + 0x20) - *(float *)(param_1 + 0x20);
    afStack_c8[0] = *(float *)(iStack_28 + 0x24) - *(float *)(param_1 + 0x24);
    afStack_c8[1] = *(float *)(iStack_28 + 0x28) - *(float *)(param_1 + 0x28);
    fStack_6c = fStack_cc;
    afStack_a4[(uint)bVar4 * -2 + 0xf] = afStack_c8[(uint)bVar4 * -2];
    afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (afStack_a4 + 8 != afStack_a4 + 0xe) {
      fStack_84 = fStack_6c;
      fStack_80 = fStack_68;
      fStack_7c = fStack_64;
    }
    fStack_48 = SQRT(fStack_7c * fStack_7c + fStack_84 * fStack_84 + fStack_80 * fStack_80);
    fStack_dc = fStack_48;
    if ((float)_DAT_005d6cbf <= fStack_48) {
      this_ptr = (CPathMap *)0x0;
      if (iStack_24 == 0) {
        iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        this_ptr = (CPathMap *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xc4))(iVar2);
      }
      if (this_ptr == (CPathMap *)0x0) {
        this_ptr = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)(iStack_28 + 0x20));
      }
      iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                        (this_ptr,(CVector3f *)(param_1 + 0x20),&CStack_d8,*(int *)(param_1 + 0x6c))
      ;
      if (iVar2 != 0) {
        fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                     (CStack_d8.y - *(float *)(param_1 + 0x34));
        fVar1 = fStack_18 * _DAT_005d6cc7 * (float)_DAT_005d6ccf;
        fStack_38 = -fStack_1c;
        *(float *)(param_1 + 0xc200) = fVar1;
        if (fVar1 < fStack_38) {
          *(float *)(param_1 + 0xc200) = fStack_38;
        }
        if (fStack_1c < *(float *)(param_1 + 0xc200)) {
          *(float *)(param_1 + 0xc200) = fStack_1c;
        }
        if (((float)_DAT_005d6cd7 <= fStack_dc) || (iStack_24 == 1)) {
          *(uint *)(param_1 + 0xc1e0) = 1;
          *(uint *)(param_1 + 0xc1d8) = 1;
        }
        else {
          *(uint *)(param_1 + 0xc1d8) = 1;
        }
      }
    }
    else {
      if (iStack_24 == 1) {
        if (*(int *)(param_1 + 0x1ffac) == 0) {
          *(uint *)(param_1 + 0xc1f0) = 1;
        }
        else {
          pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             ((CMotionController *)(param_1 + 0x158));
          if ((pSVar3->state_index != 2) && (pSVar3->state_index != 1)) {
            *(uint *)(param_1 + 0xc1e4) = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                  ((CMotionController *)(param_1 + 0x158));
      }
      if (iStack_24 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_a4 + 8);
        afStack_a4[2] = afStack_c8[2];
        afStack_a4[(uint)bVar4 * -2 + 3] = afStack_c8[(uint)bVar4 * -2 + 3];
        afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
             afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                     (afStack_a4[3] - *(float *)(param_1 + 0x34));
        fVar1 = fStack_18 * _DAT_005d6cc7 * (float)_DAT_005d6ccf;
        fStack_40 = -fStack_1c;
        *(float *)(param_1 + 0xc200) = fVar1;
        if (fVar1 < fStack_40) {
          *(float *)(param_1 + 0xc200) = fStack_40;
        }
        if (fStack_1c < *(float *)(param_1 + 0xc200)) {
          *(float *)(param_1 + 0xc200) = fStack_1c;
        }
        if ((((float)_DAT_005d6cdf < *(float *)(param_1 + 0xc200)) &&
            ((double)*(float *)(param_1 + 0xc200) < _DAT_005d6ce7)) &&
           (*(int *)(param_1 + 0xc1e4) != 0)) {
          *(uint *)(param_1 + 0xc200) = 0;
        }
      }
    }
    fStack_60 = *(float *)(iStack_28 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_5c = *(float *)(iStack_28 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_58 = *(float *)(iStack_28 + 0x28) - *(float *)(param_1 + 0x28);
    fStack_90 = fStack_60;
    afStack_a4[(uint)bVar4 * -2 + 6] = afStack_a4[(uint)bVar4 * -2 + 0x12];
    afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
    if (afStack_a4 + 8 != afStack_a4 + 5) {
      fStack_84 = fStack_90;
      fStack_80 = fStack_8c;
      fStack_7c = fStack_88;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_a4 + 8);
    fStack_78 = fStack_54;
    afStack_a4[(uint)bVar4 * -2 + 0xc] = afStack_a4[(uint)bVar4 * -2 + 0x15];
    afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
    if (afStack_a4 + 8 != afStack_a4 + 0xb) {
      fStack_84 = fStack_78;
      fStack_80 = fStack_74;
      fStack_7c = fStack_70;
    }
    fStack_b0 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                 (fStack_80 - *(float *)(param_1 + 0x34));
    if (fStack_2c < fStack_b0) {
      fStack_b0 = fStack_2c;
    }
    if (fStack_b0 < -fStack_2c) {
      fStack_b0 = -fStack_2c;
    }
    fStack_20 = fStack_b0 - *(float *)(param_1 + 0x1ffb8);
    if (param_2 * _DAT_005d6cef < fStack_20) {
      fStack_20 = param_2 * _DAT_005d6cef;
    }
    if (fStack_20 < param_2 * _DAT_005d6cf3) {
      fStack_20 = param_2 * _DAT_005d6cf3;
    }
    *(float *)(param_1 + 0x1ffb8) = *(float *)(param_1 + 0x1ffb8) + fStack_20;
  }
  return;
}

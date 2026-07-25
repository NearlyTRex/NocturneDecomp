// Name: core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60
// Address: 004f2e60
// Address Range: [[004f2e60, 004f3332]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  byte auStack_110 [20];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  byte auStack_e8 [24];
  byte auStack_d0 [24];
  byte auStack_b8 [24];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
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
  byte auStack_64 [12];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  byte auStack_40 [12];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(auStack_110);
  if ((((param_3 == 0) ||
       (iVar1 = (**(code **)(*(int *)(param_3 + 0x14c) + 0x104))(param_3), iVar1 == 0)) &&
      ((param_4 == 0 ||
       (iVar1 = (**(code **)(*(int *)(param_4 + 0x14c) + 0x104))(param_4), iVar1 == 0)))) &&
     (iVar1 = (**(code **)(*(int *)(param_2 + 0x14c) + 0x34))(param_2,auStack_110), iVar1 == 2)) {
    pfVar2 = (float *)(**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,auStack_b8);
    fStack_58 = *pfVar2 + pfVar2[3];
    fStack_54 = pfVar2[1] + pfVar2[4];
    fStack_34 = fStack_58 * 0.5f;
    fStack_50 = pfVar2[2] + pfVar2[5];
    fStack_30 = fStack_54 * 0.5f;
    fStack_2c = fStack_50 * 0.5f;
    fStack_7c = *(float *)(param_2 + 0x20) + fStack_34;
    fStack_78 = *(float *)(param_2 + 0x24) + fStack_30;
    fStack_74 = *(float *)(param_2 + 0x28) + fStack_2c;
    fStack_70 = fStack_7c - *(float *)(param_1 + 0x20);
    fStack_6c = fStack_78 - *(float *)(param_1 + 0x24);
    fStack_68 = fStack_74 - *(float *)(param_1 + 0x28);
    pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                (param_1 + 0x3c,auStack_40,&fStack_70);
    if (&fStack_7c != pfVar2) {
      fStack_7c = *pfVar2;
      fStack_78 = pfVar2[1];
      fStack_74 = pfVar2[2];
    }
    pfVar2 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_e8);
    if (((((*pfVar2 <= fStack_7c) && (pfVar2[1] <= fStack_78)) && (pfVar2[2] <= fStack_74)) &&
        ((fStack_7c <= pfVar2[3] && (fStack_78 <= pfVar2[4])))) && (fStack_74 <= pfVar2[5])) {
      iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
      fStack_24 = fStack_f4 * fStack_f4;
      iStack_20 = *(int *)(iVar1 + 0x104);
      piVar3 = *(int **)(iVar1 + 0x10c);
      iStack_1c = 0;
      if (0 < iStack_20) {
        pfStack_18 = (float *)(param_2 + 0x20);
        iStack_28 = param_1 + 0x3c;
        while( true ) {
          fStack_a0 = (float)*piVar3 * _DAT_005a1228;
          fStack_9c = (float)piVar3[1] * _DAT_005a1228;
          fStack_98 = (float)piVar3[2] * _DAT_005a1228;
          pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                      (iStack_28,auStack_64,&fStack_a0);
          if (&fStack_a0 != pfVar2) {
            fStack_a0 = *pfVar2;
            fStack_9c = pfVar2[1];
            fStack_98 = pfVar2[2];
          }
          fStack_a0 = (fStack_a0 + *(float *)(param_1 + 0x20)) - *pfStack_18;
          fStack_9c = (fStack_9c + *(float *)(param_1 + 0x24)) - pfStack_18[1];
          fStack_98 = (fStack_98 + *(float *)(param_1 + 0x28)) - pfStack_18[2];
          if (((fStack_fc <= fStack_9c) && (fStack_9c <= fStack_f8 + 1.0)) &&
             (fStack_a0 * fStack_a0 + fStack_98 * fStack_98 <= fStack_24)) break;
          iStack_1c = iStack_1c + 1;
          piVar3 = piVar3 + 3;
          if (iStack_20 <= iStack_1c) {
            return;
          }
        }
        if (param_3 != 0) {
          (**(code **)(*(int *)(param_3 + 0x14c) + 0xd4))(param_3,7,0,0xbf800000);
        }
        if (param_4 != 0) {
          (**(code **)(*(int *)(param_4 + 0x14c) + 0xd4))(param_4,7,0,0xbf800000);
        }
        pfVar2 = (float *)(**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,auStack_d0);
        fStack_94 = *pfVar2 + pfVar2[3];
        fStack_90 = pfVar2[1] + pfVar2[4];
        fStack_88 = fStack_94 * 0.5f;
        fStack_8c = pfVar2[2] + pfVar2[5];
        fStack_84 = fStack_90 * 0.5f;
        fStack_80 = fStack_8c * 0.5f;
        fStack_4c = *(float *)(param_2 + 0x20) + fStack_88;
        fStack_48 = *(float *)(param_2 + 0x24) + fStack_84;
        fStack_44 = *(float *)(param_2 + 0x28) + fStack_80;
        if (&fStack_a0 != &fStack_4c) {
          fStack_a0 = fStack_4c;
          fStack_9c = fStack_48;
          fStack_98 = fStack_44;
        }
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(INT_005b96c4,&fStack_a0,0,200,0);
        return;
      }
    }
  }
  return;
}

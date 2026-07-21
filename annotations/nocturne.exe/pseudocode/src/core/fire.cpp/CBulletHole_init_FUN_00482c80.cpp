// Name: core_fire.cpp_CBulletHole_init_FUN_00482c80
// Address: 00482c80
// Address Range: [[00482c80, 00482e84]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_init_FUN_00482c80(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_init_FUN_00482c80(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  uint uStack_114;
  uint uStack_110;
  byte auStack_e4 [48];
  uint auStack_b4 [12];
  uint auStack_84 [14];
  float local_4c;
  float local_48;
  float local_44;
  float local_34;
  float local_30;
  float local_2c;
  byte auStack_24 [20];
  
  bVar6 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  local_4c = *param_3 * _DAT_005810b8;
  local_48 = param_3[1] * _DAT_005810b8;
  local_44 = _DAT_005810b8 * param_3[2];
  local_34 = *param_1 + local_4c;
  local_30 = param_1[1] + local_48;
  local_2c = param_1[2] + local_44;
  if (param_1 != &local_34) {
    *param_1 = local_34;
    param_1[1] = local_30;
    param_1[2] = local_2c;
  }
  uStack_110 = 0x482d3f;
  fVar7 = (float10)atan2
                             ((float10)param_3[1],
                              SQRT((float10)*param_3 * (float10)*param_3 +
                                   (float10)param_3[2] * (float10)param_3[2]));
  param_1[7] = 0.0;
  param_1[5] = (float)-fVar7;
  uStack_114 = 0x482d56;
  fVar7 = (float10)atan2((float10)*param_3,(float10)param_3[2]);
  param_1[6] = (float)fVar7;
  fVar1 = (float)core_actor_cpp_getRandomInt_FUN_0040de00(0,3);
  param_1[3] = 1.4013e-45;
  param_1[8] = fVar1;
  param_1[4] = (float)param_2;
  if (param_2 != (float *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&uStack_114,param_1,param_1 + 5);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (auStack_e4,(int)param_1[4] + 0x20,(int)param_1[4] + 0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&uStack_114,auStack_e4);
    puVar4 = auStack_84;
    puVar5 = auStack_b4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    pfVar2 = (float *)core_xform_cpp_getTranslation_FUN_0055bc00(auStack_b4,&local_48);
    if (param_1 + 9 != pfVar2) {
      param_1[9] = *pfVar2;
      param_1[10] = pfVar2[1];
      param_1[0xb] = pfVar2[2];
    }
    pfVar2 = (float *)core_xform_cpp_matrixToEulerAngles_FUN_0055b180(auStack_b4,auStack_24);
    if (param_1 + 5 != pfVar2) {
      param_1[5] = *pfVar2;
      param_1[6] = pfVar2[1];
      param_1[7] = pfVar2[2];
    }
    pfVar2 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                (param_1[4],&local_30,param_3);
    if (param_1 + 0xc != pfVar2) {
      param_1[0xc] = *pfVar2;
      param_1[0xd] = pfVar2[1];
      param_1[0xe] = pfVar2[2];
      return;
    }
  }
  return;
}

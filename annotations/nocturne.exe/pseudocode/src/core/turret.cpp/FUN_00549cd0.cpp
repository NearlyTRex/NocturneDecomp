// Name: core_turret.cpp_FUN_00549cd0
// Address: 00549cd0
// Address Range: [[00549cd0, 00549ed2]]
// Convention: unknown
// Signature: CBoundingBox3D * core_turret_cpp_FUN_00549cd0(int param_1,CBoundingBox3D *param_2)

#include "nocturne.h"

CBoundingBox3D * core_turret_cpp_FUN_00549cd0(int param_1,CBoundingBox3D *param_2)

{
  CKeyFramedModelInstance *this_ptr;
  CKeyFramedModel *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint corner_index;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  CMatrix3x4f *matrix;
  byte auStack_104 [48];
  uint auStack_d4 [12];
  uint auStack_a4 [12];
  byte auStack_74 [44];
  CBoundingBox3D CStack_48;
  CVector3f local_30;
  CVector3f CStack_24;
  CKeyFramedModelInstance *pCStack_14;
  float local_10;
  float local_c;
  
  bVar7 = 0;
  auStack_104._0_4_ = 0.0;
  local_c = (float)core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1);
  auStack_104._0_4_ = 7.770517e-39;
  dVar8 = round((double)local_c);
  local_10 = (float)(int)ROUND(dVar8);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  pfVar2 = (float *)((int)local_10 * 0x18 + pCVar1->texture_list[7].textures[2].base.count);
  (param_2->min).x = *pfVar2;
  (param_2->min).y = pfVar2[1];
  (param_2->min).z = pfVar2[2];
  (param_2->max).x = pfVar2[3];
  (param_2->max).y = pfVar2[4];
  (param_2->max).z = pfVar2[5];
  pCStack_14 = (CKeyFramedModelInstance *)(param_1 + 0x57c);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(pCStack_14);
  if (pCVar1->poly_count < 1) {
    return param_2;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (auStack_74,&DAT_02dd1184,param_1 + 0x570);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            ((CMatrix3x4f *)auStack_104,(CVector3f *)&DAT_02dd1184,(CVector3f *)(param_1 + 0x30));
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_74,auStack_104);
  puVar5 = auStack_a4;
  puVar6 = auStack_d4;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  local_10 = (float)core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,1);
  this_ptr = pCStack_14;
  dVar8 = round((double)local_10);
  pCStack_14 = (CKeyFramedModelInstance *)(int)ROUND(dVar8);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr);
  pfVar2 = (float *)(pCVar1->texture_list[7].textures[2].base.count + (int)pCStack_14 * 0x18);
  CStack_48.min.x = *pfVar2;
  CStack_48.min.y = pfVar2[1];
  CStack_48.min.z = pfVar2[2];
  CStack_48.max.x = pfVar2[3];
  CStack_48.max.y = pfVar2[4];
  CStack_48.max.z = pfVar2[5];
  corner_index = 0;
  do {
    matrix = (CMatrix3x4f *)(auStack_104 + 0x2c);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(&CStack_48,&CStack_24,corner_index);
    pCVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_30,pCVar3,matrix);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_2,pCVar3);
  } while ((int)corner_index < 8);
  return param_2;
}

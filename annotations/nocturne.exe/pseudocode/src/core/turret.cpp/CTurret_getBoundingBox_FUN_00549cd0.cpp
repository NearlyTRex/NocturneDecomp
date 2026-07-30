// Name: core_turret.cpp_CTurret_getBoundingBox_FUN_00549cd0
// Address: 00549cd0
// Address Range: [[00549cd0, 00549ed2]]
// Convention: unknown
// Signature: CBoundingBox3D * core_turret_cpp_CTurret_getBoundingBox_FUN_00549cd0(CTurret *param_1,CBoundingBox3D *param_2)

#include "nocturne.h"

CBoundingBox3D * core_turret_cpp_CTurret_getBoundingBox_FUN_00549cd0(CTurret *param_1,CBoundingBox3D *param_2)

{
  CKeyFramedModelInstance *this_ptr;
  CKeyFramedModel *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint corner_index;
  float *pfVar5;
  byte bVar6;
  double dVar7;
  CMatrix3x4f *matrix;
  CMatrix3x4f CStack_d8;
  float afStack_a4 [12];
  byte auStack_74 [48];
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f CStack_24;
  CKeyFramedModelInstance *pCStack_14;
  float local_10;
  float local_c;
  
  bVar6 = 0;
  local_c = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,0);
  dVar7 = round((double)local_c);
  local_10 = (float)(int)ROUND(dVar7);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&(param_1->base).model);
  pfVar2 = (float *)((int)local_10 * 0x18 + pCVar1->texture_list[7].textures[2].base.count);
  (param_2->min).x = *pfVar2;
  (param_2->min).y = pfVar2[1];
  (param_2->min).z = pfVar2[2];
  (param_2->max).x = pfVar2[3];
  (param_2->max).y = pfVar2[4];
  (param_2->max).z = pfVar2[5];
  pCStack_14 = &param_1->model;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(pCStack_14);
  if (pCVar1->poly_count < 1) {
    return param_2;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            ((CMatrix3x4f *)auStack_74,(CVector3f *)&DAT_02dd1184,&(param_1->home_orient).vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            ((CMatrix3x4f *)&stack0xfffffefc,(CVector3f *)&DAT_02dd1184,
             &(param_1->base).base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_74,&stack0xfffffefc);
  pfVar2 = afStack_a4;
  pfVar5 = &CStack_d8.m[0].x;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar6 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  local_10 = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,1);
  this_ptr = pCStack_14;
  dVar7 = round((double)local_10);
  pCStack_14 = (CKeyFramedModelInstance *)(int)ROUND(dVar7);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr);
  pfVar2 = (float *)(pCVar1->texture_list[7].textures[2].base.count + (int)pCStack_14 * 0x18);
  auStack_74._44_4_ = *pfVar2;
  fStack_44 = pfVar2[1];
  local_40 = pfVar2[2];
  local_3c = pfVar2[3];
  local_38 = pfVar2[4];
  local_34 = pfVar2[5];
  corner_index = 0;
  do {
    matrix = &CStack_d8;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                       ((CBoundingBox3D *)(auStack_74 + 0x2c),&CStack_24,corner_index);
    pCVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_30,pCVar3,matrix);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_2,pCVar3);
  } while ((int)corner_index < 8);
  return param_2;
}

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
  CBoundingBox3D *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint corner_index;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  double dVar8;
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
  
  bVar7 = 0;
  local_c = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,0);
  dVar8 = round((double)local_c);
  local_10 = (float)(int)ROUND(dVar8);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&(param_1->base).model);
  pCVar2 = pCVar1->frame_bounds + (int)local_10;
  (param_2->min).x = (pCVar2->min).x;
  (param_2->min).y = (pCVar2->min).y;
  (param_2->min).z = (pCVar2->min).z;
  (param_2->max).x = (pCVar2->max).x;
  (param_2->max).y = (pCVar2->max).y;
  (param_2->max).z = (pCVar2->max).z;
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
  pfVar5 = afStack_a4;
  pfVar6 = &CStack_d8.m[0].x;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
  }
  local_10 = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,1);
  this_ptr = pCStack_14;
  dVar8 = round((double)local_10);
  pCStack_14 = (CKeyFramedModelInstance *)(int)ROUND(dVar8);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr);
  pCVar2 = pCVar1->frame_bounds + (int)pCStack_14;
  auStack_74._44_4_ = (pCVar2->min).x;
  fStack_44 = (pCVar2->min).y;
  local_40 = (pCVar2->min).z;
  local_3c = (pCVar2->max).x;
  local_38 = (pCVar2->max).y;
  local_34 = (pCVar2->max).z;
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

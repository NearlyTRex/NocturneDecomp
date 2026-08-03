// Name: core_turret.cpp_CTurret_getBoundingBox_FUN_00549cd0
// Address: 00549cd0
// Address Range: [[00549cd0, 00549ed2]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_00549cd0(CTurret *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_00549cd0(CTurret *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint corner_index;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  byte bVar7;
  double dVar8;
  CMatrix3x4f CStack_d8;
  CMatrix3x4f CStack_a4;
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
  local_c = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(this_ptr,0);
  dVar8 = round((double)local_c);
  local_10 = (float)(int)ROUND(dVar8);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&(this_ptr->base).model)
  ;
  pCVar2 = pCVar1->frame_bounds + (int)local_10;
  (out_box->min).x = (pCVar2->min).x;
  (out_box->min).y = (pCVar2->min).y;
  (out_box->min).z = (pCVar2->min).z;
  (out_box->max).x = (pCVar2->max).x;
  (out_box->max).y = (pCVar2->max).y;
  (out_box->max).z = (pCVar2->max).z;
  pCStack_14 = &this_ptr->model;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(pCStack_14);
  if (pCVar1->poly_count < 1) {
    return out_box;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            ((CMatrix3x4f *)auStack_74,(CVector3f *)&DAT_02dd1184,&(this_ptr->home_orient).vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            ((CMatrix3x4f *)&stack0xfffffefc,(CVector3f *)&DAT_02dd1184,
             &(this_ptr->base).base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
            ((CMatrix3x4f *)auStack_74,(CMatrix3x4f *)&stack0xfffffefc,&CStack_a4);
  pCVar5 = &CStack_a4;
  pfVar6 = &CStack_d8.m[0].x;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
  }
  local_10 = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(this_ptr,1);
  this_ptr_00 = pCStack_14;
  dVar8 = round((double)local_10);
  pCStack_14 = (CKeyFramedModelInstance *)(int)ROUND(dVar8);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr_00);
  pCVar2 = pCVar1->frame_bounds + (int)pCStack_14;
  auStack_74._44_4_ = (pCVar2->min).x;
  fStack_44 = (pCVar2->min).y;
  local_40 = (pCVar2->min).z;
  local_3c = (pCVar2->max).x;
  local_38 = (pCVar2->max).y;
  local_34 = (pCVar2->max).z;
  corner_index = 0;
  do {
    pCVar5 = &CStack_d8;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                       ((CBoundingBox3D *)(auStack_74 + 0x2c),&CStack_24,corner_index);
    pCVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_30,pCVar3,pCVar5);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(out_box,pCVar3);
  } while ((int)corner_index < 8);
  return out_box;
}

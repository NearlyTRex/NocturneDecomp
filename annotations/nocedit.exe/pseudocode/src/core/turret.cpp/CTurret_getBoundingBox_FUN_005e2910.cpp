// Name: core_turret.cpp_CTurret_getBoundingBox_FUN_005e2910
// Address: 005e2910
// Address Range: [[005e2910, 005e2b12]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005e2910(CTurret *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005e2910(CTurret *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  uint corner_index;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  double dVar7;
  byte auStack_104 [48];
  float afStack_d4 [12];
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
  
  bVar6 = 0;
  auStack_104._0_4_ = 0.0;
  local_c = core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(this_ptr);
  auStack_104._0_4_ = 8.647348e-39;
  dVar7 = round((double)local_c);
  local_10 = (float)(int)ROUND(dVar7);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&(this_ptr->base).model)
  ;
  pCVar2 = pCVar1->frame_bounds + (int)local_10 * 2;
  (out_box->min).x = pCVar2->x;
  (out_box->min).y = pCVar2->y;
  (out_box->min).z = pCVar2->z;
  (out_box->max).x = pCVar2[1].x;
  (out_box->max).y = pCVar2[1].y;
  (out_box->max).z = pCVar2[1].z;
  pCStack_14 = &this_ptr->model;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(pCStack_14);
  if (pCVar1->poly_count < 1) {
    return out_box;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_74,&g_ZeroVector,(CVector3f *)this_ptr->unk1);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_104,&g_ZeroVector,&(this_ptr->base).base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_74,(CMatrix3x4f *)auStack_104,&CStack_a4);
  pCVar4 = &CStack_a4;
  pfVar5 = afStack_d4;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  local_10 = core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(this_ptr);
  this_ptr_00 = pCStack_14;
  dVar7 = round((double)local_10);
  pCStack_14 = (CKeyFramedModelInstance *)(int)ROUND(dVar7);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  pCVar2 = pCVar1->frame_bounds + (int)pCStack_14 * 2;
  auStack_74._44_4_ = pCVar2->x;
  fStack_44 = pCVar2->y;
  local_40 = pCVar2->z;
  local_3c = pCVar2[1].x;
  local_38 = pCVar2[1].y;
  local_34 = pCVar2[1].z;
  corner_index = 0;
  do {
    pCVar4 = (CMatrix3x4f *)(auStack_104 + 0x2c);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)(auStack_74 + 0x2c),&CStack_24,corner_index);
    pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_30,pCVar2,pCVar4);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(out_box,pCVar2);
  } while ((int)corner_index < 8);
  return out_box;
}

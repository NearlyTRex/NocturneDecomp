// Name: core_turret.cpp_CTurret_getBoundingBox_FUN_005a28c0
// Address: 005a28c0
// Address Range: [[005a28c0, 005a2abd]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005a28c0(CTurret *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005a28c0(CTurret *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint corner_index;
  CBoundingBox3D *unaff_ESI;
  uint *puVar3;
  CBoundingBox3D *pCVar4;
  float *pfVar5;
  uint *puVar6;
  CBoundingBox3D *pCVar7;
  byte bVar8;
  double dVar9;
  CTurret *unaff_retaddr;
  uint auStackY_1030 [955];
  CMatrix3x4f *matrix;
  CMatrix3x4f CStack_104;
  byte auStack_d4 [48];
  uint auStack_a4 [11];
  CBoundingBox3D CStack_78;
  CBoundingBox3D CStack_60;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  int iStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar8 = 0;
  fStack_10 = core_turret_cpp_CTurret_getCurFrame_FUN_005a2ae0(this_ptr,0);
  dVar9 = round((double)fStack_10);
  fStack_14 = (float)(int)ROUND(dVar9);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&(this_ptr->base).model)
  ;
  pCVar4 = pCVar1->frame_bounds + (int)fStack_14;
  pfVar5 = &CStack_78.min.y;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = (pCVar4->min).x;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar8 * -8 + 4);
    pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&unaff_retaddr->model);
  if (0 < pCVar1->poly_count) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
              ((CMatrix3x4f *)&stack0xfffffecc,&g_CVector3f_02c8af28,
               &(unaff_retaddr->home_orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005b5620
              (&CStack_104,&g_CVector3f_02c8af28,&(unaff_retaddr->base).base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              ((CMatrix3x4f *)&stack0xfffffecc,&CStack_104,(CMatrix3x4f *)auStack_d4);
    puVar3 = (uint *)auStack_d4;
    puVar6 = auStack_a4;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    fStack_14 = core_turret_cpp_CTurret_getCurFrame_FUN_005a2ae0(unaff_retaddr,1);
    dVar9 = round((double)fStack_14);
    iStack_18 = (int)ROUND(dVar9);
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&unaff_retaddr->model)
    ;
    corner_index = 0;
    pCVar4 = pCVar1->frame_bounds + iStack_18;
    pCVar7 = &CStack_60;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pCVar7->min).x = (pCVar4->min).x;
      pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar8 * -8 + 4);
      pCVar7 = (CBoundingBox3D *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
    }
    do {
      matrix = (CMatrix3x4f *)(auStack_d4 + 0x2c);
      core_box_cpp_CBoundingBox3D_getCorner_FUN_00420570(&CStack_60,corner_index,&CStack_30);
      CStack_48.x = CStack_30.x;
      *(uint *)((int)&CStack_48 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_30 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_48 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_30 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_xform_cpp_transformVector3x4_FUN_005b5080(&CStack_48,matrix,&CStack_3c);
      CStack_24.x = CStack_3c.x;
      *(uint *)((int)&CStack_24 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_3c + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_24 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_3c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      corner_index = corner_index + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420500(&CStack_78,&CStack_24);
    } while ((int)corner_index < 8);
  }
  pCVar4 = &CStack_78;
  pCVar7 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar7->min).x = (pCVar4->min).x;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar7 = (CBoundingBox3D *)((int)pCVar7 + (uint)bVar8 * -8 + 4);
  }
  return unaff_ESI;
}

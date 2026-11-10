// Name: core_turret.cpp_CTurret_getBoundingBox_FUN_0057ec70
// Address: 0057ec70
// Address Range: [[0057ec70, 0057ee6d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_0057ec70(CTurret *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_0057ec70(CTurret *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar1;
  int iVar2;
  int iVar3;
  CBoundingBox3D *unaff_ESI;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  CBoundingBox3D *pCVar6;
  uint *puVar7;
  float *pfVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1028 [955];
  byte auStack_130 [48];
  CMatrix3x4f CStack_100;
  uint auStack_d0 [12];
  uint auStack_a0 [12];
  CBoundingBox3D CStack_70;
  float afStack_58 [6];
  uint uStack_40;
  float afStack_3c [5];
  uint uStack_28;
  CVector3f CStack_1c;
  float fStack_10;
  
  bVar9 = 0;
  fStack_10 = core_turret_cpp_CTurret_getCurFrame_FUN_0057ee90(this_ptr,0);
  fVar10 = (float10)fStack_10;
  this_ptr_00 = (CKeyFramedModelInstance *)round();
  fStack_10 = (float)(int)ROUND(fVar10);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr_00);
  pCVar5 = pCVar1->frame_bounds + (int)fStack_10;
  pCVar6 = &CStack_70;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar6->min).x = (pCVar5->min).x;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar9 * -8 + 4);
    pCVar6 = (CBoundingBox3D *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  if (0 < pCVar1->poly_count) {
    core_xform_cpp_FUN_00591c10(auStack_130,&DAT_0265370c,&this_ptr->home_orient);
    core_xform_cpp_FUN_00591ad0
              (&CStack_100,(CVector3f *)&DAT_0265370c,&(this_ptr->base).base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_130,&CStack_100);
    puVar4 = auStack_d0;
    puVar7 = auStack_a0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    fStack_10 = core_turret_cpp_CTurret_getCurFrame_FUN_0057ee90(this_ptr,1);
    fVar10 = (float10)fStack_10;
    round();
    fStack_10 = (float)(int)ROUND(fVar10);
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
    iVar3 = 0;
    pCVar5 = pCVar1->frame_bounds + (int)fStack_10;
    pfVar8 = afStack_58;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar8 = (pCVar5->min).x;
      pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar9 * -8 + 4);
      pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
    }
    do {
      core_box_cpp_FUN_0041a600(afStack_58,iVar3,auStack_a0);
      uStack_40 = uStack_28;
      afStack_3c[(uint)bVar9 * -2] = afStack_3c[(uint)bVar9 * -2 + 6];
      afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      core_xform_cpp_FUN_00591530(&uStack_40);
      CStack_1c.x = afStack_3c[2];
      *(float *)((int)&CStack_1c + (uint)bVar9 * -8 + 4) = afStack_3c[(uint)bVar9 * -2 + 3];
      *(float *)((int)&CStack_1c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      iVar3 = iVar3 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(&CStack_70,&CStack_1c);
    } while (iVar3 < 8);
  }
  pCVar5 = &CStack_70;
  pCVar6 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar6->min).x = (pCVar5->min).x;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar6 = (CBoundingBox3D *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
  }
  return unaff_ESI;
}

// Name: core_turret.cpp_FUN_005a28c0
// Address: 005a28c0
// Address Range: [[005a28c0, 005a2abd]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_005a28c0(CTurret *param_1)

#include "nocturne.h"

void core_turret_cpp_FUN_005a28c0(CTurret *param_1)

{
  CKeyFramedModelInstance *this_ptr;
  CKeyFramedModel *pCVar1;
  int iVar2;
  int iVar3;
  uint *unaff_ESI;
  CBoundingBox3D *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint auStackY_1028 [955];
  CMatrix3x4f aCStack_130 [48];
  CMatrix3x4f aCStack_100 [48];
  uint auStack_d0 [12];
  uint auStack_a0 [12];
  CBoundingBox3D CStack_70;
  uint auStack_58 [6];
  uint uStack_40;
  uint auStack_3c [2];
  CVector3f CStack_34;
  uint uStack_28;
  uint auStack_24 [2];
  CVector3f CStack_1c;
  float fStack_10;
  
  bVar7 = 0;
  fStack_10 = core_turret_cpp_CTurret_getCurFrame_FUN_005a2ae0(param_1,0);
  fVar8 = (float10)fStack_10;
  this_ptr = (CKeyFramedModelInstance *)round();
  fStack_10 = (float)(int)ROUND(fVar8);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr);
  puVar5 = (uint *)(*(int *)&pCVar1->field_0x350 + (int)fStack_10 * 0x18);
  pCVar4 = &CStack_70;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pCVar4 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&param_1->field_0x584);
  if (0 < *(int *)&pCVar1->field_0x110) {
    core_xform_cpp_FUN_005b5760
              (aCStack_130,(CVector3f *)&DAT_02c8af28,(CVector3f *)&param_1->field_0x578);
    core_xform_cpp_FUN_005b5620
              (aCStack_100,(CVector3f *)&DAT_02c8af28,(CVector3f *)&param_1->field_0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_130,aCStack_100);
    puVar5 = auStack_d0;
    puVar6 = auStack_a0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    fStack_10 = core_turret_cpp_CTurret_getCurFrame_FUN_005a2ae0(param_1,1);
    fVar8 = (float10)fStack_10;
    round();
    fStack_10 = (float)(int)ROUND(fVar8);
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)&param_1->field_0x584);
    iVar3 = 0;
    puVar5 = (uint *)(*(int *)&pCVar1->field_0x350 + (int)fStack_10 * 0x18);
    puVar6 = auStack_58;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    do {
      core_box_cpp_FUN_00420570(auStack_58,iVar3,auStack_a0);
      uStack_40 = uStack_28;
      auStack_3c[(uint)bVar7 * -2] = auStack_24[(uint)bVar7 * -2];
      auStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           auStack_24[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_xform_cpp_FUN_005b5080(&uStack_40);
      CStack_1c._0_4_ = CStack_34._0_4_;
      *(uint *)((int)&CStack_1c + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_34 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_1c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_34 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      iVar3 = iVar3 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420500(&CStack_70,&CStack_1c);
    } while (iVar3 < 8);
  }
  pCVar4 = &CStack_70;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *(uint *)pCVar4;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar7 * -2 + 1;
  }
  return;
}

// Name: core_charactr.cpp_CCharacter_FUN_0042d090
// Address: 0042d090
// Address Range: [[0042d090, 0042d2fa]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042d090(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d090(CCharacter *this_ptr)

{
  CDemonActor *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  SCarryHand *pSVar5;
  float *pfVar6;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float in_stack_00000008;
  CMatrix3x4f CStack_280;
  CMatrix3x4f CStack_250;
  CMatrix3x4f CStack_220;
  CMatrix3x4f CStack_1f0;
  float local_1c0 [12];
  CMatrix3x4f CStack_190;
  CMatrix3x4f CStack_160;
  CMatrix3x4f CStack_130;
  CMatrix3x4f CStack_100;
  CMatrix3x4f CStack_d0;
  CMatrix3x4f CStack_a0;
  CMatrix3x4f CStack_70;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f *local_28;
  CVector3f *local_24;
  CMatrix3x4f *local_20;
  SCarryHand *local_1c;
  int local_18;
  
  bVar9 = 0;
  local_28 = (CVector3f *)&(this_ptr->base).orient;
  local_24 = &(this_ptr->base).location.position;
  local_18 = 0;
  local_20 = (this_ptr->model).bone_transform.bone_world_matrices;
  pSVar5 = this_ptr->carry_hands;
  do {
    if (pSVar5->carry_actor != (CDemonActor *)0x0) {
      local_1c = pSVar5;
      (*(((this_ptr->base).vtable._uc)->_uc).getCarryObjToBodyXForm)();
      pfVar6 = local_1c0;
      pCVar7 = &CStack_220;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar7->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
      }
      if (*(float *)(pSVar5->unk2 + 0x34) < 1.0) {
        fVar2 = *(float *)(pSVar5->unk2 + 0x30) * in_stack_00000008 +
                *(float *)(pSVar5->unk2 + 0x34);
        *(float *)(pSVar5->unk2 + 0x34) = fVar2;
        if (fVar2 <= 1.0) {
          core_xform_cpp_inverse_FUN_005f6210(local_20 + *(int *)pSVar5->unk1,&CStack_250);
          pCVar7 = &CStack_250;
          pCVar8 = &CStack_70;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar8->m[0].w = pCVar7->m[0].w;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_220,&CStack_70,&CStack_1f0);
          pCVar7 = &CStack_1f0;
          pCVar8 = &CStack_a0;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar8->m[0].w = pCVar7->m[0].w;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005f7140
                    ((CMatrix3x4f *)pSVar5->unk2,&CStack_a0,*(float *)(pSVar5->unk2 + 0x34),
                     &CStack_160);
          pCVar7 = &CStack_160;
          pCVar8 = &CStack_190;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar8->m[0].w = pCVar7->m[0].w;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&CStack_190,local_20 + *(int *)pSVar5->unk1,&CStack_130);
          pCVar7 = &CStack_130;
          pCVar8 = &CStack_220;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar8->m[0].w = pCVar7->m[0].w;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
          }
        }
        else {
          pSVar5->unk2[0x34] = '\0';
          pSVar5->unk2[0x35] = '\0';
          pSVar5->unk2[0x36] = -0x80;
          pSVar5->unk2[0x37] = '?';
        }
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&CStack_d0,local_24,local_28);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_220,&CStack_d0,&CStack_100);
      pCVar7 = &CStack_100;
      pCVar8 = &CStack_280;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(float *)pCVar8 = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
      }
      pCVar3 = core_xform_cpp_getTranslation_FUN_005f6110(&CStack_280,&CStack_34);
      pCVar1 = local_1c->carry_actor;
      (pCVar1->location).position.x = pCVar3->x;
      (pCVar1->location).position.y = pCVar3->y;
      (pCVar1->location).position.z = pCVar3->z;
      pCVar3 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CMatrix3x3f *)&CStack_280,&CStack_40);
      pCVar1 = local_1c->carry_actor;
      if (&pCVar1->orient != (COrientation *)pCVar3) {
        (pCVar1->orient).pitch = pCVar3->x;
        (pCVar1->orient).bank = pCVar3->y;
        (pCVar1->orient).heading = pCVar3->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(local_1c->carry_actor);
    }
    local_18 = local_18 + 1;
    pSVar5 = pSVar5 + 1;
  } while (local_18 < 2);
  return;
}

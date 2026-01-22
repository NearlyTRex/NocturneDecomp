// Name: core_charactr.cpp_CCharacter_FUN_0042d090
// Address: 0042d090
// Address Range: [[0042d090, 0042d2fa]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042d090(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d090(CCharacter *this_ptr)

{
  float fVar1;
  uint *extraout_EAX;
  CVector3f *pCVar2;
  int iVar3;
  SCarryHand *pSVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  float in_stack_00000008;
  CVector3f aCStack_27c [4];
  CMatrix3x4f CStack_24c;
  CMatrix3x4f CStack_21c;
  CMatrix3x4f CStack_1ec;
  float afStack_1bc [12];
  CMatrix3x4f CStack_18c;
  CMatrix3x4f CStack_15c;
  CMatrix3x4f CStack_12c;
  CMatrix3x4f CStack_fc;
  CMatrix3x4f CStack_cc;
  CMatrix3x4f CStack_9c;
  CMatrix3x4f CStack_6c;
  CMatrix3x3f CStack_3c;
  int local_18;
  
  bVar8 = 0;
  CStack_3c.m[1].z = (float)&(this_ptr->base_actor).orient;
  CStack_3c.m[2].x = (float)&(this_ptr->base_actor).location;
  local_18 = 0;
  CStack_3c.m[2].y = (float)(this_ptr->model).bone_transform.bone_world_matrices;
  pSVar4 = this_ptr->carry_hands;
  do {
    if (pSVar4->carry_actor != (CDemonActor *)0x0) {
      CStack_3c.m[2].z = (float)pSVar4;
      (*(this_ptr->base_actor).vtable[1].isActiveTarget)(&this_ptr->base_actor);
      pfVar5 = afStack_1bc;
      pCVar6 = &CStack_21c;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->m[0].w = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
      }
      if (*(float *)(pSVar4->field2_0xc + 0x34) < 1.0) {
        fVar1 = *(float *)(pSVar4->field2_0xc + 0x30) * in_stack_00000008 +
                *(float *)(pSVar4->field2_0xc + 0x34);
        *(float *)(pSVar4->field2_0xc + 0x34) = fVar1;
        if (fVar1 <= 1.0) {
          core_xform_cpp_inverse_FUN_005f6210
                    ((CMatrix3x4f *)((char *)CStack_3c.m[2].z + *(int *)pSVar4->field0_0x0 * 0x30),
                     &CStack_24c);
          pCVar6 = &CStack_24c;
          pCVar7 = &CStack_6c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar7->m[0].w = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_21c,&CStack_6c,&CStack_1ec);
          pCVar6 = &CStack_1ec;
          pCVar7 = &CStack_9c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar7->m[0].w = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005f7140
                    ((CMatrix3x4f *)pSVar4->field2_0xc,&CStack_9c,
                     *(float *)(pSVar4->field2_0xc + 0x34),&CStack_15c);
          pCVar6 = &CStack_15c;
          pCVar7 = &CStack_18c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar7->m[0].w = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&CStack_18c,
                     (CMatrix3x4f *)((char *)CStack_3c.m[2].z + *(int *)pSVar4->field0_0x0 * 0x30),
                     &CStack_12c);
          pCVar6 = &CStack_12c;
          pCVar7 = &CStack_21c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar7->m[0].w = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
          }
        }
        else {
          pSVar4->field2_0xc[0x34] = '\0';
          pSVar4->field2_0xc[0x35] = '\0';
          pSVar4->field2_0xc[0x36] = -0x80;
          pSVar4->field2_0xc[0x37] = '?';
        }
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&CStack_cc,(CVector3f *)CStack_3c.m[2].y,(CVector3f *)CStack_3c.m[2].x);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_21c,&CStack_cc,&CStack_fc);
      pCVar6 = &CStack_fc;
      pCVar2 = aCStack_27c;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar2->x = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
        pCVar2 = (CVector3f *)((int)pCVar2 + ((uint)bVar8 * -2 + 1) * 4);
      }
      core_xform_cpp_getTranslation_FUN_005f6110(aCStack_27c,(CMatrix3x4f *)(CStack_3c.m + 1));
      iVar3 = *(int *)(local_18 + 8);
      *(uint *)(iVar3 + 0x20) = *extraout_EAX;
      *(uint *)(iVar3 + 0x24) = extraout_EAX[1];
      *(uint *)(iVar3 + 0x28) = extraout_EAX[2];
      pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_27c,&CStack_3c);
      iVar3 = *(int *)(local_18 + 8);
      if ((CVector3f *)(iVar3 + 0x30) != pCVar2) {
        ((CVector3f *)(iVar3 + 0x30))->x = pCVar2->x;
        *(float *)(iVar3 + 0x34) = pCVar2->y;
        *(float *)(iVar3 + 0x38) = pCVar2->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (*(CDemonActor **)(local_18 + 8));
    }
    local_18 = local_18 + 1;
    pSVar4 = pSVar4 + 1;
  } while (local_18 < 2);
  return;
}

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
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float in_stack_00000008;
  CMatrix3x4f *in_stack_fffffd84;
  float afStack_24c [12];
  CMatrix3x4f CStack_21c;
  float afStack_1ec [12];
  float afStack_1bc [12];
  CMatrix3x4f CStack_18c;
  float afStack_15c [12];
  float afStack_12c [12];
  uint auStack_fc [12];
  CMatrix3x4f CStack_cc;
  CMatrix3x4f CStack_9c;
  CMatrix3x4f CStack_6c;
  CMatrix3x3f CStack_3c;
  int local_18;
  
  bVar9 = 0;
  CStack_3c.m[1].z = (float)&(this_ptr->base_actor).orient;
  CStack_3c.m[2].x = (float)&(this_ptr->base_actor).location;
  local_18 = 0;
  CStack_3c.m[2].y = (float)(this_ptr->model).bone_transform.bone_world_matrices;
  pSVar4 = this_ptr->carry_hands;
  do {
    if (pSVar4->carry_actor != (CDemonActor *)0x0) {
      CStack_3c.m[2].z = (float)pSVar4;
      (*(this_ptr->base_actor).vtable[1].isActiveTarget)(&this_ptr->base_actor);
      pfVar6 = afStack_1bc;
      pCVar8 = &CStack_21c;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
      }
      if (*(float *)(pSVar4->field2_0xc + 0x34) < 1.0) {
        fVar1 = *(float *)(pSVar4->field2_0xc + 0x30) * in_stack_00000008 +
                *(float *)(pSVar4->field2_0xc + 0x34);
        *(float *)(pSVar4->field2_0xc + 0x34) = fVar1;
        if (fVar1 <= 1.0) {
          core_xform_cpp_inverse_FUN_005f6210
                    ((CMatrix3x4f *)((char *)CStack_3c.m[2].z + *(int *)pSVar4->field0_0x0 * 0x30),
                     in_stack_fffffd84);
          pfVar6 = afStack_24c;
          pCVar8 = &CStack_6c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar8->m[0].w = *pfVar6;
            pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_21c,&CStack_6c,in_stack_fffffd84);
          pfVar6 = afStack_1ec;
          pCVar8 = &CStack_9c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar8->m[0].w = *pfVar6;
            pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005f7140
                    ((CMatrix3x4f *)pSVar4->field2_0xc,&CStack_9c,
                     *(float *)(pSVar4->field2_0xc + 0x34));
          pfVar6 = afStack_15c;
          pCVar8 = &CStack_18c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar8->m[0].w = *pfVar6;
            pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&CStack_18c,
                     (CMatrix3x4f *)((char *)CStack_3c.m[2].z + *(int *)pSVar4->field0_0x0 * 0x30),
                     in_stack_fffffd84);
          pfVar6 = afStack_12c;
          pCVar8 = &CStack_21c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar8->m[0].w = *pfVar6;
            pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
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
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_21c,&CStack_cc,in_stack_fffffd84);
      puVar5 = auStack_fc;
      puVar7 = (uint *)&stack0xfffffd84;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_getTranslation_FUN_005f6110
                ((CVector3f *)&stack0xfffffd84,(CMatrix3x4f *)(CStack_3c.m + 1));
      iVar3 = *(int *)(local_18 + 8);
      *(uint *)(iVar3 + 0x20) = *extraout_EAX;
      *(uint *)(iVar3 + 0x24) = extraout_EAX[1];
      *(uint *)(iVar3 + 0x28) = extraout_EAX[2];
      pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CVector3f *)&stack0xfffffd84,&CStack_3c);
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

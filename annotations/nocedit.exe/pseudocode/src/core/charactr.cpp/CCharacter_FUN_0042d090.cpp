// Name: core_charactr.cpp_CCharacter_FUN_0042d090
// Address: 0042d090
// Address Range: [[0042d090, 0042d2fa]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042d090(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d090(CCharacter *this_ptr)

{
  CDemonActor *pCVar1;
  float fVar2;
  float *extraout_EAX;
  CVector3f *pCVar3;
  int iVar4;
  SCarryHand *pSVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  uint *puVar9;
  CMatrix3x4f *pCVar10;
  byte bVar11;
  float in_stack_00000008;
  CMatrix3x4f *in_stack_fffffd84;
  float afStack_24c [12];
  CMatrix3x4f CStack_21c;
  float afStack_1ec [13];
  float afStack_1b8 [11];
  CMatrix3x4f CStack_18c;
  float afStack_15c [12];
  float afStack_12c [12];
  uint auStack_fc [12];
  CMatrix3x4f CStack_cc;
  CMatrix3x4f CStack_9c;
  CMatrix3x4f CStack_6c;
  CMatrix3x3f CStack_3c;
  SCarryHand *local_18;
  int iStack_14;
  
  bVar11 = 0;
  CStack_3c.m[2].x = (float)&(this_ptr->base_actor).orient;
  CStack_3c.m[2].y = (float)&(this_ptr->base_actor).location;
  iStack_14 = 0;
  CStack_3c.m[2].z = (float)(this_ptr->model).bone_transform.bone_world_matrices;
  pSVar5 = this_ptr->carry_hands;
  do {
    if (pSVar5->carry_actor != (CDemonActor *)0x0) {
      local_18 = pSVar5;
      (*(this_ptr->base_actor).vtable[1].isActiveTarget)(&this_ptr->base_actor);
      pfVar7 = afStack_1b8;
      pfVar8 = &CStack_21c.m[0].x;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
        pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
      }
      if (*(float *)(pSVar5->field2_0xc + 0x34) < 1.0) {
        fVar2 = *(float *)(pSVar5->field2_0xc + 0x30) * in_stack_00000008 +
                *(float *)(pSVar5->field2_0xc + 0x34);
        *(float *)(pSVar5->field2_0xc + 0x34) = fVar2;
        if (fVar2 <= 1.0) {
          core_xform_cpp_inverse_FUN_005f6210
                    ((CMatrix3x4f *)((int)CStack_3c.m[2].z + *(int *)pSVar5->field0_0x0 * 0x30),
                     in_stack_fffffd84);
          pfVar7 = afStack_24c;
          pCVar10 = &CStack_6c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar10->m[0].w = *pfVar7;
            pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_21c,&CStack_6c,in_stack_fffffd84);
          pfVar7 = afStack_1ec;
          pCVar10 = &CStack_9c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar10->m[0].w = *pfVar7;
            pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005f7140
                    ((CMatrix3x4f *)pSVar5->field2_0xc,&CStack_9c,
                     *(float *)(pSVar5->field2_0xc + 0x34));
          pfVar7 = afStack_15c;
          pCVar10 = &CStack_18c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar10->m[0].w = *pfVar7;
            pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&CStack_18c,
                     (CMatrix3x4f *)((int)CStack_3c.m[2].z + *(int *)pSVar5->field0_0x0 * 0x30),
                     in_stack_fffffd84);
          pfVar7 = afStack_12c;
          pCVar10 = &CStack_21c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar10->m[0].w = *pfVar7;
            pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
          }
        }
        else {
          pSVar5->field2_0xc[0x34] = '\0';
          pSVar5->field2_0xc[0x35] = '\0';
          pSVar5->field2_0xc[0x36] = -0x80;
          pSVar5->field2_0xc[0x37] = '?';
        }
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&CStack_cc,(CVector3f *)CStack_3c.m[2].y,(CVector3f *)CStack_3c.m[2].x);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_21c,&CStack_cc,in_stack_fffffd84);
      puVar6 = auStack_fc;
      puVar9 = (uint *)&stack0xfffffd84;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_getTranslation_FUN_005f6110
                ((CVector3f *)&stack0xfffffd84,(CMatrix3x4f *)(CStack_3c.m + 1));
      pCVar1 = local_18->carry_actor;
      (pCVar1->location).position.x = *extraout_EAX;
      (pCVar1->location).position.y = extraout_EAX[1];
      (pCVar1->location).position.z = extraout_EAX[2];
      pCVar3 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CVector3f *)&stack0xfffffd84,&CStack_3c);
      pCVar1 = local_18->carry_actor;
      if (&pCVar1->orient != (COrientation *)pCVar3) {
        (pCVar1->orient).pitch = pCVar3->x;
        (pCVar1->orient).bank = pCVar3->y;
        (pCVar1->orient).heading = pCVar3->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(local_18->carry_actor);
    }
    iStack_14 = iStack_14 + 1;
    pSVar5 = pSVar5 + 1;
  } while (iStack_14 < 2);
  return;
}

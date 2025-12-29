// Name: core_platfrm.cpp_FUN_0054ea00
// Address: 0054ea00
// Address Range: [[0054ea00, 0054f058]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054ea00()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054ea00(uint param_1) */

void core_platfrm_cpp_FUN_0054ea00(void)

{
  char *pcVar1;
  CDemonActor *this_ptr;
  int iVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  byte bVar12;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  COrientation *in_stack_00000024;
  CLocation *in_stack_0000002c;
  int *in_stack_00000030;
  CVector3f *in_stack_00000044;
  CVector3f *in_stack_0000004c;
  float *in_stack_00000050;
  float afStackY_184c [21];
  int aiStackY_17f8 [488];
  float afStackY_1058 [21];
  int aiStackY_1004 [835];
  CVector3f *in_stack_fffffd38;
  CVector3f *in_stack_fffffd5c;
  CMatrix3x4f *in_stack_fffffd60;
  CMatrix3x4f *in_stack_fffffd6c;
  CMatrix3x4f *in_stack_fffffd78;
  CMatrix3x3f *in_stack_fffffd7c;
  CMatrix3x4f *in_stack_fffffd80;
  CMatrix3x3f *in_stack_fffffd84;
  byte auStack_268 [8];
  CDemonActor *pCStack_260;
  float fStack_254;
  uint uStack_24c;
  CQuaternion4f CStack_248;
  float fStack_22c;
  float fStack_21c;
  uint auStack_218 [5];
  float afStack_204 [6];
  byte auStack_1ec [48];
  byte auStack_1bc [32];
  byte auStack_19c [24];
  uint uStack_184;
  CQuaternion4f CStack_180;
  float fStack_164;
  float fStack_154;
  byte auStack_150 [24];
  CMatrix3x4f aCStack_138 [2];
  uint auStack_d8 [5];
  byte auStack_c4 [12];
  float fStack_b8;
  float fStack_b4;
  byte auStack_b0 [8];
  float fStack_a8;
  float fStack_a4;
  byte auStack_a0 [16];
  CQuaternion4f aCStack_90 [2];
  uint uStack_70;
  float afStack_6c [4];
  uint uStack_5c;
  uint uStack_54;
  float afStack_50 [6];
  CVector3f aCStack_38 [2];
  uint uStack_1c;
  int local_18 [2];
  
  this_ptr = in_stack_00000004;
  bVar12 = 0;
  if (in_stack_00000004[5].field7_0x6c != 4) {
    if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
      afStack_50[1] =
           (float)in_stack_00000004[2].field7_0x6c - *(float *)in_stack_00000004[2].create_event;
      afStack_50[2] =
           (float)in_stack_00000004[2].was_created -
           *(float *)(in_stack_00000004[2].create_event + 4);
      afStack_50[3] =
           in_stack_00000004[2].create_prob - *(float *)(in_stack_00000004[2].create_event + 8);
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      if ((iVar2 != 0) &&
         (iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47), iVar2 != 0)) {
        pcVar1 = this_ptr[2].create_event;
        if ((CLocation *)pcVar1 != &this_ptr->location) {
          *(float *)pcVar1 = (this_ptr->location).position.x;
          *(float *)(this_ptr[2].create_event + 4) = (this_ptr->location).position.y;
          *(float *)(this_ptr[2].create_event + 8) = (this_ptr->location).position.z;
        }
        if (&this_ptr[2].field7_0x6c != (int *)pcVar1) {
          this_ptr[2].field7_0x6c = *(int *)pcVar1;
          this_ptr[2].was_created = *(int *)(this_ptr[2].create_event + 4);
          this_ptr[2].create_prob = *(float *)(this_ptr[2].create_event + 8);
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CQuaternion4f *)&this_ptr->orient,in_stack_fffffd38);
        pfVar5 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        *(uint *)(this_ptr[2].create_event + 0x1c) = uStack_70;
        pfVar8 = pfVar5 + (uint)bVar12 * -2 + 1;
        *pfVar5 = afStack_6c[(uint)bVar12 * -2];
        *pfVar8 = afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        pfVar8[(uint)bVar12 * -2 + 1] =
             (afStack_6c + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        puVar6 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x338);
        puVar4 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        *(uint *)(this_ptr[2].create_event + 0xc) =
             *(uint *)(this_ptr[2].create_event + 0x1c);
        puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar4 + (uint)bVar12 * -2 + 1;
        *puVar6 = *puVar4;
        *puVar7 = *puVar11;
        puVar7[(uint)bVar12 * -2 + 1] = puVar11[(uint)bVar12 * -2 + 1];
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x15);
      if (iVar2 != 0) {
        core_platfrm_cpp_FUN_0054e480();
      }
      switch(this_ptr[5].field7_0x6c) {
      case 1:
        if ((int *)(auStack_c4 + 4) != &this_ptr[2].field7_0x6c) {
          auStack_c4._4_4_ = this_ptr[2].field7_0x6c;
          auStack_c4._8_4_ = this_ptr[2].was_created;
          fStack_b8 = this_ptr[2].create_prob;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CVector3f *)&stack0x00000010,
                            (CQuaternion4f *)(this_ptr[2].create_event + 0xc));
        if ((CVector3f *)auStack_b0 != pCVar3) {
          auStack_b0._0_4_ = pCVar3->x;
          auStack_b0._4_4_ = pCVar3->y;
          fStack_a8 = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)(auStack_c4 + 8));
        if ((float *)&this_ptr[2].field7_0x6c != &fStack_b8) {
          this_ptr[2].field7_0x6c = (int)fStack_b8;
          this_ptr[2].was_created = (int)fStack_b4;
          this_ptr[2].create_prob = (float)auStack_b0._0_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CQuaternion4f *)(auStack_b0 + 4),in_stack_fffffd5c);
        pfVar5 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x338);
        *(float *)(this_ptr[2].create_event + 0xc) = afStack_6c[0];
        pfVar8 = pfVar5 + (uint)bVar12 * -2 + 1;
        *pfVar5 = afStack_6c[(uint)bVar12 * -2 + 1];
        *pfVar8 = afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 2];
        pfVar8[(uint)bVar12 * -2 + 1] =
             (afStack_6c + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 2)[(uint)bVar12 * -2 + 1];
        break;
      case 2:
        if (&fStack_a4 != (float *)this_ptr[2].create_event) {
          fStack_a4 = *(float *)this_ptr[2].create_event;
          auStack_a0._0_4_ = *(uint *)(this_ptr[2].create_event + 4);
          auStack_a0._4_4_ = *(uint *)(this_ptr[2].create_event + 8);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (aCStack_38,(CQuaternion4f *)(this_ptr[2].create_event + 0x1c));
        if ((CVector3f *)(auStack_a0 + 0xc) != pCVar3) {
          auStack_a0._12_4_ = pCVar3->x;
          aCStack_90[0].w = pCVar3->y;
          aCStack_90[0].x = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_a0);
        if (this_ptr[2].create_event != auStack_a0 + 4) {
          *(uint *)this_ptr[2].create_event = auStack_a0._4_4_;
          *(uint *)(this_ptr[2].create_event + 4) = auStack_a0._8_4_;
          *(uint *)(this_ptr[2].create_event + 8) = auStack_a0._12_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20(aCStack_90,in_stack_fffffd5c);
        pfVar5 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        *(uint *)(this_ptr[2].create_event + 0x1c) = uStack_5c;
        pfVar8 = pfVar5 + (uint)bVar12 * -2 + 1;
        *pfVar5 = afStack_6c[(uint)bVar12 * -2 + 5];
        *pfVar8 = afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 6];
        pfVar8[(uint)bVar12 * -2 + 1] =
             (afStack_6c + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 6)[(uint)bVar12 * -2 + 1];
        break;
      case 3:
        in_stack_00000024 = &this_ptr->orient;
        in_stack_0000002c = &this_ptr->location;
        core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                  ((CMatrix3x4f *)auStack_150,&in_stack_0000002c->position,
                   (CVector3f *)in_stack_00000024);
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CVector3f *)&stack0x00000008,
                            (CQuaternion4f *)(this_ptr[2].create_event + 0xc));
        in_stack_00000030 = &this_ptr[2].field7_0x6c;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  ((CMatrix3x4f *)auStack_268,(CVector3f *)in_stack_00000030,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(auStack_268 + 4),(CMatrix3x4f *)(auStack_150 + 0xc),
                   in_stack_fffffd60);
        pfVar5 = &aCStack_138[0].m[2].y;
        pfVar8 = afStack_204;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar8 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar12 * -2 + 1;
          pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CVector3f *)&stack0xfffffff0,
                            (CQuaternion4f *)(this_ptr[2].create_event + 0x1c));
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  ((CMatrix3x4f *)auStack_19c,(CVector3f *)this_ptr[2].create_event,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(auStack_19c + 4),aCStack_138,in_stack_fffffd6c);
        puVar4 = (uint *)&stack0xfffffd7c;
        puVar11 = auStack_d8;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(this_ptr);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  ((CMatrix3x4f *)(auStack_1ec + 0x2c),in_stack_0000004c,in_stack_00000044);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)auStack_1ec,(CMatrix3x4f *)auStack_1bc,in_stack_fffffd78);
        puVar4 = auStack_218;
        puVar11 = &uStack_24c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        in_stack_00000014 = CStack_248.z;
        in_stack_00000018 = fStack_22c;
        in_stack_0000001c = fStack_21c;
        if (&stack0x00000014 != in_stack_00000050) {
          *in_stack_00000050 = CStack_248.z;
          in_stack_00000050[1] = fStack_22c;
          in_stack_00000050[2] = fStack_21c;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420(&CStack_248,in_stack_fffffd7c);
        piVar9 = (int *)((int)this_ptr + (uint)bVar12 * -8 + 0x338);
        *(uint *)(this_ptr[2].create_event + 0xc) = uStack_1c;
        piVar10 = piVar9 + (uint)bVar12 * -2 + 1;
        *piVar9 = local_18[(uint)bVar12 * -2];
        *piVar10 = local_18[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        piVar10[(uint)bVar12 * -2 + 1] =
             (local_18 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)auStack_c4,(CMatrix3x4f *)(auStack_1bc + 8),in_stack_fffffd80);
        puVar4 = (uint *)auStack_150;
        puVar11 = &uStack_184;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        in_stack_00000004 = (CDemonActor *)CStack_180.z;
        in_stack_00000008 = fStack_164;
        in_stack_0000000c = fStack_154;
        if ((CDemonActor **)this_ptr[2].create_event != &stack0x00000004) {
          *(float *)this_ptr[2].create_event = CStack_180.z;
          *(float *)(this_ptr[2].create_event + 4) = fStack_164;
          *(float *)(this_ptr[2].create_event + 8) = fStack_154;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420(&CStack_180,in_stack_fffffd84);
        puVar11 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        *(uint *)(this_ptr[2].create_event + 0x1c) = uStack_54;
        puVar6 = puVar11 + (uint)bVar12 * -2 + 1;
        puVar4 = (uint *)((int)aCStack_38 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -0x14);
        *puVar11 = *(uint *)((int)aCStack_38 + (uint)bVar12 * -8 + -0x18);
        *puVar6 = *puVar4;
        puVar6[(uint)bVar12 * -2 + 1] = puVar4[(uint)bVar12 * -2 + 1];
      }
    }
    else {
      local_18[0] = in_stack_00000004[2].runtime_state;
    }
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
    if (iVar2 != 0) {
      this_ptr[2].location.area_id =
           (int)((float)this_ptr[2].location.area_id + (float)auStack_268._0_4_);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
    if (iVar2 != 0) {
      this_ptr[2].location.area_id = (int)((float)this_ptr[2].location.area_id - fStack_254);
    }
    pCStack_260 = this_ptr;
    auStack_268._4_4_ = 7.798827e-39;
    core_platfrm_cpp_FUN_0054cab0();
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  return;
}

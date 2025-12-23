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
  int iVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  uint *puVar9;
  byte bVar10;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_00000010;
  float *in_stack_00000014;
  float afStackY_1884 [1379];
  CQuaternion4f *in_stack_fffffd1c;
  CVector3f *in_stack_fffffd20;
  CMatrix3x4f *in_stack_fffffd24;
  CMatrix3x4f *in_stack_fffffd30;
  CMatrix3x4f *in_stack_fffffd3c;
  CMatrix3x3f *in_stack_fffffd40;
  CMatrix3x4f *in_stack_fffffd44;
  CMatrix3x3f *in_stack_fffffd48;
  byte auStack_2a4 [28];
  uint uStack_288;
  CQuaternion4f CStack_284;
  float fStack_268;
  float fStack_258;
  uint auStack_254 [5];
  float afStack_240 [6];
  byte auStack_228 [48];
  byte auStack_1f8 [32];
  byte auStack_1d8 [24];
  uint uStack_1c0;
  CQuaternion4f CStack_1bc;
  float fStack_1a0;
  float fStack_190;
  byte auStack_18c [24];
  CMatrix3x4f aCStack_174 [2];
  uint auStack_114 [5];
  byte auStack_100 [12];
  float fStack_f4;
  float fStack_f0;
  byte auStack_ec [8];
  float fStack_e4;
  float fStack_e0;
  byte auStack_dc [16];
  CQuaternion4f aCStack_cc [2];
  uint uStack_a8;
  uint auStack_a4 [4];
  uint uStack_94;
  uint uStack_90;
  uint auStack_88 [5];
  CVector3f aCStack_74 [2];
  uint uStack_58;
  float afStack_54 [2];
  CVector3f local_4c;
  float fStack_38;
  byte auStack_34 [12];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  COrientation *local_18;
  
  bVar10 = 0;
  if (in_stack_00000004[5].field7_0x6c != 4) {
    if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
      local_4c.x = (float)in_stack_00000004[2].field7_0x6c -
                   *(float *)in_stack_00000004[2].create_event;
      local_4c.y = (float)in_stack_00000004[2].was_created -
                   *(float *)(in_stack_00000004[2].create_event + 4);
      local_4c.z = in_stack_00000004[2].create_prob -
                   *(float *)(in_stack_00000004[2].create_event + 8);
      pCVar3 = (CVector3f *)
               ((ulonglong)
                (double)SQRT(local_4c.z * local_4c.z +
                             local_4c.x * local_4c.x + local_4c.y * local_4c.y) >> 0x20);
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      if ((iVar2 != 0) &&
         (iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47), iVar2 != 0)) {
        pcVar1 = in_stack_00000004[2].create_event;
        if ((CLocation *)pcVar1 != &in_stack_00000004->location) {
          *(float *)pcVar1 = (in_stack_00000004->location).position.x;
          *(float *)(in_stack_00000004[2].create_event + 4) =
               (in_stack_00000004->location).position.y;
          *(float *)(in_stack_00000004[2].create_event + 8) =
               (in_stack_00000004->location).position.z;
        }
        if (&in_stack_00000004[2].field7_0x6c != (int *)pcVar1) {
          in_stack_00000004[2].field7_0x6c = *(int *)pcVar1;
          in_stack_00000004[2].was_created = *(int *)(in_stack_00000004[2].create_event + 4);
          in_stack_00000004[2].create_prob = *(float *)(in_stack_00000004[2].create_event + 8);
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CQuaternion4f *)&in_stack_00000004->orient,pCVar3);
        puVar4 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = uStack_94;
        puVar9 = puVar4 + (uint)bVar10 * -2 + 1;
        *puVar4 = auStack_a4[(uint)bVar10 * -2 + 5];
        *puVar9 = auStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 6];
        puVar9[(uint)bVar10 * -2 + 1] =
             (auStack_a4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 6)[(uint)bVar10 * -2 + 1];
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x338);
        puVar4 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0xc) =
             *(uint *)(in_stack_00000004[2].create_event + 0x1c);
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar4 + (uint)bVar10 * -2 + 1;
        *puVar5 = *puVar4;
        *puVar6 = *puVar9;
        puVar6[(uint)bVar10 * -2 + 1] = puVar9[(uint)bVar10 * -2 + 1];
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x15);
      if (iVar2 != 0) {
        core_platfrm_cpp_FUN_0054e480();
      }
      switch(in_stack_00000004[5].field7_0x6c) {
      case 1:
        if ((int *)(auStack_100 + 4) != &in_stack_00000004[2].field7_0x6c) {
          auStack_100._4_4_ = in_stack_00000004[2].field7_0x6c;
          auStack_100._8_4_ = in_stack_00000004[2].was_created;
          fStack_f4 = in_stack_00000004[2].create_prob;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CVector3f *)(auStack_34 + 8),
                            (CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc));
        if ((CVector3f *)auStack_ec != pCVar3) {
          auStack_ec._0_4_ = pCVar3->x;
          auStack_ec._4_4_ = pCVar3->y;
          fStack_e4 = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)(auStack_100 + 8));
        if ((float *)&in_stack_00000004[2].field7_0x6c != &fStack_f4) {
          in_stack_00000004[2].field7_0x6c = (int)fStack_f4;
          in_stack_00000004[2].was_created = (int)fStack_f0;
          in_stack_00000004[2].create_prob = (float)auStack_ec._0_4_;
        }
        in_stack_fffffd1c = (CQuaternion4f *)(auStack_ec + 4);
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20(in_stack_fffffd1c,in_stack_fffffd20);
        puVar4 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x338);
        *(uint *)(in_stack_00000004[2].create_event + 0xc) = uStack_a8;
        puVar9 = puVar4 + (uint)bVar10 * -2 + 1;
        *puVar4 = auStack_a4[(uint)bVar10 * -2];
        *puVar9 = auStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        puVar9[(uint)bVar10 * -2 + 1] =
             (auStack_a4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        break;
      case 2:
        if (&fStack_e0 != (float *)in_stack_00000004[2].create_event) {
          fStack_e0 = *(float *)in_stack_00000004[2].create_event;
          auStack_dc._0_4_ = *(uint *)(in_stack_00000004[2].create_event + 4);
          auStack_dc._4_4_ = *(uint *)(in_stack_00000004[2].create_event + 8);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (aCStack_74,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c));
        if ((CVector3f *)(auStack_dc + 0xc) != pCVar3) {
          auStack_dc._12_4_ = pCVar3->x;
          aCStack_cc[0].w = pCVar3->y;
          aCStack_cc[0].x = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_dc);
        if (in_stack_00000004[2].create_event != auStack_dc + 4) {
          *(uint *)in_stack_00000004[2].create_event = auStack_dc._4_4_;
          *(uint *)(in_stack_00000004[2].create_event + 4) = auStack_dc._8_4_;
          *(uint *)(in_stack_00000004[2].create_event + 8) = auStack_dc._12_4_;
        }
        in_stack_fffffd1c = aCStack_cc;
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20(in_stack_fffffd1c,in_stack_fffffd20);
        puVar4 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = auStack_a4[3];
        puVar9 = puVar4 + (uint)bVar10 * -2 + 1;
        *puVar4 = auStack_a4[(uint)bVar10 * -2 + 4];
        *puVar9 = auStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        puVar9[(uint)bVar10 * -2 + 1] =
             (auStack_a4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        break;
      case 3:
        local_18 = &in_stack_00000004->orient;
        core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                  ((CMatrix3x4f *)auStack_18c,&(in_stack_00000004->location).position,
                   (CVector3f *)local_18);
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CVector3f *)auStack_34,
                            (CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc));
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  ((CMatrix3x4f *)auStack_2a4,(CVector3f *)&in_stack_00000004[2].field7_0x6c,pCVar3)
        ;
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(auStack_2a4 + 4),(CMatrix3x4f *)(auStack_18c + 0xc),
                   in_stack_fffffd24);
        pfVar8 = &aCStack_174[0].m[2].y;
        pfVar7 = afStack_240;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar7 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&local_4c,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c));
        in_stack_fffffd1c = (CQuaternion4f *)0x54eea9;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  ((CMatrix3x4f *)auStack_1d8,(CVector3f *)in_stack_00000004[2].create_event,pCVar3)
        ;
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(auStack_1d8 + 4),aCStack_174,in_stack_fffffd30);
        puVar4 = (uint *)&stack0xfffffd40;
        puVar9 = auStack_114;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar4;
          puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  ((CMatrix3x4f *)(auStack_228 + 0x2c),in_stack_00000010,in_stack_00000008);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)auStack_228,(CMatrix3x4f *)auStack_1f8,in_stack_fffffd3c);
        puVar4 = auStack_254;
        puVar9 = &uStack_288;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar4;
          puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        fStack_28 = CStack_284.z;
        fStack_24 = fStack_268;
        fStack_20 = fStack_258;
        if (&fStack_28 != in_stack_00000014) {
          *in_stack_00000014 = CStack_284.z;
          in_stack_00000014[1] = fStack_268;
          in_stack_00000014[2] = fStack_258;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420(&CStack_284,in_stack_fffffd40);
        pfVar8 = (float *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x338);
        *(uint *)(in_stack_00000004[2].create_event + 0xc) = uStack_58;
        pfVar7 = pfVar8 + (uint)bVar10 * -2 + 1;
        *pfVar8 = afStack_54[(uint)bVar10 * -2];
        *pfVar7 = afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        pfVar7[(uint)bVar10 * -2 + 1] =
             (afStack_54 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)auStack_100,(CMatrix3x4f *)(auStack_1f8 + 8),in_stack_fffffd44);
        puVar4 = (uint *)auStack_18c;
        puVar9 = &uStack_1c0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar4;
          puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        fStack_38 = CStack_1bc.z;
        auStack_34._0_4_ = fStack_1a0;
        auStack_34._4_4_ = fStack_190;
        if ((float *)in_stack_00000004[2].create_event != &fStack_38) {
          *(float *)in_stack_00000004[2].create_event = CStack_1bc.z;
          *(float *)(in_stack_00000004[2].create_event + 4) = fStack_1a0;
          *(float *)(in_stack_00000004[2].create_event + 8) = fStack_190;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420(&CStack_1bc,in_stack_fffffd48);
        puVar9 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = uStack_90;
        puVar5 = puVar9 + (uint)bVar10 * -2 + 1;
        puVar4 = (uint *)((int)aCStack_74 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -0x14);
        *puVar9 = auStack_a4[(uint)bVar10 * -2 + 6];
        *puVar5 = *puVar4;
        puVar5[(uint)bVar10 * -2 + 1] = puVar4[(uint)bVar10 * -2 + 1];
      }
    }
    else {
      local_18 = (COrientation *)in_stack_00000004[2].runtime_state;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar2 != 0) {
      in_stack_fffffd1c = (CQuaternion4f *)((float)in_stack_fffffd1c * (float)4);
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar2 != 0) {
      in_stack_fffffd1c = (CQuaternion4f *)((float)in_stack_fffffd1c * (float)0.25);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.area_id =
           (int)((float)in_stack_00000004[2].location.area_id + (float)in_stack_fffffd1c);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.area_id =
           (int)((float)in_stack_00000004[2].location.area_id - (float)in_stack_fffffd1c);
    }
    core_platfrm_cpp_FUN_0054cab0();
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  return;
}

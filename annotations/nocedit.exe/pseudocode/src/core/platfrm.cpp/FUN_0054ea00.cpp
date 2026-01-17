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
  int *position;
  int iVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  CDemonActor *in_stack_00000004;
  float afStackY_1890 [1382];
  CVector3f *in_stack_fffffd20;
  CVector3f *in_stack_fffffd28;
  float fStack_2c0;
  float fStack_2b8;
  float fStack_2b0;
  CMatrix3x4f CStack_29c;
  float afStack_26c [12];
  CMatrix3x4f CStack_23c;
  CMatrix3x4f CStack_20c;
  CMatrix3x4f CStack_1dc;
  float afStack_1ac [12];
  CMatrix3x4f CStack_17c;
  float afStack_14c [12];
  CMatrix3x4f CStack_11c;
  byte auStack_ec [12];
  CQuaternion4f CStack_e0;
  byte auStack_d0 [12];
  CQuaternion4f CStack_c4;
  uint uStack_b4;
  uint auStack_b0 [7];
  uint uStack_94;
  uint uStack_8c;
  uint uStack_74;
  uint auStack_70 [3];
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f local_4c;
  CVector3f aCStack_40 [2];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar10 = 0;
  if (in_stack_00000004[5].field7_0x6c != 4) {
    if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
      local_4c.x = (float)in_stack_00000004[2].field7_0x6c -
                   *(float *)in_stack_00000004[2].create_event;
      local_4c.y = (float)in_stack_00000004[2].was_created -
                   *(float *)(in_stack_00000004[2].create_event + 4);
      local_4c.z = in_stack_00000004[2].create_prob -
                   *(float *)(in_stack_00000004[2].create_event + 8);
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
                  ((CQuaternion4f *)&in_stack_00000004->orient,in_stack_fffffd20);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = uStack_8c;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_b0[(uint)bVar10 * -2 + 10];
        *puVar6 = auStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xb];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xb)[(uint)bVar10 * -2 + 1];
        puVar7 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x338);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0xc) =
             *(uint *)(in_stack_00000004[2].create_event + 0x1c);
        puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar7 = *puVar5;
        *puVar8 = *puVar6;
        puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x15);
      if (iVar2 != 0) {
        core_platfrm_cpp_FUN_0054e480();
      }
      switch(in_stack_00000004[5].field7_0x6c) {
      case 1:
        if ((int *)auStack_ec != &in_stack_00000004[2].field7_0x6c) {
          auStack_ec._0_4_ = in_stack_00000004[2].field7_0x6c;
          auStack_ec._4_4_ = in_stack_00000004[2].was_created;
          auStack_ec._8_4_ = in_stack_00000004[2].create_prob;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_1c,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc));
        if ((CVector3f *)(auStack_ec + 0xc) != pCVar3) {
          CStack_e0.w = pCVar3->x;
          CStack_e0.x = pCVar3->y;
          CStack_e0.y = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_ec);
        if (&in_stack_00000004[2].field7_0x6c != (int *)auStack_ec) {
          in_stack_00000004[2].field7_0x6c = auStack_ec._0_4_;
          in_stack_00000004[2].was_created = auStack_ec._4_4_;
          in_stack_00000004[2].create_prob = (float)auStack_ec._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CQuaternion4f *)(auStack_ec + 0xc),in_stack_fffffd28);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x338);
        *(uint *)(in_stack_00000004[2].create_event + 0xc) = auStack_b0[3];
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_b0[(uint)bVar10 * -2 + 4];
        *puVar6 = auStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        break;
      case 2:
        if (auStack_d0 != in_stack_00000004[2].create_event) {
          auStack_d0._0_4_ = *(uint *)in_stack_00000004[2].create_event;
          auStack_d0._4_4_ = *(uint *)(in_stack_00000004[2].create_event + 4);
          auStack_d0._8_4_ = *(uint *)(in_stack_00000004[2].create_event + 8);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_64,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c));
        if ((CVector3f *)(auStack_d0 + 0xc) != pCVar3) {
          CStack_c4.w = pCVar3->x;
          CStack_c4.x = pCVar3->y;
          CStack_c4.y = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_d0);
        if (in_stack_00000004[2].create_event != auStack_d0) {
          *(uint *)in_stack_00000004[2].create_event = auStack_d0._0_4_;
          *(uint *)(in_stack_00000004[2].create_event + 4) = auStack_d0._4_4_;
          *(uint *)(in_stack_00000004[2].create_event + 8) = auStack_d0._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CQuaternion4f *)(auStack_d0 + 0xc),in_stack_fffffd28);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = uStack_94;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_b0[(uint)bVar10 * -2 + 8];
        *puVar6 = auStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
        break;
      case 3:
        core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                  (&CStack_17c,&(in_stack_00000004->location).position,
                   (CVector3f *)&in_stack_00000004->orient);
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_28,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc));
        position = &in_stack_00000004[2].field7_0x6c;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_29c,(CVector3f *)position,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_29c,&CStack_17c,(CMatrix3x4f *)in_stack_fffffd28);
        pfVar4 = afStack_14c;
        pCVar9 = &CStack_23c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar10 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&local_4c,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c));
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_1dc,(CVector3f *)in_stack_00000004[2].create_event,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_1dc,&CStack_17c,(CMatrix3x4f *)in_stack_fffffd28);
        pfVar4 = (float *)&stack0xfffffd34;
        pCVar9 = &CStack_11c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar10 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_20c,&(in_stack_00000004->location).position,
                   (CVector3f *)&in_stack_00000004->orient);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_23c,&CStack_20c,(CMatrix3x4f *)in_stack_fffffd28);
        pfVar4 = afStack_26c;
        pCVar9 = &CStack_29c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar10 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        aCStack_40[0].x = CStack_29c.m[0].z;
        aCStack_40[0].y = CStack_29c.m[1].z;
        aCStack_40[0].z = CStack_29c.m[2].z;
        if (aCStack_40 != (CVector3f *)position) {
          *position = (int)CStack_29c.m[0].z;
          in_stack_00000004[2].was_created = (int)CStack_29c.m[1].z;
          in_stack_00000004[2].create_prob = CStack_29c.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420
                  (CStack_29c.m,(CMatrix3x3f *)in_stack_fffffd28);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x338);
        *(uint *)(in_stack_00000004[2].create_event + 0xc) = uStack_74;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_70[(uint)bVar10 * -2];
        *puVar6 = auStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_70 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_11c,&CStack_20c,(CMatrix3x4f *)in_stack_fffffd28);
        pfVar4 = afStack_1ac;
        pCVar9 = &CStack_1dc;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar10 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        fStack_58 = CStack_1dc.m[0].z;
        fStack_54 = CStack_1dc.m[1].z;
        fStack_50 = CStack_1dc.m[2].z;
        if ((float *)in_stack_00000004[2].create_event != &fStack_58) {
          *(float *)in_stack_00000004[2].create_event = CStack_1dc.m[0].z;
          *(float *)(in_stack_00000004[2].create_event + 4) = CStack_1dc.m[1].z;
          *(float *)(in_stack_00000004[2].create_event + 8) = CStack_1dc.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420
                  (CStack_1dc.m,(CMatrix3x3f *)in_stack_fffffd28);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = uStack_b4;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_b0[(uint)bVar10 * -2];
        *puVar6 = auStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      }
    }
    else {
      CStack_1c.y = (float)in_stack_00000004[2].runtime_state;
    }
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar2 != 0) {
      fStack_2c0 = fStack_2c0 * (float)0.25;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.area_id =
           (int)((float)in_stack_00000004[2].location.area_id + fStack_2b8);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.area_id =
           (int)((float)in_stack_00000004[2].location.area_id - fStack_2b0);
    }
    fStack_2c0 = 7.798827e-39;
    core_platfrm_cpp_FUN_0054cab0();
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  return;
}

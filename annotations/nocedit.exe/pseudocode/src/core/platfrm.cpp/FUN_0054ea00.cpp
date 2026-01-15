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
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  CDemonActor *in_stack_00000004;
  float afStackY_18a4 [1387];
  CVector3f *euler_angles;
  double dVar11;
  float fStack_2e4;
  CMatrix3x4f CStack_2b0;
  float afStack_280 [12];
  CMatrix3x4f CStack_250;
  CMatrix3x4f CStack_220;
  CMatrix3x4f CStack_1f0;
  float afStack_1c0 [12];
  CMatrix3x4f CStack_190;
  float afStack_160 [12];
  CMatrix3x4f CStack_130;
  byte auStack_100 [12];
  CQuaternion4f CStack_f4;
  byte auStack_e4 [12];
  CQuaternion4f CStack_d8;
  uint uStack_c8;
  uint auStack_c4 [7];
  uint uStack_a8;
  uint uStack_98;
  uint uStack_88;
  CVector3f CStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float local_48;
  float local_44;
  float fStack_40;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f *pCStack_1c;
  CVector3f *local_18;
  CVector3f *pCStack_14;
  
  bVar10 = 0;
  if (in_stack_00000004[5].field7_0x6c != 4) {
    if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
      local_48 = (float)in_stack_00000004[2].field7_0x6c -
                 *(float *)in_stack_00000004[2].create_event;
      local_44 = (float)in_stack_00000004[2].was_created -
                 *(float *)(in_stack_00000004[2].create_event + 4);
      fStack_40 = in_stack_00000004[2].create_prob -
                  *(float *)(in_stack_00000004[2].create_event + 8);
      fStack_2e4 = SQRT(fStack_40 * fStack_40 + local_48 * local_48 + local_44 * local_44);
      dVar11 = (double)fStack_2e4;
      if (dVar11 <= 1.0) {
        fStack_2e4 = 1.0;
      }
      else {
        fStack_2e4 = 1.0 / fStack_2e4;
      }
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      euler_angles = SUB84 /* extract 2-byte value */(dVar11,0);
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
                  ((CQuaternion4f *)&in_stack_00000004->orient,euler_angles);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = uStack_98;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_c4[(uint)bVar10 * -2 + 0xc];
        *puVar6 = auStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd)[(uint)bVar10 * -2 + 1];
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
        if ((int *)auStack_100 != &in_stack_00000004[2].field7_0x6c) {
          auStack_100._0_4_ = in_stack_00000004[2].field7_0x6c;
          auStack_100._4_4_ = in_stack_00000004[2].was_created;
          auStack_100._8_4_ = in_stack_00000004[2].create_prob;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_30,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc));
        if ((CVector3f *)(auStack_100 + 0xc) != pCVar3) {
          CStack_f4.w = pCVar3->x;
          CStack_f4.x = pCVar3->y;
          CStack_f4.y = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_100);
        if (&in_stack_00000004[2].field7_0x6c != (int *)auStack_100) {
          in_stack_00000004[2].field7_0x6c = auStack_100._0_4_;
          in_stack_00000004[2].was_created = auStack_100._4_4_;
          in_stack_00000004[2].create_prob = (float)auStack_100._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CQuaternion4f *)(auStack_100 + 0xc),euler_angles);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x338);
        *(uint *)(in_stack_00000004[2].create_event + 0xc) = auStack_c4[3];
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_c4[(uint)bVar10 * -2 + 4];
        *puVar6 = auStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        break;
      case 2:
        if (auStack_e4 != in_stack_00000004[2].create_event) {
          auStack_e4._0_4_ = *(uint *)in_stack_00000004[2].create_event;
          auStack_e4._4_4_ = *(uint *)(in_stack_00000004[2].create_event + 4);
          auStack_e4._8_4_ = *(uint *)(in_stack_00000004[2].create_event + 8);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_78,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c));
        if ((CVector3f *)(auStack_e4 + 0xc) != pCVar3) {
          CStack_d8.w = pCVar3->x;
          CStack_d8.x = pCVar3->y;
          CStack_d8.y = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_e4);
        if (in_stack_00000004[2].create_event != auStack_e4) {
          *(uint *)in_stack_00000004[2].create_event = auStack_e4._0_4_;
          *(uint *)(in_stack_00000004[2].create_event + 4) = auStack_e4._4_4_;
          *(uint *)(in_stack_00000004[2].create_event + 8) = auStack_e4._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CQuaternion4f *)(auStack_e4 + 0xc),euler_angles);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = uStack_a8;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_c4[(uint)bVar10 * -2 + 8];
        *puVar6 = auStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
        break;
      case 3:
        pCStack_1c = (CVector3f *)&in_stack_00000004->orient;
        pCStack_14 = &(in_stack_00000004->location).position;
        core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                  (&CStack_190,pCStack_14,pCStack_1c);
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_3c,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc));
        local_18 = (CVector3f *)&in_stack_00000004[2].field7_0x6c;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_2b0,local_18,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_2b0,&CStack_190,(CMatrix3x4f *)euler_angles);
        pfVar4 = afStack_160;
        pCVar9 = &CStack_250;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar10 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_60,(CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c));
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_1f0,(CVector3f *)in_stack_00000004[2].create_event,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_1f0,&CStack_190,(CMatrix3x4f *)euler_angles);
        pfVar4 = (float *)&stack0xfffffd20;
        pCVar9 = &CStack_130;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar10 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_220,pCStack_14,pCStack_1c);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_250,&CStack_220,(CMatrix3x4f *)euler_angles);
        pfVar4 = afStack_280;
        pCVar9 = &CStack_2b0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar10 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        CStack_54.x = CStack_2b0.m[0].z;
        CStack_54.y = CStack_2b0.m[1].z;
        CStack_54.z = CStack_2b0.m[2].z;
        if (&CStack_54 != local_18) {
          local_18->x = CStack_2b0.m[0].z;
          local_18->y = CStack_2b0.m[1].z;
          local_18->z = CStack_2b0.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420(CStack_2b0.m,(CMatrix3x3f *)euler_angles);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x338);
        *(uint *)(in_stack_00000004[2].create_event + 0xc) = uStack_88;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_c4[(uint)bVar10 * -2 + 0x10];
        *puVar6 = auStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11)[(uint)bVar10 * -2 + 1];
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_130,&CStack_220,(CMatrix3x4f *)euler_angles);
        pfVar4 = afStack_1c0;
        pCVar9 = &CStack_1f0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar10 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        fStack_6c = CStack_1f0.m[0].z;
        fStack_68 = CStack_1f0.m[1].z;
        fStack_64 = CStack_1f0.m[2].z;
        if ((float *)in_stack_00000004[2].create_event != &fStack_6c) {
          *(float *)in_stack_00000004[2].create_event = CStack_1f0.m[0].z;
          *(float *)(in_stack_00000004[2].create_event + 4) = CStack_1f0.m[1].z;
          *(float *)(in_stack_00000004[2].create_event + 8) = CStack_1f0.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420(CStack_1f0.m,(CMatrix3x3f *)euler_angles);
        puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar10 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = uStack_c8;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar5 = auStack_c4[(uint)bVar10 * -2];
        *puVar6 = auStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        puVar6[(uint)bVar10 * -2 + 1] =
             (auStack_c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      }
    }
    else {
      pCStack_14 = (CVector3f *)in_stack_00000004[2].runtime_state;
      fStack_2e4 = 1.0 / (float)(int)pCStack_14;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar2 != 0) {
      fStack_2e4 = fStack_2e4 * (float)4;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar2 != 0) {
      fStack_2e4 = fStack_2e4 * (float)0.25;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.area_id =
           (int)((float)in_stack_00000004[2].location.area_id + fStack_2e4);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.area_id =
           (int)((float)in_stack_00000004[2].location.area_id - fStack_2e4);
    }
    core_platfrm_cpp_FUN_0054cab0();
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  return;
}

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
  CMatrix3x4f *pCVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  CMatrix3x4f *pCVar10;
  byte bVar11;
  CDemonActor *in_stack_00000004;
  float afStackY_1890 [1382];
  float fStack_2c0;
  float fStack_2b8;
  float fStack_2b0;
  CMatrix3x4f CStack_29c;
  CMatrix3x4f CStack_26c;
  CMatrix3x4f CStack_23c;
  CMatrix3x4f CStack_20c;
  CMatrix3x4f CStack_1dc;
  CMatrix3x4f CStack_1ac;
  CMatrix3x4f CStack_17c;
  CMatrix3x4f CStack_14c;
  CMatrix3x4f CStack_11c;
  byte auStack_ec [16];
  float fStack_dc;
  float fStack_d8;
  byte auStack_d0 [16];
  float fStack_c0;
  float fStack_bc;
  CQuaternion4f CStack_b4;
  CQuaternion4f CStack_a4;
  byte auStack_94 [12];
  uint auStack_88 [5];
  CQuaternion4f CStack_74;
  CQuaternion4f CStack_64;
  float fStack_54;
  float fStack_50;
  CQuaternion4f local_4c;
  float fStack_3c;
  float fStack_38;
  CQuaternion4f CStack_28;
  int local_18;
  
  bVar11 = 0;
  if (in_stack_00000004[5].unk1 != 4) {
    if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
      local_4c.w = (float)in_stack_00000004[2].unk1 - *(float *)in_stack_00000004[2].create_event;
      local_4c.x = (float)in_stack_00000004[2].was_created -
                   *(float *)(in_stack_00000004[2].create_event + 4);
      local_4c.y = in_stack_00000004[2].create_prob -
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
        if (&in_stack_00000004[2].unk1 != (int *)pcVar1) {
          in_stack_00000004[2].unk1 = *(int *)pcVar1;
          in_stack_00000004[2].was_created = *(int *)(in_stack_00000004[2].create_event + 4);
          in_stack_00000004[2].create_prob = *(float *)(in_stack_00000004[2].create_event + 8);
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CVector3f *)&in_stack_00000004->orient,(CQuaternion4f *)(auStack_94 + 8));
        puVar6 = (uint *)((int)in_stack_00000004 + (uint)bVar11 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = auStack_94._8_4_;
        puVar9 = puVar6 + (uint)bVar11 * -2 + 1;
        *puVar6 = auStack_88[(uint)bVar11 * -2];
        *puVar9 = auStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        puVar9[(uint)bVar11 * -2 + 1] =
             (auStack_88 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        puVar7 = (uint *)((int)in_stack_00000004 + (uint)bVar11 * -8 + 0x338);
        puVar6 = (uint *)((int)in_stack_00000004 + (uint)bVar11 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0xc) =
             *(uint *)(in_stack_00000004[2].create_event + 0x1c);
        puVar8 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar6 + (uint)bVar11 * -2 + 1;
        *puVar7 = *puVar6;
        *puVar8 = *puVar9;
        puVar8[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x15);
      if (iVar2 != 0) {
        core_platfrm_cpp_FUN_0054e480();
      }
      switch(in_stack_00000004[5].unk1) {
      case 1:
        if ((int *)auStack_ec != &in_stack_00000004[2].unk1) {
          auStack_ec._0_4_ = in_stack_00000004[2].unk1;
          auStack_ec._4_4_ = in_stack_00000004[2].was_created;
          auStack_ec._8_4_ = in_stack_00000004[2].create_prob;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CQuaternion4f *)&CStack_28.z,
                            (CVector3f *)(in_stack_00000004[2].create_event + 0xc));
        if ((CVector3f *)(auStack_ec + 0xc) != pCVar3) {
          auStack_ec._12_4_ = pCVar3->x;
          fStack_dc = pCVar3->y;
          fStack_d8 = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_ec);
        if (&in_stack_00000004[2].unk1 != (int *)auStack_ec) {
          in_stack_00000004[2].unk1 = auStack_ec._0_4_;
          in_stack_00000004[2].was_created = auStack_ec._4_4_;
          in_stack_00000004[2].create_prob = (float)auStack_ec._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(auStack_ec + 0xc),&CStack_a4);
        puVar6 = (uint *)((int)in_stack_00000004 + (uint)bVar11 * -8 + 0x338);
        *(float *)(in_stack_00000004[2].create_event + 0xc) = CStack_a4.w;
        puVar9 = puVar6 + (uint)bVar11 * -2 + 1;
        *puVar6 = *(uint *)(auStack_94 + (uint)bVar11 * -8 + -0xc);
        *puVar9 = *(uint *)(auStack_94 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8);
        puVar9[(uint)bVar11 * -2 + 1] =
             *(uint *)
              ((int)(auStack_94 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8) +
              ((uint)bVar11 * -2 + 1) * 4);
        break;
      case 2:
        if (auStack_d0 != in_stack_00000004[2].create_event) {
          auStack_d0._0_4_ = *(uint *)in_stack_00000004[2].create_event;
          auStack_d0._4_4_ = *(uint *)(in_stack_00000004[2].create_event + 4);
          auStack_d0._8_4_ = *(uint *)(in_stack_00000004[2].create_event + 8);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_64,(CVector3f *)(in_stack_00000004[2].create_event + 0x1c));
        if ((CVector3f *)(auStack_d0 + 0xc) != pCVar3) {
          auStack_d0._12_4_ = pCVar3->x;
          fStack_c0 = pCVar3->y;
          fStack_bc = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_d0);
        if (in_stack_00000004[2].create_event != auStack_d0) {
          *(uint *)in_stack_00000004[2].create_event = auStack_d0._0_4_;
          *(uint *)(in_stack_00000004[2].create_event + 4) = auStack_d0._4_4_;
          *(uint *)(in_stack_00000004[2].create_event + 8) = auStack_d0._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CVector3f *)(auStack_d0 + 0xc),(CQuaternion4f *)auStack_94);
        puVar6 = (uint *)((int)in_stack_00000004 + (uint)bVar11 * -8 + 0x348);
        *(uint *)(in_stack_00000004[2].create_event + 0x1c) = auStack_94._0_4_;
        puVar9 = puVar6 + (uint)bVar11 * -2 + 1;
        *puVar6 = *(uint *)(auStack_94 + (uint)bVar11 * -8 + 4);
        *puVar9 = auStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
        puVar9[(uint)bVar11 * -2 + 1] =
             (auStack_88 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + -1)[(uint)bVar11 * -2 + 1];
        break;
      case 3:
        core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                  (&CStack_17c,&(in_stack_00000004->location).position,
                   (CVector3f *)&in_stack_00000004->orient);
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_28,(CVector3f *)(in_stack_00000004[2].create_event + 0xc));
        position = &in_stack_00000004[2].unk1;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_29c,(CVector3f *)position,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_29c,&CStack_17c,&CStack_14c);
        pCVar5 = &CStack_14c;
        pCVar10 = &CStack_23c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar10->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar11 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&local_4c,(CVector3f *)(in_stack_00000004[2].create_event + 0x1c));
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_1dc,(CVector3f *)in_stack_00000004[2].create_event,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_1dc,&CStack_17c,(CMatrix3x4f *)&stack0xfffffd34);
        pfVar4 = (float *)&stack0xfffffd34;
        pCVar5 = &CStack_11c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar5->m[0].w = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar11 * -2 + 1;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar11 * -2 + 1) * 4);
        }
        core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_20c,&(in_stack_00000004->location).position,
                   (CVector3f *)&in_stack_00000004->orient);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_23c,&CStack_20c,&CStack_26c);
        pCVar5 = &CStack_26c;
        pCVar10 = &CStack_29c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar10->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar11 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
        }
        local_4c.z = CStack_29c.m[0].z;
        fStack_3c = CStack_29c.m[1].z;
        fStack_38 = CStack_29c.m[2].z;
        if (&local_4c.z != (float *)position) {
          *position = (int)CStack_29c.m[0].z;
          in_stack_00000004[2].was_created = (int)CStack_29c.m[1].z;
          in_stack_00000004[2].create_prob = CStack_29c.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&CStack_29c,&CStack_74);
        puVar9 = (uint *)((int)in_stack_00000004 + (uint)bVar11 * -8 + 0x338);
        *(float *)(in_stack_00000004[2].create_event + 0xc) = CStack_74.w;
        puVar7 = puVar9 + (uint)bVar11 * -2 + 1;
        puVar6 = (uint *)((int)&CStack_74 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        *puVar9 = *(uint *)((int)&CStack_74 + (uint)bVar11 * -8 + 4);
        *puVar7 = *puVar6;
        puVar7[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_11c,&CStack_20c,&CStack_1ac);
        pCVar5 = &CStack_1ac;
        pCVar10 = &CStack_1dc;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar10->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar11 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
        }
        CStack_64.z = CStack_1dc.m[0].z;
        fStack_54 = CStack_1dc.m[1].z;
        fStack_50 = CStack_1dc.m[2].z;
        if ((float *)in_stack_00000004[2].create_event != &CStack_64.z) {
          *(float *)in_stack_00000004[2].create_event = CStack_1dc.m[0].z;
          *(float *)(in_stack_00000004[2].create_event + 4) = CStack_1dc.m[1].z;
          *(float *)(in_stack_00000004[2].create_event + 8) = CStack_1dc.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&CStack_1dc,&CStack_b4);
        puVar9 = (uint *)((int)in_stack_00000004 + (uint)bVar11 * -8 + 0x348);
        *(float *)(in_stack_00000004[2].create_event + 0x1c) = CStack_b4.w;
        puVar7 = puVar9 + (uint)bVar11 * -2 + 1;
        puVar6 = (uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        *puVar9 = *(uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + 4);
        *puVar7 = *puVar6;
        puVar7[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
      }
    }
    else {
      local_18 = in_stack_00000004[2].runtime_state;
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

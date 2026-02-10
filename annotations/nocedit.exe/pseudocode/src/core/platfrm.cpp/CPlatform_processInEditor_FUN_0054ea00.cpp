// Name: core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00
// Address: 0054ea00
// Address Range: [[0054ea00, 0054f058]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(CPlatform *this_ptr)

{
  CLocation *pCVar1;
  UOrientationVector *euler_angles;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  CMatrix3x4f *pCVar11;
  byte bVar12;
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
  
  bVar12 = 0;
  if (this_ptr->platform_type != 4) {
    if (this_ptr->course_filename[0] == '\0') {
      local_4c.w = (this_ptr->start_pos).x - (this_ptr->end_pos).x;
      local_4c.x = (this_ptr->start_pos).y - (this_ptr->end_pos).y;
      local_4c.y = (this_ptr->start_pos).z - (this_ptr->end_pos).z;
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      if ((iVar2 != 0) &&
         (iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47), iVar2 != 0)) {
        pCVar3 = &this_ptr->end_pos;
        pCVar1 = &(this_ptr->base).location;
        if ((CLocation *)pCVar3 != pCVar1) {
          pCVar3->x = (pCVar1->position).x;
          (this_ptr->end_pos).y = (this_ptr->base).location.position.y;
          (this_ptr->end_pos).z = (this_ptr->base).location.position.z;
        }
        if (&this_ptr->start_pos != pCVar3) {
          (this_ptr->start_pos).x = pCVar3->x;
          (this_ptr->start_pos).y = (this_ptr->end_pos).y;
          (this_ptr->start_pos).z = (this_ptr->end_pos).z;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  (&(this_ptr->base).orient.vec,(CQuaternion4f *)(auStack_94 + 8));
        puVar7 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        (this_ptr->end_orient).w = (float)auStack_94._8_4_;
        puVar10 = puVar7 + (uint)bVar12 * -2 + 1;
        *puVar7 = auStack_88[(uint)bVar12 * -2];
        *puVar10 = auStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        puVar10[(uint)bVar12 * -2 + 1] =
             (auStack_88 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        puVar8 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x338);
        puVar7 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        (this_ptr->orig_orient).w = (this_ptr->end_orient).w;
        puVar9 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar7 + (uint)bVar12 * -2 + 1;
        *puVar8 = *puVar7;
        *puVar9 = *puVar10;
        puVar9[(uint)bVar12 * -2 + 1] = puVar10[(uint)bVar12 * -2 + 1];
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x15);
      if (iVar2 != 0) {
        core_platfrm_cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480(this_ptr);
      }
      switch(this_ptr->platform_type) {
      case PLATFORM_TYPE_START:
        if ((CVector3f *)auStack_ec != &this_ptr->start_pos) {
          auStack_ec._0_4_ = (this_ptr->start_pos).x;
          auStack_ec._4_4_ = (this_ptr->start_pos).y;
          auStack_ec._8_4_ = (this_ptr->start_pos).z;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CQuaternion4f *)&CStack_28.z,(CVector3f *)&this_ptr->orig_orient);
        if ((CVector3f *)(auStack_ec + 0xc) != pCVar3) {
          auStack_ec._12_4_ = pCVar3->x;
          fStack_dc = pCVar3->y;
          fStack_d8 = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_ec);
        if (&this_ptr->start_pos != (CVector3f *)auStack_ec) {
          (this_ptr->start_pos).x = (float)auStack_ec._0_4_;
          (this_ptr->start_pos).y = (float)auStack_ec._4_4_;
          (this_ptr->start_pos).z = (float)auStack_ec._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(auStack_ec + 0xc),&CStack_a4);
        puVar7 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x338);
        (this_ptr->orig_orient).w = CStack_a4.w;
        puVar10 = puVar7 + (uint)bVar12 * -2 + 1;
        *puVar7 = *(uint *)(auStack_94 + (uint)bVar12 * -8 + -0xc);
        *puVar10 = *(uint *)(auStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8);
        puVar10[(uint)bVar12 * -2 + 1] =
             *(uint *)
              ((int)(auStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8) +
              ((uint)bVar12 * -2 + 1) * 4);
        break;
      case PLATFORM_TYPE_END:
        if ((CVector3f *)auStack_d0 != &this_ptr->end_pos) {
          auStack_d0._0_4_ = (this_ptr->end_pos).x;
          auStack_d0._4_4_ = (this_ptr->end_pos).y;
          auStack_d0._8_4_ = (this_ptr->end_pos).z;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_64,(CVector3f *)&this_ptr->end_orient);
        if ((CVector3f *)(auStack_d0 + 0xc) != pCVar3) {
          auStack_d0._12_4_ = pCVar3->x;
          fStack_c0 = pCVar3->y;
          fStack_bc = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_d0);
        if (&this_ptr->end_pos != (CVector3f *)auStack_d0) {
          (this_ptr->end_pos).x = (float)auStack_d0._0_4_;
          (this_ptr->end_pos).y = (float)auStack_d0._4_4_;
          (this_ptr->end_pos).z = (float)auStack_d0._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CVector3f *)(auStack_d0 + 0xc),(CQuaternion4f *)auStack_94);
        puVar7 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        (this_ptr->end_orient).w = (float)auStack_94._0_4_;
        puVar10 = puVar7 + (uint)bVar12 * -2 + 1;
        *puVar7 = *(uint *)(auStack_94 + (uint)bVar12 * -8 + 4);
        *puVar10 = auStack_88[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -1];
        puVar10[(uint)bVar12 * -2 + 1] =
             (auStack_88 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + -1)[(uint)bVar12 * -2 + 1];
        break;
      case PLATFORM_TYPE_BOTH:
        euler_angles = &(this_ptr->base).orient;
        pCVar1 = &(this_ptr->base).location;
        core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                  (&CStack_17c,&pCVar1->position,&euler_angles->vec);
        pCVar4 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_28,(CVector3f *)&this_ptr->orig_orient);
        pCVar3 = &this_ptr->start_pos;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&CStack_29c,pCVar3,pCVar4)
        ;
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_29c,&CStack_17c,&CStack_14c);
        pCVar6 = &CStack_14c;
        pCVar11 = &CStack_23c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar11->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
        }
        pCVar4 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&local_4c,(CVector3f *)&this_ptr->end_orient);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_1dc,&this_ptr->end_pos,pCVar4);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&CStack_1dc,&CStack_17c,(CMatrix3x4f *)&stack0xfffffd34);
        pfVar5 = (float *)&stack0xfffffd34;
        pCVar6 = &CStack_11c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar6->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar12 * -2 + 1;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
        }
        core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_20c,&pCVar1->position,&euler_angles->vec);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_23c,&CStack_20c,&CStack_26c);
        pCVar6 = &CStack_26c;
        pCVar11 = &CStack_29c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar11->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
        }
        local_4c.z = CStack_29c.m[0].z;
        fStack_3c = CStack_29c.m[1].z;
        fStack_38 = CStack_29c.m[2].z;
        if ((CVector3f *)&local_4c.z != pCVar3) {
          pCVar3->x = CStack_29c.m[0].z;
          (this_ptr->start_pos).y = CStack_29c.m[1].z;
          (this_ptr->start_pos).z = CStack_29c.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&CStack_29c,&CStack_74);
        puVar10 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x338);
        (this_ptr->orig_orient).w = CStack_74.w;
        puVar8 = puVar10 + (uint)bVar12 * -2 + 1;
        puVar7 = (uint *)((int)&CStack_74 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *puVar10 = *(uint *)((int)&CStack_74 + (uint)bVar12 * -8 + 4);
        *puVar8 = *puVar7;
        puVar8[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_11c,&CStack_20c,&CStack_1ac);
        pCVar6 = &CStack_1ac;
        pCVar11 = &CStack_1dc;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar11->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
        }
        CStack_64.z = CStack_1dc.m[0].z;
        fStack_54 = CStack_1dc.m[1].z;
        fStack_50 = CStack_1dc.m[2].z;
        if (&this_ptr->end_pos != (CVector3f *)&CStack_64.z) {
          (this_ptr->end_pos).x = CStack_1dc.m[0].z;
          (this_ptr->end_pos).y = CStack_1dc.m[1].z;
          (this_ptr->end_pos).z = CStack_1dc.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&CStack_1dc,&CStack_b4);
        puVar10 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        (this_ptr->end_orient).w = CStack_b4.w;
        puVar8 = puVar10 + (uint)bVar12 * -2 + 1;
        puVar7 = (uint *)((int)&CStack_b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *puVar10 = *(uint *)((int)&CStack_b4 + (uint)bVar12 * -8 + 4);
        *puVar8 = *puVar7;
        puVar8[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
      }
    }
    else {
      local_18 = (this_ptr->course).len;
    }
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar2 != 0) {
      fStack_2c0 = fStack_2c0 * (float)0.25;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
    if (iVar2 != 0) {
      this_ptr->param = this_ptr->param + fStack_2b8;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
    if (iVar2 != 0) {
      this_ptr->param = this_ptr->param - fStack_2b0;
    }
    fStack_2c0 = 7.798827e-39;
    core_platfrm_cpp_CPlatform_FUN_0054cab0(this_ptr);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  return;
}

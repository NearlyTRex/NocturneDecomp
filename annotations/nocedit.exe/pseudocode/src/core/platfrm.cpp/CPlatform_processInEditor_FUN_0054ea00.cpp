// Name: core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00
// Address: 0054ea00
// Address Range: [[0054ea00, 0054f058]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(CPlatform *this_ptr)

{
  CLocation *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  float afStackY_18a8 [1387];
  float local_2e8;
  CMatrix3x4f CStack_2e4;
  CMatrix3x4f CStack_2b4;
  CMatrix3x4f CStack_284;
  CMatrix3x4f CStack_254;
  CMatrix3x4f CStack_224;
  CMatrix3x4f CStack_1f4;
  CMatrix3x4f CStack_1c4;
  CMatrix3x4f CStack_194;
  CMatrix3x4f CStack_164;
  CMatrix3x4f CStack_134;
  byte auStack_104 [16];
  float fStack_f4;
  float fStack_f0;
  byte auStack_e8 [16];
  float fStack_d8;
  float fStack_d4;
  CQuaternion4f CStack_cc;
  CQuaternion4f CStack_bc;
  CQuaternion4f CStack_ac;
  CQuaternion4f CStack_9c;
  CQuaternion4f CStack_8c;
  CQuaternion4f CStack_7c;
  float fStack_6c;
  float fStack_68;
  CQuaternion4f CStack_64;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  byte auStack_40 [32];
  CVector3f *pCStack_20;
  CVector3f *pCStack_1c;
  CVector3f *local_18;
  
  bVar10 = 0;
  if (this_ptr->platform_type != 4) {
    if (this_ptr->course_filename[0] == '\0') {
      local_4c = (this_ptr->start_pos).x - (this_ptr->end_pos).x;
      local_48 = (this_ptr->start_pos).y - (this_ptr->end_pos).y;
      local_44 = (this_ptr->start_pos).z - (this_ptr->end_pos).z;
      local_2e8 = SQRT(local_44 * local_44 + local_4c * local_4c + local_48 * local_48);
      if (local_2e8 <= 1.0) {
        local_2e8 = 1.0;
      }
      else {
        local_2e8 = 1.0 / local_2e8;
      }
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      if ((iVar2 != 0) &&
         (iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD7), iVar2 != 0)) {
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
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&(this_ptr->base).orient.vec,&CStack_9c);
        puVar6 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x348);
        (this_ptr->end_orient).w = CStack_9c.w;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar4 = (uint *)((int)&CStack_9c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *puVar6 = *(uint *)((int)&CStack_9c + (uint)bVar10 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar10 * -2 + 1] = puVar4[(uint)bVar10 * -2 + 1];
        puVar7 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x338);
        puVar4 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x348);
        (this_ptr->orig_orient).w = (this_ptr->end_orient).w;
        puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar6 = puVar4 + (uint)bVar10 * -2 + 1;
        *puVar7 = *puVar4;
        *puVar8 = *puVar6;
        puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Y);
      if (iVar2 != 0) {
        core_platfrm_cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480(this_ptr);
      }
      switch(this_ptr->platform_type) {
      case PLATFORM_TYPE_START:
        if ((CVector3f *)auStack_104 != &this_ptr->start_pos) {
          auStack_104._0_4_ = (this_ptr->start_pos).x;
          auStack_104._4_4_ = (this_ptr->start_pos).y;
          auStack_104._8_4_ = (this_ptr->start_pos).z;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CQuaternion4f *)(auStack_40 + 0xc),(CVector3f *)&this_ptr->orig_orient)
        ;
        if ((CVector3f *)(auStack_104 + 0xc) != pCVar3) {
          auStack_104._12_4_ = pCVar3->x;
          fStack_f4 = pCVar3->y;
          fStack_f0 = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_104);
        if (&this_ptr->start_pos != (CVector3f *)auStack_104) {
          (this_ptr->start_pos).x = (float)auStack_104._0_4_;
          (this_ptr->start_pos).y = (float)auStack_104._4_4_;
          (this_ptr->start_pos).z = (float)auStack_104._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(auStack_104 + 0xc),&CStack_bc);
        puVar6 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x338);
        (this_ptr->orig_orient).w = CStack_bc.w;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar4 = (uint *)((int)&CStack_bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *puVar6 = *(uint *)((int)&CStack_bc + (uint)bVar10 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar10 * -2 + 1] = puVar4[(uint)bVar10 * -2 + 1];
        break;
      case PLATFORM_TYPE_END:
        if ((CVector3f *)auStack_e8 != &this_ptr->end_pos) {
          auStack_e8._0_4_ = (this_ptr->end_pos).x;
          auStack_e8._4_4_ = (this_ptr->end_pos).y;
          auStack_e8._8_4_ = (this_ptr->end_pos).z;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_7c,(CVector3f *)&this_ptr->end_orient);
        if ((CVector3f *)(auStack_e8 + 0xc) != pCVar3) {
          auStack_e8._12_4_ = pCVar3->x;
          fStack_d8 = pCVar3->y;
          fStack_d4 = pCVar3->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_e8);
        if (&this_ptr->end_pos != (CVector3f *)auStack_e8) {
          (this_ptr->end_pos).x = (float)auStack_e8._0_4_;
          (this_ptr->end_pos).y = (float)auStack_e8._4_4_;
          (this_ptr->end_pos).z = (float)auStack_e8._8_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(auStack_e8 + 0xc),&CStack_ac);
        puVar6 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x348);
        (this_ptr->end_orient).w = CStack_ac.w;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar4 = (uint *)((int)&CStack_ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *puVar6 = *(uint *)((int)&CStack_ac + (uint)bVar10 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar10 * -2 + 1] = puVar4[(uint)bVar10 * -2 + 1];
        break;
      case PLATFORM_TYPE_BOTH:
        pCStack_20 = (CVector3f *)&(this_ptr->base).orient;
        local_18 = &(this_ptr->base).location.position;
        core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(&CStack_194,local_18,pCStack_20)
        ;
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CQuaternion4f *)auStack_40,(CVector3f *)&this_ptr->orig_orient);
        pCStack_1c = &this_ptr->start_pos;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_2b4,pCStack_1c,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_2b4,&CStack_194,&CStack_164);
        pCVar5 = &CStack_164;
        pCVar9 = &CStack_254;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_64,(CVector3f *)&this_ptr->end_orient);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_1f4,&this_ptr->end_pos,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_1f4,&CStack_194,&CStack_2e4);
        pCVar5 = &CStack_2e4;
        pCVar9 = &CStack_134;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_224,local_18,pCStack_20);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_254,&CStack_224,&CStack_284);
        pCVar5 = &CStack_284;
        pCVar9 = &CStack_2b4;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        CStack_64.z = CStack_2b4.m[0].z;
        fStack_54 = CStack_2b4.m[1].z;
        fStack_50 = CStack_2b4.m[2].z;
        if ((CVector3f *)&CStack_64.z != pCStack_1c) {
          pCStack_1c->x = CStack_2b4.m[0].z;
          pCStack_1c->y = CStack_2b4.m[1].z;
          pCStack_1c->z = CStack_2b4.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&CStack_2b4,&CStack_8c);
        puVar6 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x338);
        (this_ptr->orig_orient).w = CStack_8c.w;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar4 = (uint *)((int)&CStack_8c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *puVar6 = *(uint *)((int)&CStack_8c + (uint)bVar10 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar10 * -2 + 1] = puVar4[(uint)bVar10 * -2 + 1];
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_134,&CStack_224,&CStack_1c4);
        pCVar5 = &CStack_1c4;
        pCVar9 = &CStack_1f4;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar9->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        CStack_7c.z = CStack_1f4.m[0].z;
        fStack_6c = CStack_1f4.m[1].z;
        fStack_68 = CStack_1f4.m[2].z;
        if (&this_ptr->end_pos != (CVector3f *)&CStack_7c.z) {
          (this_ptr->end_pos).x = CStack_1f4.m[0].z;
          (this_ptr->end_pos).y = CStack_1f4.m[1].z;
          (this_ptr->end_pos).z = CStack_1f4.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&CStack_1f4,&CStack_cc);
        puVar6 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x348);
        (this_ptr->end_orient).w = CStack_cc.w;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar4 = (uint *)((int)&CStack_cc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *puVar6 = *(uint *)((int)&CStack_cc + (uint)bVar10 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar10 * -2 + 1] = puVar4[(uint)bVar10 * -2 + 1];
      }
    }
    else {
      local_18 = (CVector3f *)(this_ptr->course).len;
      local_2e8 = 1.0 / (float)(int)local_18;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if (iVar2 != 0) {
      local_2e8 = local_2e8 * (float)4;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if (iVar2 != 0) {
      local_2e8 = local_2e8 * (float)0.25;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
    if (iVar2 != 0) {
      this_ptr->param = this_ptr->param + local_2e8;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
    if (iVar2 != 0) {
      this_ptr->param = this_ptr->param - local_2e8;
    }
    core_platfrm_cpp_CPlatform_FUN_0054cab0(this_ptr);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  return;
}

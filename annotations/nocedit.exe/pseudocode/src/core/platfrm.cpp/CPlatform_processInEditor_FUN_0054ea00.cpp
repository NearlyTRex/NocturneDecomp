// Name: core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00
// Address: 0054ea00
// Address Range: [[0054ea00, 0054f058] [006050a6, 0060511b] [0060f543, 0060f5ae]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(CPlatform *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar2;
  int iVar4;
  CVector3f *pCVar3;
  CVector3f *pCVar6;
  uint *puVar4;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar8;
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
  CSlew auStack_104;
  CSlew auStack_e8;
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
  CLocation *pCVar1;
  
  bVar10 = 0;
  if (this_ptr->platform_type != 4) {
    if (this_ptr->course_filename[0] == '\0') {
      fVar1 = (this_ptr->start_pos).x - (this_ptr->end_pos).x;
      fVar2 = (this_ptr->start_pos).y - (this_ptr->end_pos).y;
      fVar3 = (this_ptr->start_pos).z - (this_ptr->end_pos).z;
      fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
      if (fVar1 <= 1.0) {
        local_2e8 = 1.0;
      }
      else {
        local_2e8 = 1.0 / fVar1;
      }
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      if ((iVar2 != 0) &&
         (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD7), iVar4 != 0)) {
        pCVar6 = &this_ptr->end_pos;
        pCVar1 = &(this_ptr->base).location;
        if ((CLocation *)pCVar6 != pCVar1) {
          pCVar6->x = (pCVar1->position).x;
          (this_ptr->end_pos).y = (this_ptr->base).location.position.y;
          (this_ptr->end_pos).z = (this_ptr->base).location.position.z;
        }
        if (&this_ptr->start_pos != pCVar6) {
          (this_ptr->start_pos).x = pCVar6->x;
          (this_ptr->start_pos).y = (this_ptr->end_pos).y;
          (this_ptr->start_pos).z = (this_ptr->end_pos).z;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&(this_ptr->base).orient.vec,&CStack_9c);
        (this_ptr->end_orient).w = CStack_9c.w;
        (this_ptr->end_orient).x = CStack_9c.x;
        (this_ptr->end_orient).y = CStack_9c.y;
        (this_ptr->end_orient).z = CStack_9c.z;
        (this_ptr->orig_orient).w = (this_ptr->end_orient).w;
        (this_ptr->orig_orient).x = (this_ptr->end_orient).x;
        (this_ptr->orig_orient).y = (this_ptr->end_orient).y;
        (this_ptr->orig_orient).z = (this_ptr->end_orient).z;
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Y);
      if (iVar4 != 0) {
        core_platfrm_cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480(this_ptr);
      }
      switch(this_ptr->platform_type) {
      case PLATFORM_TYPE_START:
        if (&auStack_104 != (CSlew *)&this_ptr->start_pos) {
          auStack_104.position.x = (this_ptr->start_pos).x;
          auStack_104.position.y = (this_ptr->start_pos).y;
          auStack_104.position.z = (this_ptr->start_pos).z;
        }
        pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CQuaternion4f *)(auStack_40 + 0xc),(CVector3f *)&this_ptr->orig_orient)
        ;
        if ((CVector3f *)&auStack_104.pitch != pCVar6) {
          auStack_104.pitch = pCVar6->x;
          auStack_104.yaw = pCVar6->y;
          auStack_104.roll = pCVar6->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0(&auStack_104);
        if ((CSlew *)&this_ptr->start_pos != &auStack_104) {
          (this_ptr->start_pos).x = auStack_104.position.x;
          (this_ptr->start_pos).y = auStack_104.position.y;
          (this_ptr->start_pos).z = auStack_104.position.z;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)&auStack_104.pitch,&CStack_bc);
        (this_ptr->orig_orient).w = CStack_bc.w;
        (this_ptr->orig_orient).x = CStack_bc.x;
        (this_ptr->orig_orient).y = CStack_bc.y;
        (this_ptr->orig_orient).z = CStack_bc.z;
        break;
      case PLATFORM_TYPE_END:
        if (&auStack_e8 != (CSlew *)&this_ptr->end_pos) {
          auStack_e8.position.x = (this_ptr->end_pos).x;
          auStack_e8.position.y = (this_ptr->end_pos).y;
          auStack_e8.position.z = (this_ptr->end_pos).z;
        }
        pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_7c,(CVector3f *)&this_ptr->end_orient);
        if ((CVector3f *)&auStack_e8.pitch != pCVar6) {
          auStack_e8.pitch = pCVar6->x;
          auStack_e8.yaw = pCVar6->y;
          auStack_e8.roll = pCVar6->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0(&auStack_e8);
        if ((CSlew *)&this_ptr->end_pos != &auStack_e8) {
          (this_ptr->end_pos).x = auStack_e8.position.x;
          (this_ptr->end_pos).y = auStack_e8.position.y;
          (this_ptr->end_pos).z = auStack_e8.position.z;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)&auStack_e8.pitch,&CStack_ac);
        (this_ptr->end_orient).w = CStack_ac.w;
        (this_ptr->end_orient).x = CStack_ac.x;
        (this_ptr->end_orient).y = CStack_ac.y;
        (this_ptr->end_orient).z = CStack_ac.z;
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
        pCVar7 = &CStack_164;
        pCVar8 = &CStack_254;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar8->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
        }
        pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (&CStack_64,(CVector3f *)&this_ptr->end_orient);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_1f4,&this_ptr->end_pos,pCVar6);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_1f4,&CStack_194,&CStack_2e4);
        pCVar7 = &CStack_2e4;
        pCVar8 = &CStack_134;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar8->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
        }
        core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&CStack_224,local_18,pCStack_20);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_254,&CStack_224,&CStack_284);
        pCVar7 = &CStack_284;
        pCVar8 = &CStack_2b4;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar8->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
        }
        CStack_64.z = CStack_2b4.m[0].z;
        if ((CVector3f *)&CStack_64.z != pCStack_1c) {
          pCStack_1c->x = CStack_2b4.m[0].z;
          pCStack_1c->y = CStack_2b4.m[1].z;
          pCStack_1c->z = CStack_2b4.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&CStack_2b4,&CStack_8c);
        (this_ptr->orig_orient).w = CStack_8c.w;
        (this_ptr->orig_orient).x = CStack_8c.x;
        (this_ptr->orig_orient).y = CStack_8c.y;
        (this_ptr->orig_orient).z = CStack_8c.z;
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_134,&CStack_224,&CStack_1c4);
        pCVar5 = &CStack_1c4;
        pCVar9 = &CStack_1f4;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + (uint)bVar10 * -8 + 4);
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar10 * -8 + 4);
          pCVar9->m[0].w = pCVar5->m[0].w;
          pCVar5 = pCVar5;
          pCVar9 = pCVar9;
        }
        CStack_7c.z = CStack_1f4.m[0].z;
        if (&this_ptr->end_pos != (CVector3f *)&CStack_7c.z) {
          (this_ptr->end_pos).x = CStack_1f4.m[0].z;
          (this_ptr->end_pos).y = CStack_1f4.m[1].z;
          (this_ptr->end_pos).z = CStack_1f4.m[2].z;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&CStack_1f4,&CStack_cc);
        (this_ptr->end_orient).w = CStack_cc.w;
        (this_ptr->end_orient).x = CStack_cc.x;
        (this_ptr->end_orient).y = CStack_cc.y;
        (this_ptr->end_orient).z = CStack_cc.z;
      }
    }
    else {
      local_18 = (CVector3f *)(this_ptr->course).len;
      local_2e8 = 1.0 / (float)(int)local_18;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if (iVar4 != 0) {
      local_2e8 = local_2e8 * (float)4;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if (iVar4 != 0) {
      local_2e8 = local_2e8 * (float)0.25;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
    if (iVar4 != 0) {
      this_ptr->param = this_ptr->param + local_2e8;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
    if (iVar4 != 0) {
      this_ptr->param = this_ptr->param - local_2e8;
    }
    core_platfrm_cpp_CPlatform_evaluatePosition_FUN_0054cab0(this_ptr);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  return;
}

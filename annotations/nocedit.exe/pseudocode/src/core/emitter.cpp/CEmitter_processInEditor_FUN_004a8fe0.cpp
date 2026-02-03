// Name: core_emitter.cpp_CEmitter_processInEditor_FUN_004a8fe0
// Address: 004a8fe0
// Address Range: [[004a8fe0, 004a934f]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_processInEditor_FUN_004a8fe0(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_processInEditor_FUN_004a8fe0(CEmitter *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  float unaff_EBX;
  float in_stack_0000000c;
  float in_stack_00000014;
  float in_stack_0000001c;
  float in_stack_00000024;
  float fVar5;
  float fVar6;
  float fVar7;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (this_ptr->emitter_type == 3) {
    if (INT_02cf2b5c != 0) goto LAB_004a9009;
  }
  else {
    INT_02cf2b5c = 0;
  }
  DAT_02cf2b78 = (CEmitter *)0x0;
LAB_004a9009:
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar3 == 0) {
    if (INT_02cf2b5c != 0) {
      if (this_ptr != DAT_02cf2b78) {
        DAT_02cf2b78 = this_ptr;
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&CStack_28,(CVector3f *)&stack0xffffffc0);
        if (pCVar4 != &CVector3f_02cf2b60) {
          CVector3f_02cf2b60.x = pCVar4->x;
          CVector3f_02cf2b60.z = pCVar4->z;
          CVector3f_02cf2b60.y = pCVar4->y;
        }
        pCVar2 = &(this_ptr->base).orient;
        if (pCVar2 != (COrientation *)&DAT_02cf2b6c) {
          DAT_02cf2b6c = pCVar2->pitch;
          DAT_02cf2b74 = (this_ptr->base).orient.heading;
          DAT_02cf2b70 = (this_ptr->base).orient.bank;
        }
      }
      pCVar1 = &(this_ptr->base).location;
      fVar5 = (pCVar1->position).x;
      fVar6 = (this_ptr->base).location.position.y;
      fVar7 = (this_ptr->base).location.position.z;
      pCVar2 = &(this_ptr->base).orient;
      fStack_1c = pCVar2->pitch;
      fStack_18 = (this_ptr->base).orient.bank;
      fStack_14 = (this_ptr->base).orient.heading;
      (pCVar1->position).x = CVector3f_02cf2b60.x;
      (this_ptr->base).location.position.y = CVector3f_02cf2b60.y;
      (this_ptr->base).location.position.z = CVector3f_02cf2b60.z;
      if (pCVar2 != (COrientation *)&DAT_02cf2b6c) {
        pCVar2->pitch = DAT_02cf2b6c;
        (this_ptr->base).orient.bank = DAT_02cf2b70;
        (this_ptr->base).orient.heading = DAT_02cf2b74;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
      core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
      pCVar1 = &(this_ptr->base).location;
      if (pCVar1 != (CLocation *)&CVector3f_02cf2b60) {
        CVector3f_02cf2b60.x = (pCVar1->position).x;
        CVector3f_02cf2b60.z = (this_ptr->base).location.position.z;
        CVector3f_02cf2b60.y = (this_ptr->base).location.position.y;
      }
      pCVar2 = &(this_ptr->base).orient;
      if (pCVar2 != (COrientation *)&DAT_02cf2b6c) {
        DAT_02cf2b6c = pCVar2->pitch;
        DAT_02cf2b74 = (this_ptr->base).orient.heading;
        DAT_02cf2b70 = (this_ptr->base).orient.bank;
      }
      (this_ptr->base).location.position.x = fVar5;
      (this_ptr->base).location.position.y = fVar6;
      (this_ptr->base).location.position.z = fVar7;
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)&stack0xffffffcc,(CVector3f *)&stack0xffffffa8);
      pCVar2 = &(this_ptr->base).orient;
      if (pCVar2 != (COrientation *)pCVar4) {
        pCVar2->pitch = pCVar4->x;
        (this_ptr->base).orient.bank = pCVar4->y;
        (this_ptr->base).orient.heading = pCVar4->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
      return;
    }
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
    return;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).x = (this_ptr->emitter_size).x - unaff_EBX;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).x = (this_ptr->emitter_size).x + (float)this_ptr;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).y = (this_ptr->emitter_size).y - in_stack_0000000c;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).y = (this_ptr->emitter_size).y + in_stack_00000014;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).z = (this_ptr->emitter_size).z - in_stack_0000001c;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).z = (this_ptr->emitter_size).z + in_stack_00000024;
  }
  if ((int)(this_ptr->emitter_size).x < 0x3f000000) {
    (this_ptr->emitter_size).x = 0.5;
  }
  if ((this_ptr->emitter_size).y < 0.5) {
    (this_ptr->emitter_size).y = 0.5;
  }
  if (0.5 <= (this_ptr->emitter_size).z) {
    return;
  }
  (this_ptr->emitter_size).z = 0.5;
  return;
}

// Name: core_emitter.cpp_CEmitter_processInEditor_FUN_004a8fe0
// Address: 004a8fe0
// Address Range: [[004a8fe0, 004a934f]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_processInEditor_FUN_004a8fe0(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_processInEditor_FUN_004a8fe0(CEmitter *this_ptr)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  int iVar3;
  CVector3f *pCVar4;
  CVector3f CStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  
  if (this_ptr->emitter_type == 3) {
    if (g_SlewTargetMode != 0) goto LAB_004a9009;
  }
  else {
    g_SlewTargetMode = 0;
  }
  PTR_02cf2b78 = (CEmitter *)0x0;
LAB_004a9009:
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar3 == 0) {
    if (g_SlewTargetMode != 0) {
      if (this_ptr != PTR_02cf2b78) {
        PTR_02cf2b78 = this_ptr;
        CStack_48.x = 0.0;
        CStack_48.y = 0.0;
        CStack_48.z = 5.0;
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&CStack_30,&CStack_48);
        if (pCVar4 != &g_EmitterTarget) {
          g_EmitterTarget.x = pCVar4->x;
          g_EmitterTarget.z = pCVar4->z;
          g_EmitterTarget.y = pCVar4->y;
        }
        pUVar2 = &(this_ptr->base).orient;
        if (pUVar2 != (UOrientationVector *)&DAT_02cf2b6c) {
          DAT_02cf2b6c = (pUVar2->vec).x;
          DAT_02cf2b74 = (this_ptr->base).orient.vec.z;
          DAT_02cf2b70 = (this_ptr->base).orient.vec.y;
        }
      }
      pCVar1 = &(this_ptr->base).location;
      fStack_54 = (pCVar1->position).x;
      fStack_50 = (this_ptr->base).location.position.y;
      fStack_4c = (this_ptr->base).location.position.z;
      pUVar2 = &(this_ptr->base).orient;
      fStack_24 = (pUVar2->vec).x;
      fStack_20 = (this_ptr->base).orient.vec.y;
      fStack_1c = (this_ptr->base).orient.vec.z;
      (pCVar1->position).x = g_EmitterTarget.x;
      (this_ptr->base).location.position.y = g_EmitterTarget.y;
      (this_ptr->base).location.position.z = g_EmitterTarget.z;
      if (pUVar2 != (UOrientationVector *)&DAT_02cf2b6c) {
        (pUVar2->vec).x = DAT_02cf2b6c;
        (this_ptr->base).orient.vec.y = DAT_02cf2b70;
        (this_ptr->base).orient.vec.z = DAT_02cf2b74;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
      core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
      pCVar1 = &(this_ptr->base).location;
      if (pCVar1 != (CLocation *)&g_EmitterTarget) {
        g_EmitterTarget.x = (pCVar1->position).x;
        g_EmitterTarget.z = (this_ptr->base).location.position.z;
        g_EmitterTarget.y = (this_ptr->base).location.position.y;
      }
      pUVar2 = &(this_ptr->base).orient;
      if (pUVar2 != (UOrientationVector *)&DAT_02cf2b6c) {
        DAT_02cf2b6c = (pUVar2->vec).x;
        DAT_02cf2b74 = (this_ptr->base).orient.vec.z;
        DAT_02cf2b70 = (this_ptr->base).orient.vec.y;
      }
      pCVar1 = &(this_ptr->base).location;
      (pCVar1->position).x = fStack_54;
      (this_ptr->base).location.position.y = fStack_50;
      (this_ptr->base).location.position.z = fStack_4c;
      CStack_60.x = g_EmitterTarget.x - (pCVar1->position).x;
      CStack_60.y = g_EmitterTarget.y - (this_ptr->base).location.position.y;
      CStack_60.z = g_EmitterTarget.z - (this_ptr->base).location.position.z;
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&CStack_3c,&CStack_60);
      pUVar2 = &(this_ptr->base).orient;
      if ((CVector3f *)pUVar2 != pCVar4) {
        (pUVar2->vec).x = pCVar4->x;
        (this_ptr->base).orient.vec.y = pCVar4->y;
        (this_ptr->base).orient.vec.z = pCVar4->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
      return;
    }
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
    return;
  }
  fStack_14 = g_CGamePtr->delta_time_float * (float)4;
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).x = (this_ptr->emitter_size).x - fStack_14;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).x = (this_ptr->emitter_size).x + fStack_14;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).y = (this_ptr->emitter_size).y - fStack_14;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).y = (this_ptr->emitter_size).y + fStack_14;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).z = (this_ptr->emitter_size).z - fStack_14;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar3 != 0) {
    (this_ptr->emitter_size).z = (this_ptr->emitter_size).z + fStack_14;
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

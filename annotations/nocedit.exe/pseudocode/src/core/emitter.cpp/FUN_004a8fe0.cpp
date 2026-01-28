// Name: core_emitter.cpp_FUN_004a8fe0
// Address: 004a8fe0
// Address Range: [[004a8fe0, 004a934f]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_004a8fe0 (undefined4 param_1,undefined4 param_2,float unaff_EBX,undefined4 param_4, CDemonActor *param_5,undefined4 param_6,float param_7,undefined4 param_8, float param_9,undefined4 param_10,float param_11,undefined4 param_12,float param_13)

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a8fe0(uint param_1) */

void core_emitter_cpp_FUN_004a8fe0
               (uint param_1,uint param_2,float unaff_EBX,uint param_4,
               CDemonActor *param_5,uint param_6,float param_7,uint param_8,
               float param_9,uint param_10,float param_11,uint param_12,float param_13)

{
  COrientation *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)param_5[1].actor_name == 3) {
    if (DAT_02cf2b5c != 0) goto LAB_004a9009;
  }
  else {
    DAT_02cf2b5c = 0;
  }
  DAT_02cf2b78 = (CDemonActor *)0x0;
LAB_004a9009:
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    if (DAT_02cf2b5c != 0) {
      if (param_5 != DAT_02cf2b78) {
        DAT_02cf2b78 = param_5;
        pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (param_5,&CStack_28,(CVector3f *)&stack0xffffffc0);
        if (pCVar3 != (CVector3f *)&DAT_02cf2b60) {
          DAT_02cf2b60 = pCVar3->x;
          DAT_02cf2b68 = pCVar3->z;
          DAT_02cf2b64 = pCVar3->y;
        }
        if (&param_5->orient != (COrientation *)&DAT_02cf2b6c) {
          DAT_02cf2b6c = (param_5->orient).pitch;
          DAT_02cf2b74 = (param_5->orient).heading;
          DAT_02cf2b70 = (param_5->orient).bank;
        }
      }
      fVar4 = (param_5->location).position.x;
      fVar5 = (param_5->location).position.y;
      fVar6 = (param_5->location).position.z;
      pCVar1 = &param_5->orient;
      fStack_1c = pCVar1->pitch;
      fStack_18 = (param_5->orient).bank;
      fStack_14 = (param_5->orient).heading;
      (param_5->location).position.x = DAT_02cf2b60;
      (param_5->location).position.y = DAT_02cf2b64;
      (param_5->location).position.z = DAT_02cf2b68;
      if (pCVar1 != (COrientation *)&DAT_02cf2b6c) {
        pCVar1->pitch = DAT_02cf2b6c;
        (param_5->orient).bank = DAT_02cf2b70;
        (param_5->orient).heading = DAT_02cf2b74;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(param_5);
      core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(param_5);
      if (&param_5->location != (CLocation *)&DAT_02cf2b60) {
        DAT_02cf2b60 = (param_5->location).position.x;
        DAT_02cf2b68 = (param_5->location).position.z;
        DAT_02cf2b64 = (param_5->location).position.y;
      }
      if (&param_5->orient != (COrientation *)&DAT_02cf2b6c) {
        DAT_02cf2b6c = (param_5->orient).pitch;
        DAT_02cf2b74 = (param_5->orient).heading;
        DAT_02cf2b70 = (param_5->orient).bank;
      }
      (param_5->location).position.x = fVar4;
      (param_5->location).position.y = fVar5;
      (param_5->location).position.z = fVar6;
      pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)&stack0xffffffcc,(CVector3f *)&stack0xffffffa8);
      if (&param_5->orient != (COrientation *)pCVar3) {
        (param_5->orient).pitch = pCVar3->x;
        (param_5->orient).bank = pCVar3->y;
        (param_5->orient).heading = pCVar3->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(param_5);
      return;
    }
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(param_5);
    return;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar2 != 0) {
    *(float *)(param_5[1].actor_name + 4) = *(float *)(param_5[1].actor_name + 4) - unaff_EBX;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar2 != 0) {
    *(float *)(param_5[1].actor_name + 4) = *(float *)(param_5[1].actor_name + 4) + (float)param_5;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar2 != 0) {
    *(float *)(param_5[1].actor_name + 8) = *(float *)(param_5[1].actor_name + 8) - param_7;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar2 != 0) {
    *(float *)(param_5[1].actor_name + 8) = *(float *)(param_5[1].actor_name + 8) + param_9;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar2 != 0) {
    *(float *)(param_5[1].actor_name + 0xc) = *(float *)(param_5[1].actor_name + 0xc) - param_11;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar2 != 0) {
    *(float *)(param_5[1].actor_name + 0xc) = *(float *)(param_5[1].actor_name + 0xc) + param_13;
  }
  if (*(int *)(param_5[1].actor_name + 4) < 0x3f000000) {
    param_5[1].actor_name[4] = '\0';
    param_5[1].actor_name[5] = '\0';
    param_5[1].actor_name[6] = '\0';
    param_5[1].actor_name[7] = '?';
  }
  if (*(float *)(param_5[1].actor_name + 8) < 0.5) {
    param_5[1].actor_name[8] = '\0';
    param_5[1].actor_name[9] = '\0';
    param_5[1].actor_name[10] = '\0';
    param_5[1].actor_name[0xb] = '?';
  }
  if (0.5 <= *(float *)(param_5[1].actor_name + 0xc)) {
    return;
  }
  param_5[1].actor_name[0xc] = '\0';
  param_5[1].actor_name[0xd] = '\0';
  param_5[1].actor_name[0xe] = '\0';
  param_5[1].actor_name[0xf] = '?';
  return;
}

// Name: core_emitter.cpp_FUN_004a8fe0
// Address: 004a8fe0
// Address Range: [[004a8fe0, 004a934f]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_FUN_004a8fe0(void)

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a8fe0(uint param_1) */

void __cdecl core_emitter_cpp_FUN_004a8fe0(void)

{
  COrientation *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  float unaff_EBX;
  CDemonActor *in_stack_00000004;
  float in_stack_0000000c;
  float in_stack_00000014;
  float in_stack_0000001c;
  float in_stack_00000024;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)in_stack_00000004[1].actor_name == 3) {
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
      if (in_stack_00000004 != DAT_02cf2b78) {
        DAT_02cf2b78 = in_stack_00000004;
        pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (in_stack_00000004,&CStack_28,(CVector3f *)&stack0xffffffc0);
        if (pCVar3 != (CVector3f *)&DAT_02cf2b60) {
          DAT_02cf2b60 = pCVar3->x;
          DAT_02cf2b68 = pCVar3->z;
          DAT_02cf2b64 = pCVar3->y;
        }
        if (&in_stack_00000004->orient != (COrientation *)&DAT_02cf2b6c) {
          DAT_02cf2b6c = (in_stack_00000004->orient).pitch;
          DAT_02cf2b74 = (in_stack_00000004->orient).heading;
          DAT_02cf2b70 = (in_stack_00000004->orient).bank;
        }
      }
      fVar4 = (in_stack_00000004->location).position.x;
      fVar5 = (in_stack_00000004->location).position.y;
      fVar6 = (in_stack_00000004->location).position.z;
      pCVar1 = &in_stack_00000004->orient;
      fStack_1c = pCVar1->pitch;
      fStack_18 = (in_stack_00000004->orient).bank;
      fStack_14 = (in_stack_00000004->orient).heading;
      (in_stack_00000004->location).position.x = DAT_02cf2b60;
      (in_stack_00000004->location).position.y = DAT_02cf2b64;
      (in_stack_00000004->location).position.z = DAT_02cf2b68;
      if (pCVar1 != (COrientation *)&DAT_02cf2b6c) {
        pCVar1->pitch = DAT_02cf2b6c;
        (in_stack_00000004->orient).bank = DAT_02cf2b70;
        (in_stack_00000004->orient).heading = DAT_02cf2b74;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
      core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
      if (&in_stack_00000004->location != (CLocation *)&DAT_02cf2b60) {
        DAT_02cf2b60 = (in_stack_00000004->location).position.x;
        DAT_02cf2b68 = (in_stack_00000004->location).position.z;
        DAT_02cf2b64 = (in_stack_00000004->location).position.y;
      }
      if (&in_stack_00000004->orient != (COrientation *)&DAT_02cf2b6c) {
        DAT_02cf2b6c = (in_stack_00000004->orient).pitch;
        DAT_02cf2b74 = (in_stack_00000004->orient).heading;
        DAT_02cf2b70 = (in_stack_00000004->orient).bank;
      }
      (in_stack_00000004->location).position.x = fVar4;
      (in_stack_00000004->location).position.y = fVar5;
      (in_stack_00000004->location).position.z = fVar6;
      pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)&stack0xffffffcc,(CVector3f *)&stack0xffffffa8);
      if (&in_stack_00000004->orient != (COrientation *)pCVar3) {
        (in_stack_00000004->orient).pitch = pCVar3->x;
        (in_stack_00000004->orient).bank = pCVar3->y;
        (in_stack_00000004->orient).heading = pCVar3->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
      return;
    }
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
    return;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 4) =
         *(float *)(in_stack_00000004[1].actor_name + 4) - unaff_EBX;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 4) =
         *(float *)(in_stack_00000004[1].actor_name + 4) + (float)in_stack_00000004;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 8) =
         *(float *)(in_stack_00000004[1].actor_name + 8) - in_stack_0000000c;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 8) =
         *(float *)(in_stack_00000004[1].actor_name + 8) + in_stack_00000014;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 0xc) =
         *(float *)(in_stack_00000004[1].actor_name + 0xc) - in_stack_0000001c;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 0xc) =
         *(float *)(in_stack_00000004[1].actor_name + 0xc) + in_stack_00000024;
  }
  if (*(int *)(in_stack_00000004[1].actor_name + 4) < 0x3f000000) {
    in_stack_00000004[1].actor_name[4] = '\0';
    in_stack_00000004[1].actor_name[5] = '\0';
    in_stack_00000004[1].actor_name[6] = '\0';
    in_stack_00000004[1].actor_name[7] = '?';
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 8) < 0.5) {
    in_stack_00000004[1].actor_name[8] = '\0';
    in_stack_00000004[1].actor_name[9] = '\0';
    in_stack_00000004[1].actor_name[10] = '\0';
    in_stack_00000004[1].actor_name[0xb] = '?';
  }
  if (0.5 <= *(float *)(in_stack_00000004[1].actor_name + 0xc)) {
    return;
  }
  in_stack_00000004[1].actor_name[0xc] = '\0';
  in_stack_00000004[1].actor_name[0xd] = '\0';
  in_stack_00000004[1].actor_name[0xe] = '\0';
  in_stack_00000004[1].actor_name[0xf] = '?';
  return;
}

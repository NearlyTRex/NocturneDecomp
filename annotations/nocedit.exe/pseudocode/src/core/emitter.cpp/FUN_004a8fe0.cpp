// Name: core_emitter.cpp_FUN_004a8fe0
// Address: 004a8fe0
// Address Range: [[004a8fe0, 004a934f]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8fe0()

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a8fe0(uint param_1) */

void core_emitter_cpp_FUN_004a8fe0(void)

{
  int iVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000014;
  float in_stack_00000028;
  float in_stack_0000003c;
  float in_stack_00000050;
  float in_stack_00000064;
  float in_stack_00000078;
  float fStack_34;
  float fStack_30;
  float in_stack_ffffffd4;
  float fStack_1c;
  
  if (*(int *)in_stack_00000004[1].actor_name == 3) {
    if (DAT_02cf2b5c != 0) goto LAB_004a9009;
  }
  else {
    DAT_02cf2b5c = 0;
  }
  DAT_02cf2b78 = (CDemonActor *)0x0;
LAB_004a9009:
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    if (DAT_02cf2b5c != 0) {
      if (in_stack_00000004 != DAT_02cf2b78) {
        DAT_02cf2b78 = in_stack_00000004;
        fStack_34 = 0.0;
        fStack_30 = 0.0;
        in_stack_ffffffd4 = 5.0;
        pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (in_stack_00000004,(CVector3f *)&fStack_1c,(CVector3f *)&fStack_34);
        if (pCVar2 != (CVector3f *)&DAT_02cf2b60) {
          DAT_02cf2b60 = pCVar2->x;
          DAT_02cf2b68 = pCVar2->z;
          DAT_02cf2b64 = pCVar2->y;
        }
        if (&in_stack_00000004->orient != (COrientation *)&DAT_02cf2b6c) {
          DAT_02cf2b6c = (in_stack_00000004->orient).pitch;
          DAT_02cf2b74 = (in_stack_00000004->orient).heading;
          DAT_02cf2b70 = (in_stack_00000004->orient).bank;
        }
      }
      fStack_34 = (in_stack_00000004->location).position.z;
      (in_stack_00000004->location).position.x = DAT_02cf2b60;
      (in_stack_00000004->location).position.y = DAT_02cf2b64;
      (in_stack_00000004->location).position.z = DAT_02cf2b68;
      if (&in_stack_00000004->orient != (COrientation *)&DAT_02cf2b6c) {
        (in_stack_00000004->orient).pitch = DAT_02cf2b6c;
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
      (in_stack_00000004->location).position.x = fStack_34;
      (in_stack_00000004->location).position.y = fStack_30;
      (in_stack_00000004->location).position.z = in_stack_ffffffd4;
      pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)&fStack_1c,(CVector3f *)&stack0xffffffc0);
      if (&in_stack_00000004->orient != (COrientation *)pCVar2) {
        (in_stack_00000004->orient).pitch = pCVar2->x;
        (in_stack_00000004->orient).bank = pCVar2->y;
        (in_stack_00000004->orient).heading = pCVar2->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
      return;
    }
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
    return;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 4) =
         *(float *)(in_stack_00000004[1].actor_name + 4) - in_stack_00000014;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 4) =
         *(float *)(in_stack_00000004[1].actor_name + 4) + in_stack_00000028;
  }
  fStack_30 = 6.847673e-39;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 8) =
         *(float *)(in_stack_00000004[1].actor_name + 8) - in_stack_0000003c;
  }
  fStack_1c = 6.847722e-39;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 8) =
         *(float *)(in_stack_00000004[1].actor_name + 8) + in_stack_00000050;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 0xc) =
         *(float *)(in_stack_00000004[1].actor_name + 0xc) - in_stack_00000064;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 0xc) =
         *(float *)(in_stack_00000004[1].actor_name + 0xc) + in_stack_00000078;
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

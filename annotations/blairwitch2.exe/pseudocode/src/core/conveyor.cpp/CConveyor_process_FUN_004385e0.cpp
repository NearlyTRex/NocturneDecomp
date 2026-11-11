// Name: core_conveyor.cpp_CConveyor_process_FUN_004385e0
// Address: 004385e0
// Address Range: [[004385e0, 00438754]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_process_FUN_004385e0(CConveyor *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_conveyor_cpp_CConveyor_process_FUN_004385e0(CConveyor *this_ptr,float delta_time)

{
  CDemonActor *actor_ptr;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1016];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  char *pcStack_20;
  CVector3f *pCStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar2 = 0;
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,this_ptr->start_event);
  if (iVar1 != 0) {
    this_ptr->state = 1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,this_ptr->stop_event);
  if (iVar1 == 0) {
    if (this_ptr->state != 0) {
      pCStack_1c = &this_ptr->direction;
      pcStack_20 = this_ptr->actor_class;
      iStack_14 = 0;
      for (iStack_18 = 0; iStack_18 < g_CDemonSetPtr->actor_count; iStack_18 = iStack_18 + 1) {
        actor_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_14);
        if ((this_ptr == (CConveyor *)actor_ptr->standing_platform) &&
           ((((CConveyor *)actor_ptr->standing_platform)->actor_class[0] == '\0' ||
            (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,pcStack_20), iVar1 != 0)))) {
          core_actor_cpp_FUN_00408cf0(this_ptr,pCStack_1c);
          fStack_50 = fStack_2c;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          fStack_44 = fStack_50 * delta_time;
          fStack_40 = fStack_4c * delta_time;
          fStack_3c = fStack_48 * delta_time;
          fStack_38 = fStack_50 * delta_time;
          (&stack0xffffffcc)[(uint)bVar2 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8);
          *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          if (&actor_ptr->platform_position_delta != (CVector3f *)&stack0xffffffc8) {
            (actor_ptr->platform_position_delta).x = fStack_38;
            (actor_ptr->platform_position_delta).y = fStack_34;
            (actor_ptr->platform_position_delta).z = fStack_30;
          }
          (actor_ptr->platform_orientation_delta).z = 0.0;
          (actor_ptr->platform_orientation_delta).y = 0.0;
          (actor_ptr->platform_orientation_delta).x = 0.0;
        }
        iStack_14 = iStack_14 + 4;
      }
    }
  }
  else {
    this_ptr->state = 0;
  }
  return;
}

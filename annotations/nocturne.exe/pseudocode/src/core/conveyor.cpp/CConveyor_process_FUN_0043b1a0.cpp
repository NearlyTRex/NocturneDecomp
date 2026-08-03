// Name: core_conveyor.cpp_CConveyor_process_FUN_0043b1a0
// Address: 0043b1a0
// Address Range: [[0043b1a0, 0043b2ea]]
// Convention: unknown
// Signature: void core_conveyor_cpp_CConveyor_process_FUN_0043b1a0(CPlatform *param_1,float param_2)

#include "nocturne.h"

void core_conveyor_cpp_CConveyor_process_FUN_0043b1a0(CPlatform *param_1,float param_2)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  float *local_14;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,param_1[1].base.actor_name + 0x18);
  if (iVar1 != 0) {
    param_1[1].base.platform_position_delta.x = 1.4013e-45;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,param_1[1].base.create_event + 4);
  if (iVar1 == 0) {
    if (param_1[1].base.platform_position_delta.x != 0.0) {
      local_18 = (CVector3f *)(param_1[1].base.actor_name + 0xc);
      iVar3 = 0;
      local_14 = &param_1[1].base.platform_position_delta.y;
      iVar1 = 0;
      while (iVar3 < g_CDemonSet_PTR_005be368->actor_count) {
        actor_ptr = *(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar1);
        if (param_1 == actor_ptr->standing_platform) {
          if (*(char *)&actor_ptr->standing_platform[1].base.platform_position_delta.y == '\0') {
LAB_0043b24d:
            core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                      (&param_1->base,&local_30,local_18);
            local_24 = local_30.x * param_2;
            local_20 = local_30.y * param_2;
            local_1c = local_30.z * param_2;
            if (&actor_ptr->platform_position_delta != (CVector3f *)&local_24) {
              (actor_ptr->platform_position_delta).x = local_24;
              (actor_ptr->platform_position_delta).y = local_20;
              (actor_ptr->platform_position_delta).z = local_1c;
            }
            (actor_ptr->platform_orientation_delta).z = 0.0;
            (actor_ptr->platform_orientation_delta).y = 0.0;
            (actor_ptr->platform_orientation_delta).x = 0.0;
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + 4;
          }
          else {
            iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,(char *)local_14);
            if (iVar2 != 0) goto LAB_0043b24d;
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + 4;
          }
        }
        else {
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 4;
        }
      }
    }
  }
  else {
    param_1[1].base.platform_position_delta.x = 0.0;
  }
  return;
}

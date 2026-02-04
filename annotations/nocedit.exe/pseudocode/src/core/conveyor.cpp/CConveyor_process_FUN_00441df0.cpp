// Name: core_conveyor.cpp_CConveyor_process_FUN_00441df0
// Address: 00441df0
// Address Range: [[00441df0, 00441f3a]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_process_FUN_00441df0(CConveyor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_process_FUN_00441df0(CConveyor *this_ptr,float delta_time)

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
  char *local_14;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->start_event);
  if (iVar1 != 0) {
    this_ptr->state = 1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->stop_event);
  if (iVar1 == 0) {
    if (this_ptr->state != 0) {
      local_18 = &this_ptr->direction;
      iVar3 = 0;
      local_14 = this_ptr->actor_class;
      iVar1 = 0;
      while (iVar3 < (int)g_CDemonSetPtr->actor_list_ptr) {
        actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1);
        if (this_ptr == (CConveyor *)actor_ptr->standing_platform) {
          if (((CConveyor *)actor_ptr->standing_platform)->actor_class[0] == '\0') {
LAB_00441e9d:
            core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                      ((CDemonActor *)this_ptr,&local_30,local_18);
            local_24 = local_30.x * delta_time;
            local_20 = local_30.y * delta_time;
            local_1c = local_30.z * delta_time;
            if (&actor_ptr->unk3 != (CVector3f *)&local_24) {
              (actor_ptr->unk3).x = local_24;
              (actor_ptr->unk3).y = local_20;
              (actor_ptr->unk3).z = local_1c;
            }
            (actor_ptr->unk4).z = 0.0;
            (actor_ptr->unk4).y = 0.0;
            (actor_ptr->unk4).x = 0.0;
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + 4;
          }
          else {
            iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,local_14);
            if (iVar2 != 0) goto LAB_00441e9d;
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
    this_ptr->state = 0;
  }
  return;
}

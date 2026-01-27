// Name: core_conveyor.cpp_FUN_00441df0
// Address: 00441df0
// Address Range: [[00441df0, 00441f3a]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00441df0()

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_00441df0(uint param_1, uint
   param_2) */

void core_conveyor_cpp_FUN_00441df0(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  CDemonActor *local_14;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,in_stack_00000004[5].create_event + 0x14);
  if (iVar1 != 0) {
    in_stack_00000004[5].vtable = (CDemonActor_union_vtable)0x1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,(char *)&in_stack_00000004[5].unk4.y);
  if (iVar1 == 0) {
    if (in_stack_00000004[5].vtable._ub != (CDemonActor_vtable *)0x0) {
      local_18 = (CVector3f *)(in_stack_00000004[5].create_event + 8);
      iVar3 = 0;
      local_14 = in_stack_00000004 + 6;
      iVar1 = 0;
      while (iVar3 < (int)g_CDemonSetPtr->actor_list_ptr) {
        actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1);
        if (in_stack_00000004 == (CDemonActor *)actor_ptr->unk2) {
          if (((CDemonActor *)actor_ptr->unk2)[6].actor_name[0] == '\0') {
LAB_00441e9d:
            core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                      (in_stack_00000004,&local_30,local_18);
            local_24 = local_30.x * in_stack_00000008;
            local_20 = local_30.y * in_stack_00000008;
            local_1c = local_30.z * in_stack_00000008;
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
            iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,local_14->actor_name);
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
    in_stack_00000004[5].vtable._ub = (CDemonActor_vtable *)0x0;
  }
  return;
}

// Name: core_conveyor.cpp_FUN_00441df0
// Address: 00441df0
// Address Range: [[00441df0, 00441f3a]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_FUN_00441df0(void)

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_00441df0(uint param_1, uint
   param_2) */

void __cdecl core_conveyor_cpp_FUN_00441df0(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  CPlatform *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  float *local_14;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,in_stack_00000004[1].base.actor_name + 0x18);
  if (iVar1 != 0) {
    in_stack_00000004[1].base.unk3.x = 1.4013e-45;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,in_stack_00000004[1].base.create_event + 4);
  if (iVar1 == 0) {
    if (in_stack_00000004[1].base.unk3.x != 0.0) {
      local_18 = (CVector3f *)(in_stack_00000004[1].base.actor_name + 0xc);
      iVar3 = 0;
      local_14 = &in_stack_00000004[1].base.unk3.y;
      iVar1 = 0;
      while (iVar3 < (int)g_CDemonSetPtr->actor_list_ptr) {
        actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1);
        if (in_stack_00000004 == actor_ptr->standing_platform) {
          if (*(char *)&actor_ptr->standing_platform[1].base.unk3.y == '\0') {
LAB_00441e9d:
            core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                      (&in_stack_00000004->base,&local_30,local_18);
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
            iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,(char *)local_14);
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
    in_stack_00000004[1].base.unk3.x = 0.0;
  }
  return;
}

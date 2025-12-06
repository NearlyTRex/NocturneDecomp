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
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonActor *in_stack_00000004;
  float in_stack_00000014;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  CVector3f *input;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,in_stack_00000004[5].create_event + 0x14);
  if (iVar1 != 0) {
    in_stack_00000004[5].vtable = (CDemonActor_vtable *)&DAT_00000001;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,(char *)&in_stack_00000004[5].field13_0xec.y);
  if (iVar1 == 0) {
    if (in_stack_00000004[5].vtable != (CDemonActor_vtable *)0x0) {
      input = (CVector3f *)(in_stack_00000004[5].create_event + 8);
      iVar3 = 0;
      iVar1 = 0;
      while (iVar3 < (int)g_CDemonSetPtr->actor_list_ptr) {
        actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1);
        if (in_stack_00000004 == (CDemonActor *)actor_ptr->field11_0xdc) {
          if (((CDemonActor *)actor_ptr->field11_0xdc)[6].actor_name[0] == '\0') {
LAB_00441e9d:
            core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                      (in_stack_00000004,&local_28,input);
            local_18 = local_28.x * in_stack_00000014;
            local_14 = local_28.z * in_stack_00000014;
            input = (CVector3f *)(local_1c * in_stack_00000014);
            if (&actor_ptr->field12_0xe0 != (CVector3f *)&local_18) {
              (actor_ptr->field12_0xe0).x = local_18;
              (actor_ptr->field12_0xe0).y = local_14;
              (actor_ptr->field12_0xe0).z = (float)input;
            }
            (actor_ptr->field13_0xec).z = 0.0;
            (actor_ptr->field13_0xec).y = 0.0;
            (actor_ptr->field13_0xec).x = 0.0;
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + 4;
          }
          else {
            iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,in_stack_00000004[6].actor_name)
            ;
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
    in_stack_00000004[5].vtable = (CDemonActor_vtable *)0x0;
  }
  return;
}

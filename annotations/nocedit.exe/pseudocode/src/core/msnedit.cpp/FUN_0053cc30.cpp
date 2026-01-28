// Name: core_msnedit.cpp_FUN_0053cc30
// Address: 0053cc30
// Address Range: [[0053cc30, 0053ccb0]]
// Convention: unknown
// Signature: void core_msnedit_cpp_FUN_0053cc30(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053cc30(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5) */

void core_msnedit_cpp_FUN_0053cc30(void)

{
  int sort_type;
  CDemonActor *actor_ptr;
  int iVar1;
  int in_stack_00000004;
  CStrList *in_stack_00000008;
  char *in_stack_00000010;
  code *in_stack_00000014;
  
  sort_type = in_stack_00000008->item_count;
  for (actor_ptr = *(CDemonActor **)(in_stack_00000004 + 0x548); actor_ptr != (CDemonActor *)0x0;
      actor_ptr = actor_ptr->next_actor) {
    if ((((in_stack_00000010 == (char *)0x0) || (*in_stack_00000010 == '\0')) ||
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,in_stack_00000010), iVar1 != 0)) &&
       ((in_stack_00000014 == (code *)0x0 || (iVar1 = (*in_stack_00000014)(), iVar1 != 0)))) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000008,actor_ptr->actor_name);
    }
  }
  (*in_stack_00000008->vtable->sort)(in_stack_00000008,sort_type,in_stack_00000008->item_count + -1)
  ;
  return;
}

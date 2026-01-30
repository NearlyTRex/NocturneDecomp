// Name: core_msnedit.cpp_CDemonMission_FUN_0053cc30
// Address: 0053cc30
// Address Range: [[0053cc30, 0053ccb0]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053cc30 (CDemonMission *this_ptr,CStrList *param_2,uint param_3,char *param_4,int param_5)

#include "nocturne.h"

void __cdecl
core_msnedit_cpp_CDemonMission_FUN_0053cc30
          (CDemonMission *this_ptr,CStrList *param_2,uint param_3,char *param_4,int param_5)

{
  int sort_type;
  CDemonActor *actor_ptr;
  int iVar1;
  
  sort_type = param_2->item_count;
  for (actor_ptr = this_ptr->first_actor; actor_ptr != (CDemonActor *)0x0;
      actor_ptr = actor_ptr->next_actor) {
    if ((((param_4 == (char *)0x0) || (*param_4 == '\0')) ||
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,param_4), iVar1 != 0)) &&
       ((param_5 == 0 || (iVar1 = (*(code *)param_5)(), iVar1 != 0)))) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(param_2,actor_ptr->actor_name);
    }
  }
  (*param_2->vtable->sort)(param_2,sort_type,param_2->item_count + -1);
  return;
}

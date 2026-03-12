// Name: core_msnedit.cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30
// Address: 0053cc30
// Address Range: [[0053cc30, 0053ccb0]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30(CDemonMission *this_ptr,CStrList *name_list,CDemonActor *class_type,char *class_name ,CActorPropertyFilterFunc *filter_func)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30(CDemonMission *this_ptr,CStrList *name_list,CDemonActor *class_type,char *class_name ,CActorPropertyFilterFunc *filter_func)

{
  int iVar1;
  int iVar2;
  CDemonActor *actor_ptr;
  int sort_type;
  
  sort_type = name_list->item_count;
  for (actor_ptr = this_ptr->first_actor; actor_ptr != (CDemonActor *)0x0;
      actor_ptr = actor_ptr->next_actor) {
    if ((((class_name == (char *)0x0) || (*class_name == '\0')) ||
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,class_name), iVar1 != 0)) &&
       ((filter_func == (CActorPropertyFilterFunc *)0x0 ||
        (iVar2 = (*filter_func)(class_type,actor_ptr), iVar2 != 0)))) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(name_list,actor_ptr->actor_name);
    }
  }
  (*name_list->vtable->sort)(name_list,sort_type,name_list->item_count + -1);
  return;
}

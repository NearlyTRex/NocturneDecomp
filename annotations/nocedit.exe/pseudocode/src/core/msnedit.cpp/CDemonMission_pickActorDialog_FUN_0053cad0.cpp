// Name: core_msnedit.cpp_CDemonMission_pickActorDialog_FUN_0053cad0
// Address: 0053cad0
// Address Range: [[0053cad0, 0053cc20]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_pickActorDialog_FUN_0053cad0(CDemonMission *this_ptr,CDemonActor *class_type,char *title,CDemonActor **out_actor,int allow_none,char *class_name,CActorPropertyFilterFunc *filter_func,int preselect)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_CDemonMission_pickActorDialog_FUN_0053cad0(CDemonMission *this_ptr,CDemonActor *class_type,char *title,CDemonActor **out_actor,int allow_none,char *class_name,CActorPropertyFilterFunc *filter_func,int preselect)

{
  char *pcVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int index;
  int iVar4;
  int initial_selected_index;
  CPickList local_3b8;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3b8);
  iVar4 = -1;
  if (((allow_none != 0) &&
      (shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b8.base,"(none)"), preselect != 0
      )) && (*out_actor == (CDemonActor *)0x0)) {
    iVar4 = 0;
  }
  core_msnedit_cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30
            (this_ptr,&local_3b8.base,class_type,class_name,filter_func);
  initial_selected_index = iVar4;
  if (((preselect != 0) && (iVar4 < 0)) &&
     ((*out_actor != (CDemonActor *)0x0 && (index = 0, 0 < local_3b8.base.item_count)))) {
    do {
      pCVar2 = *out_actor;
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3b8.base,index);
      iVar3 = _stricmp(pcVar1,pCVar2->actor_name);
      initial_selected_index = index;
      if (iVar3 == 0) break;
      index = index + 1;
      initial_selected_index = iVar4;
    } while (index < local_3b8.base.item_count);
  }
  iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3b8,title,initial_selected_index,0);
  if (-1 < iVar4) {
    pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3b8.base,iVar4);
    pCVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,pcVar1);
    *out_actor = pCVar2;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b8,0);
  return (uint)(-1 < iVar4);
}

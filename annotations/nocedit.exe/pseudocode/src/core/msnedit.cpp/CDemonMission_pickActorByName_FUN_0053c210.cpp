// Name: core_msnedit.cpp_CDemonMission_pickActorByName_FUN_0053c210
// Address: 0053c210
// Address Range: [[0053c210, 0053c33f]]
// Convention: __cdecl
// Signature: char * __cdecl core_msnedit_cpp_CDemonMission_pickActorByName_FUN_0053c210(CDemonMission *this_ptr,char *title,char *current_name)

#include "nocturne.h"

char * __cdecl core_msnedit_cpp_CDemonMission_pickActorByName_FUN_0053c210(CDemonMission *this_ptr,char *title,char *current_name)

{
  char *pcVar2;
  int iVar3;
  int iVar1;
  char *name;
  CDemonActor *pCVar4;
  int iVar5;
  int index;
  int iVar6;
  int iVar2;
  CPickList local_3b4;
  uint *puVar1;
  
  if (g_CDemonSetPtr->actor_count < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No actors in set.");
    return (char *)0x0;
  }
  iVar6 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3b4);
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->actor_count; iVar5 = iVar5 + 1) {
    puVar1 = (uint *)((int)g_CDemonSetPtr->actors + iVar6);
    iVar6 = iVar6 + 4;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b4.base,(char *)*puVar1);
  }
  iVar2 = -1;
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_3b4.base);
  iVar1 = iVar2;
  if ((current_name != (char *)0x0) && (index = 0, 0 < local_3b4.base.item_count)) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3b4.base,index);
      iVar3 = _stricmp(current_name,pcVar2);
      iVar1 = index;
      if (iVar3 == 0) break;
      index = index + 1;
      iVar1 = iVar2;
    } while (index < local_3b4.base.item_count);
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3b4,title,iVar1,0);
  if (iVar1 < 0) {
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
    return (char *)0x0;
  }
  name = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3b4.base,iVar1);
  pCVar4 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,name);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
  return pCVar4->actor_name;
}

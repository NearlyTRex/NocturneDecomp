// Name: core_teleport.cpp_CTeleportDest_processInEditor_FUN_005da870
// Address: 005da870
// Address Range: [[005da870, 005da96c]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleportDest_processInEditor_FUN_005da870(CTeleportDest *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleportDest_processInEditor_FUN_005da870(CTeleportDest *this_ptr)

{
  int iVar1;
  char *name;
  CDemonActor *actor;
  CPickList CStack_474;
  char acStack_cc [200];
  
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
  if (iVar1 != 0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_474);
    core_msnedit_cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30
              (g_CDemonMissionPtr,&CStack_474.base,&this_ptr->base,"CTeleport",
               core_teleport_cpp_matchesTeleportDestination_FUN_005da850);
    if (CStack_474.base.item_count < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No teleporters go to %s",this_ptr);
    }
    else {
      _sprintf(acStack_cc,"Teleporters which go to %s",this_ptr);
      iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_474,acStack_cc,-1,0);
      if (-1 < iVar1) {
        name = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_474.base,iVar1);
        actor = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(g_CDemonMissionPtr,name)
        ;
        core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(g_CDemonMissionPtr,actor);
      }
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_474,0);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  return;
}

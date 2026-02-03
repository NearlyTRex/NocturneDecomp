// Name: core_teleport.cpp_CTeleportDest_FUN_005da870
// Address: 005da870
// Address Range: [[005da870, 005da96c]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da870(CTeleportDest *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da870(CTeleportDest *this_ptr)

{
  int iVar1;
  char *pcVar2;
  CPickList CStack_46c;
  char acStack_c4 [192];
  
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
  if (iVar1 != 0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_46c);
    core_msnedit_cpp_CDemonMission_FUN_0053cc30
              (g_CDemonMissionPtr,&CStack_46c.base,(uint)this_ptr,"CTeleport",0x5da850);
    if (CStack_46c.base.item_count < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No teleporters go to %s",this_ptr);
    }
    else {
      sprintf(acStack_c4,"Teleporters which go to %s",this_ptr);
      iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_46c,acStack_c4,-1,0);
      if (-1 < iVar1) {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_46c.base,iVar1);
        pcVar2 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
        core_msnedit_cpp_CDemonMission_FUN_0053c140(g_CDemonMissionPtr,(int)pcVar2);
      }
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_46c,0);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  return;
}

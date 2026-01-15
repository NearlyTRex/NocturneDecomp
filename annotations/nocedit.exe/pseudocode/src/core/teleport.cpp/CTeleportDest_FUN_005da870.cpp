// Name: core_teleport.cpp_CTeleportDest_FUN_005da870
// Address: 005da870
// Address Range: [[005da870, 005da96c]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleportDest_FUN_005da870(CTeleportDest * this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da870(CTeleportDest *this_ptr)

{
  int iVar1;
  uint unaff_EDI;
  uint in_stack_fffffb94;
  uint in_stack_fffffb98;
  char **in_stack_fffffb9c;
  CStrList_vtable *in_stack_fffffba0;
  char acStack_c4 [192];
  
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
  if (iVar1 != 0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb94);
    core_msnedit_cpp_FUN_0053cc30();
    if ((int)in_stack_fffffb94 < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No teleporters go to %s",this_ptr);
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_c4,"Teleporters which go to %s",this_ptr);
      iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffb94,acStack_c4,-1,0);
      if (-1 < iVar1) {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffb94,iVar1);
        core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
        core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      }
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffb94,0,unaff_EDI,in_stack_fffffb94,in_stack_fffffb98,
               (uint)in_stack_fffffb9c,(uint)in_stack_fffffba0);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  return;
}

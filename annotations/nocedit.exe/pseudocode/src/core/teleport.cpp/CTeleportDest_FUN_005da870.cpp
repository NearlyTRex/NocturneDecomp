// Name: core_teleport.cpp_CTeleportDest_FUN_005da870
// Address: 005da870
// Address Range: [[005da870, 005da96c]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleportDest_FUN_005da870(CTeleportDest * this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da870(CTeleportDest *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char **in_stack_fffffba8;
  CStrList_vtable *pCStack_454;
  CStrList_vtable *in_stack_fffffbb8;
  CStrList_vtable *in_stack_fffffbbc;
  uint in_stack_fffffbc0;
  char **in_stack_fffffbc4;
  CStrList_vtable *in_stack_fffffbc8;
  char acStack_b0 [4];
  char acStack_ac [168];
  
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
  if (iVar1 != 0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffba0);
    core_msnedit_cpp_FUN_0053cc30();
    if ((int)in_stack_fffffba8 < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No teleporters go to %s");
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_b0,"Teleporters which go to %s");
      iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&pCStack_454,acStack_ac,-1,0);
      if (-1 < iVar1) {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffbb0,iVar1);
        pCStack_454 = (CStrList_vtable *)
                      core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
        core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      }
    }
    pCStack_454 = (CStrList_vtable *)0x5da8eb;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffbbc,0,(uint)in_stack_fffffbb8,(uint)in_stack_fffffbbc,
               in_stack_fffffbc0,(uint)in_stack_fffffbc4,(uint)in_stack_fffffbc8);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  return;
}

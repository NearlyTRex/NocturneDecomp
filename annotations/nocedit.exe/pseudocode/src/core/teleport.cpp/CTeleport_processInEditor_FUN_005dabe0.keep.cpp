// Name: core_teleport.cpp_CTeleport_processInEditor_FUN_005dabe0
// Address: 005dabe0
// MANUAL RECONSTRUCTION
// Address Range: [[005dabe0, 005dadbb]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_processInEditor_FUN_005dabe0(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_processInEditor_FUN_005dabe0(CTeleport *this_ptr)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if (iVar2 == 0) {
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
    if (iVar2 == 0) {
      core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
      return;
    }
    if (this_ptr->destination == (CDemonActor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Teleport has no destination!");
      return;
    }
    iVar2 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f060
                      (g_CEditorToolsPtr,"Switch to destination %s",this_ptr->destination->actor_name);
    if (iVar2 != 0) {
      core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140
                (g_CDemonMissionPtr,this_ptr->destination);
      return;
    }
  }
  else {
    fVar1 = g_CGamePtr->delta_time_float * (float)4;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar2 != 0) {
      (this_ptr->trigger_extents).x = (this_ptr->trigger_extents).x - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar2 != 0) {
      (this_ptr->trigger_extents).x = (this_ptr->trigger_extents).x + fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
    if (iVar2 != 0) {
      (this_ptr->trigger_extents).y = (this_ptr->trigger_extents).y - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
    if (iVar2 != 0) {
      (this_ptr->trigger_extents).y = (this_ptr->trigger_extents).y + fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
    if (iVar2 != 0) {
      (this_ptr->trigger_extents).z = (this_ptr->trigger_extents).z - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
    if (iVar2 != 0) {
      (this_ptr->trigger_extents).z = (this_ptr->trigger_extents).z + fVar1;
    }
    if ((int)(this_ptr->trigger_extents).x < 0x3f000000) {
      (this_ptr->trigger_extents).x = 0.5;
    }
    if ((this_ptr->trigger_extents).y < 0.5) {
      (this_ptr->trigger_extents).y = 0.5;
    }
    if ((this_ptr->trigger_extents).z < 0.5) {
      (this_ptr->trigger_extents).z = 0.5;
      return;
    }
  }
  return;
}

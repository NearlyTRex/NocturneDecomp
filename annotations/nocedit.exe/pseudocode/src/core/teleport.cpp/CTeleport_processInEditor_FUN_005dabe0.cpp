// Name: core_teleport.cpp_CTeleport_processInEditor_FUN_005dabe0
// Address: 005dabe0
// Address Range: [[005dabe0, 005dadbb]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_processInEditor_FUN_005dabe0(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_processInEditor_FUN_005dabe0(CTeleport *this_ptr)

{
  int iVar1;
  float unaff_retaddr;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
      return;
    }
    if (this_ptr->destination == (CDemonActor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Teleport has no destination!");
      return;
    }
    iVar1 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                      (g_CEditorToolsPtr,"Switch to destination %s",this_ptr->destination);
    if (iVar1 != 0) {
      core_msnedit_cpp_CDemonMission_FUN_0053c140(g_CDemonMissionPtr,(int)this_ptr->destination);
      return;
    }
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      this_ptr->unk1 = (int)((float)this_ptr->unk1 - unaff_retaddr);
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      this_ptr->unk1 = (int)((float)this_ptr->unk1 + in_stack_00000008);
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      this_ptr->unk2 = (int)((float)this_ptr->unk2 - in_stack_00000010);
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      this_ptr->unk2 = (int)((float)this_ptr->unk2 + in_stack_00000018);
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      this_ptr->unk3 = (int)((float)this_ptr->unk3 - in_stack_00000020);
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      this_ptr->unk3 = (int)((float)this_ptr->unk3 + in_stack_00000028);
    }
    if (this_ptr->unk1 < 0x3f000000) {
      this_ptr->unk1 = 0x3f000000;
    }
    if ((float)this_ptr->unk2 < 0.5) {
      this_ptr->unk2 = 0x3f000000;
    }
    if ((float)this_ptr->unk3 < 0.5) {
      this_ptr->unk3 = 0x3f000000;
      return;
    }
  }
  return;
}

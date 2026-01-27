// Name: core_teleport.cpp_CTeleport_FUN_005dabe0
// Address: 005dabe0
// Address Range: [[005dabe0, 005dadbb]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_FUN_005dabe0(CTeleport * this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005dabe0(CTeleport *this_ptr)

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
    if (*(int *)(this_ptr->unk + 0xc) == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Teleport has no destination!");
      return;
    }
    iVar1 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                      (g_CEditorToolsPtr,"Switch to destination %s",
                       *(int *)(this_ptr->unk + 0xc));
    if (iVar1 != 0) {
      core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      return;
    }
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)this_ptr->unk = *(float *)this_ptr->unk - unaff_retaddr;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)this_ptr->unk = *(float *)this_ptr->unk + in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 4) = *(float *)(this_ptr->unk + 4) - in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 4) = *(float *)(this_ptr->unk + 4) + in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 8) = *(float *)(this_ptr->unk + 8) - in_stack_00000020;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 8) = *(float *)(this_ptr->unk + 8) + in_stack_00000028;
    }
    if (*(int *)this_ptr->unk < 0x3f000000) {
      this_ptr->unk[0] = '\0';
      this_ptr->unk[1] = '\0';
      this_ptr->unk[2] = '\0';
      this_ptr->unk[3] = '?';
    }
    if (*(float *)(this_ptr->unk + 4) < 0.5) {
      this_ptr->unk[4] = '\0';
      this_ptr->unk[5] = '\0';
      this_ptr->unk[6] = '\0';
      this_ptr->unk[7] = '?';
    }
    if (*(float *)(this_ptr->unk + 8) < 0.5) {
      this_ptr->unk[8] = '\0';
      this_ptr->unk[9] = '\0';
      this_ptr->unk[10] = '\0';
      this_ptr->unk[0xb] = '?';
      return;
    }
  }
  return;
}

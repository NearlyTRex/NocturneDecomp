// Name: core_teleport.cpp_CTeleport_FUN_005dabe0
// Address: 005dabe0
// Address Range: [[005dabe0, 005dadbb]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_FUN_005dabe0(CTeleport * this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005dabe0(CTeleport *this_ptr)

{
  int iVar1;
  float in_stack_00000018;
  uint uStack0000001c;
  float in_stack_0000002c;
  uint uStack00000030;
  float in_stack_00000040;
  uint uStack00000044;
  float in_stack_00000054;
  uint uStack00000058;
  float in_stack_00000068;
  float in_stack_0000007c;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
      return;
    }
    if (*(int *)(this_ptr->field1_0x158 + 0xc) == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Teleport has no destination!");
      return;
    }
    iVar1 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                      (g_CEditorToolsPtr,"Switch to destination %s");
    if (iVar1 != 0) {
      core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      return;
    }
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 + in_stack_0000002c;
    }
    uStack0000001c = 0x5dac68;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 4) =
           *(float *)(this_ptr->field1_0x158 + 4) - in_stack_00000040;
    }
    uStack00000030 = 0x5dac8b;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 4) =
           *(float *)(this_ptr->field1_0x158 + 4) + in_stack_00000054;
    }
    uStack00000044 = 0x5dacae;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 8) =
           *(float *)(this_ptr->field1_0x158 + 8) - in_stack_00000068;
    }
    uStack00000058 = 0x5dacd1;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 8) =
           *(float *)(this_ptr->field1_0x158 + 8) + in_stack_0000007c;
    }
    if (*(int *)this_ptr->field1_0x158 < 0x3f000000) {
      this_ptr->field1_0x158[0] = '\0';
      this_ptr->field1_0x158[1] = '\0';
      this_ptr->field1_0x158[2] = '\0';
      this_ptr->field1_0x158[3] = '?';
    }
    if (*(float *)(this_ptr->field1_0x158 + 4) < 0.5) {
      this_ptr->field1_0x158[4] = '\0';
      this_ptr->field1_0x158[5] = '\0';
      this_ptr->field1_0x158[6] = '\0';
      this_ptr->field1_0x158[7] = '?';
    }
    if (*(float *)(this_ptr->field1_0x158 + 8) < 0.5) {
      this_ptr->field1_0x158[8] = '\0';
      this_ptr->field1_0x158[9] = '\0';
      this_ptr->field1_0x158[10] = '\0';
      this_ptr->field1_0x158[0xb] = '?';
      return;
    }
  }
  return;
}

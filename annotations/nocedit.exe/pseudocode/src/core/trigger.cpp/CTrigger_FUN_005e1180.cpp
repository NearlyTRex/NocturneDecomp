// Name: core_trigger.cpp_CTrigger_FUN_005e1180
// Address: 005e1180
// Address Range: [[005e1180, 005e1342]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005e1180(CTrigger * this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e1180(CTrigger *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  CTrigger *pCStack0000001c;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  
  this_ptr->unk[0x14] = '\0';
  this_ptr->unk[0x15] = '\0';
  this_ptr->unk[0x16] = '\0';
  this_ptr->unk[0x17] = '\0';
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 8) = *(float *)(this_ptr->unk + 8) - in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 8) = *(float *)(this_ptr->unk + 8) + in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 0xc) = *(float *)(this_ptr->unk + 0xc) - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 0xc) = *(float *)(this_ptr->unk + 0xc) + in_stack_00000020;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 0x10) = *(float *)(this_ptr->unk + 0x10) - in_stack_00000028;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk + 0x10) = *(float *)(this_ptr->unk + 0x10) + in_stack_00000030;
    }
    if (*(int *)(this_ptr->unk + 8) < 0x3c23d70a) {
      this_ptr->unk[8] = '\n';
      this_ptr->unk[9] = -0x29;
      this_ptr->unk[10] = '#';
      this_ptr->unk[0xb] = '<';
    }
    if (*(float *)(this_ptr->unk + 0xc) < 0.01) {
      this_ptr->unk[0xc] = '\n';
      this_ptr->unk[0xd] = -0x29;
      this_ptr->unk[0xe] = '#';
      this_ptr->unk[0xf] = '<';
    }
    if (*(float *)(this_ptr->unk + 0x10) < 0.01) {
      this_ptr->unk[0x10] = '\n';
      this_ptr->unk[0x11] = -0x29;
      this_ptr->unk[0x12] = '#';
      this_ptr->unk[0x13] = '<';
    }
  }
  if (*(int *)(this_ptr->unk + 0x18) == 1) {
    if (in_stack_00000020 != *(float *)(this_ptr->unk + 8)) {
      *(uint *)(this_ptr->unk + 0x10) = *(uint *)(this_ptr->unk + 8);
    }
    *(uint *)(this_ptr->unk + 8) = *(uint *)(this_ptr->unk + 0x10);
  }
  pCStack0000001c = this_ptr;
  core_trigger_cpp_FUN_005e0ba0();
  return;
}

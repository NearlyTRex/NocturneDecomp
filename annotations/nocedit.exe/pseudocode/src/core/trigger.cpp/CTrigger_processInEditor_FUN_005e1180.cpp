// Name: core_trigger.cpp_CTrigger_processInEditor_FUN_005e1180
// Address: 005e1180
// Address Range: [[005e1180, 005e1342]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180(CTrigger *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  
  this_ptr->unk1[0xc] = '\0';
  this_ptr->unk1[0xd] = '\0';
  this_ptr->unk1[0xe] = '\0';
  this_ptr->unk1[0xf] = '\0';
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)this_ptr->unk1 = *(float *)this_ptr->unk1 - in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)this_ptr->unk1 = *(float *)this_ptr->unk1 + in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk1 + 4) = *(float *)(this_ptr->unk1 + 4) - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk1 + 4) = *(float *)(this_ptr->unk1 + 4) + in_stack_00000020;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk1 + 8) = *(float *)(this_ptr->unk1 + 8) - in_stack_00000028;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk1 + 8) = *(float *)(this_ptr->unk1 + 8) + in_stack_00000030;
    }
    if (*(int *)this_ptr->unk1 < 0x3c23d70a) {
      this_ptr->unk1[0] = '\n';
      this_ptr->unk1[1] = -0x29;
      this_ptr->unk1[2] = '#';
      this_ptr->unk1[3] = '<';
    }
    if (*(float *)(this_ptr->unk1 + 4) < 0.01) {
      this_ptr->unk1[4] = '\n';
      this_ptr->unk1[5] = -0x29;
      this_ptr->unk1[6] = '#';
      this_ptr->unk1[7] = '<';
    }
    if (*(float *)(this_ptr->unk1 + 8) < 0.01) {
      this_ptr->unk1[8] = '\n';
      this_ptr->unk1[9] = -0x29;
      this_ptr->unk1[10] = '#';
      this_ptr->unk1[0xb] = '<';
    }
  }
  if (this_ptr->shape == 1) {
    if (in_stack_00000020 != *(float *)this_ptr->unk1) {
      *(uint *)(this_ptr->unk1 + 8) = *(uint *)this_ptr->unk1;
    }
    *(uint *)this_ptr->unk1 = *(uint *)(this_ptr->unk1 + 8);
  }
  core_trigger_cpp_CTrigger_FUN_005e0ba0(this_ptr);
  return;
}

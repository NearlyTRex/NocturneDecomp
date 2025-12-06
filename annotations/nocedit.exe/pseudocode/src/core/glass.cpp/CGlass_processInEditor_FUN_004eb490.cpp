// Name: core_glass.cpp_CGlass_processInEditor_FUN_004eb490
// Address: 004eb490
// Address Range: [[004eb490, 004eb5f9]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_processInEditor_FUN_004eb490(CGlass * this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_processInEditor_FUN_004eb490(CGlass *this_ptr)

{
  int iVar1;
  uint uStack00000018;
  uint uStack0000002c;
  float in_stack_00000038;
  uint uStack00000040;
  float in_stack_0000004c;
  uint uStack00000054;
  float in_stack_00000060;
  uint uStack0000006c;
  float in_stack_00000074;
  uint uStack00000080;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 != 0) {
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    uStack00000018 = 0x4eb517;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      (this_ptr->glass_size).x = (this_ptr->glass_size).x - in_stack_00000038;
    }
    uStack0000002c = 0x4eb539;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      (this_ptr->glass_size).x = (this_ptr->glass_size).x + in_stack_0000004c;
    }
    uStack00000040 = 0x4eb55b;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      (this_ptr->glass_size).y = (this_ptr->glass_size).y - in_stack_00000060;
    }
    uStack00000054 = 0x4eb57d;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      (this_ptr->glass_size).y = (this_ptr->glass_size).y + in_stack_00000074;
    }
    uStack00000080 = 0x3f000000;
    if ((int)(this_ptr->glass_size).x < 0x3f000000) {
      (this_ptr->glass_size).x = 0.5;
    }
    if ((this_ptr->glass_size).y < 0.5) {
      (this_ptr->glass_size).y = 0.5;
    }
    (this_ptr->glass_size).z = 0.1;
    uStack0000006c = 0x4eb5d8;
    (*((this_ptr->base).vtable)->setup)(&this_ptr->base);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  (*((this_ptr->base).vtable)->setup)(&this_ptr->base);
  return;
}

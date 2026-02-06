// Name: core_flame.cpp_CFlame_processInEditor_FUN_004caf60
// Address: 004caf60
// Address Range: [[004caf60, 004cb096]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_processInEditor_FUN_004caf60(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_processInEditor_FUN_004caf60(CFlame *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  float in_stack_00000010;
  uint uStack00000014;
  float in_stack_00000018;
  uint uStack0000001c;
  float in_stack_00000020;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 != 0) {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      (this_ptr->flame_size).x = (this_ptr->flame_size).x - in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      (this_ptr->flame_size).x = (this_ptr->flame_size).x + in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      (this_ptr->flame_size).y = (this_ptr->flame_size).y - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      (this_ptr->flame_size).y = (this_ptr->flame_size).y + in_stack_00000020;
    }
    uStack0000001c = 0x3dcccccd;
    if ((int)(this_ptr->flame_size).x < 0x3dcccccd) {
      (this_ptr->flame_size).x = 0.1;
    }
    if ((this_ptr->flame_size).y < 0.1) {
      (this_ptr->flame_size).y = 0.1;
    }
    if ((this_ptr->flame_size).z < 0.1) {
      (this_ptr->flame_size).z = 0.1;
    }
    (this_ptr->flame_size).z = (this_ptr->flame_size).x;
    uStack00000014 = 0x4cb078;
    core_flame_cpp_CFlame_FUN_004cad90(this_ptr);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  core_flame_cpp_CFlame_FUN_004cad90(this_ptr);
  return;
}

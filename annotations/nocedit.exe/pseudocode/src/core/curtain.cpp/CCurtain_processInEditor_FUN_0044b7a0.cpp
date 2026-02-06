// Name: core_curtain.cpp_CCurtain_processInEditor_FUN_0044b7a0
// Address: 0044b7a0
// Address Range: [[0044b7a0, 0044b8c3]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_processInEditor_FUN_0044b7a0(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_processInEditor_FUN_0044b7a0(CCurtain *this_ptr)

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
      (this_ptr->curtain_size).x = (this_ptr->curtain_size).x - in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      (this_ptr->curtain_size).x = (this_ptr->curtain_size).x + in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      (this_ptr->curtain_size).y = (this_ptr->curtain_size).y - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      (this_ptr->curtain_size).y = (this_ptr->curtain_size).y + in_stack_00000020;
    }
    uStack0000001c = 0x3f000000;
    if ((int)(this_ptr->curtain_size).x < 0x3f000000) {
      (this_ptr->curtain_size).x = 0.5;
    }
    if ((this_ptr->curtain_size).y < 0.5) {
      (this_ptr->curtain_size).y = 0.5;
    }
    (this_ptr->curtain_size).z = 0.1;
    uStack00000014 = 0x44b8a2;
    (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  return;
}

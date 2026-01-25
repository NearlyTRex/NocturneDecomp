// Name: core_wateract.cpp_CWaterActor_FUN_005ebab0
// Address: 005ebab0
// Address Range: [[005ebab0, 005ebc09]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005ebab0(CWaterActor * this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005ebab0(CWaterActor *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  uint uStack0000001c;
  float in_stack_00000020;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 != 0) {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      (this_ptr->size).x = (this_ptr->size).x - in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      (this_ptr->size).x = (this_ptr->size).x + in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      (this_ptr->size).z = (this_ptr->size).z - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      (this_ptr->size).z = (this_ptr->size).z + in_stack_00000020;
    }
    if ((int)(this_ptr->size).x < 0x3f000000) {
      (this_ptr->size).x = 0.5;
    }
    if ((this_ptr->size).z < 0.5) {
      (this_ptr->size).z = 0.5;
    }
    uStack0000001c = 0x42c80000;
    if (0x42c80000 < (int)(this_ptr->size).x) {
      (this_ptr->size).x = 100.0;
    }
    if (100.0 < (this_ptr->size).z) {
      (this_ptr->size).z = 100.0;
    }
    (this_ptr->size).y = 0.1;
    (*((this_ptr->base_actor).vtable._ub)->setup)(&this_ptr->base_actor);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  (*((this_ptr->base_actor).vtable._ub)->setup)(&this_ptr->base_actor);
  return;
}

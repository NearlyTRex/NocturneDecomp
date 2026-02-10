// Name: core_stairs.cpp_CStairs_processInEditor_FUN_005ba900
// Address: 005ba900
// Address Range: [[005ba900, 005bab8a]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_processInEditor_FUN_005ba900(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_processInEditor_FUN_005ba900(CStairs *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float unaff_retaddr;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000030;
  
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar3 != 0) {
      this_ptr->width = this_ptr->width - unaff_retaddr;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar3 != 0) {
      this_ptr->width = this_ptr->width + in_stack_00000008;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar3 != 0) {
      this_ptr->rise = this_ptr->rise - in_stack_00000010;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar3 != 0) {
      this_ptr->rise = this_ptr->rise + in_stack_00000018;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar3 != 0) {
      this_ptr->run = this_ptr->run - in_stack_00000020;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar3 != 0) {
      this_ptr->run = this_ptr->run + in_stack_00000028;
    }
  }
  if (this_ptr->width < (float)0.20000000000000001) {
    this_ptr->width = 0.2;
  }
  if (this_ptr->rise < (float)0.20000000000000001) {
    this_ptr->rise = 0.2;
  }
  if (this_ptr->run < (float)0.20000000000000001) {
    this_ptr->run = 0.2;
  }
  if (this_ptr->stair_count < 1) {
    this_ptr->stair_count = 1;
  }
  else if (0x14 < this_ptr->stair_count) {
    this_ptr->stair_count = 0x14;
  }
  if (this_ptr->bevel_y < (float)0.10000000000000001) {
    this_ptr->bevel_y = 0.1;
  }
  if (this_ptr->rise < this_ptr->bevel_y) {
    this_ptr->bevel_y = this_ptr->rise;
  }
  if (this_ptr->bevel_z < (float)0.10000000000000001) {
    this_ptr->bevel_z = 0.1;
  }
  if (this_ptr->run < this_ptr->bevel_z) {
    this_ptr->bevel_z = this_ptr->run;
  }
  (this_ptr->base).orient.vec.x = 0.0;
  (this_ptr->base).orient.vec.z = 0.0;
  fVar1 = this_ptr->rise;
  fVar2 = (this_ptr->base).location.position.y;
  (this_ptr->base).location.position.z =
       (in_stack_0000002c - this_ptr->run) + (this_ptr->base).location.position.z;
  (this_ptr->base).location.position.y = (in_stack_00000030 - fVar1) + fVar2;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  core_stairs_cpp_CStairs_FUN_005ba700(this_ptr);
  return;
}

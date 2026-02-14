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
  float fVar3;
  float fVar4;
  int iVar5;
  float fStack_18;
  
  fVar3 = this_ptr->run;
  fVar4 = this_ptr->rise;
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar5 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    fStack_18 = g_CGamePtr->delta_time_float * (float)0.5;
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar5 != 0) {
      fStack_18 = fStack_18 * (float)0.10000000000000001;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar5 != 0) {
      this_ptr->width = this_ptr->width - fStack_18;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar5 != 0) {
      this_ptr->width = this_ptr->width + fStack_18;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar5 != 0) {
      this_ptr->rise = this_ptr->rise - fStack_18;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar5 != 0) {
      this_ptr->rise = this_ptr->rise + fStack_18;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar5 != 0) {
      this_ptr->run = this_ptr->run - fStack_18;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar5 != 0) {
      this_ptr->run = this_ptr->run + fStack_18;
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
       (fVar3 - this_ptr->run) + (this_ptr->base).location.position.z;
  (this_ptr->base).location.position.y = (fVar4 - fVar1) + fVar2;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  core_stairs_cpp_CStairs_FUN_005ba700(this_ptr);
  return;
}

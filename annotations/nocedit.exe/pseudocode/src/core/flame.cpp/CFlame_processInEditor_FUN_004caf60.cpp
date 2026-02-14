// Name: core_flame.cpp_CFlame_processInEditor_FUN_004caf60
// Address: 004caf60
// Address Range: [[004caf60, 004cb096]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_processInEditor_FUN_004caf60(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_processInEditor_FUN_004caf60(CFlame *this_ptr)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar2 != 0) {
    fVar1 = g_CGamePtr->delta_time_float * (float)4;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      (this_ptr->flame_size).x = (this_ptr->flame_size).x - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      (this_ptr->flame_size).x = (this_ptr->flame_size).x + fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar2 != 0) {
      (this_ptr->flame_size).y = (this_ptr->flame_size).y - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar2 != 0) {
      (this_ptr->flame_size).y = (this_ptr->flame_size).y + fVar1;
    }
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
    core_flame_cpp_CFlame_FUN_004cad90(this_ptr);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  core_flame_cpp_CFlame_FUN_004cad90(this_ptr);
  return;
}

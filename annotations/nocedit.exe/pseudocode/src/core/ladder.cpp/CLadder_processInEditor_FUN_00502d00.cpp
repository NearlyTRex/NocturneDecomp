// Name: core_ladder.cpp_CLadder_processInEditor_FUN_00502d00
// Address: 00502d00
// Address Range: [[00502d00, 00502e4e]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_processInEditor_FUN_00502d00(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_processInEditor_FUN_00502d00(CLadder *this_ptr)

{
  float fVar1;
  int iVar2;
  int extraout_EBX;
  double dVar3;
  float in_stack_00000008;
  float in_stack_00000010;
  
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      (this_ptr->ladder_size).x = (this_ptr->ladder_size).x - in_stack_00000008;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      (this_ptr->ladder_size).x = (this_ptr->ladder_size).x + in_stack_00000010;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1e);
    if (iVar2 != 0) {
      (this_ptr->ladder_size).y = (this_ptr->ladder_size).y - 1.0f;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x10);
    if (iVar2 != 0) {
      (this_ptr->ladder_size).y = 1.0f + (this_ptr->ladder_size).y;
    }
    if ((this_ptr->ladder_size).x < (float)0.5) {
      (this_ptr->ladder_size).x = 0.5;
    }
    if ((this_ptr->ladder_size).y < 1.0f) {
      (this_ptr->ladder_size).y = 1.0f;
    }
  }
  dVar3 = floor
                    ((double)((this_ptr->ladder_size).y / 1.0f + (float)0.5));
  fVar1 = (float)dVar3 * 1.0f;
  *(uint *)(extraout_EBX + 0x2dc) = 0;
  *(float *)(extraout_EBX + 0x2d8) = fVar1;
  return;
}

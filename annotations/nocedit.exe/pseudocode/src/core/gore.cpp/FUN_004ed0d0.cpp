// Name: core_gore.cpp_FUN_004ed0d0
// Address: 004ed0d0
// Address Range: [[004ed0d0, 004ed15b]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ed0d0(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004ed0d0(void)

{
  CDemonSet *this_ptr;
  int iVar1;
  float fVar2;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  this_ptr = g_CDemonSetPtr;
  *(int *)(in_stack_00000004 + 0x14) = iVar1;
  *(float *)(in_stack_00000004 + 4) = in_stack_00000008->x;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (this_ptr,in_stack_00000008,0.0);
  *(float *)(in_stack_00000004 + 8) = fVar2;
  *(float *)(in_stack_00000004 + 0xc) = in_stack_00000008->z;
  *(uint *)(in_stack_00000004 + 0x18) = 0;
  *(float *)(in_stack_00000004 + 8) = *(float *)(in_stack_00000004 + 8) + 0.1f;
  *(int *)(in_stack_00000004 + 0x1c) =
       (int)ROUND(*(float *)(in_stack_00000004 + 4) * 256.0f);
  *(int *)(in_stack_00000004 + 0x20) =
       (int)ROUND(*(float *)(in_stack_00000004 + 8) * 256.0f);
  *(int *)(in_stack_00000004 + 0x24) =
       (int)ROUND(*(float *)(in_stack_00000004 + 0xc) * 256.0f);
  *(uint *)(in_stack_00000004 + 0x10) = in_stack_0000000c;
  return;
}

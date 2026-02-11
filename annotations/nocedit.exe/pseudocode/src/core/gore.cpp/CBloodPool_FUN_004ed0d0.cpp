// Name: core_gore.cpp_CBloodPool_FUN_004ed0d0
// Address: 004ed0d0
// Address Range: [[004ed0d0, 004ed15b]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_FUN_004ed0d0(CBloodPool *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_FUN_004ed0d0(CBloodPool *this_ptr)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  CVector3f *in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  this_ptr_00 = g_CDemonSetPtr;
  *(int *)(this_ptr->unk + 0x14) = iVar1;
  *(float *)(this_ptr->unk + 4) = in_stack_00000008->x;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (this_ptr_00,in_stack_00000008,0.0);
  *(float *)(this_ptr->unk + 8) = fVar2;
  fVar2 = *(float *)(this_ptr->unk + 8);
  *(float *)(this_ptr->unk + 0xc) = in_stack_00000008->z;
  this_ptr->unk[0x18] = '\0';
  this_ptr->unk[0x19] = '\0';
  this_ptr->unk[0x1a] = '\0';
  this_ptr->unk[0x1b] = '\0';
  *(float *)(this_ptr->unk + 8) = fVar2 + 0.1f;
  *(int *)(this_ptr->unk + 0x1c) = (int)ROUND(*(float *)(this_ptr->unk + 4) * 256.0f);
  *(int *)(this_ptr->unk + 0x20) = (int)ROUND(*(float *)(this_ptr->unk + 8) * 256.0f);
  *(int *)(this_ptr->unk + 0x24) = (int)ROUND(*(float *)(this_ptr->unk + 0xc) * 256.0f);
  *(uint *)(this_ptr->unk + 0x10) = in_stack_0000000c;
  return;
}

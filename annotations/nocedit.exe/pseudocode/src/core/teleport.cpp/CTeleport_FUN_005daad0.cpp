// Name: core_teleport.cpp_CTeleport_FUN_005daad0
// Address: 005daad0
// Address Range: [[005daad0, 005dab23]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_FUN_005daad0(CTeleport * this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005daad0(CTeleport *this_ptr)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
  fVar1 = *(float *)this_ptr->unk;
  fVar2 = (float)0.5;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(this_ptr->unk + 8) * fVar2;
  in_stack_00000008[3] = *(float *)this_ptr->unk * fVar2;
  in_stack_00000008[4] = *(float *)(this_ptr->unk + 4) + (float)0.10000000000000001;
  in_stack_00000008[5] = fVar2 * *(float *)(this_ptr->unk + 8);
  return;
}

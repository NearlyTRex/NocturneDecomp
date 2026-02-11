// Name: core_gore.cpp_CBloodPool_FUN_004ed0a0
// Address: 004ed0a0
// Address Range: [[004ed0a0, 004ed0cd]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_FUN_004ed0a0(CBloodPool *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_FUN_004ed0a0(CBloodPool *this_ptr)

{
  *(float *)(this_ptr->unk + 0x18) = g_CGamePtr->delta_time_float + *(float *)(this_ptr->unk + 0x18)
  ;
  if (*(float *)(this_ptr->unk + 0x18) <= (float)3.625) {
    return;
  }
  this_ptr->unk[0x18] = '\0';
  this_ptr->unk[0x19] = '\0';
  this_ptr->unk[0x1a] = 'h';
  this_ptr->unk[0x1b] = '@';
  return;
}

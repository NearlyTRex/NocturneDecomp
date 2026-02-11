// Name: core_gore.cpp_CBloodSplat_FUN_004ecad0
// Address: 004ecad0
// Address Range: [[004ecad0, 004ecafd]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_FUN_004ecad0(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_FUN_004ecad0(CBloodSplat *this_ptr)

{
  *(float *)(this_ptr->unk + 0x24) = g_CGamePtr->delta_time_float + *(float *)(this_ptr->unk + 0x24)
  ;
  if (*(float *)(this_ptr->unk + 0x24) <= (float)2) {
    return;
  }
  this_ptr->unk[0x24] = '\0';
  this_ptr->unk[0x25] = '\0';
  this_ptr->unk[0x26] = '\0';
  this_ptr->unk[0x27] = '@';
  return;
}

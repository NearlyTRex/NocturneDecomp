// Name: core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004aa780
// Address: 004aa780
// Address Range: [[004aa780, 004aa7aa]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004aa780(SPageResourceMap *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004aa780(SPageResourceMap *this_ptr,int param_2)

{
  int extraout_EAX;
  
  unkaddr_004a76f0_cpp_SPageResource_ctor_FUN_004a8370(&this_ptr->base);
  *(byte ***)(extraout_EAX + 0x14) = &g_SPageResourceMapVTable;
  *(int *)(extraout_EAX + 0x18) = param_2;
  *(uint *)(extraout_EAX + 8) = *(uint *)(param_2 + 0x68);
  *(uint *)(extraout_EAX + 0xc) = *(uint *)(*(int *)(extraout_EAX + 0x18) + 0x6c);
  return;
}

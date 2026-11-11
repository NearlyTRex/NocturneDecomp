// Name: core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004a4120
// Address: 004a4120
// Address Range: [[004a4120, 004a414a]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004a4120(SPageResourceMap *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004a4120(SPageResourceMap *this_ptr,int param_2)

{
  int extraout_EAX;
  
  unkaddr_004a1200_cpp_SPageResource_ctor_FUN_004a1e60(&this_ptr->base);
  *(byte ***)(extraout_EAX + 0x14) = &g_SPageResourceMapVTable;
  *(int *)(extraout_EAX + 0x18) = param_2;
  *(uint *)(extraout_EAX + 8) = *(uint *)(param_2 + 0x68);
  *(uint *)(extraout_EAX + 0xc) = *(uint *)(*(int *)(extraout_EAX + 0x18) + 0x6c);
  return;
}

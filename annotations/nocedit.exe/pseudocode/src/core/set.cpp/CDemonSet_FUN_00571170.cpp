// Name: core_set.cpp_CDemonSet_FUN_00571170
// Address: 00571170
// Address Range: [[00571170, 005711a7]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_00571170(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_00571170(CDemonSet *this_ptr)

{
  CDemonLight **ppCVar1;
  int iVar2;
  int *in_stack_00000008;
  
  *in_stack_00000008 = g_MasterLightCount;
  iVar2 = 0;
  if (0 < g_MasterLightCount) {
    do {
      ppCVar1 = g_MasterLightList + iVar2;
      in_stack_00000008 = in_stack_00000008 + 1;
      iVar2 = iVar2 + 1;
      *in_stack_00000008 = (*ppCVar1)->light_enabled_flag;
    } while (iVar2 < g_MasterLightCount);
  }
  return iVar2;
}

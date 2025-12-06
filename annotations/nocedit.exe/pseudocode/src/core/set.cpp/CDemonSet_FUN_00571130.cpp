// Name: core_set.cpp_CDemonSet_FUN_00571130
// Address: 00571130
// Address Range: [[00571130, 00571168]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00571130(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00571130(CDemonSet *this_ptr)

{
  int *piVar1;
  CDemonLight **ppCVar2;
  int iVar3;
  int *in_stack_00000008;
  
  if ((g_MasterLightCount == *in_stack_00000008) && (iVar3 = 0, 0 < *in_stack_00000008)) {
    do {
      ppCVar2 = g_MasterLightList + iVar3;
      piVar1 = in_stack_00000008 + 1;
      in_stack_00000008 = in_stack_00000008 + 1;
      iVar3 = iVar3 + 1;
      (*ppCVar2)->light_enabled_flag = *piVar1;
    } while (iVar3 < g_MasterLightCount);
  }
  return;
}

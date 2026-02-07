// Name: core_set.cpp_CDemonSet_FUN_0056d140
// Address: 0056d140
// Address Range: [[0056d140, 0056d18b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0056d140(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056d140(CDemonSet *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  uint in_stack_00000008;
  
  this_ptr_00 = g_CDemonRendererPtr2;
  if ((g_CDemonMissionPtr->is_in_editor == 0) && (DAT_0327785c < 100)) {
    (&DAT_03277860)[DAT_0327785c] = in_stack_00000008;
    iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(this_ptr_00);
    (&DAT_032779f0)[DAT_0327785c] = iVar1;
    DAT_0327785c = DAT_0327785c + 1;
    return;
  }
  return;
}

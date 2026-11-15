// Name: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_0048ac70
// Address: 0048ac70
// Address Range: [[0048ac70, 0048acd3]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_0048ac70(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_0048ac70(CDemonRaytrace *this_ptr)

{
  CDemonTriangle *pCVar1;
  uchar *puVar2;
  
  pCVar1 = (CDemonTriangle *)
           operator_new_array(this_ptr->triangle_count * 0x38);
  this_ptr->triangle_list = pCVar1;
  puVar2 = (uchar *)operator_new_array(this_ptr->triangle_count);
  this_ptr->triangle_flags = puVar2;
  if ((this_ptr->triangle_list != (CDemonTriangle *)0x0) && (puVar2 != (uchar *)0x0)) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dtrace.cpp";
  _DAT_01d1d404 = 0xf9;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonRaytrace::allocTriList - Out of memory!");
  return;
}

// Name: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_004737f0
// Address: 004737f0
// Address Range: [[004737f0, 00473853]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_004737f0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_004737f0(CDemonRaytrace *this_ptr)

{
  CDemonTriangle *pCVar1;
  uchar *puVar2;
  
  pCVar1 = operator_new_array(this_ptr->triangle_count * 0x38);
  this_ptr->triangle_list = pCVar1;
  puVar2 = operator_new_array(this_ptr->triangle_count);
  this_ptr->triangle_flags = puVar2;
  if ((this_ptr->triangle_list != (CDemonTriangle *)0x0) && (puVar2 != (uchar *)0x0)) {
    return;
  }
  g_CHAR_PTR_01d71de0 = "..\\core\\dtrace.cpp";
  g_INT_01d71de4 = 0xf9;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonRaytrace::allocTriList - Out of memory!");
  return;
}

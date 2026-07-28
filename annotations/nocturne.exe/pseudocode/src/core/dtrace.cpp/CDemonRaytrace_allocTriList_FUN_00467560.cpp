// Name: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00467560
// Address: 00467560
// Address Range: [[00467560, 004675d9]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00467560(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00467560(CDemonRaytrace *this_ptr)

{
  int iVar1;
  int *piVar2;
  CDemonTriangle *pCVar3;
  uchar *puVar4;
  
  iVar1 = this_ptr->triangle_count;
  piVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(iVar1 * 0x38 + 4);
  pCVar3 = (CDemonTriangle *)0x0;
  if (piVar2 != (int *)0x0) {
    pCVar3 = (CDemonTriangle *)(piVar2 + 1);
    *piVar2 = iVar1;
  }
  this_ptr->triangle_list = pCVar3;
  puVar4 = shape_memdbg_cpp_malloc_FUN_00564c18(this_ptr->triangle_count);
  this_ptr->triangle_flags = puVar4;
  if ((this_ptr->triangle_list != (CDemonTriangle *)0x0) && (puVar4 != (uchar *)0x0)) {
    return;
  }
  PTR_01cc4800 = "..\\core\\dtrace.cpp";
  INT_01cc4804 = 0xf9;
  core_main_c_FUN_004c8440("CDemonRaytrace::allocTriList - Out of memory!");
  return;
}

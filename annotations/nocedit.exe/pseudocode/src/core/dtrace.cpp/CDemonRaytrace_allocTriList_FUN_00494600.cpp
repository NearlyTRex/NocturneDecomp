// Name: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
// Address: 00494600
// Address Range: [[00494600, 0049468d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(CDemonRaytrace *this_ptr)

{
  int iVar1;
  int *piVar2;
  CDemonTriangle *pCVar3;
  uchar *puVar4;
  
  iVar1 = this_ptr->triangle_count;
  piVar2 = (int *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     (iVar1 * 0x38 + 4,"..\\core\\dtrace.cpp",0xf7);
  pCVar3 = (CDemonTriangle *)0x0;
  if (piVar2 != (int *)0x0) {
    pCVar3 = (CDemonTriangle *)(piVar2 + 1);
    *piVar2 = iVar1;
  }
  this_ptr->triangle_list = pCVar3;
  puVar4 = (uchar *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     (this_ptr->triangle_count,"..\\core\\dtrace.cpp",0xf8);
  this_ptr->triangle_flags = puVar4;
  if ((this_ptr->triangle_list != (CDemonTriangle *)0x0) && (puVar4 != (uchar *)0x0)) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 0xf9;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::allocTriList - Out of memory!");
  return;
}

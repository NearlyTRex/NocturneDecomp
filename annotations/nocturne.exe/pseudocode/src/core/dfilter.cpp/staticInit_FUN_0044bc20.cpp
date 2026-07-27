// Name: core_dfilter.cpp_staticInit_FUN_0044bc20
// Address: 0044bc20
// Address Range: [[0044bc20, 0044bc96]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_staticInit_FUN_0044bc20(void)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_staticInit_FUN_0044bc20(void)

{
  __arrinit(&DAT_014b8a58,8,&g_CDemonFilterTypeInfo_0059ac90);
  FUN_00564bb0(0x5ad4dc);
  __arrinit(0x14b8cb8,4,&g_CDemonFilterTypeInfo_0059ac90);
  FUN_00564bb0(0x5ad4ec);
  core_dfilter_cpp_CFilterCache_ctor_FUN_0044bca0(0x14b8de8);
  FUN_00564bb0(0x5ad4fc);
  core_dfilter_cpp_CFilterFX_ctor_FUN_0044c2b0(0x14b98ec);
  FUN_00564bb0(0x5ad50c);
  return;
}

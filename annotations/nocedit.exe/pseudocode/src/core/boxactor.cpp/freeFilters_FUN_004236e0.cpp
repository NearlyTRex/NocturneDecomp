// Name: core_boxactor.cpp_freeFilters_FUN_004236e0
// Address: 004236e0
// Address Range: [[004236e0, 004236f4]]
// Convention: __cdecl
// Signature: int core_boxactor.cpp_freeFilters_FUN_004236e0(CDemonFilter * * objs)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_freeFilters_FUN_004236e0(CDemonFilter **objs)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(objs,8,&g_CDemonFilterTypeInfo);
  return iVar1;
}

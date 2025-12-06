// Name: core_fire.cpp_freeShells_FUN_004c9810
// Address: 004c9810
// Address Range: [[004c9810, 004c9824]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeShells_FUN_004c9810(CShell * * array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeShells_FUN_004c9810(CShell **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x32,&g_CShellTypeInfo);
  return;
}

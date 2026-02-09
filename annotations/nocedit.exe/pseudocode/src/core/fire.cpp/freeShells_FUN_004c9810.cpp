// Name: core_fire.cpp_freeShells_FUN_004c9810
// Address: 004c9810
// Address Range: [[004c9810, 004c9824]]
// Convention: __cdecl
// Signature: CShell * __cdecl core_fire_cpp_freeShells_FUN_004c9810(CShell *objs)

#include "nocturne.h"

CShell * __cdecl core_fire_cpp_freeShells_FUN_004c9810(CShell *objs)

{
  CShell *pCVar1;
  
  pCVar1 = (CShell *)__arrfini(objs,0x32,&g_CShellTypeInfo);
  return pCVar1;
}

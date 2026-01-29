// Name: core_backgnd.cpp_cleanupVector_FUN_004126e0
// Address: 004126e0
// Address Range: [[004126e0, 004126f4]]
// Convention: __cdecl
// Signature: int __cdecl core_backgnd_cpp_cleanupVector_FUN_004126e0(CVector3f **objs)

#include "nocturne.h"

int __cdecl core_backgnd_cpp_cleanupVector_FUN_004126e0(CVector3f **objs)

{
  int iVar1;
  
  iVar1 = __arrfini(objs,0xf,&g_CVectorTypeInfo);
  return iVar1;
}

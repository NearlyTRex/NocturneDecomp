// Name: core_bugs.cpp_FUN_00427cc0
// Address: 00427cc0
// Address Range: [[00427cc0, 00427cd7]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_FUN_00427cc0(SBug **objs)

#include "nocturne.h"

int __cdecl core_bugs_cpp_FUN_00427cc0(SBug **objs)

{
  void *pvVar1;
  
  pvVar1 = __arrfini(objs,400,&g_SBugTypeInfo);
  return (int)pvVar1;
}

// Name: core_bugs.cpp_SBug_arrdtor_FUN_00427cc0
// Address: 00427cc0
// Address Range: [[00427cc0, 00427cd7]]
// Convention: __cdecl
// Signature: SBug * __cdecl core_bugs_cpp_SBug_arrdtor_FUN_00427cc0(SBug *objs,uint flags)

#include "nocturne.h"

SBug * __cdecl core_bugs_cpp_SBug_arrdtor_FUN_00427cc0(SBug *objs,uint flags)

{
  SBug *pSVar1;
  
  pSVar1 = (SBug *)__arrfini(objs,400,&g_SBugTypeInfo);
  return pSVar1;
}

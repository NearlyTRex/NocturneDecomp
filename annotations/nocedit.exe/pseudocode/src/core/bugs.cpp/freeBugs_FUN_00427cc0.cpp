// Name: core_bugs.cpp_freeBugs_FUN_00427cc0
// Address: 00427cc0
// Address Range: [[00427cc0, 00427cd7]]
// Convention: __cdecl
// Signature: SBug * __cdecl core_bugs_cpp_freeBugs_FUN_00427cc0(SBug *objs)

#include "nocturne.h"

SBug * __cdecl core_bugs_cpp_freeBugs_FUN_00427cc0(SBug *objs)

{
  SBug *pSVar1;
  
  pSVar1 = (SBug *)__arrfini(objs,400,&g_SBugTypeInfo);
  return pSVar1;
}

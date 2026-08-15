// Name: core_bugs.cpp_SBug_arrdtor400_FUN_00423e80
// Address: 00423e80
// Address Range: [[00423e80, 00423e97]]
// Convention: __cdecl
// Signature: SBug * __cdecl core_bugs_cpp_SBug_arrdtor400_FUN_00423e80(SBug *this_ptr,uint flags)

#include "nocturne.h"

SBug * __cdecl core_bugs_cpp_SBug_arrdtor400_FUN_00423e80(SBug *this_ptr,uint flags)

{
  SBug *pSVar1;
  
  pSVar1 = (SBug *)__arrfini(this_ptr,400,&g_SBugTypeInfo_0059b010);
  return pSVar1;
}

// Name: core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710
// Address: 004fe710
// Address Range: [[004fe710, 004fe767]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_004fe710(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_004fe710(CScript *this_ptr)

{
  double dVar1;
  
  dVar1 = round
                    ((double)((float)((g_WindowHeight - (g_WindowWidth * 100) / 0xb9) / 2) *
                             _DAT_01e56c20));
  return (int)ROUND(dVar1);
}

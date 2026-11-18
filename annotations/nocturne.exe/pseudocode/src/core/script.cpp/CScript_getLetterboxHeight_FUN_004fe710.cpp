// Name: core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710
// Address: 004fe710
// Address Range: [[004fe710, 004fe767]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_004fe710(CScript *this_ptr)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_004fe710(CScript *this_ptr)

{
  double dVar1;
  
  dVar1 = round
                    ((double)((float)((g_WindowHeight - (g_WindowWidth * 100) / 0xb9) / 2) *
                             g_ScriptTimeScale));
  return (int)ROUND(dVar1);
}

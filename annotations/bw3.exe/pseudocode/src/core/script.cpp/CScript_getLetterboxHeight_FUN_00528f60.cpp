// Name: core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60
// Address: 00528f60
// Address Range: [[00528f60, 00528fb7]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(CScript *this_ptr)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(CScript *this_ptr)

{
  double dVar1;
  
  dVar1 = round
                    ((double)((float)((g_INT_005fba1c - (g_INT_005fba18 * 100) / 0xb9) / 2) *
                             g_ScriptTimeScale));
  return (int)ROUND(dVar1);
}

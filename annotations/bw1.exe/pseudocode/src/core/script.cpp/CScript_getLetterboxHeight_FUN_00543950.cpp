// Name: core_script.cpp_CScript_getLetterboxHeight_FUN_00543950
// Address: 00543950
// Address Range: [[00543950, 005439a7]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(CScript *this_ptr)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(CScript *this_ptr)

{
  double dVar1;
  
  dVar1 = round
                    ((double)((float)((g_INT_0061b49c - (g_INT_0061b498 * 100) / 0xb9) / 2) *
                             g_FLOAT_01e818b0));
  return (int)ROUND(dVar1);
}

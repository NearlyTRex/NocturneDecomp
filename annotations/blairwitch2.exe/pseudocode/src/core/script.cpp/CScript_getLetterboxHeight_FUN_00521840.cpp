// Name: core_script.cpp_CScript_getLetterboxHeight_FUN_00521840
// Address: 00521840
// Address Range: [[00521840, 00521897]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(CScript *this_ptr)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(CScript *this_ptr)

{
  double dVar1;
  
  dVar1 = round
                    ((double)((float)((g_INT_006141bc - (g_INT_006141b8 * 100) / 0xb9) / 2) *
                             g_FLOAT_01e65900));
  return (int)ROUND(dVar1);
}

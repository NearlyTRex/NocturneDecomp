// Name: core_script.cpp_CScript_getLetterboxHeight_FUN_00543950
// Address: 00543950
// Address Range: [[00543950, 005439a7]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(CScript *this_ptr)

{
  float10 fVar1;
  
  fVar1 = (float10)((DAT_0061b49c - (DAT_0061b498 * 100) / 0xb9) / 2) * (float10)_DAT_01e818b0;
  round();
  return (int)ROUND(fVar1);
}

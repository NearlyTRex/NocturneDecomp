// Name: core_script.cpp_CScript_getLetterboxHeight_FUN_00521840
// Address: 00521840
// Address Range: [[00521840, 00521897]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(CScript *this_ptr)

{
  float10 fVar1;
  
  fVar1 = (float10)((DAT_006141bc - (DAT_006141b8 * 100) / 0xb9) / 2) * (float10)_DAT_01e65900;
  round();
  return (int)ROUND(fVar1);
}

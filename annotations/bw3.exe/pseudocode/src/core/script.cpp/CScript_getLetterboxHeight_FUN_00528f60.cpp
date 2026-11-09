// Name: core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60
// Address: 00528f60
// Address Range: [[00528f60, 00528fb7]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(CScript *this_ptr)

{
  float10 fVar1;
  
  fVar1 = (float10)((DAT_005fba1c - (DAT_005fba18 * 100) / 0xb9) / 2) * (float10)_DAT_01ed7010;
  round();
  return (int)ROUND(fVar1);
}

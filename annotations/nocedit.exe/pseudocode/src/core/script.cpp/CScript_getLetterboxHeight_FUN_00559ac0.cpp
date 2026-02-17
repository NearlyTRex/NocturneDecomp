// Name: core_script.cpp_CScript_getLetterboxHeight_FUN_00559ac0
// Address: 00559ac0
// Address Range: [[00559ac0, 00559b17]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00559ac0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_script_cpp_CScript_getLetterboxHeight_FUN_00559ac0(CScript *this_ptr)

{
  return (int)ROUND(ROUND((float)((g_WindowHeight - (g_WindowWidth * 100) / 0xb9) / 2) *
                          g_ScriptTimeScale));
}

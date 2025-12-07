// Name: core_script.cpp_FUN_00559ac0
// Address: 00559ac0
// Address Range: [[00559ac0, 00559b17]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00559ac0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: int core_script.cpp_FUN_00559ac0(CScript* param_1) */

int core_script_cpp_FUN_00559ac0(void)

{
  double dVar1;
  
  dVar1 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)((g_WindowHeight - (g_WindowWidth * 100) / 0xb9) / 2) *
                             _DAT_0310f4a0));
  return (int)ROUND(dVar1);
}

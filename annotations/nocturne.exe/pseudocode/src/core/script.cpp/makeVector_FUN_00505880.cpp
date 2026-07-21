// Name: core_script.cpp_makeVector_FUN_00505880
// Address: 00505880
// Address Range: [[00505880, 005058a5]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl core_script_cpp_makeVector_FUN_00505880(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint * __cdecl core_script_cpp_makeVector_FUN_00505880(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  core_actor_cpp_CVector_ctor_FUN_0040e160(param_1);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = param_4;
  return param_1;
}

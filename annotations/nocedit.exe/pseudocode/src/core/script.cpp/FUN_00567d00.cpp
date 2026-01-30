// Name: core_script.cpp_FUN_00567d00
// Address: 00567d00
// Address Range: [[00567d00, 00567d25]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_script_cpp_FUN_00567d00(CVector3f *param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

CVector3f * __cdecl
core_script_cpp_FUN_00567d00(CVector3f *param_1,float param_2,float param_3,float param_4)

{
  core_actor_cpp_CVector_ctor_FUN_00410340(param_1);
  param_1->x = param_2;
  param_1->z = param_3;
  param_1->y = param_4;
  return param_1;
}

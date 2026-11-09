// Name: core_boxactor.cpp_FUN_00422f60
// Address: 00422f60
// Address Range: [[00422f60, 00422f87]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_00422f60(CLightActor *param_1)

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422f60(CLightActor *param_1)

{
  core_boxactor_cpp_FUN_004232c0(param_1);
  core_boxactor_cpp_CBoxActor_setup_FUN_00421de0((CBoxActor *)param_1);
  core_dlight_cpp_CDemonLight_init_FUN_00462590((CDemonLight *)&param_1->field_0x67c);
  return;
}

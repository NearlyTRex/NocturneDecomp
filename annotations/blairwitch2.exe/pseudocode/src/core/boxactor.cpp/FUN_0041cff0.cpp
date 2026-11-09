// Name: core_boxactor.cpp_FUN_0041cff0
// Address: 0041cff0
// Address Range: [[0041cff0, 0041d017]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_0041cff0(CLightActor *param_1)

#include "nocturne.h"

void core_boxactor_cpp_FUN_0041cff0(CLightActor *param_1)

{
  core_boxactor_cpp_CLightActor_setupLightModel_FUN_0041d350(param_1);
  core_boxactor_cpp_FUN_0041be70((CBoxActor *)param_1);
  core_dlight_cpp_CDemonLight_init_FUN_00449d90((CDemonLight *)&param_1->field_0x7d8);
  return;
}

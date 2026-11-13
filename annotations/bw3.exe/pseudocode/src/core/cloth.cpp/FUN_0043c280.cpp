// Name: core_cloth.cpp_FUN_0043c280
// Address: 0043c280
// Address Range: [[0043c280, 0043c29c]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043c280(CCloth *param_1)

#include "nocturne.h"

void core_cloth_cpp_FUN_0043c280(CCloth *param_1)

{
  core_cloth_cpp_CCloth_free_FUN_0043c300(param_1);
  core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00460530(&param_1->model,1);
  return;
}

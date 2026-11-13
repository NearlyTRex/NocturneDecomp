// Name: core_cloth.cpp_FUN_0043e620
// Address: 0043e620
// Address Range: [[0043e620, 0043e63c]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043e620(CCloth *param_1)

#include "nocturne.h"

void core_cloth_cpp_FUN_0043e620(CCloth *param_1)

{
  core_cloth_cpp_CCloth_free_FUN_0043e6a0(param_1);
  core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00466880(&param_1->model,1);
  return;
}

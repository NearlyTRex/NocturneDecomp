// Name: core_filmreel.cpp_FUN_00481d30
// Address: 00481d30
// Address Range: [[00481d30, 00481d4b]]
// Convention: unknown
// Signature: undefined4 core_filmreel_cpp_FUN_00481d30(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint core_filmreel_cpp_FUN_00481d30(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}

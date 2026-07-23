// Name: core_stranger.cpp_CStranger_drawWeapon_FUN_00540730
// Address: 00540730
// Address Range: [[00540730, 0054076d]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_drawWeapon_FUN_00540730(int param_1,int param_2)

#include "nocturne.h"

void core_stranger_cpp_CStranger_drawWeapon_FUN_00540730(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1fa3c) = param_2;
  if ((param_2 == 0) && (*(int *)(0x01C775EC + 0x244) != 0)) {
    *(uint *)(0x01C775EC + 0x244) = 0;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"flashlit.wav");
    return;
  }
  return;
}

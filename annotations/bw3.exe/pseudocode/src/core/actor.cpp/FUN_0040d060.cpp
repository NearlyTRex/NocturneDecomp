// Name: core_actor.cpp_FUN_0040d060
// Address: 0040d060
// Address Range: [[0040d060, 0040d131]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040d060(uint *param_1,byte param_2)

#include "nocturne.h"

void core_actor_cpp_FUN_0040d060(uint *param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 ^ (uint)param_2 << 0x18;
  *param_1 = uVar1;
  if ((*param_1 & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *param_1 = uVar1;
  if ((*param_1 & 0x80000000) == 0) {
    uVar1 = *param_1 * 2;
  }
  else {
    uVar1 = *param_1 * 2 ^ 0x4c11db7;
  }
  *param_1 = uVar1;
  if ((*param_1 & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *param_1 = uVar1;
  if ((*param_1 & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *param_1 = uVar1;
  if ((*param_1 & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *param_1 = uVar1;
  if ((*param_1 & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *param_1 = uVar1;
  if ((*param_1 & 0x80000000) == 0) {
    uVar1 = *param_1 * 2;
  }
  else {
    uVar1 = *param_1 * 2 ^ 0x4c11db7;
  }
  *param_1 = uVar1;
  if ((*param_1 & 0x80000000) != 0) {
    *param_1 = *param_1 * 2 ^ 0x4c11db7;
    return;
  }
  *param_1 = *param_1 * 2;
  return;
}

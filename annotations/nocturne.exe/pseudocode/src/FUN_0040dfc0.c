// Name: FUN_0040dfc0
// Address: 0040dfc0
// Address Range: [[0040dfc0, 0040e091]]
// Convention: unknown
// Signature: void FUN_0040dfc0(uint *param_1,byte param_2)

#include "nocturne.h"

void FUN_0040dfc0(uint *param_1,byte param_2)

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

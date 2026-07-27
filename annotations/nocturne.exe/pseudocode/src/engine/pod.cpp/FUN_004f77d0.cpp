// Name: engine_pod.cpp_FUN_004f77d0
// Address: 004f77d0
// Address Range: [[004f77d0, 004f7885]]
// Convention: unknown
// Signature: uint engine_pod_cpp_FUN_004f77d0(uint param_1,byte param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_004f77d0(uint param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = param_1 ^ (uint)param_2 << 0x18;
  uVar1 = param_1 * 2;
  if ((param_1 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  uVar2 = uVar1 * 2;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 ^ 0x4c11db7;
  }
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  uVar2 = uVar1 * 2;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 ^ 0x4c11db7;
  }
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  uVar2 = uVar1 * 2;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 ^ 0x4c11db7;
  }
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  if ((uVar1 & 0x80000000) == 0) {
    return uVar1 * 2;
  }
  return uVar1 * 2 ^ 0x4c11db7;
}

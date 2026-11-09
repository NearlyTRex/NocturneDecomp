// Name: core_box.cpp_FUN_0041a600
// Address: 0041a600
// Address Range: [[0041a600, 0041a664]]
// Convention: unknown
// Signature: void core_box_cpp_FUN_0041a600(undefined4 *param_1,uint param_2)

#include "nocturne.h"

void core_box_cpp_FUN_0041a600(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_ESI;
  
  if ((param_2 & 1) == 0) {
    uVar2 = *param_1;
  }
  else {
    uVar2 = param_1[3];
  }
  if ((param_2 & 2) == 0) {
    uVar3 = param_1[1];
  }
  else {
    uVar3 = param_1[4];
  }
  if ((param_2 & 4) == 0) {
    uVar1 = param_1[2];
  }
  else {
    uVar1 = param_1[5];
  }
  *unaff_ESI = uVar2;
  unaff_ESI[1] = uVar3;
  unaff_ESI[2] = uVar1;
  return;
}

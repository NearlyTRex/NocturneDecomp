// Name: FUN_004849f0
// Address: 004849f0
// Address Range: [[004849f0, 00484b4b]]
// Convention: unknown
// Signature: void FUN_004849f0(int *param_1)

#include "nocturne.h"

void FUN_004849f0(int *param_1)

{
  int iVar1;
  
  if (*param_1 <= param_1[0x65]) {
    param_1[0x65] = *param_1 + -1;
  }
  if (param_1[0x65] < 0) {
    param_1[0x65] = 0;
  }
  while (param_1[0x66] < 0) {
    param_1[0x66] = param_1[0x66] + param_1[0x68];
  }
  while (*param_1 <= param_1[0x66]) {
    param_1[0x66] = param_1[0x66] - param_1[0x68];
  }
  if (param_1[0x66] < 0) {
    param_1[0x66] = 0;
  }
  if (param_1[0x65] < *param_1) {
    while (iVar1 = param_1[0x66], param_1[0x65] < iVar1) {
      if (param_1[0x6a] == 1) {
        param_1[0x66] = iVar1 + -1;
      }
      else {
        param_1[0x66] = iVar1 - param_1[0x68];
      }
      if (param_1[0x66] < 0) {
        param_1[0x66] = 0;
      }
    }
    while (param_1[0x66] + param_1[0x67] <= param_1[0x65]) {
      if (param_1[0x6a] == 1) {
        param_1[0x66] = param_1[0x66] + 1;
      }
      else {
        param_1[0x66] = param_1[0x66] + param_1[0x68];
      }
    }
  }
  if ((param_1[0x6a] == 1) && (*param_1 - param_1[0x68] < param_1[0x66])) {
    param_1[0x66] = *param_1 - param_1[0x68];
  }
  if (param_1[0x66] < 0) {
    param_1[0x66] = 0;
    return;
  }
  return;
}

// Name: cockpit_pkbitmap.cpp_FUN_004f52c0
// Address: 004f52c0
// Address Range: [[004f52c0, 004f531c]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_004f52c0(int *param_1)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_004f52c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[7] = *(int *)(param_1[1] + 0x18);
  param_1[8] = *(int *)(param_1[1] + 0x1c);
  iVar1 = 1;
  if (1 < *param_1) {
    iVar2 = 0x24;
    do {
      if (param_1[7] != *(int *)(iVar2 + 0x18 + param_1[1])) {
        param_1[7] = 0;
      }
      if (param_1[8] != *(int *)(iVar2 + 0x1c + param_1[1])) {
        param_1[8] = 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < *param_1);
  }
  return;
}

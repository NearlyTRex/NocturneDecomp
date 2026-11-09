// Name: core_set.cpp_FUN_00555d20
// Address: 00555d20
// Address Range: [[00555d20, 00555e24]]
// Convention: unknown
// Signature: int core_set_cpp_FUN_00555d20(int *param_1,undefined4 param_2)

#include "nocturne.h"

int core_set_cpp_FUN_00555d20(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_005c03c0(param_2,"@// Set state version\n" + 1);
  FUN_005c03c0(param_2,&DAT_005f0c14,3);
  FUN_005c03c0(param_2,"// Camera count, enabled list\n");
  iVar1 = 0;
  FUN_005c03c0(param_2,&DAT_005f0c37,*param_1);
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      FUN_005c03c0(param_2,&DAT_005f0c3b,piVar2[0x69]);
      piVar2 = piVar2 + 0x69;
    } while (iVar1 < *param_1);
  }
  iVar1 = 0;
  FUN_005c03c0(param_2,"// Camera ambient light\n");
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      FUN_005c03c0(param_2,&DAT_005f0c58,(double)(float)piVar2[0x53]);
      piVar2 = piVar2 + 0x69;
    } while (iVar1 < *param_1);
  }
  iVar3 = 0;
  iVar1 = FUN_005c03c0(param_2,"// Camera groups\n");
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar3 = iVar3 + 1;
      FUN_005c03c0(param_2,&DAT_005f0c6e,piVar2[0x54]);
      iVar1 = *param_1;
      piVar2 = piVar2 + 0x69;
    } while (iVar3 < iVar1);
  }
  return iVar1;
}

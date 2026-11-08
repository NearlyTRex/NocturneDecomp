// Name: FUN_00534a90
// Address: 00534a90
// Address Range: [[00534a90, 00534b79]]
// Convention: unknown
// Signature: void FUN_00534a90(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00534a90(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_005b8100(param_2,"%*[^\n]\n");
  FUN_005b8100(param_2,&DAT_005e5c22,&local_1c);
  if (local_1c != 1) {
    _DAT_01d046a0 = "..\\core\\set.cpp";
    _DAT_01d046a4 = 0x147b;
    FUN_004e4500("Set saveState info is invalid version %d",local_1c);
  }
  FUN_005b8100(param_2,"%*[^\n]\n");
  FUN_005b8100(param_2,&DAT_005e5c67,&local_18);
  if (*param_1 != local_18) {
    FUN_0047bdf0(0x01C25594,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < local_18) {
    do {
      FUN_005b8100(param_2,&DAT_005e5cd1,&local_14);
      if (iVar1 < *param_1) {
        piVar2[0x69] = local_14;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x69;
    } while (iVar1 < local_18);
  }
  return;
}

// Name: FUN_0053b7f0
// Address: 0053b7f0
// Address Range: [[0053b7f0, 0053b99e]]
// Convention: unknown
// Signature: void FUN_0053b7f0(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053b7f0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_005a3230(param_2,"%*[^\n]\n");
  FUN_005a3230(param_2,&DAT_005d0923,&local_24);
  if ((local_24 < 1) || (3 < local_24)) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0x14ae;
    FUN_004e4330("Set saveState info is invalid version %d",local_24);
  }
  FUN_005a3230(param_2,"%*[^\n]\n");
  FUN_005a3230(param_2,&DAT_005d0968,&local_20);
  if (*param_1 != local_20) {
    FUN_0047cee0(0x01C5B0E4,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < local_20) {
    do {
      FUN_005a3230(param_2,&DAT_005d09d2,&local_1c);
      if (iVar1 < *param_1) {
        piVar2[0x69] = local_1c;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x69;
    } while (iVar1 < local_20);
  }
  if ((1 < local_24) && (0 < local_20)) {
    do {
      FUN_005a3230(param_2,"%*[^\n]\n");
      iVar1 = 0;
      piVar2 = param_1;
      if (0 < local_20) {
        do {
          FUN_005a3230(param_2,&DAT_005d09de,&local_18);
          if (iVar1 < *param_1) {
            piVar2[0x53] = local_18;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 0x69;
        } while (iVar1 < local_20);
      }
    } while (iVar1 + 1 < local_20);
  }
  if ((2 < local_24) && (0 < local_20)) {
    do {
      FUN_005a3230(param_2,"%*[^\n]\n");
      iVar1 = 0;
      piVar2 = param_1;
      if (0 < local_20) {
        do {
          FUN_005a3230(param_2,&DAT_005d09ea,&local_14);
          if (iVar1 < *param_1) {
            piVar2[0x54] = local_14;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 0x69;
        } while (iVar1 < local_20);
      }
    } while (iVar1 + 1 < local_20);
  }
  return;
}

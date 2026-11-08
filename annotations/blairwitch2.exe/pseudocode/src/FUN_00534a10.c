// Name: FUN_00534a10
// Address: 00534a10
// Address Range: [[00534a10, 00534a8a]]
// Convention: unknown
// Signature: void FUN_00534a10(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00534a10(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_005b8010(param_2,"@// Set state version\n" + 1);
  FUN_005b8010(param_2,&DAT_005e5bf0);
  FUN_005b8010(param_2,"// Camera count, enabled list\n");
  iVar1 = 0;
  FUN_005b8010(param_2,&DAT_005e5c12,*param_1);
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      FUN_005b8010(param_2,&DAT_005e5c16,piVar2[0x69]);
      piVar2 = piVar2 + 0x69;
    } while (iVar1 < *param_1);
  }
  return;
}

// Name: FUN_0050e8a0
// Address: 0050e8a0
// Address Range: [[0050e8a0, 0050e91a]]
// Convention: unknown
// Signature: void FUN_0050e8a0(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0050e8a0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_005644f0(param_2,"@// Set state version\n" + 1);
  FUN_005644f0(param_2,&DAT_00590898);
  FUN_005644f0(param_2,"// Camera count, enabled list\n");
  iVar1 = 0;
  FUN_005644f0(param_2,&DAT_005908ba,*param_1);
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      FUN_005644f0(param_2,&DAT_005908be,piVar2[0x68]);
      piVar2 = piVar2 + 0x68;
    } while (iVar1 < *param_1);
  }
  return;
}

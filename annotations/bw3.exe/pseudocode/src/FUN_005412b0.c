// Name: FUN_005412b0
// Address: 005412b0
// Address Range: [[005412b0, 0054134d]]
// Convention: unknown
// Signature: void FUN_005412b0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005412b0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte local_118 [256];
  int local_18;
  int local_14;
  
  FUN_005a3f00(local_118,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005d0d18,&local_18);
  iVar2 = 0;
  if (0 < local_18) {
    do {
      FUN_005a3230(param_2,"\"%*[^\"]\", %d\n",&local_14);
      iVar1 = 0;
      if (0 < local_14) {
        do {
          FUN_005a3f00(local_118,0xff,param_2);
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_14);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_18);
  }
  return;
}

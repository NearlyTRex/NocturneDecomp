// Name: FUN_00513ce0
// Address: 00513ce0
// Address Range: [[00513ce0, 00513d7d]]
// Convention: unknown
// Signature: void FUN_00513ce0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00513ce0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte local_118 [256];
  int local_18;
  int local_14;
  
  FUN_00564b20(local_118,0xff,param_2);
  FUN_00563350(param_2,&DAT_00590c5f,&local_18);
  iVar2 = 0;
  if (0 < local_18) {
    do {
      FUN_00563350(param_2,"\"%*[^\"]\", %d\n",&local_14);
      iVar1 = 0;
      if (0 < local_14) {
        do {
          FUN_00564b20(local_118,0xff,param_2);
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_14);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_18);
  }
  return;
}

// Name: FUN_004746b0
// Address: 004746b0
// Address Range: [[004746b0, 004748a4]]
// Convention: unknown
// Signature: void FUN_004746b0(undefined4 param_1,char *param_2,char *param_3)

#include "nocturne.h"

void FUN_004746b0(uint param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  char local_844 [256];
  byte local_744 [260];
  uint local_640;
  uint local_638;
  char local_528 [260];
  uint local_424;
  uint local_420;
  byte local_414 [260];
  char local_310 [256];
  char local_210;
  byte local_20f [255];
  byte local_110 [256];
  
  bVar4 = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    pcVar3 = local_310;
    do {
      cVar1 = *param_3;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_3[1];
      param_3 = param_3 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  else {
    FUN_00563c90(local_310,"%s\\%s",param_2,param_3);
  }
  if (0x01E528D0 != 0) {
    FUN_004f8d50(0x01E528D0,local_310,local_844);
    while (local_844[0] != '\0') {
      FUN_00566498(local_844,0,0,local_110,&local_210);
      if (local_210 == '.') {
        uVar2 = 0xffffffff;
        pcVar3 = &local_210;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_00566170(&local_210,local_20f,~uVar2 - 1);
      }
      FUN_0056626c(local_414,0,0,local_110,&local_210);
      FUN_00474460(param_1,local_414,local_744,local_640,local_638);
      FUN_004f8da0(0x01E528D0,local_844);
    }
  }
  FUN_00456c00(local_528);
  FUN_00456c40(local_528,local_310);
  while (local_528[0] != '\0') {
    FUN_00474460(param_1,local_528,0,local_424,local_420);
    FUN_00456cc0(local_528);
  }
  FUN_00456d40(local_528);
  FUN_00456c20(local_528,0);
  return;
}

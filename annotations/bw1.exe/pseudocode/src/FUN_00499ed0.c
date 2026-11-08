// Name: FUN_00499ed0
// Address: 00499ed0
// Address Range: [[00499ed0, 0049a0c4]]
// Convention: unknown
// Signature: void FUN_00499ed0(undefined4 param_1,char *param_2,char *param_3)

#include "nocturne.h"

void FUN_00499ed0(uint param_1,char *param_2,char *param_3)

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
    FUN_005bfb40(local_310,"%s\\%s",param_2,param_3);
  }
  if (0x01E7D420 != 0) {
    FUN_0053cb00(0x01E7D420,local_310,local_844);
    while (local_844[0] != '\0') {
      FUN_00479580(local_844,0,0,local_110,&local_210);
      if (local_210 == '.') {
        uVar2 = 0xffffffff;
        pcVar3 = &local_210;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_005c25d0(&local_210,local_20f,~uVar2 - 1);
      }
      FUN_004795b0(local_414,0,0,local_110,&local_210);
      FUN_00499c80(param_1,local_414,local_744,local_640,local_638);
      FUN_0053cb50(0x01E7D420,local_844);
    }
  }
  FUN_00479320(local_528);
  FUN_00479360(local_528,local_310);
  while (local_528[0] != '\0') {
    FUN_00499c80(param_1,local_528,0,local_424,local_420);
    FUN_004793e0(local_528);
  }
  FUN_00479460(local_528);
  FUN_00479340(local_528,0);
  return;
}

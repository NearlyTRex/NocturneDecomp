// Name: FUN_00481a70
// Address: 00481a70
// Address Range: [[00481a70, 00481c9e]]
// Convention: unknown
// Signature: void FUN_00481a70(int *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void FUN_00481a70(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  char local_844 [796];
  char local_528 [276];
  byte local_414 [260];
  char local_310;
  byte local_30f [255];
  byte local_210 [256];
  char local_110 [256];
  
  bVar8 = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    pcVar7 = local_110;
    do {
      cVar1 = *param_3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_3[1];
      param_3 = param_3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  else {
    FUN_005b7790(local_110,"%s\\%s",param_2,param_3);
  }
  if (0x01E614B0 != 0) {
    FUN_0051b580(0x01E614B0,local_110,local_844);
    while (local_844[0] != '\0') {
      FUN_00461070(local_844,0,0,local_210,&local_310);
      if (local_310 == '.') {
        uVar5 = 0xffffffff;
        pcVar7 = &local_310;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_005ba1f0(&local_310,local_30f,~uVar5 - 1);
      }
      FUN_004610a0(local_414,0,0,local_210,&local_310);
      iVar2 = FUN_00481300(param_1,local_414);
      if (iVar2 < 0) {
        FUN_00480e70(param_1,local_414);
      }
      FUN_0051b5d0(0x01E614B0,local_844);
    }
  }
  iVar2 = *param_1;
  FUN_00460e10(local_528);
  FUN_00460e50(local_528,local_110);
  do {
    if (local_528[0] == '\0') {
      FUN_00460f50(local_528);
      FUN_00460e30(local_528,0);
      return;
    }
    iVar6 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_00481240(param_1,iVar6,local_528);
        iVar4 = FUN_005b8130(uVar3);
        if (iVar4 == 0) goto LAB_00481bf5;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
    FUN_00480e70(param_1,local_528);
LAB_00481bf5:
    FUN_00460ed0(local_528);
  } while( true );
}

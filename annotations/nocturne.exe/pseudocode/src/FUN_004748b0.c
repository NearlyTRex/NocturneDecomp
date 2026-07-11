// Name: FUN_004748b0
// Address: 004748b0
// Address Range: [[004748b0, 00474ade]]
// Convention: unknown
// Signature: void FUN_004748b0(int *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void FUN_004748b0(int *param_1,char *param_2,char *param_3)

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
    FUN_00563c90(local_110,"%s\\%s",param_2,param_3);
  }
  if (0x01E528D0 != 0) {
    FUN_004f8d50(0x01E528D0,local_110,local_844);
    while (local_844[0] != '\0') {
      FUN_00566498(local_844,0,0,local_210,&local_310);
      if (local_310 == '.') {
        uVar5 = 0xffffffff;
        pcVar7 = &local_310;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_00566170(&local_310,local_30f,~uVar5 - 1);
      }
      FUN_0056626c(local_414,0,0,local_210,&local_310);
      iVar2 = FUN_00474140(param_1,local_414);
      if (iVar2 < 0) {
        FUN_00473cb0(param_1,local_414);
      }
      FUN_004f8da0(0x01E528D0,local_844);
    }
  }
  iVar2 = *param_1;
  FUN_00456c00(local_528);
  FUN_00456c40(local_528,local_110);
  do {
    if (local_528[0] == '\0') {
      FUN_00456d40(local_528);
      FUN_00456c20(local_528,0);
      return;
    }
    iVar6 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_00474080(param_1,iVar6,local_528);
        iVar4 = FUN_00564520(uVar3);
        if (iVar4 == 0) goto LAB_00474a35;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
    FUN_00473cb0(param_1,local_528);
LAB_00474a35:
    FUN_00456cc0(local_528);
  } while( true );
}

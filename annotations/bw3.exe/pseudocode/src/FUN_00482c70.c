// Name: FUN_00482c70
// Address: 00482c70
// Address Range: [[00482c70, 00482e9e]]
// Convention: unknown
// Signature: void FUN_00482c70(int *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void FUN_00482c70(int *param_1,char *param_2,char *param_3)

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
    FUN_005a28c0(local_110,"%s\\%s",param_2,param_3);
  }
  if (0x01ED2AF0 != 0) {
    FUN_00514860(0x01ED2AF0,local_110,local_844);
    while (local_844[0] != '\0') {
      FUN_00465e50(local_844,0,0,local_210,&local_310);
      if (local_310 == '.') {
        uVar5 = 0xffffffff;
        pcVar7 = &local_310;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_005a54c0(&local_310,local_30f,~uVar5 - 1);
      }
      FUN_00465e80(local_414,0,0,local_210,&local_310);
      iVar2 = FUN_00482500(param_1,local_414);
      if (iVar2 < 0) {
        FUN_00482070(param_1,local_414);
      }
      FUN_005148b0(0x01ED2AF0,local_844);
    }
  }
  iVar2 = *param_1;
  FUN_00465b60(local_528);
  FUN_00465ba0(local_528,local_110);
  do {
    if (local_528[0] == '\0') {
      FUN_00465ca0(local_528);
      FUN_00465b80(local_528,0);
      return;
    }
    iVar6 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_00482440(param_1,iVar6,local_528);
        iVar4 = FUN_005a3260(uVar3);
        if (iVar4 == 0) goto LAB_00482df5;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
    FUN_00482070(param_1,local_528);
LAB_00482df5:
    FUN_00465c20(local_528);
  } while( true );
}

// Name: FUN_0059c9c0
// Address: 0059c9c0
// Address Range: [[0059c9c0, 0059cb64]]
// Convention: unknown
// Signature: undefined4 FUN_0059c9c0(char *param_1,uint *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0059c9c0(char *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar10;
  char local_34 [28];
  char local_18 [8];
  uint local_10;
  int local_c;
  char *pcVar9;
  
  bVar10 = 0;
  local_c = 0;
  uVar2 = FUN_005baf20(param_1,"0123456789");
  if ((int)uVar2 < 1) {
    return 0;
  }
  local_10 = uVar2;
  FUN_005b9cf0(local_34,param_1,uVar2);
  local_34[uVar2] = '\0';
  pcVar7 = param_1 + uVar2;
  iVar3 = 0;
  do {
    uVar5 = 0xffffffff;
    pcVar9 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar5 - 1 <= uVar2) break;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    uVar2 = uVar2 + 1;
    local_18[iVar3] = cVar1;
    iVar3 = iVar3 + 1;
  } while( true );
  local_18[iVar3] = '\0';
  iVar3 = FUN_005bad20(local_18);
  do {
    if (((local_c != 0) || (iVar3 < 0)) || (99 < iVar3)) {
      uVar4 = FUN_0040c8f0(local_c,_DAT_02668164);
      return uVar4;
    }
    local_34[local_10] = '\0';
    if ((int)*param_2 < 0) {
      iVar3 = iVar3 + -1;
    }
    if (0 < (int)*param_2) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 < 0) {
      uVar2 = (int)*param_2 >> 0x1f;
      if ((*param_2 ^ uVar2) - uVar2 == 1) {
        iVar3 = 99;
      }
      uVar2 = (int)*param_2 >> 0x1f;
      if ((*param_2 ^ uVar2) - uVar2 != 2) goto LAB_0059ca8e;
      uVar2 = *param_2;
      iVar3 = 0;
LAB_0059cab8:
      *param_2 = -uVar2;
    }
    else {
LAB_0059ca8e:
      if (99 < iVar3) {
        uVar2 = (int)*param_2 >> 0x1f;
        if ((*param_2 ^ uVar2) - uVar2 == 1) {
          iVar3 = 0;
        }
        uVar2 = (int)*param_2 >> 0x1f;
        if ((*param_2 ^ uVar2) - uVar2 == 2) {
          uVar2 = *param_2;
          iVar3 = 99;
          goto LAB_0059cab8;
        }
      }
    }
    FUN_005bafd8(iVar3,local_18,10);
    pcVar7 = local_18;
    iVar6 = -1;
    pcVar9 = local_34;
    do {
      pcVar8 = pcVar9;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar9 + (uint)bVar10 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_c = FUN_004fc740(0x01D182F0,local_34);
  } while( true );
}

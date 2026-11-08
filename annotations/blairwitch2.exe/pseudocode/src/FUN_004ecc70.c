// Name: FUN_004ecc70
// Address: 004ecc70
// Address Range: [[004ecc70, 004ed207]]
// Convention: unknown
// Signature: void FUN_004ecc70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ecc70(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  ulonglong uVar11;
  char local_114 [256];
  uint local_14;
  
  bVar10 = 0;
  iVar6 = 0x1d06b80;
  local_14 = 0;
  FUN_004b3000();
  iVar3 = 0;
  do {
    *(int *)(iVar3 + 0x1d07480) = iVar6;
    iVar3 = iVar3 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar3 != 0x24);
  do {
    pcVar7 = local_114;
    pcVar8 = local_114;
    FUN_004b3010();
    iVar3 = 0x01E661B8;
    *(uint *)(0x01E661B8 + 0x15ae84) = 1;
    FUN_005344c0(iVar3,50000,50000);
    *(uint *)(0x01E661B8 + 0x15ae94) = 0xdac;
    FUN_005024a0(0x1d05620);
    FUN_00502510();
    iVar3 = 0x01CB6900;
    *(uint *)(0x01E661B8 + 0x15ae84) = 0;
    switch(*(uint *)(iVar3 + 0xd0)) {
    case 0:
      *(uint *)(iVar3 + 0xd0) = 0;
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    default:
      goto switchD_004ecd3f_default;
    }
    FUN_0050fe80();
    FUN_005b7790(0x1d06b80);
switchD_004ecd3f_default:
    FUN_0050fe80();
    FUN_005b7790(0x1d06c80);
    FUN_0050fe80();
    FUN_005b7790(0x1d06d80);
    uVar2 = *(uint *)(0x01CB6900 + 0xd8);
    if (uVar2 == 0) {
LAB_004ecdd4:
      *(uint *)(0x01CB6900 + 0xd8) = 0;
      uVar4 = FUN_0050fe80();
      uVar11 = CONCAT44(uVar4,0x1d06e80);
    }
    else if (uVar2 < 2) {
      uVar4 = FUN_0050fe80();
      uVar11 = CONCAT44(uVar4,0x1d06e80);
    }
    else {
      if (uVar2 != 2) goto LAB_004ecdd4;
      uVar4 = FUN_0050fe80();
      uVar11 = CONCAT44(uVar4,0x1d06e80);
    }
    FUN_005b7790(uVar11);
    FUN_0050fe80();
    FUN_005b7790(0x1d06f80);
    pcVar5 = (char *)FUN_0050fe80();
    pcVar9 = (char *)0x1d07080;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_005b7790(local_114,"%5.2f",(double)*(int *)(0x01CB6900 + 0xb0) * _DAT_005dd0ad);
    iVar3 = -1;
    pcVar5 = (char *)0x1d07080;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + (uint)bVar10 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar7 = (char *)FUN_0050fe80();
    pcVar5 = (char *)0x1d07180;
    do {
      cVar1 = *pcVar7;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    FUN_005b7790(local_114,"%5.2f",(double)*(int *)(0x01CB6900 + 0xb4) * _DAT_005dd0ad);
    uVar4 = 7;
    iVar3 = -1;
    pcVar7 = (char *)0x1d07180;
    do {
      pcVar5 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar7 + (uint)bVar10 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if ((*(int *)(0x01CB6900 + 0xd0) == 1) || (*(int *)(0x01CB6900 + 0xd0) == 2)) {
      FUN_0050fe80();
      FUN_005b7790(0x1d07280);
      uVar4 = 8;
    }
    FUN_0050fe80();
    uVar4 = FUN_004eb0e0(0x1d07480,uVar4,&local_14,0x122);
    FUN_00589560();
    iVar3 = 0x01CB6900;
    switch(uVar4) {
    case 0:
      if (_DAT_01d0612c == 1) {
        iVar6 = *(int *)(0x01CB6900 + 0xd0) + -1;
        *(int *)(0x01CB6900 + 0xd0) = iVar6;
        if (iVar6 < 0) {
          *(uint *)(iVar3 + 0xd0) = 3;
        }
      }
      else {
        iVar6 = *(int *)(0x01CB6900 + 0xd0) + 1;
        *(int *)(0x01CB6900 + 0xd0) = iVar6;
        if (3 < iVar6) {
          *(uint *)(iVar3 + 0xd0) = 0;
        }
      }
      break;
    case 1:
      FUN_004eed60();
      break;
    case 2:
      *(uint *)(0x01CB6900 + 0xac) = (uint)(*(int *)(0x01CB6900 + 0xac) == 0);
      break;
    case 3:
      if (*(int *)(0x01CB6900 + 0xd8) == 0) {
        *(uint *)(0x01CB6900 + 0xd8) = 2;
      }
      else {
        *(uint *)(0x01CB6900 + 0xd8) = 0;
      }
      break;
    case 4:
      *(uint *)(0x01CB6900 + 0xdc) = (uint)(*(int *)(0x01CB6900 + 0xdc) == 0);
      break;
    case 5:
      FUN_0050fe80();
      FUN_004eb7c0(0x01CB6900 + 0xb0);
      break;
    case 6:
      FUN_0050fe80();
      FUN_004eb7c0(0x01CB6900 + 0xb4);
      break;
    case 7:
      if (*(int *)(0x01CB6900 + 0xd0) == 1) {
        *(uint *)(0x01CB6900 + 0xa8) = (uint)(*(int *)(0x01CB6900 + 0xa8) == 0);
      }
      else if (*(int *)(0x01CB6900 + 0xd0) == 2) {
        FUN_004eb490();
      }
    }
    iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if ((iVar3 != 0) &&
       (((*(int *)(0x01CB6900 + 0xd0) != 2 || (*(int *)(0x01CB6900 + 0xb8) != 0)) ||
        (iVar3 = FUN_004eb490(), iVar3 != 0)))) {
      return;
    }
  } while( true );
}

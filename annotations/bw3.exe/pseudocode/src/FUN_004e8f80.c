// Name: FUN_004e8f80
// Address: 004e8f80
// Address Range: [[004e8f80, 004e94be]]
// Convention: unknown
// Signature: void FUN_004e8f80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e8f80(void)

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
  iVar6 = 0x1d74128;
  local_14 = 0;
  FUN_004b4430();
  iVar3 = 0;
  do {
    *(int *)(iVar3 + 0x1d74a28) = iVar6;
    iVar3 = iVar3 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar3 != 0x24);
  do {
    pcVar7 = local_114;
    pcVar8 = local_114;
    FUN_004b4440();
    iVar3 = 0x01ED78C8;
    *(uint *)(0x01ED78C8 + 0x15ae84) = 1;
    FUN_0053b100(iVar3,50000,50000);
    *(uint *)(0x01ED78C8 + 0x15ae94) = 0xdac;
    FUN_004f9670();
    *(uint *)(0x01ED78C8 + 0x15ae84) = 0;
    switch(*(uint *)(0x01D2130C + 0xd4)) {
    case 0:
      *(uint *)(0x01D2130C + 0xd4) = 0;
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    default:
      goto switchD_004e9030_default;
    }
    FUN_00508960();
    FUN_005a28c0(0x1d74128);
switchD_004e9030_default:
    FUN_00508960();
    FUN_005a28c0(0x1d74228);
    FUN_00508960();
    FUN_005a28c0(0x1d74328);
    uVar2 = *(uint *)(0x01D2130C + 0xdc);
    if (uVar2 == 0) {
LAB_004e90c5:
      *(uint *)(0x01D2130C + 0xdc) = 0;
      uVar4 = FUN_00508960();
      uVar11 = CONCAT44(uVar4,0x1d74428);
    }
    else if (uVar2 < 2) {
      uVar4 = FUN_00508960();
      uVar11 = CONCAT44(uVar4,0x1d74428);
    }
    else {
      if (uVar2 != 2) goto LAB_004e90c5;
      uVar4 = FUN_00508960();
      uVar11 = CONCAT44(uVar4,0x1d74428);
    }
    FUN_005a28c0(uVar11);
    pcVar5 = (char *)FUN_00508960();
    pcVar9 = (char *)0x1d74528;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_005a28c0(local_114,"%5.2f",(double)*(int *)(0x01D2130C + 0xb4) * _DAT_005c774e);
    iVar3 = -1;
    pcVar5 = (char *)0x1d74528;
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
    pcVar7 = (char *)FUN_00508960();
    pcVar5 = (char *)0x1d74628;
    do {
      cVar1 = *pcVar7;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    FUN_005a28c0(local_114,"%5.2f",(double)*(int *)(0x01D2130C + 0xb8) * _DAT_005c774e);
    uVar4 = 6;
    iVar3 = -1;
    pcVar7 = (char *)0x1d74628;
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
    if ((*(int *)(0x01D2130C + 0xd4) == 1) || (*(int *)(0x01D2130C + 0xd4) == 2)) {
      FUN_00508960();
      FUN_005a28c0(0x1d74728);
      uVar4 = 7;
    }
    FUN_00508960();
    uVar4 = FUN_004e7860(0x1d74a28,uVar4,&local_14,200);
    FUN_0057a8a0();
    iVar3 = 0x01D2130C;
    switch(uVar4) {
    case 0:
      if (_DAT_01d737d4 == 1) {
        iVar6 = *(int *)(0x01D2130C + 0xd4) + -1;
        *(int *)(0x01D2130C + 0xd4) = iVar6;
        if (iVar6 < 0) {
          *(uint *)(iVar3 + 0xd4) = 3;
        }
      }
      else {
        iVar6 = *(int *)(0x01D2130C + 0xd4) + 1;
        *(int *)(0x01D2130C + 0xd4) = iVar6;
        if (3 < iVar6) {
          *(uint *)(iVar3 + 0xd4) = 0;
        }
      }
      if ((*(int *)(0x01D2130C + 0xd4) != 3) &&
         (iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04), iVar3 != 0)) {
        *(uint *)(iVar3 + 0xcdd4) = 0;
      }
      break;
    case 1:
      FUN_004eae80();
      break;
    case 2:
      *(uint *)(0x01D2130C + 0xb0) = (uint)(*(int *)(0x01D2130C + 0xb0) == 0);
      break;
    case 3:
      if (*(int *)(0x01D2130C + 0xdc) == 0) {
        *(uint *)(0x01D2130C + 0xdc) = 2;
      }
      else {
        *(uint *)(0x01D2130C + 0xdc) = 0;
      }
      break;
    case 4:
      FUN_00508960();
      FUN_004e80f0(0x01D2130C + 0xb4);
      break;
    case 5:
      FUN_00508960();
      FUN_004e80f0(0x01D2130C + 0xb8);
      break;
    case 6:
      if (*(int *)(0x01D2130C + 0xd4) == 1) {
        *(uint *)(0x01D2130C + 0xac) = (uint)(*(int *)(0x01D2130C + 0xac) == 0);
      }
      else if (*(int *)(0x01D2130C + 0xd4) == 2) {
        FUN_004e7dc0();
      }
    }
    iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
    if ((iVar3 != 0) &&
       (((*(int *)(0x01D2130C + 0xd4) != 2 || (*(int *)(0x01D2130C + 0xbc) != 0)) ||
        (iVar3 = FUN_004e7dc0(), iVar3 != 0)))) {
      return;
    }
  } while( true );
}

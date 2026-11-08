// Name: FUN_0050b470
// Address: 0050b470
// Address Range: [[0050b470, 0050ba10]]
// Convention: unknown
// Signature: void FUN_0050b470(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050b470(void)

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
  iVar6 = 0x1d1f6e0;
  local_14 = 0;
  FUN_004cbf10();
  iVar3 = 0;
  do {
    *(int *)(iVar3 + 0x1d1ffe0) = iVar6;
    iVar3 = iVar3 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar3 != 0x24);
  do {
    pcVar7 = local_114;
    pcVar8 = local_114;
    FUN_004cbf20();
    iVar3 = 0x01E82168;
    *(uint *)(0x01E82168 + 0x15ae84) = 1;
    FUN_00555770(iVar3,50000,50000);
    *(uint *)(0x01E82168 + 0x15ae94) = 0xdac;
    FUN_00521e40();
    iVar3 = 0x01CCF390;
    *(uint *)(0x01E82168 + 0x15ae84) = 0;
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
      goto switchD_0050b521_default;
    }
    FUN_00531090();
    FUN_005bfb40(0x1d1f6e0);
switchD_0050b521_default:
    FUN_00531090();
    FUN_005bfb40(0x1d1f7e0);
    FUN_00531090();
    FUN_005bfb40(0x1d1f8e0);
    uVar2 = *(uint *)(0x01CCF390 + 0xd8);
    if (uVar2 == 0) {
LAB_0050b5b6:
      *(uint *)(0x01CCF390 + 0xd8) = 0;
      uVar4 = FUN_00531090();
      uVar11 = CONCAT44(uVar4,0x1d1f9e0);
    }
    else if (uVar2 < 2) {
      uVar4 = FUN_00531090();
      uVar11 = CONCAT44(uVar4,0x1d1f9e0);
    }
    else {
      if (uVar2 != 2) goto LAB_0050b5b6;
      uVar4 = FUN_00531090();
      uVar11 = CONCAT44(uVar4,0x1d1f9e0);
    }
    FUN_005bfb40(uVar11);
    FUN_00531090();
    FUN_005bfb40(0x1d1fae0);
    pcVar5 = (char *)FUN_00531090();
    pcVar9 = (char *)0x1d1fbe0;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_005bfb40(local_114,"%5.2f",(double)*(int *)(0x01CCF390 + 0xb0) * _DAT_005e801a);
    iVar3 = -1;
    pcVar5 = (char *)0x1d1fbe0;
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
    pcVar7 = (char *)FUN_00531090();
    pcVar5 = (char *)0x1d1fce0;
    do {
      cVar1 = *pcVar7;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    FUN_005bfb40(local_114,"%5.2f",(double)*(int *)(0x01CCF390 + 0xb4) * _DAT_005e801a);
    uVar4 = 7;
    iVar3 = -1;
    pcVar7 = (char *)0x1d1fce0;
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
    if ((*(int *)(0x01CCF390 + 0xd0) == 1) || (*(int *)(0x01CCF390 + 0xd0) == 2)) {
      FUN_00531090();
      FUN_005bfb40(0x1d1fde0);
      uVar4 = 8;
    }
    FUN_00531090();
    uVar4 = FUN_00509e20(0x1d1ffe0,uVar4,&local_14,0x32);
    FUN_005acff0();
    iVar3 = 0x01CCF390;
    switch(uVar4) {
    case 0:
      if (_DAT_01d1ee8c == 1) {
        iVar6 = *(int *)(0x01CCF390 + 0xd0) + -1;
        *(int *)(0x01CCF390 + 0xd0) = iVar6;
        if (iVar6 < 0) {
          *(uint *)(iVar3 + 0xd0) = 3;
        }
      }
      else {
        iVar6 = *(int *)(0x01CCF390 + 0xd0) + 1;
        *(int *)(0x01CCF390 + 0xd0) = iVar6;
        if (3 < iVar6) {
          *(uint *)(iVar3 + 0xd0) = 0;
        }
      }
      if ((*(int *)(0x01CCF390 + 0xd0) != 3) &&
         (iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4), iVar3 != 0)) {
        *(uint *)(iVar3 + 0xc1d8) = 0;
      }
      break;
    case 1:
      FUN_0050d640();
      break;
    case 2:
      *(uint *)(0x01CCF390 + 0xac) = (uint)(*(int *)(0x01CCF390 + 0xac) == 0);
      break;
    case 3:
      if (*(int *)(0x01CCF390 + 0xd8) == 0) {
        *(uint *)(0x01CCF390 + 0xd8) = 2;
      }
      else {
        *(uint *)(0x01CCF390 + 0xd8) = 0;
      }
      break;
    case 4:
      *(uint *)(0x01CCF390 + 0xdc) = (uint)(*(int *)(0x01CCF390 + 0xdc) == 0);
      break;
    case 5:
      FUN_00531090();
      FUN_0050a5e0(0x01CCF390 + 0xb0);
      break;
    case 6:
      FUN_00531090();
      FUN_0050a5e0(0x01CCF390 + 0xb4);
      break;
    case 7:
      if (*(int *)(0x01CCF390 + 0xd0) == 1) {
        *(uint *)(0x01CCF390 + 0xa8) = (uint)(*(int *)(0x01CCF390 + 0xa8) == 0);
      }
      else if (*(int *)(0x01CCF390 + 0xd0) == 2) {
        FUN_0050a2b0();
      }
    }
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
    if ((iVar3 != 0) &&
       (((*(int *)(0x01CCF390 + 0xd0) != 2 || (*(int *)(0x01CCF390 + 0xb8) != 0)) ||
        (iVar3 = FUN_0050a2b0(), iVar3 != 0)))) {
      return;
    }
  } while( true );
}

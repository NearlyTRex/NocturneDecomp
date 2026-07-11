// Name: FUN_004d0d20
// Address: 004d0d20
// Address Range: [[004d0d20, 004d128d]]
// Convention: unknown
// Signature: void FUN_004d0d20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d0d20(void)

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
  iVar6 = 0x1cc65b0;
  local_14 = 0;
  FUN_0049a890();
  iVar3 = 0;
  do {
    *(int *)(iVar3 + 0x1cc6eb0) = iVar6;
    iVar3 = iVar3 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar3 != 0x24);
  do {
    pcVar7 = local_114;
    pcVar8 = local_114;
    FUN_0049a8a0();
    FUN_004deae0(0x1cc5780);
    FUN_004dec50();
    uVar2 = *(uint *)(0x01C775EC + 0xbc);
    if ((uVar2 == 0) || ((1 < uVar2 && (uVar2 != 2)))) {
      *(uint *)(0x01C775EC + 0xbc) = 0;
      uVar4 = FUN_004ee370();
    }
    else {
      uVar4 = FUN_004ee370();
    }
    FUN_00563c90(CONCAT44(uVar4,0x1cc65b0));
    FUN_004ee370();
    FUN_00563c90(0x1cc66b0);
    FUN_004ee370();
    FUN_00563c90(0x1cc67b0);
    uVar2 = *(uint *)(0x01C775EC + 0xc4);
    if (uVar2 == 0) {
LAB_004d0e3b:
      *(uint *)(0x01C775EC + 0xc4) = 0;
      uVar4 = FUN_004ee370();
      uVar11 = CONCAT44(uVar4,0x1cc68b0);
    }
    else if (uVar2 < 2) {
      uVar4 = FUN_004ee370();
      uVar11 = CONCAT44(uVar4,0x1cc68b0);
    }
    else {
      if (uVar2 != 2) goto LAB_004d0e3b;
      uVar4 = FUN_004ee370();
      uVar11 = CONCAT44(uVar4,0x1cc68b0);
    }
    FUN_00563c90(uVar11);
    FUN_004ee370();
    FUN_00563c90(0x1cc69b0);
    pcVar5 = (char *)FUN_004ee370();
    pcVar9 = (char *)0x1cc6ab0;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_00563c90(local_114,"%5.2f",(double)*(int *)(0x01C775EC + 0x9c) * _DAT_00588b43);
    iVar3 = -1;
    pcVar5 = (char *)0x1cc6ab0;
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
    pcVar7 = (char *)FUN_004ee370();
    pcVar5 = (char *)0x1cc6bb0;
    do {
      cVar1 = *pcVar7;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    uVar4 = 7;
    FUN_00563c90(local_114,"%5.2f",(double)*(int *)(0x01C775EC + 0xa0) * _DAT_00588b43);
    iVar3 = -1;
    pcVar7 = (char *)0x1cc6bb0;
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
    if ((*(int *)(0x01C775EC + 0xbc) == 1) || (*(int *)(0x01C775EC + 0xbc) == 2)) {
      FUN_004ee370();
      FUN_00563c90(0x1cc6cb0);
      uVar4 = 8;
    }
    FUN_004ee370();
    uVar4 = FUN_004cf440(0x1cc6eb0,uVar4,&local_14,0xfa);
    FUN_00553910();
    iVar3 = 0x01C775EC;
    switch(uVar4) {
    case 0:
      if (_DAT_01cc5b5c == 1) {
        iVar6 = *(int *)(0x01C775EC + 0xbc) + -1;
        *(int *)(0x01C775EC + 0xbc) = iVar6;
        if (iVar6 < 0) {
          *(uint *)(iVar3 + 0xbc) = 2;
        }
      }
      else {
        iVar6 = *(int *)(0x01C775EC + 0xbc) + 1;
        *(int *)(0x01C775EC + 0xbc) = iVar6;
        if (2 < iVar6) {
          *(uint *)(iVar3 + 0xbc) = 0;
        }
      }
      break;
    case 1:
      FUN_004d2d00();
      break;
    case 2:
      *(uint *)(0x01C775EC + 0x98) = (uint)(*(int *)(0x01C775EC + 0x98) == 0);
      break;
    case 3:
      if (*(int *)(0x01C775EC + 0xc4) == 0) {
        *(uint *)(0x01C775EC + 0xc4) = 2;
      }
      else {
        *(uint *)(0x01C775EC + 0xc4) = 0;
      }
      break;
    case 4:
      *(uint *)(0x01C775EC + 200) = (uint)(*(int *)(0x01C775EC + 200) == 0);
      break;
    case 5:
      FUN_004ee370();
      FUN_004cfbc0(0x01C775EC + 0x9c);
      break;
    case 6:
      FUN_004ee370();
      FUN_004cfbc0(0x01C775EC + 0xa0);
      break;
    case 7:
      if (*(int *)(0x01C775EC + 0xbc) == 1) {
        *(uint *)(0x01C775EC + 0x94) = (uint)(*(int *)(0x01C775EC + 0x94) == 0);
      }
      else if (*(int *)(0x01C775EC + 0xbc) == 2) {
        FUN_004cf8d0();
      }
    }
    iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4);
    if ((iVar3 != 0) &&
       (((*(int *)(0x01C775EC + 0xbc) != 2 || (*(int *)(0x01C775EC + 0xa4) != 0)) ||
        (iVar3 = FUN_004cf8d0(), iVar3 != 0)))) {
      return;
    }
  } while( true );
}

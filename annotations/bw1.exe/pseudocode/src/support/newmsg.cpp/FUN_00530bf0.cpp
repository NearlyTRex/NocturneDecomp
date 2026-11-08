// Name: FUN_00530bf0
// Address: 00530bf0
// Address Range: [[00530bf0, 00530fab]]
// Convention: unknown
// Signature: void FUN_00530bf0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00530bf0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char local_31c [256];
  byte local_21c [256];
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  local_1c = 0;
  iVar3 = FUN_00478fb0(&DAT_005ec4f8,param_1);
  if ((iVar3 < 1) || (iVar4 = FUN_00479180(&DAT_005ec4fc,param_1,&DAT_005ec4f9), iVar4 == 0)) {
    return;
  }
  local_18 = FUN_005c2e90(iVar4);
  local_18 = iVar3 + local_18;
  FUN_005c1180(local_21c,0xff,iVar4);
  FUN_005c04b0(iVar4,&DAT_005ec4fd,&local_1c);
  FUN_005c1180(local_21c,0xff,iVar4);
  FUN_005c04b0(iVar4,&DAT_005ec501,&DAT_01d7f1b8);
  if (local_1c != 0) {
    _DAT_01d1d400 = "..\\support\\newmsg.cpp";
    _DAT_01d1d404 = 0x5b;
    FUN_005030e0("Unknown message file version");
  }
  FUN_005c1180(local_21c,0xff,iVar4);
  FUN_005c04b0(iVar4,"\"%[^\"]\"\n",&DAT_006225f0);
  do {
    FUN_005c04b0(iVar4,&DAT_005ec541);
    iVar3 = FUN_005c2e90(iVar4);
    if (local_18 <= iVar3) {
      FUN_005c0d10(iVar4);
      if (0 < _DAT_01d7f1c0) {
        iVar3 = _DAT_01d7f1c0 * 4;
        iVar4 = 0;
        do {
          iVar5 = iVar4 + 4;
          *(uint *)(iVar4 + 0x1d7f1c4) = *(uint *)(iVar4 + 0x1d80164);
          *(uint *)(iVar4 + 0x1d7f994) = *(uint *)(iVar4 + 0x1d80934);
          iVar4 = iVar5;
        } while (iVar5 < iVar3);
      }
      local_14 = 0;
      for (iVar3 = 0; iVar4 = local_14, iVar3 < _DAT_01d7f1c0 + -1; iVar3 = iVar3 + 1) {
        iVar5 = iVar3 + 1;
        if (iVar5 < _DAT_01d7f1c0) {
          iVar8 = iVar5 * 4;
          do {
            iVar6 = FUN_005c0f80(*(uint *)(iVar4 + 0x1d7f1c4),
                                 *(uint *)(iVar8 + 0x1d7f1c4));
            if (0 < iVar6) {
              uVar2 = *(uint *)(iVar4 + 0x1d7f1c4);
              *(uint *)(iVar4 + 0x1d7f1c4) = *(uint *)(iVar8 + 0x1d7f1c4);
              *(uint *)(iVar8 + 0x1d7f1c4) = uVar2;
              uVar2 = *(uint *)(iVar4 + 0x1d7f994);
              *(uint *)(iVar4 + 0x1d7f994) = *(uint *)(iVar8 + 0x1d7f994);
              *(uint *)(iVar8 + 0x1d7f994) = uVar2;
            }
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 4;
          } while (iVar5 < _DAT_01d7f1c0);
        }
        local_14 = local_14 + 4;
      }
      _DAT_01d7f1bc = 1;
      return;
    }
    iVar3 = FUN_005c04b0(iVar4,"\"%[^\"]\", \"%[^\"]\"\n",local_11c,local_31c);
    if (iVar3 != 2) {
      _DAT_01d1d400 = "..\\support\\newmsg.cpp";
      _DAT_01d1d404 = 0x6f;
      FUN_005030e0("Error reading %s",param_1);
    }
    if (499 < _DAT_01d7f1c0) {
      _DAT_01d1d400 = "..\\support\\newmsg.cpp";
      _DAT_01d1d404 = 0x74;
      FUN_005030e0("Too many messages in %s",param_1);
    }
    uVar7 = 0xffffffff;
    pcVar9 = local_11c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_005c08d0(~uVar7);
    *(int *)(_DAT_01d7f1c0 * 4 + 0x1d80164) = iVar3;
    if (iVar3 == 0) {
      _DAT_01d1d400 = "..\\support\\newmsg.cpp";
      _DAT_01d1d404 = 0x77;
      FUN_005030e0("Out of memory mallocing message tag : %s",local_11c);
    }
    uVar7 = 0xffffffff;
    pcVar9 = local_31c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_005c08d0(~uVar7);
    *(int *)(_DAT_01d7f1c0 * 4 + 0x1d80934) = iVar3;
    if (iVar3 == 0) {
      _DAT_01d1d400 = "..\\support\\newmsg.cpp";
      _DAT_01d1d404 = 0x7a;
      FUN_005030e0("Out of memory mallocing message tag : %s",local_31c);
    }
    pcVar9 = local_11c;
    pcVar10 = *(char **)(_DAT_01d7f1c0 * 4 + 0x1d80164);
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar9 = *(char **)(_DAT_01d7f1c0 * 4 + 0x1d80934);
    pcVar10 = local_31c;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    _DAT_01d7f1c0 = _DAT_01d7f1c0 + 1;
  } while( true );
}

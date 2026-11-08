// Name: FUN_005084c0
// Address: 005084c0
// Address Range: [[005084c0, 0050887b]]
// Convention: unknown
// Signature: void FUN_005084c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005084c0(uint param_1)

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
  iVar3 = FUN_004657f0(&DAT_005cb309,param_1);
  if ((iVar3 < 1) || (iVar4 = FUN_004659c0(&DAT_005cb30d,param_1,&DAT_005cb30a), iVar4 == 0)) {
    return;
  }
  local_18 = FUN_005a5d00(iVar4);
  local_18 = iVar3 + local_18;
  FUN_005a3f00(local_21c,0xff,iVar4);
  FUN_005a3230(iVar4,&DAT_005cb30e,&local_1c);
  FUN_005a3f00(local_21c,0xff,iVar4);
  FUN_005a3230(iVar4,&DAT_005cb312,&DAT_01dd4890);
  if (local_1c != 0) {
    _DAT_01d71de0 = "..\\support\\newmsg.cpp";
    _DAT_01d71de4 = 0x5b;
    FUN_004e4330("Unknown message file version");
  }
  FUN_005a3f00(local_21c,0xff,iVar4);
  FUN_005a3230(iVar4,"\"%[^\"]\"\n",&DAT_006034c0);
  do {
    FUN_005a3230(iVar4,&DAT_005cb352);
    iVar3 = FUN_005a5d00(iVar4);
    if (local_18 <= iVar3) {
      FUN_005a3a90(iVar4);
      if (0 < _DAT_01dd4898) {
        iVar3 = _DAT_01dd4898 * 4;
        iVar4 = 0;
        do {
          iVar5 = iVar4 + 4;
          *(uint *)(iVar4 + 0x1dd489c) = *(uint *)(iVar4 + 0x1dd583c);
          *(uint *)(iVar4 + 0x1dd506c) = *(uint *)(iVar4 + 0x1dd600c);
          iVar4 = iVar5;
        } while (iVar5 < iVar3);
      }
      local_14 = 0;
      for (iVar3 = 0; iVar4 = local_14, iVar3 < _DAT_01dd4898 + -1; iVar3 = iVar3 + 1) {
        iVar5 = iVar3 + 1;
        if (iVar5 < _DAT_01dd4898) {
          iVar8 = iVar5 * 4;
          do {
            iVar6 = FUN_005a3d00(*(uint *)(iVar4 + 0x1dd489c),
                                 *(uint *)(iVar8 + 0x1dd489c));
            if (0 < iVar6) {
              uVar2 = *(uint *)(iVar4 + 0x1dd489c);
              *(uint *)(iVar4 + 0x1dd489c) = *(uint *)(iVar8 + 0x1dd489c);
              *(uint *)(iVar8 + 0x1dd489c) = uVar2;
              uVar2 = *(uint *)(iVar4 + 0x1dd506c);
              *(uint *)(iVar4 + 0x1dd506c) = *(uint *)(iVar8 + 0x1dd506c);
              *(uint *)(iVar8 + 0x1dd506c) = uVar2;
            }
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 4;
          } while (iVar5 < _DAT_01dd4898);
        }
        local_14 = local_14 + 4;
      }
      _DAT_01dd4894 = 1;
      return;
    }
    iVar3 = FUN_005a3230(iVar4,"\"%[^\"]\", \"%[^\"]\"\n",local_11c,local_31c);
    if (iVar3 != 2) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x6f;
      FUN_004e4330("Error reading %s",param_1);
    }
    if (499 < _DAT_01dd4898) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x74;
      FUN_004e4330("Too many messages in %s",param_1);
    }
    uVar7 = 0xffffffff;
    pcVar9 = local_11c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_005a3650(~uVar7);
    *(int *)(_DAT_01dd4898 * 4 + 0x1dd583c) = iVar3;
    if (iVar3 == 0) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x77;
      FUN_004e4330("Out of memory mallocing message tag : %s",local_11c);
    }
    uVar7 = 0xffffffff;
    pcVar9 = local_31c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_005a3650(~uVar7);
    *(int *)(_DAT_01dd4898 * 4 + 0x1dd600c) = iVar3;
    if (iVar3 == 0) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x7a;
      FUN_004e4330("Out of memory mallocing message tag : %s",local_31c);
    }
    pcVar9 = local_11c;
    pcVar10 = *(char **)(_DAT_01dd4898 * 4 + 0x1dd583c);
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar9 = *(char **)(_DAT_01dd4898 * 4 + 0x1dd600c);
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
    _DAT_01dd4898 = _DAT_01dd4898 + 1;
  } while( true );
}

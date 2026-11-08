// Name: FUN_0054af20
// Address: 0054af20
// Address Range: [[0054af20, 0054b29c]]
// Convention: unknown
// Signature: void FUN_0054af20(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054af20(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  byte bVar7;
  char local_334 [60];
  char local_2f8 [60];
  byte local_2bc [30];
  byte local_29e [402];
  char local_10c [256];
  int local_c;
  
  bVar7 = 0;
  *(uint *)(param_1 + 0x20) = 0;
  local_c = FUN_00478fb0("world",param_2);
  if (local_c < 1) {
    return;
  }
  iVar2 = FUN_00479180("world",param_2,&DAT_005efec7);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\script.cpp";
    _DAT_01d1d404 = 0x1047;
    FUN_005030e0("Can't open world\\%s",param_2);
  }
  iVar3 = FUN_005c2e90(iVar2);
  local_c = local_c + iVar3;
  do {
    FUN_005c04b0(iVar2,&DAT_005efef7);
    iVar3 = FUN_005c2e90(iVar2);
    if (local_c <= iVar3) {
      FUN_005c0d10(iVar2);
      return;
    }
    iVar3 = FUN_005c04b0(iVar2,"%[^,], ",local_334);
    if (iVar3 != 1) {
      _DAT_01d1d400 = "..\\core\\script.cpp";
      _DAT_01d1d404 = 0x105c;
      FUN_005030e0("SCScipt::dbLoad - error parsing %s record %d",param_2,*(uint *)(param_1 + 0x20));
    }
    iVar3 = FUN_005c0530(iVar2);
    if (iVar3 == 0x2c) {
      local_2bc[0] = 0;
    }
    else {
      FUN_005c0700(iVar3,iVar2);
      iVar3 = FUN_005c04b0(iVar2,"%[^,],",local_2bc);
      if (iVar3 != 1) {
        _DAT_01d1d400 = "..\\core\\script.cpp";
        _DAT_01d1d404 = 0x1065;
        FUN_005030e0("SCScipt::dbLoad - error parsing %s record %d",param_2,*(uint *)(param_1 + 0x20));
      }
    }
    iVar3 = FUN_005c04b0(iVar2," %[^\n]\n",local_29e);
    if (iVar3 != 1) {
      _DAT_01d1d400 = "..\\core\\script.cpp";
      _DAT_01d1d404 = 0x106a;
      FUN_005030e0("SCScipt::dbLoad - error parsing %s record %d",param_2,*(uint *)(param_1 + 0x20));
    }
    FUN_00543240(local_334);
    FUN_00543240(local_2bc);
    FUN_00543240(local_29e);
    FUN_005c2238(local_334,0,0,local_10c,0);
    pcVar4 = local_10c;
    pcVar5 = local_334;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar3 = FUN_0054b2a0(param_1,local_334);
    if (-1 < iVar3) {
      FUN_004943a0(0x01C3EB54,"Warning! Duplicate wav string %s detected in %s",local_334,param_2);
    }
    FUN_005bfb40(local_2f8,"%s.wav",local_334);
    iVar3 = FUN_00478fb0("sound",local_2f8);
    if (iVar3 < 1) {
      FUN_005bfb40(local_2f8,"%s.mp3",local_334);
      iVar3 = FUN_00478fb0("sound",local_2f8);
      if (iVar3 < 1) {
        pcVar5 = local_334;
        pcVar4 = local_2f8;
        do {
          cVar1 = *pcVar5;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
      }
    }
    iVar3 = *(int *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x20) = iVar3;
    iVar3 = FUN_005c10d0(*(uint *)(param_1 + 0x24),iVar3 * 0x226);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      _DAT_01d1d400 = "..\\core\\script.cpp";
      _DAT_01d1d404 = 0x108b;
      FUN_005030e0("SCScipt::dbLoad - out of memory");
    }
    pcVar5 = local_334;
    puVar6 = (uint *)(*(int *)(param_1 + 0x24) + (*(int *)(param_1 + 0x20) + -1) * 0x226);
    for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *(uint *)pcVar5;
      pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    *(ushort *)puVar6 = *(ushort *)pcVar5;
  } while( true );
}

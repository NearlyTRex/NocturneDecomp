// Name: FUN_00529c10
// Address: 00529c10
// Address Range: [[00529c10, 00529f8c]]
// Convention: unknown
// Signature: void FUN_00529c10(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00529c10(int param_1,uint param_2)

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
  local_c = FUN_00460aa0("world",param_2);
  if (local_c < 1) {
    return;
  }
  iVar2 = FUN_00460c70("world",param_2,&DAT_005e4ea3);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\script.cpp";
    _DAT_01d046a4 = 0x11af;
    FUN_004e4500("Can't open world\\%s",param_2);
  }
  iVar3 = FUN_005baab0(iVar2);
  local_c = local_c + iVar3;
  do {
    FUN_005b8100(iVar2,&DAT_005e4ed3);
    iVar3 = FUN_005baab0(iVar2);
    if (local_c <= iVar3) {
      FUN_005b89c0(iVar2);
      return;
    }
    iVar3 = FUN_005b8100(iVar2,"%[^,], ",local_334);
    if (iVar3 != 1) {
      _DAT_01d046a0 = "..\\core\\script.cpp";
      _DAT_01d046a4 = 0x11c4;
      FUN_004e4500("SCScipt::dbLoad - error parsing %s record %d",param_2,*(uint *)(param_1 + 0x20));
    }
    iVar3 = FUN_005b8180(iVar2);
    if (iVar3 == 0x2c) {
      local_2bc[0] = 0;
    }
    else {
      FUN_005b8350(iVar3,iVar2);
      iVar3 = FUN_005b8100(iVar2,"%[^,],",local_2bc);
      if (iVar3 != 1) {
        _DAT_01d046a0 = "..\\core\\script.cpp";
        _DAT_01d046a4 = 0x11cd;
        FUN_004e4500("SCScipt::dbLoad - error parsing %s record %d",param_2,*(uint *)(param_1 + 0x20));
      }
    }
    iVar3 = FUN_005b8100(iVar2," %[^\n]\n",local_29e);
    if (iVar3 != 1) {
      _DAT_01d046a0 = "..\\core\\script.cpp";
      _DAT_01d046a4 = 0x11d2;
      FUN_004e4500("SCScipt::dbLoad - error parsing %s record %d",param_2,*(uint *)(param_1 + 0x20));
    }
    FUN_00521110(local_334);
    FUN_00521110(local_2bc);
    FUN_00521110(local_29e);
    FUN_005b9e58(local_334,0,0,local_10c,0);
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
    iVar3 = FUN_00529f90(param_1,local_334);
    if (-1 < iVar3) {
      FUN_0047be40(0x01C25594,"Warning! Duplicate wav string %s detected in %s",local_334,param_2);
    }
    FUN_005b7790(local_2f8,"%s.wav",local_334);
    iVar3 = FUN_00460aa0("sound",local_2f8);
    if (iVar3 < 1) {
      FUN_005b7790(local_2f8,"%s.mp3",local_334);
      iVar3 = FUN_00460aa0("sound",local_2f8);
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
    iVar3 = FUN_005b8ce0(*(uint *)(param_1 + 0x24),iVar3 * 0x226);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      _DAT_01d046a0 = "..\\core\\script.cpp";
      _DAT_01d046a4 = 0x11f3;
      FUN_004e4500("SCScipt::dbLoad - out of memory");
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

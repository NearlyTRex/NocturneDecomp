// Name: FUN_004f8eb0
// Address: 004f8eb0
// Address Range: [[004f8eb0, 004f90f0]]
// Convention: unknown
// Signature: void FUN_004f8eb0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f8eb0(uint param_1,uint param_2)

{
  byte uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *puVar8;
  int local_240 [135];
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (0x01BCD074,"Computing CRC over entire pod: %s...",param_2);
  FUN_004f7a80(local_240);
  iVar2 = FUN_004f7ae0(local_240,param_2);
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\engine\\pod.cpp";
    _DAT_01cc4804 = 0x37a;
    FUN_004c8440("Can't mount %s to check version",param_2);
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(local_240);
  if (local_240[0] == 1) {
    local_1c = 0x54;
  }
  else if (local_240[0] == 2) {
    local_1c = 8;
  }
  else {
    _DAT_01cc4800 = "..\\engine\\pod.cpp";
    _DAT_01cc4804 = 0x385;
    FUN_004c8440("Invalid pod version for %s: %d",param_2,local_240[0]);
  }
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_0058d9a8,param_2);
  iVar2 = local_1c;
  uVar4 = _fopen(param_2,"rb");
  uVar7 = iVar3 - iVar2;
  local_20 = uVar4;
  _fseek(uVar4,iVar2,0);
  uVar6 = 0xffffffff;
  local_14 = uVar4;
  for (; 0xffff < (int)uVar7; uVar7 = uVar7 - 0x10000) {
    puVar8 = &DAT_01e428d0;
    uVar5 = 0;
    _fread(&DAT_01e428d0,0x10000,1,local_14);
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      uVar5 = uVar5 + 1;
      uVar6 = FUN_004f77d0(uVar6,uVar1);
    } while (uVar5 < 0x10000);
  }
  uVar5 = 0;
  _fread(&DAT_01e428d0,uVar7,1,local_14);
  puVar8 = &DAT_01e428d0;
  local_18 = uVar7;
  if (uVar7 != 0) {
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      uVar5 = uVar5 + 1;
      uVar6 = FUN_004f77d0(uVar6,uVar1);
    } while (uVar5 < uVar7);
  }
  _fclose(local_20);
  local_24 = uVar6;
  uVar6 = _fopen(param_2,"rb+");
  _fseek(uVar6,local_1c + -4,0);
  _fwrite(&local_24,4,1,uVar6);
  _fclose(uVar6);
  engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(local_240,0);
  return;
}

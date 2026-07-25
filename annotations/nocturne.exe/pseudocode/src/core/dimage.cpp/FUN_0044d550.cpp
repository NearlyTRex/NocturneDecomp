// Name: FUN_0044d550
// Address: 0044d550
// Address Range: [[0044d550, 0044d792]]
// Convention: unknown
// Signature: void FUN_0044d550(undefined1 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d550(byte *param_1,char *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  byte *puVar5;
  char *pcVar6;
  byte *puVar7;
  char *pcVar8;
  byte *puVar9;
  char local_11c [256];
  uint local_1c;
  uint local_18;
  byte *local_14;
  
  pcVar8 = local_11c;
  pcVar6 = local_11c;
  do {
    cVar1 = *param_2;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  iVar4 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_11c,"rb");
  if (iVar4 == 0) {
    _DAT_01cc4800 = "..\\core\\dimage.cpp";
    _DAT_01cc4804 = 0x68;
    FUN_004c8440("CDemonImage::load - Unable to load image!");
  }
  *(uint *)(param_1 + 0x304) = param_3;
  *(uint *)(param_1 + 0x308) = param_4;
  FUN_0044d460(param_1);
  _fread(*(uint *)(param_1 + 0x300),param_3,param_4,iVar4);
  _fclose(iVar4);
  do {
    pcVar8 = pcVar6;
    if (*pcVar6 == '.') goto LAB_0044d60d;
    if (*pcVar6 == '\0') break;
    pcVar8 = pcVar6 + 1;
    if (*pcVar8 == '.') goto LAB_0044d60d;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_0044d60d:
  if (pcVar8 == (char *)0x0) {
    _DAT_01cc4800 = "..\\core\\dimage.cpp";
    _DAT_01cc4804 = 0x7b;
    FUN_004c8440("CDemonImage::load - Unable to find extention!");
  }
  pcVar6 = ".ACT";
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  iVar4 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_11c,"rb");
  if (iVar4 == 0) {
    _DAT_01cc4800 = "..\\core\\dimage.cpp";
    _DAT_01cc4804 = 0x7f;
    FUN_004c8440("CDemonImage::load - Unable to load palette!");
  }
  _fread(param_1 + 0x30c,0x100,3,iVar4);
  _fclose(iVar4);
  local_14 = param_1 + 0x200;
  puVar5 = param_1;
  puVar7 = param_1;
  puVar9 = param_1;
  do {
    local_1c = (uint)(byte)puVar5[0x30c];
    local_18 = (uint)(byte)puVar5[0x30e];
    bVar2 = puVar5[0x30d];
    uVar3 = FUN_0044d4f0(param_1,local_1c,bVar2,local_18);
    *(ushort *)(puVar7 + 0x100) = uVar3;
    puVar7 = puVar7 + 2;
    puVar5 = puVar5 + 3;
    *puVar9 = (&DAT_01bf7720)[(uint)(bVar2 >> 3) * 0x20 + (local_1c >> 3) * 0x400 + (local_18 >> 3)]
    ;
    puVar9 = puVar9 + 1;
  } while (puVar7 != local_14);
  return;
}

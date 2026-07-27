// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_00544ef0
// Address: 00544ef0
// Address Range: [[00544ef0, 00545385]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00544ef0(undefined4 *param_1,char *param_2)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00544ef0(uint *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  byte bVar10;
  char local_114 [256];
  uint local_14;
  
  bVar10 = 0;
  local_14 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",param_2);
  if (local_14 < 0x1000) {
    if (local_14 == 0x400) {
      unaff_EBP = 0x20;
      goto LAB_00544f38;
    }
  }
  else {
    if (local_14 < 0x1001) {
      unaff_EBP = 0x40;
      goto LAB_00544f38;
    }
    if (0x3fff < local_14) {
      if (local_14 < 0x4001) {
        unaff_EBP = 0x80;
        goto LAB_00544f38;
      }
      if (local_14 == 0x10000) {
        unaff_EBP = 0x100;
        goto LAB_00544f38;
      }
    }
  }
  _sprintf(local_114,"CTextureCache::load - Bad texture length : %s,%d",param_2,local_14);
  INT_01cc4804 = 0xf3;
  PTR_01cc4800 = "..\\engine\\texture.cpp";
  core_main_c_FUN_004c8440(local_114);
LAB_00544f38:
  pcVar8 = local_114;
  pcVar6 = local_114;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    pcVar5 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar5 = local_114;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00544f77;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_00544f77;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00544f77:
  if (pcVar4 == (char *)0x0) {
    PTR_01cc4800 = "..\\engine\\texture.cpp";
    INT_01cc4804 = 0xfa;
    core_main_c_FUN_004c8440("CTextureCache::load - Can't find extension");
  }
  _sprintf(pcVar4,".act");
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_114,"rb");
  if (iVar2 == 0) {
    puVar7 = (uint *)&DAT_01c00648;
    puVar9 = param_1 + param_1[0x34c02] * 0xc0 + 0x4c02;
    for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar9 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
      puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
    }
  }
  else {
    _fread(param_1 + param_1[0x34c02] * 0xc0 + 0x4c02,0x100,3,iVar2);
    _fclose(iVar2);
  }
  pcVar8 = (char *)(param_1 + param_1[0x34c02] * 0x10 + 0xc02);
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pcVar4 = param_2;
  pcVar8 = local_114;
  if (unaff_EBP != param_1[param_1[0x34c02] + 2]) {
    if (param_1[param_1[0x34c02] + 0x402] != 0) {
      FUN_005638d0(param_1[param_1[0x34c02] + 0x402]);
      if (param_1[param_1[0x34c02] + 0x802] != 0) {
        FUN_005638d0(param_1[param_1[0x34c02] + 0x802]);
        param_1[param_1[0x34c02] + 0x802] = 0;
      }
    }
    uVar3 = malloc(local_14);
    param_1[param_1[0x34c02] + 0x402] = uVar3;
    pcVar8 = local_114;
    if (param_1[param_1[0x34c02] + 0x402] == 0) {
      PTR_01cc4800 = "..\\engine\\texture.cpp";
      INT_01cc4804 = 0x115;
      core_main_c_FUN_004c8440("CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM");
      pcVar8 = local_114;
    }
  }
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    pcVar5 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar8[1] = cVar1;
    pcVar5 = local_114;
    pcVar4 = pcVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_0054511b;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_0054511b;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_0054511b:
  _sprintf(pcVar4,".raw");
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_114,"rb");
  if (iVar2 == 0) {
    memset(param_1[param_1[0x34c02] + 0x402],0,unaff_EBP * unaff_EBP);
    pcVar6 = local_114;
  }
  else {
    _fread(param_1[param_1[0x34c02] + 0x402],unaff_EBP,unaff_EBP,iVar2);
    _fclose(iVar2);
  }
  do {
    cVar1 = *param_2;
    *pcVar6 = cVar1;
    pcVar4 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar6[1] = cVar1;
    pcVar4 = local_114;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar4;
    if (*pcVar4 == '.') goto LAB_005451a6;
    if (*pcVar4 == '\0') break;
    pcVar6 = pcVar4 + 1;
    if (*pcVar6 == '.') goto LAB_005451a6;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_005451a6:
  _sprintf(pcVar6,".opa");
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_114,"rb");
  if (iVar2 == 0) {
    if (param_1[param_1[0x34c02] + 0x802] != 0) {
      FUN_005638d0(param_1[param_1[0x34c02] + 0x802]);
      param_1[param_1[0x34c02] + 0x802] = 0;
    }
  }
  else {
    if (unaff_EBP != param_1[param_1[0x34c02] + 2]) {
      if (param_1[param_1[0x34c02] + 0x802] != 0) {
        FUN_005638d0(param_1[param_1[0x34c02] + 0x802]);
      }
      uVar3 = malloc(local_14);
      param_1[param_1[0x34c02] + 0x802] = uVar3;
    }
    _fread(param_1[param_1[0x34c02] + 0x802],unaff_EBP,unaff_EBP,iVar2);
    _fclose(iVar2);
  }
  param_1[param_1[0x34c02] + 2] = unaff_EBP;
  iVar2 = param_1[0x34c02];
  param_1[0x34c02] = iVar2 + 1;
  if ((int)param_1[1] <= iVar2 + 1) {
    *param_1 = 1;
    param_1[0x34c02] = 0;
    return;
  }
  return;
}

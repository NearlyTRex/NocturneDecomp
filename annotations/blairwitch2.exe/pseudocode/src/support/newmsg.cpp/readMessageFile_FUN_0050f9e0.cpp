// Name: support_newmsg.cpp_readMessageFile_FUN_0050f9e0
// Address: 0050f9e0
// Address Range: [[0050f9e0, 0050fd9b]]
// Convention: __cdecl
// Signature: void __cdecl support_newmsg_cpp_readMessageFile_FUN_0050f9e0(char *message_file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_newmsg_cpp_readMessageFile_FUN_0050f9e0(char *message_file)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  _FILE *p_Var4;
  int iVar5;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  char local_31c [256];
  byte local_21c [256];
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  int iVar6;
  
  bVar13 = 0;
  local_1c = 0;
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00460aa0(&DAT_005e129d,message_file);
  if ((iVar3 < 1) ||
     (p_Var4 = engine_dosio_cpp_FUN_00460c70(&DAT_005e12a1,message_file,&DAT_005e129e),
     p_Var4 == (_FILE *)0x0)) {
    return;
  }
  local_18 = _ftell(p_Var4);
  local_18 = iVar3 + local_18;
  _fgets(local_21c,0xff,p_Var4);
  _fscanf(p_Var4,&DAT_005e12a2,&local_1c);
  _fgets(local_21c,0xff,p_Var4);
  _fscanf(p_Var4,&DAT_005e12a6,&DAT_01d63250);
  if (local_1c != 0) {
    _DAT_01d046a0 = "..\\support\\newmsg.cpp";
    _DAT_01d046a4 = 0x57;
    core_main_c_FUN_004e4500("Unknown message file version");
  }
  _fgets(local_21c,0xff,p_Var4);
  _fscanf(p_Var4,"\"%[^\"]\"\n",&DAT_0061b190);
  do {
    _fscanf(p_Var4,&DAT_005e12e6);
    iVar3 = _ftell(p_Var4);
    if (local_18 <= iVar3) {
      _fclose(p_Var4);
      if (0 < _DAT_01d63258) {
        iVar3 = _DAT_01d63258 * 4;
        iVar6 = 0;
        do {
          iVar5 = iVar6 + 4;
          *(uint *)(iVar6 + 0x1d6325c) = *(uint *)(iVar6 + 0x1d641fc);
          *(uint *)(iVar6 + 0x1d63a2c) = *(uint *)(iVar6 + 0x1d649cc);
          iVar6 = iVar5;
        } while (iVar5 < iVar3);
      }
      local_14 = 0;
      for (iVar3 = 0; iVar6 = local_14, iVar3 < _DAT_01d63258 + -1; iVar3 = iVar3 + 1) {
        iVar5 = iVar3 + 1;
        if (iVar5 < _DAT_01d63258) {
          iVar10 = iVar5 * 4;
          do {
            iVar7 = _strcmp
                              (*(char **)(iVar6 + 0x1d6325c),*(char **)(iVar10 + 0x1d6325c));
            if (0 < iVar7) {
              uVar2 = *(uint *)(iVar6 + 0x1d6325c);
              *(uint *)(iVar6 + 0x1d6325c) = *(uint *)(iVar10 + 0x1d6325c);
              *(uint *)(iVar10 + 0x1d6325c) = uVar2;
              uVar2 = *(uint *)(iVar6 + 0x1d63a2c);
              *(uint *)(iVar6 + 0x1d63a2c) = *(uint *)(iVar10 + 0x1d63a2c);
              *(uint *)(iVar10 + 0x1d63a2c) = uVar2;
            }
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 4;
          } while (iVar5 < _DAT_01d63258);
        }
        local_14 = local_14 + 4;
      }
      _DAT_01d63254 = 1;
      return;
    }
    iVar3 = _fscanf(p_Var4,"\"%[^\"]\", \"%[^\"]\"\n",local_11c,local_31c);
    if (iVar3 != 2) {
      _DAT_01d046a0 = "..\\support\\newmsg.cpp";
      _DAT_01d046a4 = 0x68;
      core_main_c_FUN_004e4500("Error reading %s",message_file);
    }
    if (499 < _DAT_01d63258) {
      _DAT_01d046a0 = "..\\support\\newmsg.cpp";
      _DAT_01d046a4 = 0x6d;
      core_main_c_FUN_004e4500("Too many messages in %s",message_file);
    }
    uVar9 = 0xffffffff;
    pcVar11 = local_11c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    pvVar8 = malloc(~uVar9);
    *(void **)(_DAT_01d63258 * 4 + 0x1d641fc) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      _DAT_01d046a0 = "..\\support\\newmsg.cpp";
      _DAT_01d046a4 = 0x70;
      core_main_c_FUN_004e4500("Out of memory mallocing message tag : %s",local_11c);
    }
    uVar9 = 0xffffffff;
    pcVar11 = local_31c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    pvVar8 = malloc(~uVar9);
    *(void **)(_DAT_01d63258 * 4 + 0x1d649cc) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      _DAT_01d046a0 = "..\\support\\newmsg.cpp";
      _DAT_01d046a4 = 0x73;
      core_main_c_FUN_004e4500("Out of memory mallocing message tag : %s",local_31c);
    }
    pcVar11 = local_11c;
    pcVar12 = *(char **)(_DAT_01d63258 * 4 + 0x1d641fc);
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar11 = *(char **)(_DAT_01d63258 * 4 + 0x1d649cc);
    pcVar12 = local_31c;
    do {
      cVar1 = *pcVar12;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    _DAT_01d63258 = _DAT_01d63258 + 1;
  } while( true );
}

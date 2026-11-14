// Name: support_newmsg.cpp_readMessageFile_FUN_005084c0
// Address: 005084c0
// Address Range: [[005084c0, 0050887b]]
// Convention: __cdecl
// Signature: void __cdecl support_newmsg_cpp_readMessageFile_FUN_005084c0(char *message_file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_newmsg_cpp_readMessageFile_FUN_005084c0(char *message_file)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  _FILE *file_handle;
  long lVar4;
  int iVar5;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  char local_31c [256];
  char local_21c [256];
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  int iVar6;
  
  bVar13 = 0;
  local_1c = 0;
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004657f0(&DAT_005cb309,message_file);
  if ((iVar3 < 1) ||
     (file_handle = engine_dosio_cpp_FUN_004659c0(&DAT_005cb30d,message_file,&DAT_005cb30a),
     file_handle == (_FILE *)0x0)) {
    return;
  }
  lVar4 = _ftell(file_handle);
  local_18 = iVar3 + lVar4;
  _fgets(local_21c,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cb30e);
  _fgets(local_21c,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cb312);
  if (local_1c != 0) {
    _DAT_01d71de0 = "..\\support\\newmsg.cpp";
    _DAT_01d71de4 = 0x5b;
    core_main_c_FUN_004e4330("Unknown message file version");
  }
  _fgets(local_21c,0xff,file_handle);
  _fscanf(file_handle,"\"%[^\"]\"\n");
  do {
    _fscanf(file_handle,&DAT_005cb352);
    lVar4 = _ftell(file_handle);
    if (local_18 <= lVar4) {
      _fclose(file_handle);
      if (0 < _DAT_01dd4898) {
        iVar3 = _DAT_01dd4898 * 4;
        iVar6 = 0;
        do {
          iVar5 = iVar6 + 4;
          *(uint *)(iVar6 + 0x1dd489c) = *(uint *)(iVar6 + 0x1dd583c);
          *(uint *)(iVar6 + 0x1dd506c) = *(uint *)(iVar6 + 0x1dd600c);
          iVar6 = iVar5;
        } while (iVar5 < iVar3);
      }
      local_14 = 0;
      for (iVar3 = 0; iVar6 = local_14, iVar3 < _DAT_01dd4898 + -1; iVar3 = iVar3 + 1) {
        iVar5 = iVar3 + 1;
        if (iVar5 < _DAT_01dd4898) {
          iVar10 = iVar5 * 4;
          do {
            iVar7 = _strcmp
                              (*(char **)(iVar6 + 0x1dd489c),*(char **)(iVar10 + 0x1dd489c));
            if (0 < iVar7) {
              uVar2 = *(uint *)(iVar6 + 0x1dd489c);
              *(uint *)(iVar6 + 0x1dd489c) = *(uint *)(iVar10 + 0x1dd489c);
              *(uint *)(iVar10 + 0x1dd489c) = uVar2;
              uVar2 = *(uint *)(iVar6 + 0x1dd506c);
              *(uint *)(iVar6 + 0x1dd506c) = *(uint *)(iVar10 + 0x1dd506c);
              *(uint *)(iVar10 + 0x1dd506c) = uVar2;
            }
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 4;
          } while (iVar5 < _DAT_01dd4898);
        }
        local_14 = local_14 + 4;
      }
      _DAT_01dd4894 = 1;
      return;
    }
    iVar3 = _fscanf(file_handle,"\"%[^\"]\", \"%[^\"]\"\n");
    if (iVar3 != 2) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x6f;
      core_main_c_FUN_004e4330("Error reading %s",message_file);
    }
    if (499 < _DAT_01dd4898) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x74;
      core_main_c_FUN_004e4330("Too many messages in %s",message_file);
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
    *(void **)(_DAT_01dd4898 * 4 + 0x1dd583c) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x77;
      core_main_c_FUN_004e4330("Out of memory mallocing message tag : %s",local_11c);
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
    *(void **)(_DAT_01dd4898 * 4 + 0x1dd600c) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x7a;
      core_main_c_FUN_004e4330("Out of memory mallocing message tag : %s",local_31c);
    }
    pcVar11 = local_11c;
    pcVar12 = *(char **)(_DAT_01dd4898 * 4 + 0x1dd583c);
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar11 = *(char **)(_DAT_01dd4898 * 4 + 0x1dd600c);
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
    _DAT_01dd4898 = _DAT_01dd4898 + 1;
  } while( true );
}

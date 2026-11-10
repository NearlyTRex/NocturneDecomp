// Name: crt_unknown.c_FUN_005bfdd4
// Address: 005bfdd4
// Address Range: [[005bfdd4, 005c00cf]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_FUN_005bfdd4(char *filename,WatcomStat *file_info)

#include "nocturne.h"

int __cdecl FUN_005bfdd4(char *filename,WatcomStat *file_info)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  HANDLE hFindFile;
  uint uVar6;
  _WIN32_FIND_DATAA local_368;
  char local_228;
  char local_227;
  char local_226;
  char local_225;
  byte local_124 [260];
  short local_20 [2];
  uint local_1c;
  uint local_18;
  short local_14 [2];
  
  bVar1 = false;
  if ((*filename == '\0') ||
     (iVar3 = FUN_005c3e70(filename,&DAT_005f1a20), iVar3 != 0)) {
    setErrno(1);
    iVar3 = -1;
  }
  else {
    FUN_005c0f10((char *)local_124,0x104);
    pcVar4 = _fullpath(&local_228,filename,0x104);
    if ((pcVar4 != (char *)0x0) &&
       ((((((&DAT_0061ed94)[(byte)(local_228 + 1)] & 0xc0) != 0 && (local_227 == ':')) &&
         (local_226 == '\\')) && (local_225 == '\0')))) {
      bVar1 = true;
    }
    pcVar5 = (char *)FUN_005c0e00(filename);
    pcVar4 = filename;
    if (*pcVar5 == ':') {
      pcVar4 = filename + 2;
    }
    if ((((*pcVar4 == '\\') || (*pcVar4 == '/')) && (pcVar4[1] == '\0')) || (bVar1)) {
      iVar3 = FUN_005ba2e0(filename);
      if (iVar3 != 0) {
        return -1;
      }
      FUN_005ba2e0((char *)local_124);
      memset(&local_368,0,0x13e);
      local_368.dwFileAttributes = 0x10;
    }
    else {
      hFindFile = FindFirstFileA(filename,&local_368);
      if (hFindFile == (HANDLE)0xffffffff) {
        iVar3 = FUN_005c036c();
        return iVar3;
      }
      FindClose(hFindFile);
    }
    pcVar4 = (char *)FUN_005c0e00(filename);
    if (*pcVar4 == ':') {
      local_124[0] = *filename;
    }
    iVar3 = tolower((uint)local_124[0]);
    *(int *)file_info = iVar3 + -0x61;
    iVar3 = *(int *)file_info;
    *(int *)file_info = iVar3 + -1;
    *(int *)(file_info + 0x12) = iVar3 + -1;
    *(DWORD *)(file_info + 0x16) = local_368.nFileSizeLow;
    uVar2 = FUN_005bfcc0(local_368.dwFileAttributes,local_368.cFileName);
    *(ushort *)(file_info + 8) = uVar2;
    FUN_005c3ec0(&local_368.ftLastWriteTime,local_20,local_14);
    uVar6 = FUN_005c3fb0(local_20[0],local_14[0]);
    *(uint *)(file_info + 0x1e) = uVar6;
    FUN_005c3ec0(&local_368.ftCreationTime,&local_18,&local_1c);
    if (((short)local_18 == local_20[0]) && ((short)local_1c == local_14[0])) {
      uVar6 = *(uint *)(file_info + 0x1e);
    }
    else {
      uVar6 = FUN_005c3fb0(local_18 & 0xffff,local_1c & 0xffff);
    }
    *(uint *)(file_info + 0x22) = uVar6;
    FUN_005c3ec0(&local_368.ftLastAccessTime,&local_18,&local_1c);
    if (((short)local_18 == local_20[0]) && ((short)local_1c == local_14[0])) {
      uVar6 = *(uint *)(file_info + 0x1e);
    }
    else {
      uVar6 = FUN_005c3fb0(local_18 & 0xffff,local_1c & 0xffff);
    }
    *(uint *)(file_info + 0x1a) = uVar6;
    *(ushort *)(file_info + 0x10) = 0;
    *(ushort *)(file_info + 10) = 1;
    *(int *)(file_info + 0xc) = (int)*(short *)(file_info + 0x10);
    *(int *)(file_info + 4) = (int)*(short *)(file_info + 0x10);
    *(uint *)(file_info + 0x2e) = 0;
    *(DWORD *)(file_info + 0x2a) = local_368.dwFileAttributes;
    *(uint *)(file_info + 0x32) = 0;
    *(ushort *)(file_info + 0x36) = 0;
    file_info[0x38] = (WatcomStat)0x0;
    _strncpy((char *)(file_info + 0x39),local_368.cFileName,0xd);
    iVar3 = 0;
  }
  return iVar3;
}

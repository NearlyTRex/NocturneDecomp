// Name: crt_io.c_FUN_005a4bc4
// Address: 005a4bc4
// Address Range: [[005a4bc4, 005a4bc8]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_FUN_005a4bc4(char *filename,WatcomStat *file_info)

#include "nocturne.h"

int __cdecl FUN_005a4bc4(char *filename,WatcomStat *file_info)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  HANDLE hFindFile;
  uint uVar6;
  _WIN32_FIND_DATAA _Stack_368;
  char cStack_228;
  char cStack_227;
  char cStack_226;
  char cStack_225;
  byte abStack_124 [260];
  short asStack_20 [2];
  uint uStack_1c;
  uint uStack_18;
  short asStack_14 [2];
  
  bVar1 = false;
  if ((*filename == '\0') ||
     (iVar3 = FUN_005aede0(filename,&DAT_005da884), iVar3 != 0)) {
    setErrno(1);
    iVar3 = -1;
  }
  else {
    FUN_005acb10((char *)abStack_124,0x104);
    pcVar4 = _fullpath(&cStack_228,filename,0x104);
    if ((pcVar4 != (char *)0x0) &&
       ((((((&DAT_006074b8)[(byte)(cStack_228 + 1)] & 0xc0) != 0 && (cStack_227 == ':')) &&
         (cStack_226 == '\\')) && (cStack_225 == '\0')))) {
      bVar1 = true;
    }
    pcVar5 = (char *)FUN_005aca00(filename);
    pcVar4 = filename;
    if (*pcVar5 == ':') {
      pcVar4 = filename + 2;
    }
    if ((((*pcVar4 == '\\') || (*pcVar4 == '/')) && (pcVar4[1] == '\0')) || (bVar1)) {
      iVar3 = FUN_005a55b0(filename);
      if (iVar3 != 0) {
        return -1;
      }
      FUN_005a55b0((char *)abStack_124);
      memset(&_Stack_368,0,0x13e);
      _Stack_368.dwFileAttributes = 0x10;
    }
    else {
      hFindFile = FindFirstFileA(filename,&_Stack_368);
      if (hFindFile == (HANDLE)0xffffffff) {
        iVar3 = FUN_005ab46c();
        return iVar3;
      }
      FindClose(hFindFile);
    }
    pcVar4 = (char *)FUN_005aca00(filename);
    if (*pcVar4 == ':') {
      abStack_124[0] = *filename;
    }
    iVar3 = tolower((uint)abStack_124[0]);
    *(int *)file_info = iVar3 + -0x61;
    iVar3 = *(int *)file_info;
    *(int *)file_info = iVar3 + -1;
    *(int *)(file_info + 0x12) = iVar3 + -1;
    *(DWORD *)(file_info + 0x16) = _Stack_368.nFileSizeLow;
    uVar2 = FUN_005aadc0(_Stack_368.dwFileAttributes,_Stack_368.cFileName);
    *(ushort *)(file_info + 8) = uVar2;
    FUN_005aee30(&_Stack_368.ftLastWriteTime,asStack_20,asStack_14);
    uVar6 = FUN_005aef20(asStack_20[0],asStack_14[0]);
    *(uint *)(file_info + 0x1e) = uVar6;
    FUN_005aee30(&_Stack_368.ftCreationTime,&uStack_18,&uStack_1c);
    if (((short)uStack_18 == asStack_20[0]) && ((short)uStack_1c == asStack_14[0])) {
      uVar6 = *(uint *)(file_info + 0x1e);
    }
    else {
      uVar6 = FUN_005aef20(uStack_18 & 0xffff,uStack_1c & 0xffff);
    }
    *(uint *)(file_info + 0x22) = uVar6;
    FUN_005aee30(&_Stack_368.ftLastAccessTime,&uStack_18,&uStack_1c);
    if (((short)uStack_18 == asStack_20[0]) && ((short)uStack_1c == asStack_14[0])) {
      uVar6 = *(uint *)(file_info + 0x1e);
    }
    else {
      uVar6 = FUN_005aef20(uStack_18 & 0xffff,uStack_1c & 0xffff);
    }
    *(uint *)(file_info + 0x1a) = uVar6;
    *(ushort *)(file_info + 0x10) = 0;
    *(ushort *)(file_info + 10) = 1;
    *(int *)(file_info + 0xc) = (int)*(short *)(file_info + 0x10);
    *(int *)(file_info + 4) = (int)*(short *)(file_info + 0x10);
    *(uint *)(file_info + 0x2e) = 0;
    *(DWORD *)(file_info + 0x2a) = _Stack_368.dwFileAttributes;
    *(uint *)(file_info + 0x32) = 0;
    *(ushort *)(file_info + 0x36) = 0;
    file_info[0x38] = (WatcomStat)0x0;
    _strncpy((char *)(file_info + 0x39),_Stack_368.cFileName,0xd);
    iVar3 = 0;
  }
  return iVar3;
}

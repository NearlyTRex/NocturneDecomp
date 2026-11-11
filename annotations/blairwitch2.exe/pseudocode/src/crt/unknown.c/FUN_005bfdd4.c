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
  time_t tVar6;
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
    file_info->_st_dev = iVar3 + -0x61;
    iVar3 = file_info->_st_dev + -1;
    file_info->_st_dev = iVar3;
    file_info->_st_rdev = iVar3;
    file_info->_st_size = local_368.nFileSizeLow;
    uVar2 = FUN_005bfcc0(local_368.dwFileAttributes,local_368.cFileName);
    file_info->_st_mode = uVar2;
    FUN_005c3ec0(&local_368.ftLastWriteTime,local_20,local_14);
    tVar6 = FUN_005c3fb0(local_20[0],local_14[0]);
    file_info->_st_mtime = tVar6;
    FUN_005c3ec0(&local_368.ftCreationTime,&local_18,&local_1c);
    if (((short)local_18 == local_20[0]) && ((short)local_1c == local_14[0])) {
      tVar6 = file_info->_st_mtime;
    }
    else {
      tVar6 = FUN_005c3fb0(local_18 & 0xffff,local_1c & 0xffff);
    }
    file_info->_st_ctime = tVar6;
    FUN_005c3ec0(&local_368.ftLastAccessTime,&local_18,&local_1c);
    if (((short)local_18 == local_20[0]) && ((short)local_1c == local_14[0])) {
      tVar6 = file_info->_st_mtime;
    }
    else {
      tVar6 = FUN_005c3fb0(local_18 & 0xffff,local_1c & 0xffff);
    }
    file_info->_st_atime = tVar6;
    file_info->_st_gid = 0;
    file_info->_st_nlink = 1;
    file_info->_st_uid = (int)file_info->_st_gid;
    file_info->_st_ino = (int)file_info->_st_gid;
    file_info->_st_archivedID = 0;
    file_info->_st_attr = local_368.dwFileAttributes;
    file_info->_st_updatedID = 0;
    file_info->_st_inheritedRightsMask = 0;
    file_info->_st_originatingNameSpace = '\0';
    _strncpy((char *)file_info->_st_name,local_368.cFileName,0xd);
    iVar3 = 0;
  }
  return iVar3;
}

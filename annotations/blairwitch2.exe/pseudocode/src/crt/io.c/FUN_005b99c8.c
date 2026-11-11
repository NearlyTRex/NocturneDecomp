// Name: crt_io.c_FUN_005b99c8
// Address: 005b99c8
// Address Range: [[005b99c8, 005b99cc]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_FUN_005b99c8(char *filename,WatcomStat *file_info)

#include "nocturne.h"

int __cdecl FUN_005b99c8(char *filename,WatcomStat *file_info)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  HANDLE hFindFile;
  time_t tVar6;
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
     (iVar3 = FUN_005c3e70(filename,&DAT_005f1a20), iVar3 != 0)) {
    setErrno(1);
    iVar3 = -1;
  }
  else {
    FUN_005c0f10((char *)abStack_124,0x104);
    pcVar4 = _fullpath(&cStack_228,filename,0x104);
    if ((pcVar4 != (char *)0x0) &&
       ((((((&DAT_0061ed94)[(byte)(cStack_228 + 1)] & 0xc0) != 0 && (cStack_227 == ':')) &&
         (cStack_226 == '\\')) && (cStack_225 == '\0')))) {
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
      FUN_005ba2e0((char *)abStack_124);
      memset(&_Stack_368,0,0x13e);
      _Stack_368.dwFileAttributes = 0x10;
    }
    else {
      hFindFile = FindFirstFileA(filename,&_Stack_368);
      if (hFindFile == (HANDLE)0xffffffff) {
        iVar3 = FUN_005c036c();
        return iVar3;
      }
      FindClose(hFindFile);
    }
    pcVar4 = (char *)FUN_005c0e00(filename);
    if (*pcVar4 == ':') {
      abStack_124[0] = *filename;
    }
    iVar3 = tolower((uint)abStack_124[0]);
    file_info->_st_dev = iVar3 + -0x61;
    iVar3 = file_info->_st_dev + -1;
    file_info->_st_dev = iVar3;
    file_info->_st_rdev = iVar3;
    file_info->_st_size = _Stack_368.nFileSizeLow;
    uVar2 = FUN_005bfcc0(_Stack_368.dwFileAttributes,_Stack_368.cFileName);
    file_info->_st_mode = uVar2;
    FUN_005c3ec0(&_Stack_368.ftLastWriteTime,asStack_20,asStack_14);
    tVar6 = FUN_005c3fb0(asStack_20[0],asStack_14[0]);
    file_info->_st_mtime = tVar6;
    FUN_005c3ec0(&_Stack_368.ftCreationTime,&uStack_18,&uStack_1c);
    if (((short)uStack_18 == asStack_20[0]) && ((short)uStack_1c == asStack_14[0])) {
      tVar6 = file_info->_st_mtime;
    }
    else {
      tVar6 = FUN_005c3fb0(uStack_18 & 0xffff,uStack_1c & 0xffff);
    }
    file_info->_st_ctime = tVar6;
    FUN_005c3ec0(&_Stack_368.ftLastAccessTime,&uStack_18,&uStack_1c);
    if (((short)uStack_18 == asStack_20[0]) && ((short)uStack_1c == asStack_14[0])) {
      tVar6 = file_info->_st_mtime;
    }
    else {
      tVar6 = FUN_005c3fb0(uStack_18 & 0xffff,uStack_1c & 0xffff);
    }
    file_info->_st_atime = tVar6;
    file_info->_st_gid = 0;
    file_info->_st_nlink = 1;
    file_info->_st_uid = (int)file_info->_st_gid;
    file_info->_st_ino = (int)file_info->_st_gid;
    file_info->_st_archivedID = 0;
    file_info->_st_attr = _Stack_368.dwFileAttributes;
    file_info->_st_updatedID = 0;
    file_info->_st_inheritedRightsMask = 0;
    file_info->_st_originatingNameSpace = '\0';
    _strncpy((char *)file_info->_st_name,_Stack_368.cFileName,0xd);
    iVar3 = 0;
  }
  return iVar3;
}

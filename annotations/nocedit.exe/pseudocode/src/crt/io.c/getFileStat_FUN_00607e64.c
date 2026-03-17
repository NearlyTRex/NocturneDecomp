// Name: crt_io.c_getFileStat_FUN_00607e64
// Address: 00607e64
// Address Range: [[00607e64, 0060815f]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_getFileStat_FUN_00607e64(char *filename,_stat *file_info)

#include "nocturne.h"

int __cdecl getFileStat(char *filename,_stat *file_info)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar1;
  char *pcVar4;
  int iVar2;
  HANDLE hFindFile;
  DWORD DVar5;
  uint uVar6;
  time_t tVar7;
  time_t tVar3;
  _WIN32_FIND_DATAA _Stack_368;
  char cStack_228;
  char cStack_227;
  char cStack_226;
  char cStack_225;
  byte abStack_124 [260];
  WORD aWStack_20 [2];
  WORD aWStack_1c [2];
  WORD aWStack_18 [2];
  WORD aWStack_14 [2];
  bool bVar1;
  
  bVar1 = false;
  if ((*filename == '\0') ||
     (pcVar2 = strpbrk(filename,"*?"), pcVar2 != (char *)0x0))
  {
    setErrno(1);
    iVar3 = -1;
  }
  else {
    getcwd((char *)abStack_124,0x104);
    pcVar1 = _fullpath(&cStack_228,filename,0x104);
    if ((pcVar1 != (char *)0x0) &&
       (((((g_CharacterClassificationTable[(byte)(cStack_228 + 1)] & 0xc0) != 0 &&
          (cStack_227 == ':')) && (cStack_226 == '\\')) && (cStack_225 == '\0')))) {
      bVar1 = true;
    }
    pcVar4 = mbtowc_next(filename);
    pcVar1 = filename;
    if (*pcVar4 == ':') {
      pcVar1 = filename + 2;
    }
    if ((((*pcVar1 == '\\') || (*pcVar1 == '/')) && (pcVar1[1] == '\0')) || (bVar1)) {
      iVar2 = chdir(filename);
      if (iVar2 != 0) {
        return -1;
      }
      chdir((char *)abStack_124);
      memset(&_Stack_368,0,0x13e);
      _Stack_368.dwFileAttributes = 0x10;
    }
    else {
      hFindFile = (*g_FindFirstFileAFunc)(filename,&_Stack_368);
      if (hFindFile == (HANDLE)0xffffffff) {
        DVar5 = __set_errno();
        return DVar5;
      }
      (*g_FindCloseFunc)(hFindFile);
    }
    pcVar1 = mbtowc_next(filename);
    if (*pcVar1 == ':') {
      abStack_124[0] = *filename;
    }
    iVar2 = tolower((uint)abStack_124[0]);
    file_info->_st_dev = iVar2 + -0x61;
    iVar2 = file_info->_st_dev + -1;
    file_info->_st_dev = iVar2;
    file_info->_st_rdev = iVar2;
    file_info->_st_size = _Stack_368.nFileSizeLow;
    uVar6 = analyze_file_type
                      (_Stack_368.dwFileAttributes,_Stack_368.cFileName);
    file_info->_st_mode = (ushort)uVar6;
    filetime_to_dos_datetime
              (&_Stack_368.ftLastWriteTime,aWStack_20,aWStack_14);
    tVar7 = dos_datetime_to_time_t(aWStack_20[0],aWStack_14[0]);
    file_info->_st_mtime = tVar7;
    filetime_to_dos_datetime
              (&_Stack_368.ftCreationTime,aWStack_18,aWStack_1c);
    if ((aWStack_18[0] == aWStack_20[0]) && (aWStack_1c[0] == aWStack_14[0])) {
      tVar3 = file_info->_st_mtime;
    }
    else {
      tVar3 = dos_datetime_to_time_t(aWStack_18[0],aWStack_1c[0]);
    }
    file_info->_st_ctime = tVar3;
    filetime_to_dos_datetime
              (&_Stack_368.ftLastAccessTime,aWStack_18,aWStack_1c);
    if ((aWStack_18[0] == aWStack_20[0]) && (aWStack_1c[0] == aWStack_14[0])) {
      tVar3 = file_info->_st_mtime;
    }
    else {
      tVar3 = dos_datetime_to_time_t(aWStack_18[0],aWStack_1c[0]);
    }
    file_info->_st_atime = tVar3;
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

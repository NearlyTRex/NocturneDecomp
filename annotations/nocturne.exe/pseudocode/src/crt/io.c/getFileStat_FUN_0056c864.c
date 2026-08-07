// Name: crt_io.c_getFileStat_FUN_0056c864
// Address: 0056c864
// Address Range: [[0056c864, 0056cb5f]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_getFileStat_FUN_0056c864(char *filename,_stat *file_info)

#include "nocturne.h"

int __cdecl getFileStat(char *filename,_stat *file_info)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  HANDLE hFindFile;
  DWORD DVar5;
  uint uVar6;
  time_t tVar7;
  _WIN32_FIND_DATAA local_368;
  char local_228;
  char local_227;
  char local_226;
  char local_225;
  byte local_124 [260];
  WORD local_20 [2];
  WORD local_1c [2];
  WORD local_18 [2];
  WORD local_14 [2];
  
  bVar1 = false;
  if ((*filename == '\0') ||
     (pcVar2 = strpbrk(filename,"*?"), pcVar2 != (char *)0x0))
  {
    setErrno(1);
    iVar3 = -1;
  }
  else {
    getcwd((char *)local_124,0x104);
    pcVar2 = _fullpath(&local_228,filename,0x104);
    if ((pcVar2 != (char *)0x0) &&
       (((((g_CharacterClassificationTable[(byte)(local_228 + 1)] & 0xc0) != 0 && (local_227 == ':')
          ) && (local_226 == '\\')) && (local_225 == '\0')))) {
      bVar1 = true;
    }
    pcVar4 = mbtowc_next(filename);
    pcVar2 = filename;
    if (*pcVar4 == ':') {
      pcVar2 = filename + 2;
    }
    if ((((*pcVar2 == '\\') || (*pcVar2 == '/')) && (pcVar2[1] == '\0')) || (bVar1)) {
      iVar3 = chdir(filename);
      if (iVar3 != 0) {
        return -1;
      }
      chdir((char *)local_124);
      memset(&local_368,0,0x13e);
      local_368.dwFileAttributes = 0x10;
    }
    else {
      hFindFile = FindFirstFileA(filename,&local_368);
      if (hFindFile == (HANDLE)0xffffffff) {
        DVar5 = __set_errno();
        return DVar5;
      }
      FindClose(hFindFile);
    }
    pcVar2 = mbtowc_next(filename);
    if (*pcVar2 == ':') {
      local_124[0] = *filename;
    }
    iVar3 = tolower((uint)local_124[0]);
    file_info->_st_dev = iVar3 + -0x61;
    iVar3 = file_info->_st_dev + -1;
    file_info->_st_dev = iVar3;
    file_info->_st_rdev = iVar3;
    file_info->_st_size = local_368.nFileSizeLow;
    uVar6 = analyze_file_type(local_368.dwFileAttributes,local_368.cFileName);
    file_info->_st_mode = (ushort)uVar6;
    FUN_005708c0(&local_368.ftLastWriteTime,local_20,local_14);
    tVar7 = dos_datetime_to_time_t(local_20[0],local_14[0]);
    file_info->_st_mtime = tVar7;
    FUN_005708c0(&local_368.ftCreationTime,local_18,local_1c);
    if ((local_18[0] == local_20[0]) && (local_1c[0] == local_14[0])) {
      tVar7 = file_info->_st_mtime;
    }
    else {
      tVar7 = dos_datetime_to_time_t(local_18[0],local_1c[0]);
    }
    file_info->_st_ctime = tVar7;
    FUN_005708c0(&local_368.ftLastAccessTime,local_18,local_1c);
    if ((local_18[0] == local_20[0]) && (local_1c[0] == local_14[0])) {
      tVar7 = file_info->_st_mtime;
    }
    else {
      tVar7 = dos_datetime_to_time_t(local_18[0],local_1c[0]);
    }
    file_info->_st_atime = tVar7;
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

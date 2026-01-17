// Name: crt_io.c_stat_FUN_00607e64
// Address: 00607e64
// Address Range: [[00607e64, 0060815f]]
// Convention: __cdecl
// Signature: int crt_io.c_stat_FUN_00607e64(char * filename, stat * file_info)

#include "nocturne.h"

int __cdecl crt_io_c_stat_FUN_00607e64(char *filename,stat *file_info)

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
     (pcVar2 = crt_string_c_strpbrk_FUN_0060c190(filename,"*?"), pcVar2 != (char *)0x0))
  {
    crt_errno_c_setErrno_FUN_00602790(1);
    iVar3 = -1;
  }
  else {
    crt_io_c_getcwd_FUN_00608d20((char *)local_124,0x104);
    pcVar2 = crt_io_c_realpath_FUN_00601140(&local_228,filename,0x104);
    if ((pcVar2 != (char *)0x0) &&
       (((((g_CharacterClassificationTable[(byte)(local_228 + 1)] & 0xc0U) != 0 &&
          (local_227 == ':')) && (local_226 == '\\')) && (local_225 == '\0')))) {
      bVar1 = true;
    }
    pcVar4 = crt_string_c_mbtowc_next_FUN_00605a70(filename);
    pcVar2 = filename;
    if (*pcVar4 == ':') {
      pcVar2 = filename + 2;
    }
    if ((((*pcVar2 == '\\') || (*pcVar2 == '/')) && (pcVar2[1] == '\0')) || (bVar1)) {
      iVar3 = crt_io_c_chdir_FUN_006012a0(filename);
      if (iVar3 != 0) {
        return -1;
      }
      crt_io_c_chdir_FUN_006012a0((char *)local_124);
      crt_memory_c_memset_FUN_005fde40(&local_368,0,0x13e);
      local_368.dwFileAttributes = 0x10;
    }
    else {
      hFindFile = (*g_FindFirstFileAFunc)(filename,&local_368);
      if (hFindFile == (HANDLE)0xffffffff) {
        DVar5 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return DVar5;
      }
      (*g_FindCloseFunc)(hFindFile);
    }
    pcVar2 = crt_string_c_mbtowc_next_FUN_00605a70(filename);
    if (*pcVar2 == ':') {
      local_124[0] = *filename;
    }
    iVar3 = crt_ctype_c_tolower_FUN_005feb30((uint)local_124[0]);
    file_info->st_dev = iVar3 + -0x61;
    iVar3 = file_info->st_dev + -1;
    file_info->st_dev = iVar3;
    file_info->st_rdev = iVar3;
    file_info->st_size = local_368.nFileSizeLow;
    uVar6 = crt_io_c_analyze_file_type_FUN_00607d50(local_368.dwFileAttributes,local_368.cFileName);
    file_info->st_mode = (ushort)uVar6;
    crt_time_c_filetime_to_dos_datetime_FUN_00609cb0(&local_368.ftLastWriteTime,local_20,local_14);
    tVar7 = crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(local_20[0],local_14[0]);
    file_info->st_mtime = tVar7;
    crt_time_c_filetime_to_dos_datetime_FUN_00609cb0(&local_368.ftCreationTime,local_18,local_1c);
    if ((local_18[0] == local_20[0]) && (local_1c[0] == local_14[0])) {
      tVar7 = file_info->st_mtime;
    }
    else {
      tVar7 = crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(local_18[0],local_1c[0]);
    }
    file_info->st_ctime = tVar7;
    crt_time_c_filetime_to_dos_datetime_FUN_00609cb0(&local_368.ftLastAccessTime,local_18,local_1c);
    if ((local_18[0] == local_20[0]) && (local_1c[0] == local_14[0])) {
      tVar7 = file_info->st_mtime;
    }
    else {
      tVar7 = crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(local_18[0],local_1c[0]);
    }
    file_info->st_atime = tVar7;
    file_info->st_gid = 0;
    file_info->st_nlink = 1;
    file_info->st_uid = (int)file_info->st_gid;
    file_info->st_ino = (int)file_info->st_gid;
    file_info->st_archivedID = 0;
    file_info->st_attr = local_368.dwFileAttributes;
    file_info->st_updatedID = 0;
    file_info->st_inheritedRightsMask = 0;
    file_info->st_originatingNameSpace = '\0';
    crt_string_c_strncpy_FUN_00600f40((char *)file_info->st_name,local_368.cFileName,0xd);
    iVar3 = 0;
  }
  return iVar3;
}

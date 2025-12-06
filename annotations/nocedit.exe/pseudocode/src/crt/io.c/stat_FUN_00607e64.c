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
  BADSPACEBASE *in_ESP;
  WORD in_stack_00000014;
  WORD in_stack_0000001c;
  WORD in_stack_00000020;
  WORD in_stack_00000024;
  WORD in_stack_00000028;
  WORD in_stack_0000002c;
  WORD in_stack_00000030;
  uint in_stack_fffffcc4;
  ulong uStack_320;
  FILETIME FStack_31c;
  char acStack_310 [28];
  char acStack_2f4 [212];
  char acStack_220 [4];
  char cStack_21c;
  char cStack_21b;
  char cStack_21a;
  char cStack_219;
  char acStack_120 [16];
  char acStack_110 [20];
  byte bStack_fc;
  
  bVar1 = false;
  if ((*filename == '\0') ||
     (pcVar2 = crt_string_c_strpbrk_FUN_0060c190(filename,"*?"), pcVar2 != (char *)0x0))
  {
    crt_errno_c_setErrno_FUN_00602790(1);
    iVar3 = -1;
  }
  else {
    crt_io_c_getcwd_FUN_00608d20(acStack_120,0x104);
    pcVar2 = crt_io_c_realpath_FUN_00601140(acStack_220,filename,0x104);
    if ((pcVar2 != (char *)0x0) &&
       (((((g_CharacterClassificationTable[(byte)(cStack_21c + 1)] & 0xc0U) != 0 &&
          (cStack_21b == ':')) && (cStack_21a == '\\')) && (cStack_219 == '\0')))) {
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
      crt_io_c_chdir_FUN_006012a0(acStack_110);
      crt_memory_c_memset_FUN_005fde40(&stack0xfffffcb8,0,0x13e);
    }
    else {
      hFindFile = (*PTR_FindFirstFileA_0061154c)(filename,(LPWIN32_FIND_DATAA)&stack0xfffffca8);
      if (hFindFile == (HANDLE)0xffffffff) {
        DVar5 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return DVar5;
      }
      (*PTR_FindClose_00611548)(hFindFile);
    }
    pcVar2 = crt_string_c_mbtowc_next_FUN_00605a70(filename);
    if (*pcVar2 == ':') {
      bStack_fc = *filename;
    }
    iVar3 = crt_ctype_c_tolower_FUN_005feb30((uint)bStack_fc);
    file_info->st_dev = iVar3 + -0x61;
    iVar3 = file_info->st_dev + -1;
    file_info->st_dev = iVar3;
    file_info->st_rdev = iVar3;
    file_info->st_size = FStack_31c.dwLowDateTime;
    uVar6 = crt_io_c_analyze_file_type_FUN_00607d50(in_stack_fffffcc4,acStack_310);
    file_info->st_mode = (ushort)uVar6;
    crt_time_c_filetime_to_dos_datetime_FUN_00609cb0
              ((FILETIME *)&stack0xfffffcdc,(WORD *)&stack0x00000010,&stack0x0000001c);
    tVar7 = crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(in_stack_00000014,in_stack_00000020);
    file_info->st_mtime = tVar7;
    crt_time_c_filetime_to_dos_datetime_FUN_00609cb0
              ((FILETIME *)&stack0xfffffcd4,&stack0x00000020,&stack0x0000001c);
    if ((in_stack_00000024 == in_stack_0000001c) && (in_stack_00000020 == in_stack_00000028)) {
      tVar7 = file_info->st_mtime;
    }
    else {
      tVar7 = crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(in_stack_00000024,in_stack_00000020);
    }
    file_info->st_ctime = tVar7;
    crt_time_c_filetime_to_dos_datetime_FUN_00609cb0(&FStack_31c,&stack0x00000028,&stack0x00000024);
    if ((in_stack_0000002c == in_stack_00000024) && (in_stack_00000028 == in_stack_00000030)) {
      tVar7 = file_info->st_mtime;
    }
    else {
      tVar7 = crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(in_stack_0000002c,in_stack_00000028);
    }
    file_info->st_atime = tVar7;
    file_info->st_gid = 0;
    file_info->st_nlink = 1;
    file_info->st_uid = (int)file_info->st_gid;
    file_info->st_ino = (int)file_info->st_gid;
    file_info->st_archivedID = 0;
    file_info->st_attr = uStack_320;
    file_info->st_updatedID = 0;
    file_info->st_inheritedRightsMask = 0;
    file_info->st_originatingNameSpace = '\0';
    crt_string_c_strncpy_FUN_00600f40((char *)file_info->st_name,acStack_2f4,0xd);
    iVar3 = 0;
  }
  return iVar3;
}

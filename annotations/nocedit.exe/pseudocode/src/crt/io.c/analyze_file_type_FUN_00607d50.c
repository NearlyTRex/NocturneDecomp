// Name: crt_io.c_analyze_file_type_FUN_00607d50
// Address: 00607d50
// Address Range: [[00607d50, 00607e61]]
// Convention: __watcallStack
// Signature: uint __watcallStack crt_io_c_analyze_file_type_FUN_00607d50(uint open_flags,char *filename)

#include "nocturne.h"

uint __watcallStack crt_io_c_analyze_file_type_FUN_00607d50(uint open_flags,char *filename)

{
  uint uVar1;
  int iVar2;
  HANDLE hFile;
  DWORD DVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  if (g_WindowsPlatformVersion < 0x8000) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x40;
  }
  if ((open_flags & uVar1) != 0) {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(filename,"con");
    pcVar5 = filename;
    if (iVar2 == 0) {
      pcVar5 = "conin$";
    }
    hFile = (*g_CreateFileAFunc)(pcVar5,0,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      if ((0x7fff < g_WindowsPlatformVersion) || (DVar3 = (*g_GetLastErrorFunc)(), DVar3 == 5)) {
        uVar4 = 0x2000;
      }
    }
    else {
      DVar3 = (*g_GetFileTypeFunc)(hFile);
      if (DVar3 == 2) {
        uVar4 = 0x2000;
      }
      else if (DVar3 == 3) {
        uVar4 = 0x1000;
      }
      (*g_CloseHandleFunc)(hFile);
    }
  }
  if ((open_flags & 0x10) == 0) {
    uVar1 = uVar4;
    if (((uVar4 & 0x2000) == 0) && ((uVar4 & 0x1000) == 0)) {
      uVar1 = uVar4 | 0x8000;
      do {
        pcVar5 = filename;
        if (*filename == '.') goto LAB_00607e31;
        if (*filename == '\0') break;
        pcVar5 = filename + 1;
        if (*pcVar5 == '.') goto LAB_00607e31;
        filename = filename + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_00607e31:
      if ((pcVar5 != (char *)0x0) &&
         (iVar2 = crt_string_c_strcmp_FUN_005fef20(pcVar5 + 1,"EXE"), iVar2 == 0)) {
        uVar1 = uVar4 | 0x8049;
      }
    }
  }
  else {
    uVar1 = 0x4049;
  }
  uVar4 = uVar1 | 0x124;
  if ((open_flags & 1) == 0) {
    uVar4 = uVar1 | 0x1b6;
  }
  return uVar4;
}

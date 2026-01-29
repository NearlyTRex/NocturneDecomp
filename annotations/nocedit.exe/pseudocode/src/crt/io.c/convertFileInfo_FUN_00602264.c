// Name: crt_io.c_convertFileInfo_FUN_00602264
// Address: 00602264
// Address Range: [[00602264, 006022f3]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_io_c_convertFileInfo_FUN_00602264(LPWIN32_FIND_DATAA win32_data,_find_t *dos_info)

#include "nocturne.h"

void __watcallStack
convertFileInfo(LPWIN32_FIND_DATAA win32_data,_find_t *dos_info)

{
  char cVar1;
  time_t tVar2;
  CHAR *pCVar3;
  char *pcVar4;
  
  dos_info->attrib = '\0';
  dos_info->padding_0x1[0] = '\0';
  dos_info->padding_0x1[1] = '\0';
  dos_info->padding_0x1[2] = '\0';
  if ((win32_data->dwFileAttributes & 0x20) != 0) {
    dos_info->attrib = dos_info->attrib | 0x20;
  }
  if ((win32_data->dwFileAttributes & 0x10) != 0) {
    dos_info->attrib = dos_info->attrib | 0x10;
  }
  if ((win32_data->dwFileAttributes & 2) != 0) {
    dos_info->attrib = dos_info->attrib | 2;
  }
  if ((win32_data->dwFileAttributes & 1) != 0) {
    dos_info->attrib = dos_info->attrib | 1;
  }
  if ((win32_data->dwFileAttributes & 4) != 0) {
    dos_info->attrib = dos_info->attrib | 4;
  }
  tVar2 = filetime_to_time_t(&win32_data->ftCreationTime);
  dos_info->wr_time = tVar2;
  tVar2 = filetime_to_time_t(&win32_data->ftLastAccessTime);
  dos_info->cr_time = tVar2;
  pcVar4 = dos_info->name;
  tVar2 = filetime_to_time_t(&win32_data->ftLastWriteTime);
  dos_info->ac_time = tVar2;
  pCVar3 = win32_data->cFileName;
  dos_info->size = win32_data->nFileSizeLow;
  do {
    cVar1 = *pCVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pCVar3[1];
    pCVar3 = pCVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}

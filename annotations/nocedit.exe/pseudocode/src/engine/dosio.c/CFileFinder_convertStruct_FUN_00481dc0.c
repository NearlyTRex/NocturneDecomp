// Name: engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0
// Address: 00481dc0
// Address Range: [[00481dc0, 00481f15]]
// Convention: __cdecl
// Signature: void engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0(CFileFinder * finder, LPWIN32_FIND_DATAA find_data)

#include "nocturne.h"

void __cdecl
engine_dosio_c_CFileFinder_convertStruct_FUN_00481dc0
          (CFileFinder *finder,LPWIN32_FIND_DATAA find_data)

{
  BOOL BVar1;
  uint uVar2;
  tm tStack_4c;
  _SYSTEMTIME _Stack_28;
  _FILETIME local_18;
  
  crt_memory_c_memset_FUN_005fde40(finder,0,0x100);
  crt_string_c_strncpy_FUN_00600f40(finder->filename,find_data->cFileName,0xff);
  finder->file_size = 0;
  if ((find_data->dwFileAttributes & 0x20) != 0) {
    *(byte *)&finder->file_size = (byte)finder->file_size | 1;
  }
  if ((find_data->dwFileAttributes & 2) != 0) {
    *(byte *)&finder->file_size = (byte)finder->file_size | 2;
  }
  if ((find_data->dwFileAttributes & 0x10) != 0) {
    *(byte *)&finder->file_size = (byte)finder->file_size | 4;
  }
  if ((find_data->dwFileAttributes & 1) != 0) {
    *(byte *)&finder->file_size = (byte)finder->file_size | 8;
  }
  if ((find_data->nFileSizeHigh != 0) || (0x7fffffff < find_data->nFileSizeLow)) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 0x2a7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFileFinder::convertStruct - file too big!");
  }
  finder->timestamp = find_data->nFileSizeLow;
  finder->attributes = 0;
  BVar1 = (*PTR_FileTimeToLocalFileTime_00611540)(&find_data->ftLastWriteTime,&local_18);
  if (BVar1 != 0) {
    BVar1 = (*PTR_FileTimeToSystemTime_00611544)(&local_18,&_Stack_28);
    if (BVar1 != 0) {
      tStack_4c.tm_sec = (int)_Stack_28.wSecond;
      tStack_4c.tm_min = (int)_Stack_28.wMinute;
      tStack_4c.tm_hour = (int)_Stack_28.wHour;
      tStack_4c.tm_mday = (int)_Stack_28.wDay;
      tStack_4c.tm_mon = _Stack_28.wMonth - 1;
      tStack_4c.tm_year = _Stack_28.wYear - 0x76c;
      tStack_4c.tm_isdst = 0;
      uVar2 = crt_time_c_mktime_FUN_00600f80(&tStack_4c);
      finder->attributes = uVar2;
      return;
    }
  }
  return;
}

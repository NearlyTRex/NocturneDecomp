// Name: engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0
// Address: 00481dc0
// Address Range: [[00481dc0, 00481f15]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_c_CFileFinder_convertStruct_FUN_00481dc0(CFileFinder *finder,LPWIN32_FIND_DATAA find_data)

#include "nocturne.h"

void __cdecl engine_dosio_c_CFileFinder_convertStruct_FUN_00481dc0(CFileFinder *finder,LPWIN32_FIND_DATAA find_data)

{
  BOOL BVar1;
  BOOL BVar2;
  uint uVar2;
  _tm _Stack_4c;
  _SYSTEMTIME _Stack_28;
  _FILETIME local_18;
  
  memset(finder,0,0x100);
  _strncpy(finder->filename,find_data->cFileName,0xff);
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
  BVar1 = (*g_FileTimeToLocalFileTimeFunc)(&find_data->ftLastWriteTime,&local_18);
  if (BVar1 != 0) {
    BVar2 = (*g_FileTimeToSystemTimeFunc)(&local_18,&_Stack_28);
    if (BVar2 != 0) {
      _Stack_4c.tm_sec = (int)_Stack_28.wSecond;
      _Stack_4c.tm_min = (int)_Stack_28.wMinute;
      _Stack_4c.tm_hour = (int)_Stack_28.wHour;
      _Stack_4c.tm_mday = (int)_Stack_28.wDay;
      _Stack_4c.tm_mon = _Stack_28.wMonth - 1;
      _Stack_4c.tm_year = _Stack_28.wYear - 0x76c;
      _Stack_4c.tm_isdst = 0;
      uVar2 = _mktime(&_Stack_4c);
      finder->attributes = uVar2;
      return;
    }
  }
  return;
}

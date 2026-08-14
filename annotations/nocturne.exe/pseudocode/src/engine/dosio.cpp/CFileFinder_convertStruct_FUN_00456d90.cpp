// Name: engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90
// Address: 00456d90
// Address Range: [[00456d90, 00456ee5]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00456d90(CFileFinder *this_ptr,LPWIN32_FIND_DATAA find_data)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00456d90(CFileFinder *this_ptr,LPWIN32_FIND_DATAA find_data)

{
  BOOL BVar1;
  uint uVar2;
  _tm local_4c;
  _SYSTEMTIME local_28;
  _FILETIME local_18;
  
  memset(this_ptr,0,0x100);
  _strncpy(this_ptr->filename,find_data->cFileName,0xff);
  this_ptr->attributes = 0;
  if ((find_data->dwFileAttributes & 0x20) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 1;
  }
  if ((find_data->dwFileAttributes & 2) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 2;
  }
  if ((find_data->dwFileAttributes & 0x10) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 4;
  }
  if ((find_data->dwFileAttributes & 1) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 8;
  }
  if ((find_data->nFileSizeHigh != 0) || (0x7fffffff < find_data->nFileSizeLow)) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 550;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CFileFinder::convertStruct - file too big!");
  }
  this_ptr->file_size = find_data->nFileSizeLow;
  this_ptr->timestamp = 0;
  BVar1 = FileTimeToLocalFileTime((FILETIME *)&find_data->ftLastWriteTime,&local_18);
  if (BVar1 != 0) {
    BVar1 = FileTimeToSystemTime(&local_18,&local_28);
    if (BVar1 != 0) {
      local_4c.tm_sec = (int)local_28.wSecond;
      local_4c.tm_min = (int)local_28.wMinute;
      local_4c.tm_hour = (int)local_28.wHour;
      local_4c.tm_mday = (int)local_28.wDay;
      local_4c.tm_mon = local_28.wMonth - 1;
      local_4c.tm_year = local_28.wYear - 0x76c;
      local_4c.tm_isdst = 0;
      uVar2 = _mktime(&local_4c);
      this_ptr->timestamp = uVar2;
      return;
    }
  }
  return;
}

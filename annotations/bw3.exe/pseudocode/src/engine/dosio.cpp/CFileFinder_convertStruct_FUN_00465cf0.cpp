// Name: engine_dosio.cpp_CFileFinder_convertStruct_FUN_00465cf0
// Address: 00465cf0
// Address Range: [[00465cf0, 00465e47]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00465cf0(CFileFinder *this_ptr,LPWIN32_FIND_DATAA find_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00465cf0(CFileFinder *this_ptr,LPWIN32_FIND_DATAA find_data)

{
  BOOL BVar1;
  uint uVar2;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_2c;
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
    _DAT_01d71de0 = "..\\engine\\dosio.c";
    _DAT_01d71de4 = 0x2ff;
    core_main_c_FUN_004e4330("CFileFinder::convertStruct - file too big!");
  }
  this_ptr->file_size = find_data->nFileSizeLow;
  this_ptr->timestamp = 0;
  BVar1 = FileTimeToLocalFileTime(&find_data->ftLastWriteTime,&local_18);
  if (BVar1 != 0) {
    BVar1 = FileTimeToSystemTime(&local_18,&local_28);
    if (BVar1 != 0) {
      local_4c = (uint)local_28.wSecond;
      local_48 = (uint)local_28.wMinute;
      local_44 = (uint)local_28.wHour;
      local_40 = (uint)local_28.wDay;
      local_3c = local_28.wMonth - 1;
      local_38 = local_28.wYear - 0x76c;
      local_2c = 0xffffffff;
      uVar2 = _mktime(&local_4c);
      this_ptr->timestamp = uVar2;
      return;
    }
  }
  return;
}

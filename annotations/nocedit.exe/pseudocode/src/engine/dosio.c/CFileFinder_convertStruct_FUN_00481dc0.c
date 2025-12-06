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
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  ushort unaff_retaddr;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int local_18;
  int iStack_14;
  
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
  BVar1 = (*PTR_FileTimeToLocalFileTime_00611540)
                    (&find_data->ftLastWriteTime,(LPFILETIME)&stack0xfffffff4);
  if (BVar1 != 0) {
    BVar1 = (*PTR_FileTimeToSystemTime_00611544)
                      ((FILETIME *)&stack0x00000000,(LPSYSTEMTIME)&stack0xfffffff0);
    if (BVar1 != 0) {
      uStack_28 = (uint)find_data & 0xffff;
      uStack_24 = (uint)finder >> 0x10;
      uStack_20 = (uint)finder & 0xffff;
      uStack_1c = (uint)unaff_retaddr;
      local_18 = (unaff_EBX >> 0x10) - 1;
      iStack_14 = (unaff_EBX & 0xffff) - 0x76c;
      uVar2 = crt_time_c_mktime_FUN_00600f80((tm *)&uStack_28);
      finder->attributes = uVar2;
      return;
    }
  }
  return;
}

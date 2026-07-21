// Name: engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90
// Address: 00456d90
// Address Range: [[00456d90, 00456ee5]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00456d90(int param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00456d90(int param_1,byte *param_2)

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
  
  memset(param_1,0,0x100);
  _strncpy(param_1,param_2 + 0x2c,0xff);
  *(uint *)(param_1 + 0x100) = 0;
  if ((*param_2 & 0x20) != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 1;
  }
  if ((*param_2 & 2) != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 2;
  }
  if ((*param_2 & 0x10) != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 4;
  }
  if ((*param_2 & 1) != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 8;
  }
  if ((*(int *)(param_2 + 0x1c) != 0) || (0x7fffffff < *(uint *)(param_2 + 0x20))) {
    _DAT_01cc4800 = "..\\engine\\dosio.c";
    _DAT_01cc4804 = 0x226;
    FUN_004c8440("CFileFinder::convertStruct - file too big!");
  }
  *(uint *)(param_1 + 0x104) = *(uint *)(param_2 + 0x20);
  *(uint *)(param_1 + 0x108) = 0;
  BVar1 = FileTimeToLocalFileTime((FILETIME *)(param_2 + 0x14),&local_18);
  if (BVar1 != 0) {
    BVar1 = FileTimeToSystemTime(&local_18,&local_28);
    if (BVar1 != 0) {
      local_4c = (uint)local_28.wSecond;
      local_48 = (uint)local_28.wMinute;
      local_44 = (uint)local_28.wHour;
      local_40 = (uint)local_28.wDay;
      local_3c = local_28.wMonth - 1;
      local_38 = local_28.wYear - 0x76c;
      local_2c = 0;
      uVar2 = _mktime(&local_4c);
      *(uint *)(param_1 + 0x108) = uVar2;
      return;
    }
  }
  return;
}

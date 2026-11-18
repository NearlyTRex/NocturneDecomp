// Name: engine_dosio.cpp_CFileFinder_convertStruct_FUN_00460fa0
// Address: 00460fa0
// Address Range: [[00460fa0, 0046106c]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00460fa0(CFileFinder *this_ptr,byte *find_data)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00460fa0(CFileFinder *this_ptr,byte *find_data)

{
  longlong lVar1;
  
  memset(this_ptr,0,0x100);
  _strncpy(this_ptr->filename,(char *)(find_data + 0x2c),0xff);
  this_ptr->attributes = 0;
  if ((*find_data & 0x20) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 1;
  }
  if ((*find_data & 2) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 2;
  }
  if ((*find_data & 0x10) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 4;
  }
  if ((*find_data & 1) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 8;
  }
  if ((*(int *)(find_data + 0x1c) != 0) || (0x7fffffff < *(uint *)(find_data + 0x20))) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\dosio.c";
    g_INT_01d046a4 = 0x2ff;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CFileFinder::convertStruct - file too big!");
  }
  this_ptr->file_size = *(uint *)(find_data + 0x20);
  lVar1 = __I8D(*(longlong *)(find_data + 0x14),10000000);
  this_ptr->timestamp = (int)lVar1 + 0x49ef7d10;
  return;
}

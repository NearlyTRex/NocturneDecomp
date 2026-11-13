// Name: engine_dosio.cpp_CFileFinder_convertStruct_FUN_004794b0
// Address: 004794b0
// Address Range: [[004794b0, 0047957c]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_004794b0(CFileFinder *this_ptr,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_004794b0(CFileFinder *this_ptr,byte *param_2)

{
  int iVar1;
  
  memset(this_ptr,0,0x100);
  _strncpy(this_ptr->filename,(char *)(param_2 + 0x2c),0xff);
  this_ptr->attributes = 0;
  if ((*param_2 & 0x20) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 1;
  }
  if ((*param_2 & 2) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 2;
  }
  if ((*param_2 & 0x10) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 4;
  }
  if ((*param_2 & 1) != 0) {
    *(byte *)&this_ptr->attributes = (byte)this_ptr->attributes | 8;
  }
  if ((*(int *)(param_2 + 0x1c) != 0) || (0x7fffffff < *(uint *)(param_2 + 0x20))) {
    _DAT_01d1d400 = "..\\engine\\dosio.c";
    _DAT_01d1d404 = 0x2ff;
    core_main_c_FUN_005030e0("CFileFinder::convertStruct - file too big!");
  }
  this_ptr->file_size = *(uint *)(param_2 + 0x20);
  iVar1 = FUN_005c2106();
  this_ptr->timestamp = iVar1 + 0x49ef7d10;
  return;
}

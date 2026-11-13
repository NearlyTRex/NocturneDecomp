// Name: support_trstream.cpp_CInStreamFile_openHandle_FUN_00574080
// Address: 00574080
// Address Range: [[00574080, 00574110]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_00574080(CInStreamFile *this_ptr,HANDLE handle,int file_size,int file_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_00574080(CInStreamFile *this_ptr,HANDLE handle,int file_size,int file_offset)

{
  int iVar1;
  
  _DAT_01d71de0 = "..\\support\\trstream.cpp";
  _DAT_01d71de4 = 0x714;
  core_main_c_FUN_004e4330("Hey, we're using windows handles for low-level file I/O!");
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->file_handle = handle;
  this_ptr->file_size = file_size;
  this_ptr->file_offset = file_offset;
  _fseek(this_ptr->file_handle,file_offset + this_ptr->position,0);
  iVar1 = (**(code **)((int)(this_ptr->base).vtable + 0x1c))(this_ptr);
  if (iVar1 != 0) {
    support_trstream_cpp_CInStreamFile_allocBuffer_FUN_00573e00(this_ptr);
    return 1;
  }
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  return 0;
}

// Name: support_trstream.cpp_CInStreamFile_openHandle_FUN_0057d450
// Address: 0057d450
// Address Range: [[0057d450, 0057d4e0]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_0057d450(CInStreamFile *this_ptr,HANDLE handle,int file_size,int file_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_0057d450(CInStreamFile *this_ptr,HANDLE handle,int file_size,int file_offset)

{
  int iVar1;
  
  _DAT_01d046a0 = "..\\support\\trstream.cpp";
  _DAT_01d046a4 = 0x6e5;
  core_main_c_FUN_004e4500("Hey, we're using windows handles for low-level file I/O!");
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->file_handle = handle;
  this_ptr->file_size = file_size;
  this_ptr->file_offset = file_offset;
  _fseek(this_ptr->file_handle,file_offset + this_ptr->position,0);
  iVar1 = (**(code **)((int)(this_ptr->base).vtable + 0x1c))(this_ptr);
  if (iVar1 != 0) {
    support_trstream_cpp_CInStreamFile_allocBuffer_FUN_0057d1d0(this_ptr);
    return 1;
  }
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  return 0;
}

// Name: support_trstream.cpp_CInStreamFile_openHandle_FUN_005a1090
// Address: 005a1090
// Address Range: [[005a1090, 005a1120]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_005a1090(CInStreamFile *this_ptr,HANDLE handle,int file_size,int file_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_005a1090(CInStreamFile *this_ptr,HANDLE handle,int file_size,int file_offset)

{
  int iVar1;
  
  _DAT_01d1d400 = "..\\support\\trstream.cpp";
  _DAT_01d1d404 = 0x714;
  core_main_c_FUN_005030e0("Hey, we're using windows handles for low-level file I/O!");
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->file_handle = handle;
  this_ptr->file_size = file_size;
  this_ptr->file_offset = file_offset;
  _fseek(this_ptr->file_handle,file_offset + this_ptr->position,0);
  iVar1 = (**(code **)((int)(this_ptr->base).vtable + 0x1c))(this_ptr);
  if (iVar1 != 0) {
    support_trstream_cpp_CInStreamFile_allocBuffer_FUN_005a0e10(this_ptr);
    return 1;
  }
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  return 0;
}

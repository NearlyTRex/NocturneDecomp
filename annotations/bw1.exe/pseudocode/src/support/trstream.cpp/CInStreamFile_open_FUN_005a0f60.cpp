// Name: support_trstream.cpp_CInStreamFile_open_FUN_005a0f60
// Address: 005a0f60
// Address Range: [[005a0f60, 005a0fcd]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_open_FUN_005a0f60(CInStreamFile *this_ptr,char *path,int binary_mode)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_open_FUN_005a0f60(CInStreamFile *this_ptr,char *path,int binary_mode)

{
  HANDLE hFile;
  DWORD DVar1;
  
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  hFile = CreateFileA(path,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  this_ptr->file_handle = hFile;
  if (hFile == (HANDLE)0x0) {
    return 0;
  }
  DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
  this_ptr->file_size = DVar1;
  if (-1 < (int)DVar1) {
    support_trstream_cpp_CInStreamFile_allocBuffer_FUN_005a0e10(this_ptr);
    this_ptr->binary_mode = binary_mode;
    return 1;
  }
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  return 0;
}

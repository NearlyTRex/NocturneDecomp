// Name: support_trstream.cpp_CInStreamFile_open_FUN_0057d320
// Address: 0057d320
// Address Range: [[0057d320, 0057d386]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_open_FUN_0057d320(CInStreamFile *this_ptr,char *path)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_open_FUN_0057d320(CInStreamFile *this_ptr,char *path)

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
    support_trstream_cpp_CInStreamFile_allocBuffer_FUN_0057d1d0(this_ptr);
    return 1;
  }
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  return 0;
}

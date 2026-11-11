// Name: support_trstream.cpp_CInStreamFile_open_FUN_00573f50
// Address: 00573f50
// Address Range: [[00573f50, 00573fbd]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_open_FUN_00573f50(CInStreamFile *this_ptr,LPCSTR param_2,int param_3)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_open_FUN_00573f50(CInStreamFile *this_ptr,LPCSTR param_2,int param_3)

{
  HANDLE hFile;
  DWORD DVar1;
  
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  this_ptr->file_handle = hFile;
  if (hFile == (HANDLE)0x0) {
    return 0;
  }
  DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
  this_ptr->file_size = DVar1;
  if (-1 < (int)DVar1) {
    support_trstream_cpp_FUN_00573e00(this_ptr);
    this_ptr->binary_mode = param_3;
    return 1;
  }
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  return 0;
}

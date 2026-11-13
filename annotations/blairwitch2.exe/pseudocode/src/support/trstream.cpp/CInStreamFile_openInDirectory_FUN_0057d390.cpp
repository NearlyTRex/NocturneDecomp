// Name: support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
// Address: 0057d390
// Address Range: [[0057d390, 0057d444]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile *this_ptr,char *directory,char *filename)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile *this_ptr,char *directory,char *filename)

{
  int iVar1;
  HANDLE pvVar2;
  SFoundFileInfo SStack_218;
  
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  engine_dosio_cpp_FUN_00460910(&SStack_218,directory,filename);
  iVar1 = engine_dosio_cpp_findFile_FUN_00460980(&SStack_218);
  if (iVar1 != 0) {
    this_ptr->file_size = SStack_218.file_size;
    this_ptr->file_offset = SStack_218.file_offset;
    pvVar2 = CreateFileA(SStack_218.target_path,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                         (HANDLE)0x0);
    this_ptr->file_handle = pvVar2;
  }
  iVar1 = (**(code **)((int)(this_ptr->base).vtable + 0x1c))(this_ptr);
  if (iVar1 != 0) {
    support_trstream_cpp_CInStreamFile_allocBuffer_FUN_0057d1d0(this_ptr);
    return 1;
  }
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  return 0;
}

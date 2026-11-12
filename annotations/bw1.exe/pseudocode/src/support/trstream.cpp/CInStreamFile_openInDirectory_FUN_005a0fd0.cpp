// Name: support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
// Address: 005a0fd0
// Address Range: [[005a0fd0, 005a108e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile *this_ptr,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile *this_ptr,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  HANDLE pvVar2;
  SFoundFileInfo SStack_218;
  
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  engine_dosio_cpp_FUN_00478e20(&SStack_218,param_2,param_3);
  iVar1 = engine_dosio_cpp_findFile_FUN_00478e90(&SStack_218);
  if (iVar1 != 0) {
    this_ptr->file_size = SStack_218.file_size;
    this_ptr->file_offset = SStack_218.file_offset;
    pvVar2 = CreateFileA(SStack_218.target_path,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                         (HANDLE)0x0);
    this_ptr->file_handle = pvVar2;
  }
  iVar1 = (**(code **)((int)this_ptr->vtable + 0x1c))(this_ptr);
  if (iVar1 != 0) {
    support_trstream_cpp_CInStreamFile_allocBuffer_FUN_005a0e10(this_ptr);
    this_ptr->binary_mode = param_4;
    return 1;
  }
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  return 0;
}

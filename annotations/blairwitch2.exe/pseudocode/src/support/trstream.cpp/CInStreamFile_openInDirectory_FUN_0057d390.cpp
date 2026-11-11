// Name: support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
// Address: 0057d390
// Address Range: [[0057d390, 0057d444]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile *this_ptr,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile *this_ptr,uint param_2,uint param_3)

{
  int iVar1;
  HANDLE pvVar2;
  byte auStack_218 [256];
  CHAR aCStack_118 [256];
  int iStack_18;
  int iStack_14;
  
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  engine_dosio_cpp_FUN_00460910(auStack_218,param_2,param_3);
  iVar1 = engine_dosio_cpp_findFile_FUN_00460980(auStack_218);
  if (iVar1 != 0) {
    this_ptr->file_size = iStack_14;
    this_ptr->file_offset = iStack_18;
    pvVar2 = CreateFileA(aCStack_118,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    this_ptr->file_handle = pvVar2;
  }
  iVar1 = (**(code **)((int)this_ptr->vtable + 0x1c))(this_ptr);
  if (iVar1 != 0) {
    support_trstream_cpp_FUN_0057d1d0(this_ptr);
    return 1;
  }
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  return 0;
}

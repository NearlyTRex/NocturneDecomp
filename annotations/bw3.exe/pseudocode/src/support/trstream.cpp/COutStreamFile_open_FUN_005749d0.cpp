// Name: support_trstream.cpp_COutStreamFile_open_FUN_005749d0
// Address: 005749d0
// Address Range: [[005749d0, 00574a0a]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamFile_open_FUN_005749d0(COutStreamFile *this_ptr,char *path,char *mode)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamFile_open_FUN_005749d0(COutStreamFile *this_ptr,char *path,char *mode)

{
  _FILE *p_Var1;
  
  (**(code **)((int)(this_ptr->base).vtable + 0x18))(this_ptr);
  p_Var1 = _fopen(path,mode);
  this_ptr->file = p_Var1;
  if (p_Var1 != (_FILE *)0x0) {
    return 1;
  }
  (**(code **)((int)(this_ptr->base).vtable + 0x18))(this_ptr);
  return 0;
}

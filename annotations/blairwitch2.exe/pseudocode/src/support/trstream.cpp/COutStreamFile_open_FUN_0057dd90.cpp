// Name: support_trstream.cpp_COutStreamFile_open_FUN_0057dd90
// Address: 0057dd90
// Address Range: [[0057dd90, 0057ddca]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamFile_open_FUN_0057dd90(COutStreamFile *this_ptr,char *path,char *mode)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamFile_open_FUN_0057dd90(COutStreamFile *this_ptr,char *path,char *mode)

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

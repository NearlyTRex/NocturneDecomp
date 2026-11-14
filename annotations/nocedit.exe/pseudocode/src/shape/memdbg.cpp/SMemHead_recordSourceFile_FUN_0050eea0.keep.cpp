// Name: shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
// Address: 0050eea0
// MANUAL RECONSTRUCTION
// Address Range: [[0050eea0, 0050eee4]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead *this_ptr,char *source_filename)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead *this_ptr,char *source_filename)

{
  if (source_filename != (char *)0x0) {
    splitpath(source_filename,(char *)0x0,(char *)0x0,this_ptr->source_file,(char *)0x0);
    return;
  }
  strcpy(this_ptr->source_file,"(unknown)");
  return;
}

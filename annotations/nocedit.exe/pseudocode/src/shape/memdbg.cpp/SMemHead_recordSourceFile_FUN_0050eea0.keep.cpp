// Name: shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
// Address: 0050eea0
// MANUAL RECONSTRUCTION
// Address Range: [[0050eea0, 0050eee4]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead *header,char *source_filename)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead *header,char *source_filename)

{
  if (source_filename != (char *)0x0) {
    splitpath(source_filename,(char *)0x0,(char *)0x0,header->source_file,(char *)0x0);
    return;
  }
  strcpy(header->source_file,"(unknown)");
  return;
}

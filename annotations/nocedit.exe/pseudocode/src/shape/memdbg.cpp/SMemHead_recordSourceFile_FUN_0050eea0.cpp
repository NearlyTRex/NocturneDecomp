// Name: shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
// Address: 0050eea0
// Address Range: [[0050eea0, 0050eee4]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead *header,char *source_filename)

#include "nocturne.h"

void __cdecl
shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead *header,char *source_filename)

{
  char cVar1;
  char *pcVar2;
  char *fname;
  
  fname = header->source_file;
  if (source_filename != (char *)0x0) {
    splitpath(source_filename,(char *)0x0,(char *)0x0,fname,(char *)0x0);
    return;
  }
  pcVar2 = "(unknown)";
  do {
    cVar1 = *pcVar2;
    *fname = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    fname[1] = cVar1;
    fname = fname + 2;
  } while (cVar1 != '\0');
  return;
}

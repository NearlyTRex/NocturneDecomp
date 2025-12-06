// Name: engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0
// Address: 004bc9f0
// Address Range: [[004bc9f0, 004bca4d]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0(char * filename, FILE * * raw_file, FILE * * act_file)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_writeArtFileEntries_FUN_004bc9f0(char *filename,FILE **raw_file,FILE **act_file)

{
  BADSPACEBASE *in_ESP;
  
  engine_dosio_c_splitPath_FUN_00481f20
            ((char *)raw_file,(char *)0x0,(char *)0x0,&stack0xfffffefc,(char *)0x0);
  crt_stdio_c_fprintf_FUN_005fe6d0(*raw_file,"ART\\%s.RAW\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(*act_file,"ART\\%s.ACT\n");
  return;
}

// Name: engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0
// Address: 004bc9f0
// Address Range: [[004bc9f0, 004bca4d]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_writeArtFileEntries_FUN_004bc9f0(char *filename,_FILE **raw_file,_FILE **act_file)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_writeArtFileEntries_FUN_004bc9f0(char *filename,_FILE **raw_file,_FILE **act_file)

{
  char local_104 [256];
  
  engine_dosio_c_splitPath_FUN_00481f20
            ((char *)raw_file,(char *)0x0,(char *)0x0,local_104,(char *)0x0);
  _fprintf(*(_FILE **)filename,"ART\\%s.RAW\n",local_104);
  _fprintf(*(_FILE **)filename,"ART\\%s.ACT\n",local_104);
  return;
}

// Name: engine_fileio.cpp_buildFilePath_FUN_004b1de0
// Address: 004b1de0
// MANUAL RECONSTRUCTION
// Address Range: [[004b1de0, 004b1e55]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_buildFilePath_FUN_004b1de0(char *base_dir,char *filename,char *dest_path)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_buildFilePath_FUN_004b1de0(char *base_dir,char *filename,char *dest_path)

{
  char local_10c [256];
  char local_c [4];

  engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(base_dir,local_c,local_10c);
  engine_dosio_cpp_makePath_FUN_00481f50(dest_path,local_c,local_10c,(char *)0x0,(char *)0x0);
  strcat(dest_path,filename);
  return;
}

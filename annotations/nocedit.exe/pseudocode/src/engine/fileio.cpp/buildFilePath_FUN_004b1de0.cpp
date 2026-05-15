// Name: engine_fileio.cpp_buildFilePath_FUN_004b1de0
// Address: 004b1de0
// Address Range: [[004b1de0, 004b1e55]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_buildFilePath_FUN_004b1de0(char *base_dir,char *filename,char *dest_path)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_buildFilePath_FUN_004b1de0(char *base_dir,char *filename,char *dest_path)

{
  char cVar2;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar4;
  char local_10c [256];
  char local_c [4];
  char cVar1;
  
  bVar4 = 0;
  engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(base_dir,local_c,local_10c);
  engine_dosio_cpp_makePath_FUN_00481f50(dest_path,local_c,local_10c,(char *)0x0,(char *)0x0);
  iVar2 = -1;
  pcVar3 = dest_path;
  do {
    pcVar3 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3;
  } while (cVar1 != '\0');
  pcVar4 = pcVar3 + -1;
  do {
    cVar2 = *filename;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  return;
}

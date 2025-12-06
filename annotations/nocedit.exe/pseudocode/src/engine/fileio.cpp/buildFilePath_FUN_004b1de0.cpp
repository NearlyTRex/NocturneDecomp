// Name: engine_fileio.cpp_buildFilePath_FUN_004b1de0
// Address: 004b1de0
// Address Range: [[004b1de0, 004b1e55]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_buildFilePath_FUN_004b1de0(char * base_dir, char * filename, char * dest_path)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_buildFilePath_FUN_004b1de0(char *base_dir,char *filename,char *dest_path)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  char *in_stack_00000010;
  char acStack_108 [252];
  char local_c [4];
  
  bVar4 = 0;
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(base_dir,local_c,&stack0xfffffef4);
  engine_dosio_c_makePath_FUN_00481f50
            (dest_path,&stack0xfffffff8,acStack_108,(char *)0x0,(char *)0x0);
  iVar2 = -1;
  do {
    pcVar3 = dest_path;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = dest_path + (uint)bVar4 * -2 + 1;
    cVar1 = *dest_path;
    dest_path = pcVar3;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + -1;
  do {
    cVar1 = *in_stack_00000010;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return;
}

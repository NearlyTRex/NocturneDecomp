// Name: crt_string.c_mbstrncpy_core_FUN_0056fd26
// Address: 0056fd26
// Address Range: [[0056fd26, 0056fd64]]
// Convention: __watcallStack
// Signature: char * __watcallStack crt_string_c_mbstrncpy_core_FUN_0056fd26(char *dest,char *src,int count)

#include "nocturne.h"

char * __watcallStack mbstrncpy_core(char *dest,char *src,int count)

{
  int iVar1;
  
  while( true ) {
    iVar1 = fgetc_buffered((_FILE *)dest);
    if (((*(uint *)(dest + *(int *)(*(int *)dest + 4) + 0x10) & 3) != 0) ||
       (((&DAT_005c168c)[(byte)((char)iVar1 + 1)] & 2) == 0)) break;
    FUN_00571cc6(dest);
  }
  return dest;
}

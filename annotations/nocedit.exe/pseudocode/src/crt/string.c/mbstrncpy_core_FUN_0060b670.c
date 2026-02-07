// Name: crt_string.c_mbstrncpy_core_FUN_0060b670
// Address: 0060b6d7
// Address Range: [[0060b6d7, 0060b715]]
// Convention: __watcallStack
// Signature: char * __watcallStack crt_string_c_mbstrncpy_core_FUN_0060b670(char *dest,char *src,int count)

#include "nocturne.h"

char * __watcallStack mbstrncpy_core(char *dest,char *src,int count)

{
  int iVar1;
  
  while( true ) {
    iVar1 = fgetc_buffered((_FILE *)dest);
    if (((*(uint *)(dest + *(int *)(*(int *)dest + 4) + 0x10) & 3) != 0) ||
       ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2) == 0)) break;
    FUN_0060d576();
  }
  return dest;
}

// Name: crt_string.c_mbstrncpy_core_FUN_0060b670
// Address: 0060b6d7
// Address Range: [[0060b6d7, 0060b715]]
// Convention: __watcallStack
// Signature: char * crt_string.c_mbstrncpy_core_FUN_0060b670(char * dest, char * src, int count)

#include "nocturne.h"

char * __watcallStack crt_string_c_mbstrncpy_core_FUN_0060b670(char *dest,char *src,int count)

{
  int iVar1;
  
  while( true ) {
    iVar1 = crt_stdio_c_fgetc_buffered_FUN_0060d510((FILE *)dest);
    if (((*(uint *)(dest + *(int *)(*(int *)dest + 4) + 0x10) & 3) != 0) ||
       ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2U) == 0)) break;
    crt_unknown_c_FUN_0060d576();
  }
  return dest;
}

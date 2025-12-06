// Name: crt_string.c_strlen_far_FUN_00602f4c
// Address: 00602f4c
// Address Range: [[00602f4c, 00602f78]]
// Convention: __cdecl
// Signature: int crt_string.c_strlen_far_FUN_00602f4c(char * string_offset, ushort segment, int max_length)

#include "nocturne.h"

int __cdecl crt_string_c_strlen_far_FUN_00602f4c(char *string_offset,ushort segment,int max_length)

{
  char cVar1;
  int iVar2;
  
  for (iVar2 = 0;
      (cVar1 = *string_offset, string_offset = string_offset + 1, cVar1 != '\0' &&
      (iVar2 != max_length)); iVar2 = iVar2 + 1) {
  }
  return iVar2;
}

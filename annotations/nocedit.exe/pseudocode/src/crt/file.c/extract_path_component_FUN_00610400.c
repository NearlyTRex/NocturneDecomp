// Name: crt_file.c_extract_path_component_FUN_00610400
// Address: 00610400
// Address Range: [[00610400, 0061045f]]
// Convention: __cdecl
// Signature: char * __cdecl crt_file_c_extract_path_component_FUN_00610400(char **component_ptr,char *buffer,char *source,char *buffer_end)

#include "nocturne.h"

char * __cdecl extract_path_component(char **component_ptr,char *buffer,char *source,char *buffer_end)

{
  int iVar1;
  int iVar2;
  uint max_bytes;
  
  if (component_ptr != (char **)0x0) {
    max_bytes = (int)buffer_end - (int)source;
    *component_ptr = buffer;
    if (0x106 < max_bytes) {
      max_bytes = 0x106;
    }
    iVar1 = mbstrnlen(source,max_bytes);
    mbstrncpy(buffer,source,iVar1);
    iVar2 = mbstrnbytes(buffer,iVar1);
    buffer[iVar2] = '\0';
    iVar1 = mbstrnbytes(buffer,iVar1);
    buffer = buffer + iVar1 + 1;
  }
  return buffer;
}

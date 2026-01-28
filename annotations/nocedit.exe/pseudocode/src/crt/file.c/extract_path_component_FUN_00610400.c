// Name: crt_file.c_extract_path_component_FUN_00610400
// Address: 00610400
// Address Range: [[00610400, 0061045f]]
// Convention: __cdecl
// Signature: char * __cdecl crt_file_c_extract_path_component_FUN_00610400 (char **component_ptr,char *buffer,char *source,char *buffer_end)

#include "nocturne.h"

char * __cdecl
crt_file_c_extract_path_component_FUN_00610400
          (char **component_ptr,char *buffer,char *source,char *buffer_end)

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
    iVar1 = crt_string_c_mbstrnlen_FUN_00605e50(source,max_bytes);
    crt_string_c_mbstrncpy_FUN_00605e90(buffer,source,iVar1);
    iVar2 = crt_string_c_mbstrnbytes_FUN_00605ec0(buffer,iVar1);
    buffer[iVar2] = '\0';
    iVar1 = crt_string_c_mbstrnbytes_FUN_00605ec0(buffer,iVar1);
    buffer = buffer + iVar1 + 1;
  }
  return buffer;
}

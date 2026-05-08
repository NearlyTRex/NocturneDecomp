// Name: engine_dosio.c_ensureTrailingSlash_FUN_00481f80
// Address: 00481f80
// MANUAL RECONSTRUCTION
// Address Range: [[00481f80, 00482030]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_c_ensureTrailingSlash_FUN_00481f80(char *input_path,char *drive,char *output_path)

#include "nocturne.h"

void __cdecl engine_dosio_c_ensureTrailingSlash_FUN_00481f80(char *input_path,char *drive,char *output_path)

{
  size_t len;
  char acStack_308 [256];
  char local_208 [256];
  char local_108 [256];

  engine_dosio_c_splitPath_FUN_00481f20(input_path,drive,local_208,local_108,acStack_308);
  engine_dosio_c_makePath_FUN_00481f50(output_path,(char *)0x0,local_208,local_108,acStack_308);
  if ((output_path != (char *)0x0) && (*output_path != '\0')) {
    len = strlen(output_path);
    if (output_path[len - 1] != '\\') {
      output_path[len] = '\\';
      output_path[len + 1] = '\0';
    }
  }
  return;
}

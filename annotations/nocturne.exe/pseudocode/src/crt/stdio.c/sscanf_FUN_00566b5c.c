// Name: crt_stdio.c_sscanf_FUN_00566b5c
// Address: 00566b5c
// Address Range: [[00566b5c, 00566b80]]
// Convention: unknown
// Signature: void crt_stdio_c_sscanf_FUN_00566b5c(char *param_1,char *param_2)

#include "nocturne.h"

void sscanf(char *param_1,char *param_2)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  vsscanf(param_1,param_2,(va_list_t)&local_8);
  return;
}

// Name: crt_stdio.c_fscanf_FUN_00563350
// Address: 00563350
// Address Range: [[00563350, 00563374]]
// Convention: unknown
// Signature: void crt_stdio_c_fscanf_FUN_00563350(_FILE *param_1,char *param_2)

#include "nocturne.h"

void _fscanf(_FILE *param_1,char *param_2)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  vfscanf(param_1,param_2,(va_list_t)&local_8);
  return;
}

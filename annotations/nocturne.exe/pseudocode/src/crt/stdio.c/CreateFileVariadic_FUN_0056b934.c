// Name: crt_stdio.c_CreateFileVariadic_FUN_0056b934
// Address: 0056b934
// Address Range: [[0056b934, 0056b95d]]
// Convention: unknown
// Signature: void crt_stdio_c_CreateFileVariadic_FUN_0056b934(char *param_1,dword param_2,dword param_3)

#include "nocturne.h"

void CreateFileVariadic(char *param_1,dword param_2,dword param_3)

{
  va_list_t local_8;
  
  local_8.value[0] = (char * [1])&stack0x00000010;
  CreateFileImpl(param_1,param_2,param_3,&local_8);
  return;
}

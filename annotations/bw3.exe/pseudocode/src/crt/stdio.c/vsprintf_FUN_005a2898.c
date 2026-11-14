// Name: crt_stdio.c_vsprintf_FUN_005a2898
// Address: 005a2898
// Address Range: [[005a2898, 005a28be]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_vsprintf_FUN_005a2898(char *buffer,char *format,va_list_t args)

#include "nocturne.h"

int __cdecl _vsprintf(char *buffer,char *format,va_list_t args)

{
  int iVar1;
  
  iVar1 = FUN_005a6190(buffer,format,args.value[0],FUN_005a2880);
  buffer[iVar1] = '\0';
  return iVar1;
}

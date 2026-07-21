// Name: engine_dosio.cpp_getRelativeFilePath_FUN_00456700
// Address: 00456700
// Address Range: [[00456700, 00456746]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_00456700(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_00456700(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    _sprintf(param_1,"%s\\%s",param_2,param_3);
    return;
  }
  do {
    cVar1 = *param_3;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    param_1[1] = cVar1;
    param_1 = param_1 + 2;
  } while (cVar1 != '\0');
  return;
}

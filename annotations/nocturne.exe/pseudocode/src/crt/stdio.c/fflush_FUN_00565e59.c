// Name: crt_stdio.c_fflush_FUN_00565e59
// Address: 00565e59
// Address Range: [[00565e59, 00565e93]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_fflush_FUN_00565e59(int *param_1)

#include "nocturne.h"

void __cdecl _fflush(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_0056cd52(*(int *)(iVar1 + 4));
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (int)param_1 + *(int *)(*param_1 + 4);
  }
  FUN_0056b327(iVar1,2);
  return;
}

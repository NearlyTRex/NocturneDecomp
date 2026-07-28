// Name: crt_exception.c_RemoveExceptionHandler_FUN_0056ef24
// Address: 0056ef24
// Address Range: [[0056ef24, 0056ef45]]
// Convention: __cdecl
// Signature: void __cdecl crt_exception_c_RemoveExceptionHandler_FUN_0056ef24(void)

#include "nocturne.h"

void __cdecl RemoveExceptionHandler(void)

{
  int iVar1;
  uint *in_FS_OFFSET;
  
  iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  if (*(uint **)(iVar1 + 0x54) != (uint *)0x0) {
    *in_FS_OFFSET = **(uint **)(iVar1 + 0x54);
  }
  iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  *(uint *)(iVar1 + 0x54) = 0;
  return;
}

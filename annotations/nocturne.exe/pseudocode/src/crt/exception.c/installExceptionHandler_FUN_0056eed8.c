// Name: crt_exception.c_installExceptionHandler_FUN_0056eed8
// Address: 0056eed8
// Address Range: [[0056eed8, 0056ef23]]
// Convention: __cdecl
// Signature: void __cdecl crt_exception_c_installExceptionHandler_FUN_0056eed8(undefined4 param_1)

#include "nocturne.h"

void __cdecl installExceptionHandler(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_FS_OFFSET;
  
  iVar2 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  *(uint *)(iVar2 + 0x54) = param_1;
  uVar1 = *in_FS_OFFSET;
  iVar2 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  **(uint **)(iVar2 + 0x54) = uVar1;
  iVar2 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  *(code **)(*(int *)(iVar2 + 0x54) + 4) = ExceptionHandler;
  iVar2 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  *in_FS_OFFSET = *(uint *)(iVar2 + 0x54);
  SetUnhandledExceptionFilter(TopLevelExceptionFilter);
  return;
}

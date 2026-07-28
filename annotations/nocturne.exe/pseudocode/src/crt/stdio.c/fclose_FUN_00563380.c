// Name: crt_stdio.c_fclose_FUN_00563380
// Address: 00563380
// Address Range: [[00563380, 005633c0]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fclose_FUN_00563380(_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl _fclose(_FILE *file_handle)

{
  uint *puVar1;
  int iVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad0)();
  puVar1 = _DAT_02de4e20;
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
      return -1;
    }
    if (file_handle == (_FILE *)puVar1[1]) break;
    puVar1 = (uint *)*puVar1;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
  iVar2 = __CClose(file_handle,1);
  return iVar2;
}

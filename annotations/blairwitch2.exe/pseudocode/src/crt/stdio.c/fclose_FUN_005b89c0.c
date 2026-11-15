// Name: crt_stdio.c_fclose_FUN_005b89c0
// Address: 005b89c0
// Address Range: [[005b89c0, 005b8a00]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fclose_FUN_005b89c0(_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl _fclose(_FILE *file_handle)

{
  uint *puVar1;
  int iVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2b8)();
  puVar1 = _DAT_02680160;
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
      return -1;
    }
    if (file_handle == (_FILE *)puVar1[1]) break;
    puVar1 = (uint *)*puVar1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
  iVar2 = FUN_005b8a04(file_handle,1);
  return iVar2;
}

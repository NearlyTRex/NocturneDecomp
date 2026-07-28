// Name: crt_stdio.c___freefp_FUN_00568620
// Address: 00568620
// Address Range: [[00568620, 00568656]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c___freefp_FUN_00568620(_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __freefp(_FILE *file_handle)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)&DAT_02de4e20;
  do {
    puVar2 = puVar1;
    puVar1 = (uint *)*puVar2;
    if (puVar1 == (uint *)0x0) {
      return;
    }
  } while (file_handle != (_FILE *)puVar1[1]);
  *(byte *)&file_handle->_flag = (byte)((_FILE *)puVar1[1])->_flag | 3;
  *puVar2 = *puVar1;
  *puVar1 = _DAT_02de4e24;
  _DAT_02de4e24 = puVar1;
  return;
}

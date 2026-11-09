// Name: crt_stdio.c_fclose_FUN_005b89c0
// Address: 005b89c0
// Address Range: [[005b89c0, 005b8a00]]
// Convention: __cdecl
// Signature: undefined4 __cdecl crt_stdio_c_fclose_FUN_005b89c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl _fclose(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2b8)();
  puVar1 = _DAT_02680160;
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
      return 0xffffffff;
    }
    if (param_1 == puVar1[1]) break;
    puVar1 = (uint *)*puVar1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
  uVar2 = FUN_005b8a04(param_1,1);
  return uVar2;
}

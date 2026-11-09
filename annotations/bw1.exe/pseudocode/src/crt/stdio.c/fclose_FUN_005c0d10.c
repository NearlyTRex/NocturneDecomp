// Name: crt_stdio.c_fclose_FUN_005c0d10
// Address: 005c0d10
// Address Range: [[005c0d10, 005c0d50]]
// Convention: __cdecl
// Signature: undefined4 __cdecl crt_stdio_c_fclose_FUN_005c0d10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl _fclose(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626610)();
  puVar1 = _DAT_02c9f050;
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
      return 0xffffffff;
    }
    if (param_1 == puVar1[1]) break;
    puVar1 = (uint *)*puVar1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
  uVar2 = FUN_005c0d54(param_1,1);
  return uVar2;
}

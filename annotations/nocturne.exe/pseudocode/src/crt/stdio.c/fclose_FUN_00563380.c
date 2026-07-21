// Name: crt_stdio.c_fclose_FUN_00563380
// Address: 00563380
// Address Range: [[00563380, 005633c0]]
// Convention: __cdecl
// Signature: undefined4 __cdecl crt_stdio_c_fclose_FUN_00563380(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl _fclose(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  (*(code *)PTR_FUN_005c1ad0)();
  puVar1 = _DAT_02de4e20;
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      (*(code *)PTR_FUN_005c1ad4)();
      return 0xffffffff;
    }
    if (param_1 == puVar1[1]) break;
    puVar1 = (uint *)*puVar1;
  }
  (*(code *)PTR_FUN_005c1ad4)();
  uVar2 = FUN_005633c4(param_1,1);
  return uVar2;
}

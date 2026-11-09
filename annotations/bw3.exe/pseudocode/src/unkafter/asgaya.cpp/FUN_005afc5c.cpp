// Name: unkafter_asgaya.cpp_FUN_005afc5c
// Address: 005afc5c
// Address Range: [[005afc5c, 005afcaf]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005afc5c(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_asgaya_cpp_FUN_005afc5c(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079cc)();
  puVar1 = (uint *)&DAT_02d261f0;
  puVar2 = _DAT_02d261f0;
  do {
    if (puVar2 == (uint *)0x0) {
LAB_005afca6:
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d0)();
      return;
    }
    if (param_1 == puVar2[1]) {
      if (puVar2[3] != 0) {
        FUN_005a3770(puVar2[2]);
      }
      *puVar1 = *puVar2;
      FUN_005a3770(puVar2);
      goto LAB_005afca6;
    }
    puVar1 = puVar2;
    puVar2 = (uint *)*puVar2;
  } while( true );
}

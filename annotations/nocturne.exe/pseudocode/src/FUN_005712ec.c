// Name: FUN_005712ec
// Address: 005712ec
// Address Range: [[005712ec, 0057133f]]
// Convention: unknown
// Signature: void FUN_005712ec(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005712ec(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae8)();
  puVar1 = (uint *)&DAT_02de5d70;
  puVar2 = _DAT_02de5d70;
  do {
    if (puVar2 == (uint *)0x0) {
LAB_00571336:
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1aec)();
      return;
    }
    if (param_1 == puVar2[1]) {
      if (puVar2[3] != 0) {
        FUN_005638d0(puVar2[2]);
      }
      *puVar1 = *puVar2;
      FUN_005638d0(puVar2);
      goto LAB_00571336;
    }
    puVar1 = puVar2;
    puVar2 = (uint *)*puVar2;
  } while( true );
}

// Name: crt_unknown.c_FUN_005add3c
// Address: 005add3c
// Address Range: [[005add3c, 005addc9]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005add3c(void)

#include "nocturne.h"

void FUN_005add3c(void)

{
  int iVar1;
  
  iVar1 = 0x2d25a70;
  (*(code *)PTR_crt_unknown_c_FUN_005ad790_00607dec)(0x2d25a50);
  do {
    (*(code *)PTR_crt_unknown_c_FUN_005ad790_00607dec)(iVar1);
    iVar1 = iVar1 + 0x10;
  } while (iVar1 != 0x2d25b70);
  (*(code *)PTR_crt_unknown_c_FUN_005ad790_00607dec)(0x2d261a0);
  FUN_005ad864();
  FUN_005afd40();
  FUN_005ae8c0();
  (*(code *)PTR_crt_unknown_c_FUN_005ad790_00607dec)(0x2d25b70);
  (*(code *)PTR_crt_unknown_c_FUN_005ad790_00607dec)(0x2d25a60);
  (*(code *)PTR_crt_unknown_c_FUN_005ad790_00607dec)(0x2d26190);
  (*(code *)PTR_crt_unknown_c_FUN_005ad790_00607dec)(&DAT_02d26180);
  FUN_005ad838();
  FUN_005adc04();
  return;
}

// Name: crt_unknown.c_FUN_0056e7fc
// Address: 0056e7fc
// Address Range: [[0056e7fc, 0056e889]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056e7fc(void)

#include "nocturne.h"

void FUN_0056e7fc(void)

{
  int iVar1;
  
  iVar1 = 0x2de54d0;
  (*(code *)PTR_crt_unknown_c_FUN_0056e250_005c1f68)(0x2de54b0);
  do {
    (*(code *)PTR_crt_unknown_c_FUN_0056e250_005c1f68)(iVar1);
    iVar1 = iVar1 + 0x10;
  } while (iVar1 != 0x2de55d0);
  (*(code *)PTR_crt_unknown_c_FUN_0056e250_005c1f68)(0x2de5c00);
  FUN_0056e324();
  FUN_00571364();
  FUN_0056f2d0();
  (*(code *)PTR_crt_unknown_c_FUN_0056e250_005c1f68)(0x2de55d0);
  (*(code *)PTR_crt_unknown_c_FUN_0056e250_005c1f68)(0x2de54c0);
  (*(code *)PTR_crt_unknown_c_FUN_0056e250_005c1f68)(0x2de5bf0);
  (*(code *)PTR_crt_unknown_c_FUN_0056e250_005c1f68)(&DAT_02de5be0);
  FUN_0056e2f8();
  FUN_0056e6c4();
  return;
}

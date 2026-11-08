// Name: FUN_005c2bcc
// Address: 005c2bcc
// Address Range: [[005c2bcc, 005c2c59]]
// Convention: unknown
// Signature: void FUN_005c2bcc(void)

#include "nocturne.h"

void FUN_005c2bcc(void)

{
  int iVar1;
  
  iVar1 = 0x2680930;
  (*(code *)PTR_FUN_0061f6c8)(0x2680910);
  do {
    (*(code *)PTR_FUN_0061f6c8)(iVar1);
    iVar1 = iVar1 + 0x10;
  } while (iVar1 != 0x2680a30);
  (*(code *)PTR_FUN_0061f6c8)(0x2681060);
  FUN_005c26f4();
  thunk_FUN_005c4c44();
  FUN_005c3750();
  (*(code *)PTR_FUN_0061f6c8)(0x2680a30);
  (*(code *)PTR_FUN_0061f6c8)(0x2680920);
  (*(code *)PTR_FUN_0061f6c8)(0x2681050);
  (*(code *)PTR_FUN_0061f6c8)(&DAT_02681040);
  FUN_005c26c8();
  FUN_005c2a94();
  return;
}

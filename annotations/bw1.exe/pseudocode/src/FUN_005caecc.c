// Name: FUN_005caecc
// Address: 005caecc
// Address Range: [[005caecc, 005caf59]]
// Convention: unknown
// Signature: void FUN_005caecc(void)

#include "nocturne.h"

void FUN_005caecc(void)

{
  int iVar1;
  
  iVar1 = 0x2c9f820;
  (*(code *)PTR_FUN_00626a48)(0x2c9f800);
  do {
    (*(code *)PTR_FUN_00626a48)(iVar1);
    iVar1 = iVar1 + 0x10;
  } while (iVar1 != 0x2c9f920);
  (*(code *)PTR_FUN_00626a48)(0x2c9ff50);
  FUN_005ca9f4();
  thunk_FUN_005ccf44();
  FUN_005cba50();
  (*(code *)PTR_FUN_00626a48)(0x2c9f920);
  (*(code *)PTR_FUN_00626a48)(0x2c9f810);
  (*(code *)PTR_FUN_00626a48)(0x2c9ff40);
  (*(code *)PTR_FUN_00626a48)(&DAT_02c9ff30);
  FUN_005ca9c8();
  FUN_005cad94();
  return;
}

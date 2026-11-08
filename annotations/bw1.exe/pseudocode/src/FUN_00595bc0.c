// Name: FUN_00595bc0
// Address: 00595bc0
// Address Range: [[00595bc0, 00595c3c]]
// Convention: unknown
// Signature: void FUN_00595bc0(int param_1)

#include "nocturne.h"

void FUN_00595bc0(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b7f0(param_1 + 0x158,"0@modelName" + 2);
  if (0x00000002 < 2) {
    FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  }
  FUN_0040b870(param_1 + 0x158,"motion state");
  FUN_0040b960(param_1 + 0x158,"partStatus");
  FUN_0040b6f0(param_1 + 0xc270,"graveActor");
  return;
}

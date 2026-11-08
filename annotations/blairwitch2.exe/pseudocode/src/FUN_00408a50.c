// Name: FUN_00408a50
// Address: 00408a50
// Address Range: [[00408a50, 00408a7b]]
// Convention: unknown
// Signature: void FUN_00408a50(int param_1)

#include "nocturne.h"

void FUN_00408a50(int param_1)

{
  FUN_00436710(PTR_DAT_00609ed0,"%s::getClassName()\n",param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xd4))(param_1);
  return;
}

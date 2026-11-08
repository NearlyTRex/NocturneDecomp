// Name: FUN_00586e50
// Address: 00586e50
// Address Range: [[00586e50, 00586eab]]
// Convention: unknown
// Signature: void FUN_00586e50(int param_1)

#include "nocturne.h"

void FUN_00586e50(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"@Aspeed" + 2);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  FUN_0040bab0(param_1 + 0x158,"motion state");
  return;
}

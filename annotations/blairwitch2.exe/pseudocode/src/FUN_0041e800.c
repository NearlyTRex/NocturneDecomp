// Name: FUN_0041e800
// Address: 0041e800
// Address Range: [[0041e800, 0041e887]]
// Convention: unknown
// Signature: void FUN_0041e800(int param_1)

#include "nocturne.h"

void FUN_0041e800(int param_1)

{
  FUN_00487ec0(param_1);
  if (0x00000004 < 2) {
    FUN_0040b8e0(param_1 + 0x10a60,"@speed" + 1);
  }
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  if ((1 < 0x00000004) && (0x00000004 < 4)) {
    FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
  }
  if (0x00000004 < 3) {
    return;
  }
  FUN_0040bb60(param_1 + 0x2b4,"state");
  return;
}

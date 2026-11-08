// Name: FUN_0046df70
// Address: 0046df70
// Address Range: [[0046df70, 0046dfdc]]
// Convention: unknown
// Signature: void FUN_0046df70(int param_1)

#include "nocturne.h"

void FUN_0046df70(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"@speed" + 1);
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  if (0x00000002 < 2) {
    FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
  }
  FUN_0040bb60(param_1 + 0x2b4,"motion state");
  return;
}

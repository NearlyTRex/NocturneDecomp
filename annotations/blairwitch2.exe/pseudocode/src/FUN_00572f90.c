// Name: FUN_00572f90
// Address: 00572f90
// Address Range: [[00572f90, 0057300c]]
// Convention: unknown
// Signature: void FUN_00572f90(int param_1)

#include "nocturne.h"

void FUN_00572f90(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040bae0(param_1 + 0x2b4,"0@modelName" + 2);
  if (0x00000002 < 2) {
    FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
  }
  FUN_0040bb60(param_1 + 0x2b4,"motion state");
  FUN_0040bc50(param_1 + 0x2b4,"partStatus");
  FUN_0040b9e0(param_1 + 0x10b00,"graveActor");
  return;
}

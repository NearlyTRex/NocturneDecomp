// Name: FUN_004ffb70
// Address: 004ffb70
// Address Range: [[004ffb70, 004ffc97]]
// Convention: unknown
// Signature: void FUN_004ffb70(int param_1)

#include "nocturne.h"

void FUN_004ffb70(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"?speed" + 1);
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  if (0x00000007 < 4) {
    FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
  }
  FUN_0040bb60(param_1 + 0x2b4,"motion state");
  if (0x00000007 == 2) {
    FUN_0040bfd0(param_1 + 0x2d0c,"clothList");
  }
  if (4 < 0x00000007) {
    FUN_0040b960(param_1 + 0x10b14,"postMode");
    FUN_0040b9e0(param_1 + 0x10b18,"ourPost");
  }
  if (5 < 0x00000007) {
    FUN_0040b9e0(param_1 + 0x10b1c,"vehicle");
    FUN_0040b960(param_1 + 0x10b20,"sideOfCar");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b960(param_1 + 0x10b24,"holdPosFlag");
  FUN_0040b730(param_1 + 0x10b28,"holdPosCond");
  return;
}

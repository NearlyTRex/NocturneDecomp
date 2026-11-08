// Name: FUN_0051eb30
// Address: 0051eb30
// Address Range: [[0051eb30, 0051ec57]]
// Convention: unknown
// Signature: void FUN_0051eb30(int param_1)

#include "nocturne.h"

void FUN_0051eb30(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"?speed" + 1);
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  if (0x00000007 < 4) {
    FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  }
  FUN_0040b870(param_1 + 0x158,"motion state");
  if (0x00000007 == 2) {
    FUN_0040bce0(param_1 + 0x2ca0,"clothList");
  }
  if (4 < 0x00000007) {
    FUN_0040b670(param_1 + 0xc284,"postMode");
    FUN_0040b6f0(param_1 + 0xc288,"ourPost");
  }
  if (5 < 0x00000007) {
    FUN_0040b6f0(param_1 + 0xc28c,"vehicle");
    FUN_0040b670(param_1 + 0xc290,"sideOfCar");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b670(param_1 + 0xc294,"holdPosFlag");
  FUN_0040b440(param_1 + 0xc298,"holdPosCond");
  return;
}

// Name: FUN_0058f510
// Address: 0058f510
// Address Range: [[0058f510, 0058f602]]
// Convention: unknown
// Signature: void FUN_0058f510(int param_1)

#include "nocturne.h"

void FUN_0058f510(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  if (0x00000007 < 4) {
    FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  FUN_0040bab0(param_1 + 0x158,"motion state");
  if (0x00000007 == 2) {
    FUN_0040bf20(param_1 + 0x2f08,"clothList");
  }
  if (4 < 0x00000007) {
    FUN_0040b8b0(param_1 + 0xd064,"postMode");
    FUN_0040b930(param_1 + 0xd068,"ourPost");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b8b0(param_1 + 0xd06c,"holdPosFlag");
  FUN_0040b680(param_1 + 0xd070,"holdPosCond");
  return;
}

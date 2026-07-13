// Name: FUN_0054dc70
// Address: 0054dc70
// Address Range: [[0054dc70, 0054dd43]]
// Convention: unknown
// Signature: void FUN_0054dc70(int param_1)

#include "nocturne.h"

void FUN_0054dc70(int param_1)

{
  FUN_004796c0(param_1);
  if (1 < 0x00000004) {
    FUN_0040cb00(param_1 + 0x150,"@human model motion state" + 1);
    FUN_0040cb00(param_1 + 0xbd24,"bat model motion state");
  }
  if (2 < 0x00000004) {
    FUN_0040c980(param_1 + 0xbedb4,"wayPoint0");
    FUN_0040c980(param_1 + 0xbedb8,"wayPoint1");
    FUN_0040c980(param_1 + 0xbedbc,"wayPoint2");
    FUN_0040c980(param_1 + 0xbedc0,"wayPoint3");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040c900(param_1 + 0xbe168,&DAT_005971bd);
  FUN_0040c880(param_1 + 0xbed98,"morphT");
  return;
}

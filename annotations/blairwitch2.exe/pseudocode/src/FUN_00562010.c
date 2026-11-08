// Name: FUN_00562010
// Address: 00562010
// Address Range: [[00562010, 00562083]]
// Convention: unknown
// Signature: void FUN_00562010(int param_1)

#include "nocturne.h"

void FUN_00562010(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040b8e0(param_1 + 0x2b4,&DAT_005eb150);
  FUN_0040b8e0(param_1 + 0x2b8,&DAT_005eb155);
  FUN_0040b8e0(param_1 + 700,"width");
  FUN_0040b960(param_1 + 0x2c8,"count");
  FUN_0040b960(param_1 + 0xb8c,"groundType");
  return;
}

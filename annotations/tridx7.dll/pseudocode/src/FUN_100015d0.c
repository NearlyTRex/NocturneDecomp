// Name: FUN_100015d0
// Address: 100015d0
// Address Range: [[100015d0, 10001633]]
// Convention: unknown
// Signature: void FUN_100015d0(undefined4 param_1)

#include "nocturne.h"

void FUN_100015d0(uint param_1)

{
  switch(*g_ExternalRendererBridge.texture_dimension) {
  case 0x20:
    FUN_10001180(param_1);
    return;
  case 0x40:
    FUN_10001180(param_1);
    return;
  case 0x80:
    FUN_10001180(param_1);
    return;
  case 0x100:
    FUN_10001180(param_1);
  }
  return;
}

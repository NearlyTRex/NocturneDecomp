// Name: crt_unknown.c_FUN_005aee94
// Address: 005aee94
// Address Range: [[005aee94, 005aeedb]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aee94(int param_1,undefined1 *param_2)

#include "nocturne.h"

void FUN_005aee94(int param_1,byte *param_2)

{
  FUN_005aee30(param_2 + 0x14,param_1 + 0x18,param_1 + 0x16);
  *(byte *)(param_1 + 0x15) = *param_2;
  *(uint *)(param_1 + 0x1a) = *(uint *)(param_2 + 0x20);
  _strncpy((char *)(param_1 + 0x1e),param_2 + 0x2c,0xff);
  *(byte *)(param_1 + 0x11d) = 0;
  return;
}

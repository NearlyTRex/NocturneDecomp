// Name: FUN_0058e640
// Address: 0058e640
// Address Range: [[0058e640, 0058e6b5]]
// Convention: unknown
// Signature: void FUN_0058e640(int param_1)

#include "nocturne.h"

void FUN_0058e640(int param_1)

{
  if (*(HDC *)(param_1 + 0x6a48) != (HDC)0x0) {
    SelectObject(*(HDC *)(param_1 + 0x6a48),*(HGDIOBJ *)(param_1 + 0x6a54));
    *(uint *)(param_1 + 0x6a54) = 0;
    DeleteDC(*(HDC *)(param_1 + 0x6a48));
    *(uint *)(param_1 + 0x6a48) = 0;
    *(uint *)(param_1 + 0x6a4c) = 0;
    *(uint *)(param_1 + 0x6a58) = 0;
  }
  *(uint *)(param_1 + 0x6b6c) = 0;
  *(uint *)(param_1 + 0x6b68) = *(uint *)(param_1 + 0x6b6c);
  *(uint *)(param_1 + 0x6b64) = *(uint *)(param_1 + 0x6b6c);
  return;
}

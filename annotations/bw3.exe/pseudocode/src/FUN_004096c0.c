// Name: FUN_004096c0
// Address: 004096c0
// Address Range: [[004096c0, 004096e0]]
// Convention: unknown
// Signature: undefined8 FUN_004096c0(undefined4 param_1,int param_2)

#include "nocturne.h"

ulonglong FUN_004096c0(uint param_1,int param_2)

{
  *(uint *)(param_2 + 0x48) = 0;
  *(uint *)(param_2 + 0x50) = 0;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x44);
  return CONCAT44(*(uint *)(param_2 + 0x44),param_2);
}

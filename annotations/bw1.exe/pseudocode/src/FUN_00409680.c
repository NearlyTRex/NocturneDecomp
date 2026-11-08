// Name: FUN_00409680
// Address: 00409680
// Address Range: [[00409680, 004096a0]]
// Convention: unknown
// Signature: undefined8 FUN_00409680(undefined4 param_1,int param_2)

#include "nocturne.h"

ulonglong FUN_00409680(uint param_1,int param_2)

{
  *(uint *)(param_2 + 0x48) = 0;
  *(uint *)(param_2 + 0x50) = 0;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x44);
  return CONCAT44(*(uint *)(param_2 + 0x44),param_2);
}

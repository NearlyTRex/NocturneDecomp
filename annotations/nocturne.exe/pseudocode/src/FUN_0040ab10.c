// Name: FUN_0040ab10
// Address: 0040ab10
// Address Range: [[0040ab10, 0040ab30]]
// Convention: unknown
// Signature: undefined8 FUN_0040ab10(undefined4 param_1,int param_2)

#include "nocturne.h"

ulonglong FUN_0040ab10(uint param_1,int param_2)

{
  *(uint *)(param_2 + 0x48) = 0;
  *(uint *)(param_2 + 0x50) = 0;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x44);
  return CONCAT44(*(uint *)(param_2 + 0x44),param_2);
}

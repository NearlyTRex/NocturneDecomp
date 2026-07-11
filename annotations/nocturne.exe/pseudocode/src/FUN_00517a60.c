// Name: FUN_00517a60
// Address: 00517a60
// Address Range: [[00517a60, 00517a7e]]
// Convention: unknown
// Signature: int FUN_00517a60(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_00517a60(int param_1,int param_2,int param_3)

{
  return (param_3 * *(int *)(param_1 + 0x28558) + param_2) * 0x10 + *(int *)(param_1 + 0x29370);
}

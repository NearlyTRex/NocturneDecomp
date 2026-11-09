// Name: crt_unknown.c_FUN_005c4f20
// Address: 005c4f20
// Address Range: [[005c4f20, 005c4f28]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c4f20(undefined2 *param_1)

#include "nocturne.h"

void FUN_005c4f20(ushort *param_1)

{
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  ushort in_FPUTagWord;
  ushort in_FPULastInstructionOpcode;
  uint in_FPUDataPointer;
  uint in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  *param_1 = in_FPUControlWord;
  param_1[2] = in_FPUStatusWord;
  param_1[4] = in_FPUTagWord;
  *(uint *)(param_1 + 10) = in_FPUDataPointer;
  *(uint *)(param_1 + 6) = in_FPUInstructionPointer;
  param_1[9] = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(param_1 + 0xe) = in_ST0;
  *(unkbyte10 *)(param_1 + 0x13) = in_ST1;
  *(unkbyte10 *)(param_1 + 0x18) = in_ST2;
  *(unkbyte10 *)(param_1 + 0x1d) = in_ST3;
  *(unkbyte10 *)(param_1 + 0x22) = in_ST4;
  *(unkbyte10 *)(param_1 + 0x27) = in_ST5;
  *(unkbyte10 *)(param_1 + 0x2c) = in_ST6;
  *(unkbyte10 *)(param_1 + 0x31) = in_ST7;
  return;
}

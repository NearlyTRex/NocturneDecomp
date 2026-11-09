// Name: core_fldnotes.cpp_FUN_004bc250
// Address: 004bc250
// Address Range: [[004bc250, 004bc2c2]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bc250(undefined4 *param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004bc250(uint *param_1)

{
  *param_1 = 0;
  param_1[0x27] = 0;
  engine_alphabit_cpp_FUN_0040d1c0((CAlphaBitmap *)(param_1 + 0x1c));
  engine_alphabit_cpp_FUN_0040d1c0((CAlphaBitmap *)(param_1 + 0x22));
  param_1[0x259] = 0xffffffff;
  param_1[0x25a] = 0xffffffff;
  param_1[0x25b] = 1;
  *(byte *)(param_1 + 1) = 0;
  if (param_1[0x21] == 0) {
    return;
  }
  FUN_005c09f0(param_1[0x21]);
  param_1[0x21] = 0;
  return;
}

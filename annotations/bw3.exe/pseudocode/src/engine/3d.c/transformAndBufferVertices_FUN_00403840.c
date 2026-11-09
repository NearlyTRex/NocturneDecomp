// Name: engine_3d.c_transformAndBufferVertices_FUN_00403840
// Address: 00403840
// Address Range: [[00403840, 00403911]]
// Convention: unknown
// Signature: int engine_3d_c_transformAndBufferVertices_FUN_00403840(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_transformAndBufferVertices_FUN_00403840(int param_1)

{
  int iVar1;
  SProjectedVertex *output;
  CVector3i *input;
  int iStack_14;
  
  iVar1 = 0;
  DAT_005fba40 = 1;
  output = (SProjectedVertex *)(&DAT_0060b014 + (*(int *)(param_1 + 4) + DAT_007303e0) * 0xc);
  input = (CVector3i *)(param_1 + 0xc);
  iStack_14 = 0;
  _DAT_00730414 = input;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      engine_special_cpp_FUN_005632a3(output,input);
      *(uint *)(output + 0x2c) = _DAT_01c6e24c;
      if (((byte)output[0x13] & 0x80) == 0) {
        iStack_14 = iStack_14 + 1;
      }
      output = output + 0x30;
      iVar1 = iVar1 + 1;
      input = input + 0xc;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  if (DAT_007303e0 == 0) {
    _DAT_007303e4 = DAT_007303e0;
  }
  if (iStack_14 == *(int *)(param_1 + 8)) {
    DAT_005fba40 = 0;
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 0xc;
}

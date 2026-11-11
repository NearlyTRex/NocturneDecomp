// Name: engine_3d.c_transformAndBufferVertices_FUN_00403890
// Address: 00403890
// Address Range: [[00403890, 00403961]]
// Convention: unknown
// Signature: int engine_3d_c_transformAndBufferVertices_FUN_00403890(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_transformAndBufferVertices_FUN_00403890(int param_1)

{
  int iVar1;
  SProjectedVertex *output;
  CVector3i *input;
  int iStack_14;
  
  iVar1 = 0;
  DAT_006141e0 = 1;
  output = (SProjectedVertex *)(&DAT_00622014 + (*(int *)(param_1 + 4) + DAT_0070ca60) * 0xc);
  input = (CVector3i *)(param_1 + 0xc);
  iStack_14 = 0;
  _DAT_0070ca94 = input;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      engine_special_cpp_FUN_0055d723(output,input);
      output[1].screen_y = _DAT_01c38aec;
      if ((int)(output->screen_x & -0x80000000) == 0) {
        iStack_14 = iStack_14 + 1;
      }
      output = output + 2;
      iVar1 = iVar1 + 1;
      input = input + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  if (DAT_0070ca60 == 0) {
    _DAT_0070ca64 = DAT_0070ca60;
  }
  if (iStack_14 == *(int *)(param_1 + 8)) {
    DAT_006141e0 = 0;
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 0xc;
}

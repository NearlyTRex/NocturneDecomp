// Name: engine_3d.c_transformAndBufferVertices_FUN_00403840
// Address: 00403840
// Address Range: [[00403840, 00403911]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended *mrgl)

{
  int iVar1;
  SProjectedVertex *output;
  CVector3i *input;
  int iStack_14;
  
  iVar1 = 0;
  DAT_0061b4c0 = 1;
  output = (SProjectedVertex *)(&DAT_00629014 + ((mrgl->base).count + DAT_00713a60) * 0xc);
  input = (CVector3i *)(mrgl + 1);
  iStack_14 = 0;
  _DAT_00713a94 = input;
  if (0 < mrgl->child_count) {
    do {
      engine_special_cpp_FUN_00580173(output,input);
      output[1].screen_y = _DAT_01c51cac;
      if ((int)(output->screen_x & -0x80000000) == 0) {
        iStack_14 = iStack_14 + 1;
      }
      output = output + 2;
      iVar1 = iVar1 + 1;
      input = input + 1;
    } while (iVar1 < mrgl->child_count);
  }
  if (DAT_00713a60 == 0) {
    _DAT_00713a64 = DAT_00713a60;
  }
  if (iStack_14 == mrgl->child_count) {
    DAT_0061b4c0 = 0;
  }
  return mrgl + mrgl->child_count + 1;
}

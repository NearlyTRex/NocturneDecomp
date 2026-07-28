// Name: engine_3d.c_transformAndBufferVertices_FUN_00404530
// Address: 00404530
// Address Range: [[00404530, 00404601]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00404530(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00404530(SMRGLHeaderExtended *mrgl)

{
  int iVar1;
  SProjectedVertex *output;
  CVector3i *input;
  int local_14;
  
  iVar1 = 0;
  DAT_005b7644 = 1;
  output = (SProjectedVertex *)(&DAT_005c5014 + ((mrgl->base).count + DAT_006b0264) * 0xc);
  input = (CVector3i *)(mrgl + 1);
  local_14 = 0;
  _DAT_006b0298 = input;
  if (0 < mrgl->child_count) {
    do {
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c(output,input);
      output[1].screen_y = _DAT_01c038f4;
      if ((int)(output->screen_x & -0x80000000) == 0) {
        local_14 = local_14 + 1;
      }
      output = output + 2;
      iVar1 = iVar1 + 1;
      input = input + 1;
    } while (iVar1 < mrgl->child_count);
  }
  if (DAT_006b0264 == 0) {
    DAT_006b0268 = DAT_006b0264;
  }
  if (local_14 == mrgl->child_count) {
    DAT_005b7644 = 0;
  }
  return mrgl + mrgl->child_count + 1;
}

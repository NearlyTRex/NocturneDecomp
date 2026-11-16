// Name: engine_drender.cpp_FUN_0046bd60
// Address: 0046bd60
// Address Range: [[0046bd60, 0046be54]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046bd60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_0046bd60(void)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  CDemonRenderer *in_stack_00000004;
  ushort *in_stack_00000008;
  
  if ((in_stack_00000004->shadow_pass_active == 0) && (in_stack_00000004->skip_uv_extraction == 0))
  {
    puVar3 = in_stack_00000008;
    do {
      uVar2 = *puVar3;
      in_stack_00000004->vertex_buffer_ptr[uVar2].u = (uint)puVar3[3] << 8;
      puVar1 = puVar3 + 6;
      puVar3 = puVar3 + 1;
      in_stack_00000004->vertex_buffer_ptr[uVar2].v = (uint)*puVar1 << 8;
    } while (puVar3 != in_stack_00000008 + 3);
  }
  _DAT_01bdd818 = (uint)*in_stack_00000008;
  _DAT_01bdd81c = (uint)in_stack_00000008[1];
  _DAT_01bdd820 = (uint)in_stack_00000008[2];
  if (in_stack_00000004->shadow_pass_active == 0) {
    if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b8 = 6;
    _DAT_01c6e2b4 = 0x2cd;
  }
  else {
    _DAT_01c6e2b4 = 0;
    _DAT_01c6e2b8 = 0;
    _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
            (in_stack_00000004,3,(int *)&DAT_01bdd818);
  return;
}

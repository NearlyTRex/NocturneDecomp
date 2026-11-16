// Name: engine_drender.cpp_FUN_0046a170
// Address: 0046a170
// Address Range: [[0046a170, 0046a264]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046a170(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_0046a170(void)

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
  _DAT_01ba5c84 = (uint)*in_stack_00000008;
  _DAT_01ba5c88 = (uint)in_stack_00000008[1];
  _DAT_01ba5c8c = (uint)in_stack_00000008[2];
  if (in_stack_00000004->shadow_pass_active == 0) {
    if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    _DAT_01c38b58 = 6;
    _DAT_01c38b54 = 0x2cd;
  }
  else {
    _DAT_01c38b54 = 0;
    _DAT_01c38b58 = 0;
    _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
            (in_stack_00000004,3,(int *)&DAT_01ba5c84);
  return;
}

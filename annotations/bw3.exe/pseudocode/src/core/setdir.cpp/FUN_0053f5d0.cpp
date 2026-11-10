// Name: core_setdir.cpp_FUN_0053f5d0
// Address: 0053f5d0
// Address Range: [[0053f5d0, 0053f72e]]
// Convention: unknown
// Signature: float core_setdir_cpp_FUN_0053f5d0(void)

#include "nocturne.h"

float core_setdir_cpp_FUN_0053f5d0(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  uint *puVar5;
  SMRGLPrimitivePoly *poly;
  uint *puVar6;
  byte bVar7;
  float unaff_retaddr;
  uint in_stack_00000094;
  uint in_stack_000000a0;
  int in_stack_000000a4;
  int in_stack_000000c0;
  uint in_stack_000000d4;
  
  bVar7 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
            (DAT_005f2afc,(uint)((in_stack_000000a0._3_1_ & 0x80) != 0));
  iVar3 = 0;
  in_stack_000000a4 = 0;
  if (0 < in_stack_000000c0) {
    iVar4 = in_stack_000000c0 * 4;
    do {
      iVar1 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470
                        (DAT_005f2afc,*(SMRGLPrimitivePoly **)(&stack0x0000002c + iVar3));
      iVar3 = iVar3 + 4;
      in_stack_000000a4 = in_stack_000000a4 + iVar1;
    } while (iVar3 < iVar4);
  }
  if (*(int *)&g_CGamePtr->field_0x20c != 0) {
    puVar2 = (uint *)(*(int *)(unaff_EBP + 0x20) * 0x3000 + 0x241351c);
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 4;
      puVar5 = *(uint **)(&DAT_01c60dac + iVar3);
      puVar6 = puVar2;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(byte *)puVar6 = *(byte *)puVar5;
        puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
        puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
      }
      *(uint **)(&DAT_01c60dac + iVar3) = puVar2;
      puVar2 = puVar2 + 0x40;
      iVar3 = iVar1;
    } while (iVar1 != 0xc0);
    iVar3 = 0;
    if (0 < in_stack_000000c0) {
      poly = *(SMRGLPrimitivePoly **)(unaff_EBP + 0x1c);
      do {
        engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(DAT_005f2afc,poly);
        iVar3 = iVar3 + 1;
        poly = poly + 0x48;
      } while (iVar3 < in_stack_000000c0);
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  return (float)in_stack_000000a4 * unaff_retaddr;
}

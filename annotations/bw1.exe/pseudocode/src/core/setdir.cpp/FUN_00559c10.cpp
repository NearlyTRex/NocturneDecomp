// Name: core_setdir.cpp_FUN_00559c10
// Address: 00559c10
// Address Range: [[00559c10, 00559d6e]]
// Convention: unknown
// Signature: float core_setdir_cpp_FUN_00559c10(void)

#include "nocturne.h"

float core_setdir_cpp_FUN_00559c10(void)

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
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
            (DAT_00612560,(uint)((in_stack_000000a0._3_1_ & 0x80) != 0));
  iVar3 = 0;
  in_stack_000000a4 = 0;
  if (0 < in_stack_000000c0) {
    iVar4 = in_stack_000000c0 * 4;
    do {
      iVar1 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0
                        (DAT_00612560,*(SMRGLPrimitivePoly **)(&stack0x0000002c + iVar3));
      iVar3 = iVar3 + 4;
      in_stack_000000a4 = in_stack_000000a4 + iVar1;
    } while (iVar3 < iVar4);
  }
  if (g_CGamePtr->debug_toggle_flag != 0) {
    puVar2 = (uint *)(*(int *)(unaff_EBP + 0x20) * 0x3000 + 0x23a08f4);
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 4;
      puVar5 = *(uint **)(&DAT_01c4480c + iVar3);
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
      *(uint **)(&DAT_01c4480c + iVar3) = puVar2;
      puVar2 = puVar2 + 0x40;
      iVar3 = iVar1;
    } while (iVar1 != 0xc0);
    iVar3 = 0;
    if (0 < in_stack_000000c0) {
      poly = *(SMRGLPrimitivePoly **)(unaff_EBP + 0x1c);
      do {
        engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,poly);
        iVar3 = iVar3 + 1;
        poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
      } while (iVar3 < in_stack_000000c0);
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  return (float)in_stack_000000a4 * unaff_retaddr;
}

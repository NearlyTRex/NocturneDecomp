// Name: core_shadow.cpp_FUN_0055f9c0
// Address: 0055f9c0
// Address Range: [[0055f9c0, 0055fbef]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0055f9c0(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_0055f9c0(void)

{
  int iVar1;
  int *piVar2;
  char *in_EAX;
  int unaff_EBX;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  int unaff_retaddr;
  
  *in_EAX = *in_EAX + (char)in_EAX;
  *(char *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + (char)unaff_EBX) + -0x72ffffd9) =
       (char)((uint)unaff_EBX >> 8);
  *(float *)(unaff_retaddr + 0xd0) = (float)in_ST2;
  *(float *)(unaff_retaddr + 0xd4) = (float)in_ST1;
  *(float *)(unaff_retaddr + 0xd8) = (float)in_ST0;
  *(uint *)(unaff_retaddr + 0x100) = *(uint *)(unaff_retaddr + 0xd0);
  *(uint *)(unaff_retaddr + 0x104) = *(uint *)(unaff_retaddr + 0xd4);
  *(uint *)(unaff_retaddr + 0x108) = *(uint *)(unaff_retaddr + 0xd8);
  if (unaff_EBX != unaff_retaddr + 0x100) {
    *(uint *)(unaff_retaddr + 0x4c) = *(uint *)(unaff_retaddr + 0x100);
    *(uint *)(unaff_retaddr + 0x50) = *(uint *)(unaff_retaddr + 0x104);
    *(uint *)(unaff_retaddr + 0x54) = *(uint *)(unaff_retaddr + 0x108);
  }
  piVar2 = DAT_00612560;
  *(int *)(unaff_retaddr + 0xac) = (int)ROUND(*(float *)(unaff_retaddr + 0x4c) * _DAT_00605170);
  *(int *)(unaff_retaddr + 0xb0) = (int)ROUND(*(float *)(unaff_retaddr + 0x50) * _DAT_00605170);
  *(int *)(unaff_retaddr + 0xb4) = (int)ROUND(*(float *)(unaff_retaddr + 0x54) * _DAT_00605170);
  *(int *)(unaff_retaddr + -4) = unaff_retaddr + 0xac;
  *(int *)(unaff_retaddr + -8) = *piVar2 + 0x90;
  *(uint *)(unaff_retaddr + -0xc) = 0x55fa6a;
  engine_special_cpp_FUN_00580173
            (*(SProjectedVertex **)(unaff_retaddr + -8),*(CVector3i **)(unaff_retaddr + -4));
  piVar2 = DAT_00612560;
  *(uint *)(*DAT_00612560 + 0x20) = 0xffff;
  *(uint *)(*piVar2 + 0x24) = 0;
  *(uint *)(*piVar2 + 0x28) = 0;
  *(uint *)(*piVar2 + 0x50) = 0xffff;
  *(uint *)(*piVar2 + 0x54) = 0;
  *(uint *)(*piVar2 + 0x58) = 0;
  *(uint *)(*piVar2 + 0x80) = 0xffff;
  *(uint *)(*piVar2 + 0x84) = 0;
  *(uint *)(*piVar2 + 0x88) = 0;
  *(uint *)(*piVar2 + 0xb0) = 0xffff;
  *(uint *)(*piVar2 + 0xb4) = 0;
  *(uint *)(*piVar2 + 0xb8) = 0;
  *(uint *)(*piVar2 + 0x2c) = 0x4000;
  *(uint *)(*piVar2 + 0x5c) = 0x4000;
  *(uint *)(*piVar2 + 0x8c) = 0x4000;
  *(uint *)(*piVar2 + 0xbc) = 0x4000;
  *(uint *)(*piVar2 + 0x18) = 0x80000;
  *(uint *)(*piVar2 + 0x1c) = 0xf80000;
  *(uint *)(*piVar2 + 0x48) = 0xf80000;
  *(uint *)(*piVar2 + 0x4c) = 0xf80000;
  *(uint *)(*piVar2 + 0x78) = 0xf80000;
  *(uint *)(*piVar2 + 0x7c) = 0x80000;
  *(uint *)(*piVar2 + 0xa8) = 0x80000;
  *(uint *)(unaff_retaddr + -4) = 0x6231a8;
  iVar1 = *piVar2;
  *(int **)(unaff_retaddr + -8) = piVar2;
  *(uint *)(iVar1 + 0xac) = 0x80000;
  *(uint *)(unaff_retaddr + 4) = 4;
  *(uint *)(unaff_retaddr + 0x14) = 0;
  *(uint *)(unaff_retaddr + 0x10) = 0;
  *(uint *)(unaff_retaddr + 0xc) = 0;
  *(uint *)(unaff_retaddr + 8) = 0;
  *(uint *)(unaff_retaddr + 0x18) = 0;
  *(uint *)(unaff_retaddr + 0x24) = 3;
  *(uint *)(unaff_retaddr + 0x1c) = 1;
  *(uint *)(unaff_retaddr + 0x20) = 2;
  *(uint *)(unaff_retaddr + -0xc) = 0x55fbad;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (*(CDemonRenderer **)(unaff_retaddr + -8),*(SMRGLTextureBasic **)(unaff_retaddr + -4));
  *(uint *)(unaff_retaddr + -4) = 1;
  *(int **)(unaff_retaddr + -8) = DAT_00612560;
  *(uint *)(unaff_retaddr + -0xc) = 0x55fbbe;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
            (*(CDemonRenderer **)(unaff_retaddr + -8),*(int *)(unaff_retaddr + -4));
  *(int *)(unaff_retaddr + -4) = unaff_retaddr;
  *(int **)(unaff_retaddr + -8) = DAT_00612560;
  *(uint *)(unaff_retaddr + -0xc) = 0x55fbd0;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
            (*(CDemonRenderer **)(unaff_retaddr + -8),*(SMRGLHeaderPrimitive **)(unaff_retaddr + -4)
            );
  *(uint *)(unaff_retaddr + -4) = 0;
  *(int **)(unaff_retaddr + -8) = DAT_00612560;
  *(uint *)(unaff_retaddr + -0xc) = 0x55fbe2;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
            (*(CDemonRenderer **)(unaff_retaddr + -8),*(int *)(unaff_retaddr + -4));
  return;
}

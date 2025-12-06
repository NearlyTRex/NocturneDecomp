// Name: core_cloth.cpp_FUN_0043bae0
// Address: 0043bae0
// Address Range: [[0043bae0, 0043bf33]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043bae0()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043bae0(void)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  SMRGLPrimitiveQuad *pSVar4;
  byte *puVar5;
  uint extraout_EDX;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  int unaff_retaddr;
  int in_stack_00000004;
  int in_stack_00000008;
  int iStack0000000c;
  byte *puStack00000010;
  
  bVar8 = 0;
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),*(int **)(in_stack_00000004 + 0x10c)
            );
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  fVar9 = (float10)*(float *)(in_stack_00000004 + 0x3ce88) * (float10)65535;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,iVar3));
  iVar3 = (int)ROUND(fVar9);
  if (iVar3 < 1000) {
    return;
  }
  if (iVar3 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,iVar3);
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800
            ((SMRGLTextureBasic *)(in_stack_00000004 + 0x124));
  if (*(int *)(in_stack_00000004 + 0x3ce84) == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),
               *(int *)(in_stack_00000004 + 0x110) / 2,*(SInputFace **)(in_stack_00000004 + 0x114),
               *(int *)(in_stack_00000004 + 0x10c),4,0);
    if ((in_stack_00000008 != 0) &&
       (iVar6 = 0, iVar3 = in_stack_00000004, 0 < *(int *)(in_stack_00000004 + 0x3f028))) {
      do {
        pCVar2 = g_CDemonRendererPtr;
        iVar1 = *(int *)(iVar3 + 0x3f02c);
        g_CDemonRendererPtr->vertex_buffer_ptr[iVar1].light = *(float *)(iVar3 + 0x3f98c);
        pCVar2->vertex_buffer_ptr[iVar1].color = *(int *)(iVar3 + 0x3fb1c);
        pCVar2->vertex_buffer_ptr[iVar1].fog = *(float *)(iVar3 + 0x3fcac);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(in_stack_00000004 + 0x3f028));
    }
    if (unaff_retaddr < 63000) {
      iVar3 = *(int *)(in_stack_00000004 + 0x110);
      iVar6 = 0x267;
      pSVar4 = *(SMRGLPrimitiveQuad **)(in_stack_00000004 + 0x114);
    }
    else {
      iVar3 = *(int *)(in_stack_00000004 + 0x110);
      iVar6 = -1;
      pSVar4 = *(SMRGLPrimitiveQuad **)(in_stack_00000004 + 0x114);
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar4,iVar3 / 2,iVar6);
    iVar3 = *(int *)(in_stack_00000004 + 0x110) / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),iVar3,
               (SInputFace *)(*(int *)(in_stack_00000004 + 0x114) + iVar3 * 0x48),
               *(int *)(in_stack_00000004 + 0x10c),4,0);
    if (62999 < in_stack_00000008) {
      in_stack_00000008 = *(int *)(in_stack_00000004 + 0x110) / 2;
      iVar3 = -1;
      pSVar4 = (SMRGLPrimitiveQuad *)
               (in_stack_00000008 * 0x48 + *(int *)(in_stack_00000004 + 0x114));
      goto LAB_0043bcda;
    }
    in_stack_00000008 = *(int *)(in_stack_00000004 + 0x110) / 2;
    pSVar4 = (SMRGLPrimitiveQuad *)(*(int *)(in_stack_00000004 + 0x114) + in_stack_00000008 * 0x48);
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),
               *(int *)(in_stack_00000004 + 0x110),*(SInputFace **)(in_stack_00000004 + 0x114),
               *(int *)(in_stack_00000004 + 0x10c),4,0);
    if ((in_stack_00000008 != 0) &&
       (iVar6 = 0, iVar3 = in_stack_00000004, 0 < *(int *)(in_stack_00000004 + 0x3f028))) {
      do {
        pCVar2 = g_CDemonRendererPtr;
        iVar1 = *(int *)(iVar3 + 0x3f02c);
        g_CDemonRendererPtr->vertex_buffer_ptr[iVar1].light = *(float *)(iVar3 + 0x3f98c);
        pCVar2->vertex_buffer_ptr[iVar1].color = *(int *)(iVar3 + 0x3fb1c);
        pCVar2->vertex_buffer_ptr[iVar1].fog = *(float *)(iVar3 + 0x3fcac);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(in_stack_00000004 + 0x3f028));
    }
    if (unaff_retaddr < 63000) {
      iVar6 = 0x267;
      iVar3 = *(int *)(in_stack_00000004 + 0x110);
      pSVar4 = *(SMRGLPrimitiveQuad **)(in_stack_00000004 + 0x114);
    }
    else {
      iVar6 = -1;
      iVar3 = *(int *)(in_stack_00000004 + 0x110);
      pSVar4 = *(SMRGLPrimitiveQuad **)(in_stack_00000004 + 0x114);
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar4,iVar3,iVar6);
    in_stack_00000008 = *(int *)(in_stack_00000004 + 0x110);
    if (1000 < in_stack_00000008) {
      in_stack_00000008 = 1000;
    }
    iStack0000000c = 0;
    if (0 < in_stack_00000008) {
      puStack00000010 = &DAT_00827500;
      do {
        iVar6 = *(int *)(in_stack_00000004 + 0x114) + iStack0000000c * 0x48;
        *(uint *)(puStack00000010 + 4) = *(uint *)(iVar6 + 4);
        iVar3 = 0;
        puVar5 = puStack00000010;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            iVar1 = iVar6 + ((*(int *)(iVar6 + 4) - iVar3) + -1) * 0xc;
            puVar7 = (uint *)(iVar1 + 0x1c + (uint)bVar8 * -8);
            *(uint *)(puVar5 + 0x18) = *(uint *)(iVar1 + 0x18);
            *(uint *)(puVar5 + (uint)bVar8 * -8 + 0x1c) = *puVar7;
            *(uint *)((int)(puVar5 + (uint)bVar8 * -8 + 0x1c) + ((uint)bVar8 * -2 + 1) * 4) =
                 puVar7[(uint)bVar8 * -2 + 1];
            iVar3 = iVar3 + 1;
            puVar5 = puVar5 + 0xc;
          } while (iVar3 < *(int *)(iVar6 + 4));
        }
        puStack00000010 = puStack00000010 + 0x48;
        iStack0000000c = iStack0000000c + 1;
      } while (iStack0000000c < in_stack_00000008);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),in_stack_00000008,
               (SInputFace *)&DAT_00827500,*(int *)(in_stack_00000004 + 0x10c),4,0);
    if (62999 < in_stack_00000008) {
      iVar3 = -1;
      pSVar4 = (SMRGLPrimitiveQuad *)&DAT_00827500;
      goto LAB_0043bcda;
    }
    pSVar4 = (SMRGLPrimitiveQuad *)&DAT_00827500;
  }
  iVar3 = 0x267;
LAB_0043bcda:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
            (g_CDemonSetPtr,pSVar4,in_stack_00000008,iVar3);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}

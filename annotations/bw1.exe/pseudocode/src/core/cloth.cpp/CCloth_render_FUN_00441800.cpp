// Name: core_cloth.cpp_CCloth_render_FUN_00441800
// Address: 00441800
// Address Range: [[00441800, 00441c53]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_00441800(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_render_FUN_00441800(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  SMRGLPrimitiveQuad *pSVar3;
  CCloth *pCVar4;
  byte *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  int iVar11;
  int local_1c;
  int local_18;
  byte *local_14;
  
  bVar9 = 0;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
            (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),*(CVector3i **)(this_ptr + 0x10c));
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  fVar10 = (float10)*(float *)(this_ptr + 0x37b48) * (float10)_DAT_005d6968;
  round();
  iVar11 = (int)ROUND(fVar10);
  if (iVar11 < 1000) {
    return;
  }
  if (iVar11 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,iVar11);
  }
  engine_texture_cpp_FUN_00597a20(this_ptr + 0x124);
  if (*(int *)(this_ptr + 0x37b44) == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),*(int *)(this_ptr + 0x110) / 2,
               *(void **)(this_ptr + 0x114),*(CVector3i **)(this_ptr + 0x10c),4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar7 = 0, pCVar4 = this_ptr, 0 < *(int *)(this_ptr + 0x39ce8))) {
      do {
        pCVar2 = DAT_00612560;
        iVar6 = *(int *)(pCVar4 + 0x39cec) * 0x30;
        *(uint *)(*(int *)DAT_00612560 + iVar6 + 0x20) = *(uint *)(pCVar4 + 0x3a64c);
        *(uint *)(iVar6 + 0x24 + *(int *)pCVar2) = *(uint *)(pCVar4 + 0x3a7dc);
        *(uint *)(iVar6 + *(int *)pCVar2 + 0x28) = *(uint *)(pCVar4 + 0x3a96c);
        iVar7 = iVar7 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar7 < *(int *)(this_ptr + 0x39ce8));
    }
    if (iVar11 < 63000) {
      iVar7 = *(int *)(this_ptr + 0x110);
      iVar6 = 0x267;
      pSVar3 = *(SMRGLPrimitiveQuad **)(this_ptr + 0x114);
    }
    else {
      iVar7 = *(int *)(this_ptr + 0x110);
      iVar6 = -1;
      pSVar3 = *(SMRGLPrimitiveQuad **)(this_ptr + 0x114);
    }
    core_set_cpp_FUN_005551f0(g_CDemonSetPtr,pSVar3,iVar7 / 2,iVar6);
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),*(int *)(this_ptr + 0x110) / 2,
               (void *)(*(int *)(this_ptr + 0x114) + (*(int *)(this_ptr + 0x110) / 2) * 0x48),
               *(CVector3i **)(this_ptr + 0x10c),4,(CVector3i *)0x0);
    if (62999 < iVar11) {
      local_1c = *(int *)(this_ptr + 0x110) / 2;
      iVar11 = -1;
      pSVar3 = (SMRGLPrimitiveQuad *)(local_1c * 0x48 + *(int *)(this_ptr + 0x114));
      goto LAB_004419fa;
    }
    local_1c = *(int *)(this_ptr + 0x110) / 2;
    pSVar3 = (SMRGLPrimitiveQuad *)(*(int *)(this_ptr + 0x114) + local_1c * 0x48);
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),*(int *)(this_ptr + 0x110),
               *(void **)(this_ptr + 0x114),*(CVector3i **)(this_ptr + 0x10c),4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar7 = 0, pCVar4 = this_ptr, 0 < *(int *)(this_ptr + 0x39ce8))) {
      do {
        pCVar2 = DAT_00612560;
        iVar6 = *(int *)(pCVar4 + 0x39cec) * 0x30;
        *(uint *)(iVar6 + 0x20 + *(int *)DAT_00612560) = *(uint *)(pCVar4 + 0x3a64c);
        *(uint *)(*(int *)pCVar2 + iVar6 + 0x24) = *(uint *)(pCVar4 + 0x3a7dc);
        *(uint *)(iVar6 + *(int *)pCVar2 + 0x28) = *(uint *)(pCVar4 + 0x3a96c);
        iVar7 = iVar7 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar7 < *(int *)(this_ptr + 0x39ce8));
    }
    if (iVar11 < 63000) {
      iVar6 = 0x267;
      iVar7 = *(int *)(this_ptr + 0x110);
      pSVar3 = *(SMRGLPrimitiveQuad **)(this_ptr + 0x114);
    }
    else {
      iVar6 = -1;
      iVar7 = *(int *)(this_ptr + 0x110);
      pSVar3 = *(SMRGLPrimitiveQuad **)(this_ptr + 0x114);
    }
    core_set_cpp_FUN_005551f0(g_CDemonSetPtr,pSVar3,iVar7,iVar6);
    local_1c = *(int *)(this_ptr + 0x110);
    if (1000 < local_1c) {
      local_1c = 1000;
    }
    local_18 = 0;
    if (0 < local_1c) {
      local_14 = &DAT_007c9c30;
      do {
        iVar6 = *(int *)(this_ptr + 0x114) + local_18 * 0x48;
        *(uint *)(local_14 + 4) = *(uint *)(iVar6 + 4);
        iVar7 = 0;
        puVar5 = local_14;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            iVar1 = iVar6 + ((*(int *)(iVar6 + 4) - iVar7) + -1) * 0xc;
            puVar8 = (uint *)(iVar1 + 0x1c + (uint)bVar9 * -8);
            *(uint *)(puVar5 + 0x18) = *(uint *)(iVar1 + 0x18);
            *(uint *)(puVar5 + (uint)bVar9 * -8 + 0x1c) = *puVar8;
            *(uint *)((int)(puVar5 + (uint)bVar9 * -8 + 0x1c) + ((uint)bVar9 * -2 + 1) * 4) =
                 puVar8[(uint)bVar9 * -2 + 1];
            iVar7 = iVar7 + 1;
            puVar5 = puVar5 + 0xc;
          } while (iVar7 < *(int *)(iVar6 + 4));
        }
        local_14 = local_14 + 0x48;
        local_18 = local_18 + 1;
      } while (local_18 < local_1c);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),local_1c,&DAT_007c9c30,
               *(CVector3i **)(this_ptr + 0x10c),4,(CVector3i *)0x0);
    if (62999 < iVar11) {
      iVar11 = -1;
      pSVar3 = (SMRGLPrimitiveQuad *)&DAT_007c9c30;
      goto LAB_004419fa;
    }
    pSVar3 = (SMRGLPrimitiveQuad *)&DAT_007c9c30;
  }
  iVar11 = 0x267;
LAB_004419fa:
  core_set_cpp_FUN_005551f0(g_CDemonSetPtr,pSVar3,local_1c,iVar11);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  return;
}

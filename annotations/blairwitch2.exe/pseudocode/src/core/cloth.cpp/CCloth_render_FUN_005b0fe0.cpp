// Name: core_cloth.cpp_CCloth_render_FUN_005b0fe0
// Address: 005b0fe0
// Address Range: [[005b0fe0, 005b1433]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_005b0fe0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_render_FUN_005b0fe0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  SMRGLPrimitiveQuad *pSVar3;
  CCloth *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  int iVar12;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
            (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),*(CVector3i **)(this_ptr + 0x10c));
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  fVar11 = (float10)*(float *)(this_ptr + 0x37b48) * (float10)_DAT_005f119b;
  round();
  iVar12 = (int)ROUND(fVar11);
  if (iVar12 < 1000) {
    return;
  }
  if (iVar12 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,iVar12);
  }
  engine_texture_cpp_FUN_00574e00(this_ptr + 0x124);
  if (*(int *)(this_ptr + 0x37b44) == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),*(int *)(this_ptr + 0x110) / 2,
               *(void **)(this_ptr + 0x114),*(CVector3i **)(this_ptr + 0x10c),4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar7 = 0, pCVar4 = this_ptr, 0 < *(int *)(this_ptr + 0x39ce8))) {
      do {
        pCVar2 = DAT_0060b280;
        iVar5 = *(int *)(pCVar4 + 0x39cec) * 0x30;
        *(uint *)(DAT_0060b280->vertex_buffer_ptr + iVar5 + 0x20) =
             *(uint *)(pCVar4 + 0x3a64c);
        *(uint *)(pCVar2->vertex_buffer_ptr + iVar5 + 0x24) =
             *(uint *)(pCVar4 + 0x3a7dc);
        *(uint *)(pCVar2->vertex_buffer_ptr + iVar5 + 0x28) =
             *(uint *)(pCVar4 + 0x3a96c);
        iVar7 = iVar7 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar7 < *(int *)(this_ptr + 0x39ce8));
    }
    if (iVar12 < 63000) {
      iVar7 = *(int *)(this_ptr + 0x110);
      iVar5 = 0x267;
      pSVar3 = *(SMRGLPrimitiveQuad **)(this_ptr + 0x114);
    }
    else {
      iVar7 = *(int *)(this_ptr + 0x110);
      iVar5 = -1;
      pSVar3 = *(SMRGLPrimitiveQuad **)(this_ptr + 0x114);
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40(g_CDemonSetPtr,pSVar3,iVar7 / 2,iVar5);
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),*(int *)(this_ptr + 0x110) / 2,
               (void *)(*(int *)(this_ptr + 0x114) + (*(int *)(this_ptr + 0x110) / 2) * 0x48),
               *(CVector3i **)(this_ptr + 0x10c),4,(CVector3i *)0x0);
    if (62999 < iVar12) {
      local_1c = *(int *)(this_ptr + 0x110) / 2;
      iVar12 = -1;
      pSVar3 = (SMRGLPrimitiveQuad *)(local_1c * 0x48 + *(int *)(this_ptr + 0x114));
      goto LAB_005b11da;
    }
    local_1c = *(int *)(this_ptr + 0x110) / 2;
    pSVar3 = (SMRGLPrimitiveQuad *)(*(int *)(this_ptr + 0x114) + local_1c * 0x48);
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),*(int *)(this_ptr + 0x110),
               *(void **)(this_ptr + 0x114),*(CVector3i **)(this_ptr + 0x10c),4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar7 = 0, pCVar4 = this_ptr, 0 < *(int *)(this_ptr + 0x39ce8))) {
      do {
        pCVar2 = DAT_0060b280;
        iVar5 = *(int *)(pCVar4 + 0x39cec) * 0x30;
        *(uint *)(DAT_0060b280->vertex_buffer_ptr + iVar5 + 0x20) =
             *(uint *)(pCVar4 + 0x3a64c);
        *(uint *)(pCVar2->vertex_buffer_ptr + iVar5 + 0x24) =
             *(uint *)(pCVar4 + 0x3a7dc);
        *(uint *)(pCVar2->vertex_buffer_ptr + iVar5 + 0x28) =
             *(uint *)(pCVar4 + 0x3a96c);
        iVar7 = iVar7 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar7 < *(int *)(this_ptr + 0x39ce8));
    }
    if (iVar12 < 63000) {
      iVar5 = 0x267;
      iVar7 = *(int *)(this_ptr + 0x110);
      pSVar3 = *(SMRGLPrimitiveQuad **)(this_ptr + 0x114);
    }
    else {
      iVar5 = -1;
      iVar7 = *(int *)(this_ptr + 0x110);
      pSVar3 = *(SMRGLPrimitiveQuad **)(this_ptr + 0x114);
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40(g_CDemonSetPtr,pSVar3,iVar7,iVar5);
    local_1c = *(int *)(this_ptr + 0x110);
    if (1000 < local_1c) {
      local_1c = 1000;
    }
    local_18 = 0;
    if (0 < local_1c) {
      local_14 = 0x2668a10;
      do {
        iVar6 = *(int *)(this_ptr + 0x114) + local_18 * 0x48;
        *(uint *)(local_14 + 4) = *(uint *)(iVar6 + 4);
        iVar5 = 0;
        iVar7 = local_14;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            iVar1 = iVar6 + ((*(int *)(iVar6 + 4) - iVar5) + -1) * 0xc;
            puVar9 = (uint *)(iVar7 + 0x1c + (uint)bVar10 * -8);
            puVar8 = (uint *)(iVar1 + 0x1c + (uint)bVar10 * -8);
            *(uint *)(iVar7 + 0x18) = *(uint *)(iVar1 + 0x18);
            *puVar9 = *puVar8;
            puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar5 < *(int *)(iVar6 + 4));
        }
        local_14 = local_14 + 0x48;
        local_18 = local_18 + 1;
      } while (local_18 < local_1c);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,*(int *)(this_ptr + 0x104),local_1c,(void *)0x2668a10,
               *(CVector3i **)(this_ptr + 0x10c),4,(CVector3i *)0x0);
    if (62999 < iVar12) {
      iVar12 = -1;
      pSVar3 = (SMRGLPrimitiveQuad *)0x2668a10;
      goto LAB_005b11da;
    }
    pSVar3 = (SMRGLPrimitiveQuad *)0x2668a10;
  }
  iVar12 = 0x267;
LAB_005b11da:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40(g_CDemonSetPtr,pSVar3,local_1c,iVar12);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  return;
}

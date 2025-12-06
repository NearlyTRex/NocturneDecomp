// Name: core_charactr.cpp_CCharacter_FUN_00429b40
// Address: 00429b40
// Address Range: [[00429b40, 0042a2b4]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00429b40(CCharacter * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_FUN_00429b40(CCharacter *this_ptr)

{
  char cVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  byte *unaff_ESI;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  CVector3f *pCVar8;
  float10 fVar9;
  float10 fVar10;
  CDemonRenderer *pCVar11;
  int local_e4;
  SMRGLHeaderPrimitive local_d4;
  int local_bc;
  CVector3i local_b8;
  byte local_a8 [16];
  int iStack_98;
  int iStack_94;
  CVector3f local_90;
  CVector3f local_84;
  float local_78;
  CVector3f local_74;
  CVector3i local_68;
  byte local_5c [8];
  int iStack_54;
  int iStack_50;
  float local_3c;
  char *local_38;
  float local_2c;
  byte *local_28;
  char *local_24;
  float local_20;
  CVector3f *local_18;
  CVector3f *pCStack_14;
  
  local_d4.base.type =
       engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (local_d4.base.type != 0) {
    return;
  }
  pcVar5 = "headlite.raw";
  pcVar7 = &DAT_00823a80;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  local_d4.base.count = local_d4.base.type;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)&DAT_00823a78);
  iVar6 = 0;
  do {
    pCVar11 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar6) = 0x800000;
    iVar3 = iVar6 + 0x30;
    *(uint *)((int)&pCVar11->vertex_buffer_ptr->v + iVar6) = 0x800000;
    iVar6 = iVar3;
  } while (iVar3 != 0x12c0);
  local_24 = (char *)0x267;
  local_d4.surface_normal.B = 0;
  local_d4.surface_normal.C = 1;
  local_d4.surface_normal.D = 2;
  local_bc = 3;
  local_18 = (CVector3f *)(this_ptr->cloth_data + 0x1c4);
  local_38 = this_ptr->cloth_data + 0x278;
  local_28 = (byte *)0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(int)local_28 / 5);
    iVar6 = 0;
    pCVar8 = pCStack_14;
    do {
      pCVar11 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0;
      *(uint *)((int)&pCVar11->vertex_buffer_ptr->color + iVar6) = 0xffff;
      *(uint *)((int)&pCVar11->vertex_buffer_ptr->fog + iVar6) = 0;
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,&local_84,pCVar8);
      if (&local_74 != pCVar4) {
        local_74.x = pCVar4->x;
        local_74.y = pCVar4->y;
        local_74.z = pCVar4->z;
      }
      local_68.x = (int)ROUND(local_74.x * _DAT_0065b810);
      local_68.y = (int)ROUND(local_74.y * _DAT_0065b810);
      local_68.z = (int)ROUND(local_74.z * _DAT_0065b810);
      pCVar8 = pCVar8 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar6),&local_68);
      iVar6 = iVar6 + 0x30;
    } while (iVar6 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,&local_d4,0x267);
    unaff_ESI = unaff_ESI + 0x24;
    local_18 = (CVector3f *)((int)local_18 + -0x8000);
  } while (unaff_ESI != local_28);
  pcVar5 = this_ptr->cloth_data + 0x278;
  local_24 = this_ptr->cloth_data + 0x32c;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(int)local_20 / 5);
    iVar6 = 0;
    pCVar8 = local_18;
    do {
      pCVar11 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0;
      *(uint *)((int)&pCVar11->vertex_buffer_ptr->color + iVar6) = 0;
      *(uint *)((int)&pCVar11->vertex_buffer_ptr->fog + iVar6) = 0xffff;
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,&local_90,pCVar8);
      if (&local_74 != pCVar4) {
        local_74.x = pCVar4->x;
        local_74.y = pCVar4->y;
        local_74.z = pCVar4->z;
      }
      local_5c._0_4_ = (uint)ROUND(local_74.x * _DAT_0065b810);
      local_5c._4_4_ = (uint)ROUND(local_74.y * _DAT_0065b810);
      iStack_54 = (int)ROUND(local_74.z * _DAT_0065b810);
      pCVar8 = pCVar8 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar6),(CVector3i *)local_5c);
      iVar6 = iVar6 + 0x30;
    } while (iVar6 != 0x90);
    pCVar8 = local_18;
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,&local_d4,(int)local_18);
    pcVar5 = pcVar5 + 0x24;
  } while (pcVar5 != local_24);
  local_20 = *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
  if (local_20 < *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale) {
    local_20 = (this_ptr->model).bounding_box.max.y;
  }
  local_d4.base.type = (int)(*(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale);
  if (local_20 < (float)local_d4.base.type) {
    local_20 = this_ptr->size_scale * (float)0.5 + (float)local_d4.base.type;
  }
  local_2c = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
  pCVar11 = (CDemonRenderer *)(*(float *)(this_ptr->cloth_data + 0x348) * this_ptr->size_scale);
  iVar6 = 0x30;
  iVar3 = 0;
  do {
    fVar9 = (float10)((int)pCStack_14 * 2) * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar10 = (float10)fsin(fVar9);
    fVar9 = (float10)fcos(fVar9);
    local_78 = local_3c;
    local_84.z = (float)(fVar10 * (float10)(float)pCVar11);
    local_74.x = (float)(fVar9 * (float10)(float)pCVar11);
    local_5c._4_4_ = (uint)ROUND(local_84.z * _DAT_0065b810);
    iStack_54 = (int)ROUND(local_3c * _DAT_0065b810);
    iStack_50 = (int)ROUND(local_74.x * _DAT_0065b810);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar3),(CVector3i *)(local_5c + 4));
    pCVar2 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar3) = 0xffff;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->color + iVar3) = 0;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->fog + iVar3) = 0;
    local_74.x = local_2c;
    local_28 = (byte *)((int)&pCVar8->x + 1);
    local_a8._0_4_ = (uint)ROUND(local_78 * _DAT_0065b810);
    local_a8._4_4_ = (uint)ROUND(local_2c * _DAT_0065b810);
    local_a8._8_4_ = (uint)ROUND(local_74.y * _DAT_0065b810);
    pCVar11 = (CDemonRenderer *)local_a8;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x + iVar6),
               (CVector3i *)pCVar11);
    pCVar2 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0xffff;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->color + iVar6) = 0;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->fog + iVar6) = 0;
    if (0 < (int)pcVar5) {
      local_d4.surface_normal.D = local_e4 + -2;
      local_bc = local_e4 + -1;
      local_b8.x = (int)local_24;
      local_d4.base.type = 4;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar2,0x4000);
      pCVar11 = g_CDemonRendererPtr;
      pCVar8 = local_18;
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr,&local_d4,(int)local_18);
    }
    iVar3 = iVar3 + 0x60;
    pCStack_14 = (CVector3f *)((int)&pCStack_14->x + 1);
    iVar6 = iVar6 + 0x60;
  } while ((int)pCStack_14 < 0x19);
  local_b8.x = (int)ROUND(g_ZeroVector.x * _DAT_0065b810);
  local_b8.y = (int)ROUND(g_ZeroVector.y * _DAT_0065b810);
  local_b8.z = (int)ROUND(g_ZeroVector.z * _DAT_0065b810);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_b8);
  pCVar11 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = 9.18341e-41;
  iVar3 = 0;
  pCVar11->vertex_buffer_ptr->color = 0;
  iVar6 = 0x30;
  local_e4 = 0;
  pCVar11->vertex_buffer_ptr->fog = 0.0;
  do {
    fVar9 = (float10)local_e4 * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar10 = (float10)fsin(fVar9);
    fVar9 = (float10)fcos(fVar9);
    local_78 = (float)((float10)this_ptr->size_scale *
                      (float10)*(float *)(this_ptr->cloth_data + 0x344) * fVar10);
    local_74.x = 0.0;
    local_74.y = (float)(fVar9 * (float10)*(float *)(this_ptr->cloth_data + 0x344) *
                        (float10)this_ptr->size_scale);
    local_a8._12_4_ = (uint)ROUND(local_78 * _DAT_0065b810);
    iStack_98 = (int)ROUND(_DAT_0065b810 * 0.0);
    iStack_94 = (int)ROUND(local_74.y * _DAT_0065b810);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar6),(CVector3i *)(local_a8 + 0xc));
    pCVar11 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0xffff;
    *(uint *)((int)&pCVar11->vertex_buffer_ptr->color + iVar6) = 0;
    *(uint *)((int)&pCVar11->vertex_buffer_ptr->fog + iVar6) = 0;
    if (0 < iVar3) {
      local_d4.base.type = 3;
      local_d4.surface_normal.D = 0;
      local_bc = iVar3 + -1;
      local_b8.x = iVar3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar11,0x4000);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr,&local_d4,(int)local_18);
    }
    iVar3 = iVar3 + 1;
    local_e4 = local_e4 + 2;
    iVar6 = iVar6 + 0x30;
  } while (iVar3 < 0x19);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}

// Name: core_charactr.cpp_CCharacter_FUN_00429b40
// Address: 00429b40
// Address Range: [[00429b40, 0042a2b4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_00429b40(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00429b40(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  CDemonRenderer *pCVar5;
  int iVar6;
  CVector3f *pCVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  CVector3f *pCVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  int local_f0;
  SMRGLHeaderPrimitive local_e8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  CVector3i local_c0;
  CVector3i local_b4;
  CVector3i local_a8;
  CVector3f local_9c;
  CVector3f local_90;
  CVector3f local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60 [2];
  float local_44;
  CVector3f *local_40;
  CVector3f *local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CVector3f *local_24;
  CVector3f *local_20;
  int local_1c;
  int local_18;
  
  local_e8.surface_normal.A =
       engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (local_e8.surface_normal.A != 0) {
    return;
  }
  pcVar8 = "headlite.raw";
  pcVar10 = &DAT_00823a80;
  do {
    cVar3 = *pcVar8;
    *pcVar10 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar3;
    pcVar10 = pcVar10 + 2;
  } while (cVar3 != '\0');
  local_e8.surface_normal.B = local_e8.surface_normal.A;
  local_e8.surface_normal.C = local_e8.surface_normal.A;
  local_e8.surface_normal.D = local_e8.surface_normal.A;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(SMRGLTextureBasic *)&DAT_00823a78);
  iVar9 = 0;
  do {
    pCVar5 = g_CDemonRendererPtr2;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->u + iVar9) = 0x800000;
    iVar6 = iVar9 + 0x30;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->v + iVar9) = 0x800000;
    iVar9 = iVar6;
  } while (iVar6 != 0x12c0);
  local_2c = 0x267;
  local_e8.base.count = 3;
  local_d0 = 0;
  local_cc = 1;
  local_c8 = 2;
  local_c4 = 3;
  local_20 = (CVector3f *)(this_ptr->cloth_data + 0x1c4);
  local_40 = (CVector3f *)(this_ptr->cloth_data + 0x278);
  local_30 = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,local_30 / 5)
    ;
    iVar9 = 0;
    pCVar11 = local_20;
    do {
      pCVar5 = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar9) = 0;
      *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar9) = 0xffff;
      *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar9) = 0;
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,&local_90,pCVar11);
      if (&local_84 != pCVar7) {
        local_84.x = pCVar7->x;
        local_84.y = pCVar7->y;
        local_84.z = pCVar7->z;
      }
      local_78.x = (int)ROUND(local_84.x * 256.0f);
      local_78.y = (int)ROUND(local_84.y * 256.0f);
      local_78.z = (int)ROUND(local_84.z * 256.0f);
      pCVar11 = pCVar11 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar9),&local_78);
      iVar9 = iVar9 + 0x30;
    } while (iVar9 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr2,&local_e8,0x267);
    local_20 = local_20 + 3;
    local_30 = local_30 + -0x8000;
  } while (local_20 != local_40);
  local_24 = (CVector3f *)(this_ptr->cloth_data + 0x278);
  local_3c = (CVector3f *)(this_ptr->cloth_data + 0x32c);
  local_28 = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,local_28 / 5)
    ;
    iVar9 = 0;
    pCVar11 = local_24;
    do {
      pCVar5 = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar9) = 0;
      *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar9) = 0;
      *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar9) = 0xffff;
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,&local_9c,pCVar11);
      if (&local_84 != pCVar7) {
        local_84.x = pCVar7->x;
        local_84.y = pCVar7->y;
        local_84.z = pCVar7->z;
      }
      local_6c.x = (int)ROUND(local_84.x * 256.0f);
      local_6c.y = (int)ROUND(local_84.y * 256.0f);
      local_6c.z = (int)ROUND(local_84.z * 256.0f);
      pCVar11 = pCVar11 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar9),&local_6c);
      iVar9 = iVar9 + 0x30;
    } while (iVar9 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr2,&local_e8,local_2c);
    local_24 = local_24 + 3;
    local_28 = local_28 + -0x8000;
  } while (local_24 != local_3c);
  local_38 = *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
  if (local_38 < *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale) {
    local_38 = (this_ptr->model).bounding_box.max.y;
  }
  fVar1 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
  if (local_38 < fVar1) {
    local_38 = this_ptr->size_scale * (float)0.5 + fVar1;
  }
  local_44 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
  fVar1 = *(float *)(this_ptr->cloth_data + 0x348);
  fVar2 = this_ptr->size_scale;
  iVar9 = 0x30;
  iVar6 = 0;
  local_1c = 0;
  do {
    iVar4 = local_1c * 2;
    fVar12 = (float10)iVar4 * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar13 = (float10)fsin(fVar12);
    fVar12 = (float10)fcos(fVar12);
    fVar14 = (float10)(fVar1 * fVar2);
    local_84.y = local_44;
    local_84.x = (float)(fVar13 * fVar14);
    local_84.z = (float)(fVar12 * fVar14);
    local_60[0].x = (int)ROUND(local_84.x * 256.0f);
    local_60[0].y = (int)ROUND(local_44 * 256.0f);
    local_60[0].z = (int)ROUND(local_84.z * 256.0f);
    local_18 = iVar4;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar6),local_60);
    pCVar5 = g_CDemonRendererPtr2;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar6) = 0xffff;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar6) = 0;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar6) = 0;
    local_84.y = local_38;
    local_34 = iVar4 + 1;
    local_b4.x = (int)ROUND(local_84.x * 256.0f);
    local_b4.y = (int)ROUND(local_38 * 256.0f);
    local_b4.z = (int)ROUND(local_84.z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(pCVar5->vertex_buffer_ptr->projected_vertex).transformed_x + iVar9),&local_b4
              );
    pCVar5 = g_CDemonRendererPtr2;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar9) = 0xffff;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar9) = 0;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar9) = 0;
    if (0 < local_1c) {
      local_d0 = iVar4 + -2;
      local_cc = iVar4 + -1;
      local_c8 = local_34;
      local_e8.base.count = 4;
      local_c4 = iVar4;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar5,0x4000);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&local_e8,local_2c);
    }
    iVar6 = iVar6 + 0x60;
    local_1c = local_1c + 1;
    iVar9 = iVar9 + 0x60;
  } while (local_1c < 0x19);
  local_c0.x = (int)ROUND(g_ZeroVector.x * 256.0f);
  local_c0.y = (int)ROUND(g_ZeroVector.y * 256.0f);
  local_c0.z = (int)ROUND(g_ZeroVector.z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_c0);
  pCVar5 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->light = 9.18341e-41;
  iVar6 = 0;
  pCVar5->vertex_buffer_ptr->color = 0;
  iVar9 = 0x30;
  local_f0 = 0;
  pCVar5->vertex_buffer_ptr->fog = 0.0;
  do {
    local_18 = local_f0;
    fVar12 = (float10)local_f0 * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar13 = (float10)fsin(fVar12);
    fVar12 = (float10)fcos(fVar12);
    local_84.x = (float)((float10)this_ptr->size_scale *
                        (float10)*(float *)(this_ptr->cloth_data + 0x344) * fVar13);
    local_84.y = 0.0;
    local_84.z = (float)(fVar12 * (float10)*(float *)(this_ptr->cloth_data + 0x344) *
                        (float10)this_ptr->size_scale);
    local_a8.x = (int)ROUND(local_84.x * 256.0f);
    local_a8.y = (int)ROUND(256.0f * 0.0);
    local_a8.z = (int)ROUND(local_84.z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar9),&local_a8);
    pCVar5 = g_CDemonRendererPtr2;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar9) = 0xffff;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar9) = 0;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar9) = 0;
    if (0 < iVar6) {
      local_e8.base.count = 3;
      local_d0 = 0;
      local_cc = iVar6 + -1;
      local_c8 = iVar6;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar5,0x4000);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&local_e8,local_2c);
    }
    iVar6 = iVar6 + 1;
    local_f0 = local_f0 + 2;
    iVar9 = iVar9 + 0x30;
  } while (iVar6 < 0x19);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  return;
}

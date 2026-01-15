// Name: core_charactr.cpp_CCharacter_FUN_00429b40
// Address: 00429b40
// Address Range: [[00429b40, 0042a2b4]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00429b40(CCharacter * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  int local_ec;
  SMRGLHeaderPrimitive local_e4;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  CVector3i local_bc;
  CVector3i local_b0;
  CVector3i local_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f local_80;
  CVector3i local_74;
  CVector3i local_68;
  CVector3i local_5c [2];
  float local_40;
  CVector3f *local_3c;
  CVector3f *local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  int local_18;
  int iStack_14;
  
  local_e4.surface_normal.A =
       engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (local_e4.surface_normal.A != 0) {
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
  local_e4.surface_normal.B = local_e4.surface_normal.A;
  local_e4.surface_normal.C = local_e4.surface_normal.A;
  local_e4.surface_normal.D = local_e4.surface_normal.A;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)&DAT_00823a78);
  iVar9 = 0;
  do {
    pCVar5 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar9) = 0x800000;
    iVar6 = iVar9 + 0x30;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->v + iVar9) = 0x800000;
    iVar9 = iVar6;
  } while (iVar6 != 0x12c0);
  local_28 = 0x267;
  local_e4.base.count = 3;
  local_cc = 0;
  local_c8 = 1;
  local_c4 = 2;
  local_c0 = 3;
  local_1c = (CVector3f *)(this_ptr->cloth_data + 0x1c4);
  local_3c = (CVector3f *)(this_ptr->cloth_data + 0x278);
  local_2c = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,local_2c / 5);
    iVar9 = 0;
    pCVar11 = local_1c;
    do {
      pCVar5 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar9) = 0;
      *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar9) = 0xffff;
      *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar9) = 0;
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,&CStack_8c,pCVar11);
      if (&local_80 != pCVar7) {
        local_80.x = pCVar7->x;
        local_80.y = pCVar7->y;
        local_80.z = pCVar7->z;
      }
      local_74.x = (int)ROUND(local_80.x * _DAT_0065b810);
      local_74.y = (int)ROUND(local_80.y * _DAT_0065b810);
      local_74.z = (int)ROUND(local_80.z * _DAT_0065b810);
      pCVar11 = pCVar11 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar9),&local_74);
      iVar9 = iVar9 + 0x30;
    } while (iVar9 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,&local_e4,0x267);
    local_1c = local_1c + 3;
    local_2c = local_2c + -0x8000;
  } while (local_1c != local_3c);
  local_20 = (CVector3f *)(this_ptr->cloth_data + 0x278);
  local_38 = (CVector3f *)(this_ptr->cloth_data + 0x32c);
  local_24 = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,local_24 / 5);
    iVar9 = 0;
    pCVar11 = local_20;
    do {
      pCVar5 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar9) = 0;
      *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar9) = 0;
      *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar9) = 0xffff;
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,&CStack_98,pCVar11);
      if (&local_80 != pCVar7) {
        local_80.x = pCVar7->x;
        local_80.y = pCVar7->y;
        local_80.z = pCVar7->z;
      }
      local_68.x = (int)ROUND(local_80.x * _DAT_0065b810);
      local_68.y = (int)ROUND(local_80.y * _DAT_0065b810);
      local_68.z = (int)ROUND(local_80.z * _DAT_0065b810);
      pCVar11 = pCVar11 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar9),&local_68);
      iVar9 = iVar9 + 0x30;
    } while (iVar9 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,&local_e4,local_28);
    local_20 = local_20 + 3;
    local_24 = local_24 + -0x8000;
  } while (local_20 != local_38);
  local_34 = *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
  if (local_34 < *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale) {
    local_34 = (this_ptr->model).bounding_box.max.y;
  }
  fVar1 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
  if (local_34 < fVar1) {
    local_34 = this_ptr->size_scale * (float)0.5 + fVar1;
  }
  local_40 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
  fVar1 = *(float *)(this_ptr->cloth_data + 0x348);
  fVar2 = this_ptr->size_scale;
  iVar9 = 0x30;
  iVar6 = 0;
  local_18 = 0;
  do {
    iVar4 = local_18 * 2;
    fVar12 = (float10)iVar4 * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar13 = (float10)fsin(fVar12);
    fVar12 = (float10)fcos(fVar12);
    fVar14 = (float10)(fVar1 * fVar2);
    local_80.y = local_40;
    local_80.x = (float)(fVar13 * fVar14);
    local_80.z = (float)(fVar12 * fVar14);
    local_5c[0].x = (int)ROUND(local_80.x * _DAT_0065b810);
    local_5c[0].y = (int)ROUND(local_40 * _DAT_0065b810);
    local_5c[0].z = (int)ROUND(local_80.z * _DAT_0065b810);
    iStack_14 = iVar4;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar6),local_5c);
    pCVar5 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0xffff;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar6) = 0;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar6) = 0;
    local_80.y = local_34;
    local_30 = iVar4 + 1;
    local_b0.x = (int)ROUND(local_80.x * _DAT_0065b810);
    local_b0.y = (int)ROUND(local_34 * _DAT_0065b810);
    local_b0.z = (int)ROUND(local_80.z * _DAT_0065b810);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(pCVar5->vertex_buffer_ptr->projected_vertex).transformed_x + iVar9),&local_b0
              );
    pCVar5 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar9) = 0xffff;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar9) = 0;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar9) = 0;
    if (0 < local_18) {
      local_cc = iVar4 + -2;
      local_c8 = iVar4 + -1;
      local_c4 = local_30;
      local_e4.base.count = 4;
      local_c0 = iVar4;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar5,0x4000);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr,&local_e4,local_28);
    }
    iVar6 = iVar6 + 0x60;
    local_18 = local_18 + 1;
    iVar9 = iVar9 + 0x60;
  } while (local_18 < 0x19);
  local_bc.x = (int)ROUND(g_ZeroVector.x * _DAT_0065b810);
  local_bc.y = (int)ROUND(g_ZeroVector.y * _DAT_0065b810);
  local_bc.z = (int)ROUND(g_ZeroVector.z * _DAT_0065b810);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_bc);
  pCVar5 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = 9.18341e-41;
  iVar6 = 0;
  pCVar5->vertex_buffer_ptr->color = 0;
  iVar9 = 0x30;
  local_ec = 0;
  pCVar5->vertex_buffer_ptr->fog = 0.0;
  do {
    iStack_14 = local_ec;
    fVar12 = (float10)local_ec * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar13 = (float10)fsin(fVar12);
    fVar12 = (float10)fcos(fVar12);
    local_80.x = (float)((float10)this_ptr->size_scale *
                        (float10)*(float *)(this_ptr->cloth_data + 0x344) * fVar13);
    local_80.y = 0.0;
    local_80.z = (float)(fVar12 * (float10)*(float *)(this_ptr->cloth_data + 0x344) *
                        (float10)this_ptr->size_scale);
    local_a4.x = (int)ROUND(local_80.x * _DAT_0065b810);
    local_a4.y = (int)ROUND(_DAT_0065b810 * 0.0);
    local_a4.z = (int)ROUND(local_80.z * _DAT_0065b810);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar9),&local_a4);
    pCVar5 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar9) = 0xffff;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->color + iVar9) = 0;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->fog + iVar9) = 0;
    if (0 < iVar6) {
      local_e4.base.count = 3;
      local_cc = 0;
      local_c8 = iVar6 + -1;
      local_c4 = iVar6;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar5,0x4000);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr,&local_e4,local_28);
    }
    iVar6 = iVar6 + 1;
    local_ec = local_ec + 2;
    iVar9 = iVar9 + 0x30;
  } while (iVar6 < 0x19);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}

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
  float fVar2;
  CDemonRenderer *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  CVector3f *pCVar9;
  float10 fVar10;
  float10 fVar11;
  CVector3i *input;
  int local_f0;
  int local_ec;
  SMRGLHeaderPrimitive local_e4;
  uint local_cc;
  int local_c8;
  int local_c4;
  CVector3i local_c0;
  CVector3i local_b0;
  CVector3i local_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  float local_80;
  byte local_7c [12];
  int local_70;
  int local_6c;
  byte local_68 [12];
  int local_5c;
  int local_58;
  float local_44;
  float local_40;
  CVector3f *local_3c;
  CVector3f *local_38;
  float local_34;
  int local_30;
  int local_2c;
  CVector3i *local_28;
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
  pcVar6 = "headlite.raw";
  pcVar8 = &DAT_00823a80;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_e4.surface_normal.B = local_e4.surface_normal.A;
  local_e4.surface_normal.C = local_e4.surface_normal.A;
  local_e4.surface_normal.D = local_e4.surface_normal.A;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)&DAT_00823a78);
  iVar7 = 0;
  do {
    pCVar3 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar7) = 0x800000;
    iVar4 = iVar7 + 0x30;
    *(uint *)((int)&pCVar3->vertex_buffer_ptr->v + iVar7) = 0x800000;
    iVar7 = iVar4;
  } while (iVar4 != 0x12c0);
  local_28 = (CVector3i *)0x267;
  local_e4.base.count = 3;
  local_cc = 0;
  local_c8 = 1;
  local_c4 = 2;
  local_c0.x = 3;
  local_1c = (CVector3f *)(this_ptr->cloth_data + 0x1c4);
  local_3c = (CVector3f *)(this_ptr->cloth_data + 0x278);
  local_2c = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,local_2c / 5);
    iVar7 = 0;
    pCVar9 = local_1c;
    do {
      pCVar3 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar7) = 0;
      *(uint *)((int)&pCVar3->vertex_buffer_ptr->color + iVar7) = 0xffff;
      *(uint *)((int)&pCVar3->vertex_buffer_ptr->fog + iVar7) = 0;
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,&CStack_8c,pCVar9);
      if ((CVector3f *)local_7c != pCVar5) {
        local_80 = pCVar5->x;
        local_7c._0_4_ = pCVar5->y;
        local_7c._4_4_ = pCVar5->z;
      }
      local_7c._8_4_ = (uint)ROUND(local_80 * _DAT_0065b810);
      local_70 = (int)ROUND((float)local_7c._0_4_ * _DAT_0065b810);
      local_6c = (int)ROUND((float)local_7c._4_4_ * _DAT_0065b810);
      pCVar9 = pCVar9 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar7),(CVector3i *)(local_7c + 8));
      iVar7 = iVar7 + 0x30;
    } while (iVar7 != 0x90);
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
    iVar7 = 0;
    pCVar9 = local_20;
    do {
      pCVar3 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar7) = 0;
      *(uint *)((int)&pCVar3->vertex_buffer_ptr->color + iVar7) = 0;
      *(uint *)((int)&pCVar3->vertex_buffer_ptr->fog + iVar7) = 0xffff;
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,&CStack_98,pCVar9);
      if ((CVector3f *)local_7c != pCVar5) {
        local_80 = pCVar5->x;
        local_7c._0_4_ = pCVar5->y;
        local_7c._4_4_ = pCVar5->z;
      }
      local_68._0_4_ = (uint)ROUND(local_80 * _DAT_0065b810);
      local_68._4_4_ = (uint)ROUND((float)local_7c._0_4_ * _DAT_0065b810);
      local_68._8_4_ = (uint)ROUND((float)local_7c._4_4_ * _DAT_0065b810);
      pCVar9 = pCVar9 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar7),(CVector3i *)local_68);
      iVar7 = iVar7 + 0x30;
    } while (iVar7 != 0x90);
    input = local_28;
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,&local_e4,(int)local_28);
    local_20 = local_20 + 3;
    local_24 = local_24 + -0x8000;
  } while (local_20 != local_38);
  local_34 = *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
  if (local_34 < *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale) {
    local_34 = (this_ptr->model).bounding_box.max.y;
  }
  fVar2 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
  if (local_34 < fVar2) {
    local_34 = this_ptr->size_scale * (float)0.5 + fVar2;
  }
  local_40 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
  iVar7 = 0x30;
  iVar4 = 0;
  do {
    local_18 = (int)local_1c * 2;
    fVar10 = (float10)local_18 * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar11 = (float10)fsin(fVar10);
    fVar10 = (float10)fcos(fVar10);
    local_80 = local_44;
    CStack_8c.z = (float)(fVar11 * (float10)(float)input);
    local_7c._0_4_ = (uint)(fVar10 * (float10)(float)input);
    local_68._8_4_ = (uint)ROUND(CStack_8c.z * _DAT_0065b810);
    local_5c = (int)ROUND(local_44 * _DAT_0065b810);
    local_58 = (int)ROUND((float)local_7c._0_4_ * _DAT_0065b810);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar4),(CVector3i *)(local_68 + 8));
    pCVar3 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar4) = 0xffff;
    *(uint *)((int)&pCVar3->vertex_buffer_ptr->color + iVar4) = 0;
    *(uint *)((int)&pCVar3->vertex_buffer_ptr->fog + iVar4) = 0;
    local_7c._0_4_ = local_34;
    local_30 = local_f0 + 1;
    local_b0.x = (int)ROUND(local_80 * _DAT_0065b810);
    local_b0.y = (int)ROUND(local_34 * _DAT_0065b810);
    local_b0.z = (int)ROUND((float)local_7c._4_4_ * _DAT_0065b810);
    input = &local_b0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(pCVar3->vertex_buffer_ptr->projected_vertex).transformed_x + iVar7),input);
    pCVar3 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar7) = 0xffff;
    *(uint *)((int)&pCVar3->vertex_buffer_ptr->color + iVar7) = 0;
    *(uint *)((int)&pCVar3->vertex_buffer_ptr->fog + iVar7) = 0;
    if (0 < iStack_14) {
      local_c8 = local_ec + -2;
      local_c4 = local_ec + -1;
      local_c0.x = local_2c;
      local_e4.surface_normal.A = 4;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar3,0x4000);
      input = local_28;
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr,&local_e4,(int)local_28);
    }
    iVar4 = iVar4 + 0x60;
    local_1c = (CVector3f *)((int)&local_1c->x + 1);
    iVar7 = iVar7 + 0x60;
  } while ((int)local_1c < 0x19);
  local_c0.x = (int)ROUND(g_ZeroVector.x * _DAT_0065b810);
  local_c0.y = (int)ROUND(g_ZeroVector.y * _DAT_0065b810);
  local_c0.z = (int)ROUND(g_ZeroVector.z * _DAT_0065b810);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_c0);
  pCVar3 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = 9.18341e-41;
  iVar4 = 0;
  pCVar3->vertex_buffer_ptr->color = 0;
  iVar7 = 0x30;
  local_ec = 0;
  pCVar3->vertex_buffer_ptr->fog = 0.0;
  do {
    iStack_14 = local_ec;
    fVar10 = (float10)local_ec * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar11 = (float10)fsin(fVar10);
    fVar10 = (float10)fcos(fVar10);
    local_80 = (float)((float10)this_ptr->size_scale *
                      (float10)*(float *)(this_ptr->cloth_data + 0x344) * fVar11);
    local_7c._0_4_ = 0.0;
    local_7c._4_4_ =
         (uint)
         (fVar10 * (float10)*(float *)(this_ptr->cloth_data + 0x344) * (float10)this_ptr->size_scale
         );
    local_a4.x = (int)ROUND(local_80 * _DAT_0065b810);
    local_a4.y = (int)ROUND(_DAT_0065b810 * 0.0);
    local_a4.z = (int)ROUND((float)local_7c._4_4_ * _DAT_0065b810);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar7),&local_a4);
    pCVar3 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar7) = 0xffff;
    *(uint *)((int)&pCVar3->vertex_buffer_ptr->color + iVar7) = 0;
    *(uint *)((int)&pCVar3->vertex_buffer_ptr->fog + iVar7) = 0;
    if (0 < iVar4) {
      local_e4.surface_normal.A = 3;
      local_c8 = 0;
      local_c4 = iVar4 + -1;
      local_c0.x = iVar4;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar3,0x4000);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr,&local_e4,(int)local_28);
    }
    iVar4 = iVar4 + 1;
    local_ec = local_ec + 2;
    iVar7 = iVar7 + 0x30;
  } while (iVar4 < 0x19);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}

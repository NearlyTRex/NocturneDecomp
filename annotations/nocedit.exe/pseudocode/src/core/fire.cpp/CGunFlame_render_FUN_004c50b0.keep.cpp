// Name: core_fire.cpp_CGunFlame_render_FUN_004c50b0
// Address: 004c50b0
// MANUAL RECONSTRUCTION
// Address Range: [[004c50b0, 004c55f9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar7;
  float fVar14;
  float fVar15;
  float *pfVar7;
  float10 fVar8;
  float10 fVar16;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_d0;
  SMRGLPrimitiveQuadIndex local_c4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [3];
  CVector3f local_84;
  float local_78;
  float local_74;
  float local_70;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48 [2];
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CDemonRenderer *this_ptr_00;
  float fVar6;
  float fVar5;
  float fVar4;
  float fVar3;
  float fVar2;
  float fVar1;
  
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,g_GunFlameTextures + (int)ROUND(ROUND(this_ptr->anim_frame)));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,&local_84.x);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_84,(CVector3f *)0x0);
  fVar13 = ((float10)2.0f - (float10)this_ptr->lifetime) / (float10)2.0f;
  fVar1 = (float)fVar13;
  fVar2 = (float)(fVar13 * (float10)4 + (float10)0.40000000000000002);
  local_d0 = fVar2;
  if ((float10)(double)fVar13 < (float10)0.40000000000000002) {
    pfVar7 = &engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                        (g_CDemonRendererPtr2,(CVector3f *)local_90)->x;
    fVar7 = *pfVar7 - (this_ptr->position).x;
    fVar8 = (float10)pfVar7[1] - (float10)(this_ptr->position).y;
    fVar16 = (float10)fVar7;
    fVar9 = (float10)pfVar7[2] - (float10)(this_ptr->position).z;
    fVar10 = (float10)(this_ptr->velocity).y;
    fVar11 = (float10)(this_ptr->velocity).x;
    fVar12 = (float10)(this_ptr->velocity).z;
    local_d0 = (float)(((float10)1 +
                       ((float10)1 -
                       ABS((float10)(float)fVar9 * (float10)(this_ptr->velocity).z +
                           (float10)fVar7 * (float10)(this_ptr->velocity).x +
                           (float10)(float)fVar8 * (float10)(this_ptr->velocity).y) /
                       (SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10) *
                       SQRT(fVar9 * (float10)(float)fVar9 +
                            fVar16 * fVar16 + fVar8 * (float10)(float)fVar8))) *
                       ((float10)1 - (float10)(double)fVar13 * (float10)2.5) *
                       (float10)2) * (float10)fVar2);
  }
  fVar14 = fVar2 * 128.0f * (float)0.00390625;
  fVar7 = -local_d0 * 128.0f * (float)0.00390625;
  local_48[0].x = (int)ROUND(fVar7 * 256.0f);
  local_48[0].y = (int)ROUND(fVar14 * 256.0f);
  local_48[0].z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,local_48);
  fVar15 = local_d0 * (float)128 * (float)0.00390625;
  local_54.x = (int)ROUND(fVar15 * 256.0f);
  local_54.y = (int)ROUND(fVar14 * 256.0f);
  local_54.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_54);
  fVar14 = -fVar2 * (float)128 * (float)0.00390625;
  local_60.x = (int)ROUND(fVar15 * 256.0f);
  local_60.y = (int)ROUND(fVar14 * 256.0f);
  local_60.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_60);
  local_6c.x = (int)ROUND(fVar7 * 256.0f);
  local_6c.y = (int)ROUND(fVar14 * 256.0f);
  local_6c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_6c);
  this_ptr_00 = g_CDemonRendererPtr2;
  fVar7 = (2.0f - fVar1) * fVar1;
  fVar5 = (1.0 - fVar1) * 32768.0f;
  fVar14 = fVar7 * 200.0f;
  fVar3 = fVar7 * 150.0f;
  fVar4 = fVar7 * 50.0f;
  g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0x2 << 16;
  fVar7 = (1.0 - fVar7) * 255.0f;
  this_ptr_00->vertex_buffer_ptr->v = 0x2 << 16;
  fVar6 = 256.0f;
  fVar14 = (fVar14 + fVar7) * 256.0f;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe << 16;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x2 << 16;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe << 16;
  this_ptr_00->vertex_buffer_ptr[2].v = 0xfe << 16;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x2 << 16;
  iVar1 = (int)ROUND(ROUND(fVar14));
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe << 16;
  iVar2 = (int)ROUND(ROUND((fVar3 + fVar7) * fVar6));
  this_ptr_00->vertex_buffer_ptr->r = iVar1;
  iVar3 = (int)ROUND(ROUND(fVar6 * (fVar4 + fVar7)));
  this_ptr_00->vertex_buffer_ptr->g = iVar2;
  iVar4 = (int)ROUND(ROUND(fVar5));
  this_ptr_00->vertex_buffer_ptr->b = iVar3;
  this_ptr_00->vertex_buffer_ptr->a = iVar4;
  this_ptr_00->vertex_buffer_ptr[1].r = iVar1;
  this_ptr_00->vertex_buffer_ptr[1].g = iVar2;
  this_ptr_00->vertex_buffer_ptr[1].b = iVar3;
  this_ptr_00->vertex_buffer_ptr[1].a = iVar4;
  this_ptr_00->vertex_buffer_ptr[2].r = iVar1;
  this_ptr_00->vertex_buffer_ptr[2].g = iVar2;
  this_ptr_00->vertex_buffer_ptr[2].b = iVar3;
  this_ptr_00->vertex_buffer_ptr[2].a = iVar4;
  this_ptr_00->vertex_buffer_ptr[3].r = iVar1;
  this_ptr_00->vertex_buffer_ptr[3].g = iVar2;
  this_ptr_00->vertex_buffer_ptr[3].b = iVar3;
  this_ptr_00->vertex_buffer_ptr[3].a = iVar4;
  local_c4.base.surface_normal.D.i = 0;
  local_c4.base.surface_normal.C.i = 0;
  local_c4.base.surface_normal.B.i = 0;
  local_c4.base.surface_normal.A.i = 0;
  local_c4.vertices[0] = 0;
  local_c4.vertices[2] = 2;
  local_c4.base.base.count = 4;
  local_c4.vertices[3] = 3;
  local_c4.vertices[1] = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
            (g_CDemonRendererPtr2,&local_c4.base);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}

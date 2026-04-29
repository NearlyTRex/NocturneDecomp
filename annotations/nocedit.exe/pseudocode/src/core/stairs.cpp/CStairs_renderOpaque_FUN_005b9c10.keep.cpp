// Name: core_stairs.cpp_CStairs_renderOpaque_FUN_005b9c10
// Address: 005b9c10
// MANUAL RECONSTRUCTION
// Address Range: [[005b9c10, 005ba486] [006031b4, 00603675]]
// Convention: __cdecl
// Signature: int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)

#include "nocturne.h"

int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D *this_ptr_00;
  int iVar5;
  int iVar12;
  int iVar39;
  SRenderVertex *pSVar15;
  SRenderVertex *vert;
  CDemonTriangle *tri;
  int base;
  int last_base;
  SMRGLPrimitivePolyIndex local_e4;
  CBoundingBox3D local_bc;
  CVector3i local_pt;
  CVector3i local_tri_pt;
  int local_14;
  int local_8;
  int i;

  if ((g_CDemonMissionPtr->is_in_editor != 0) &&
     (engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2) == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_bc);
    iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar5 != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&SMRGLTextureBasic_00684178);

      // Project 4 corners per stair into vertex_buffer_ptr[N*4 + 0..3]:
      //   (-w/2, rise*N, run*N), (-w/2, rise*N, run*(N+1)),
      //   (+w/2, rise*N, run*N), (+w/2, rise*N, run*(N+1))
      if (-1 < this_ptr->stair_count) {
        iVar12 = 0;
        do {
          fVar3 = -this_ptr->width * (float)0.5;
          fVar1 = this_ptr->rise * (float)iVar12;
          fVar2 = (float)iVar12 * this_ptr->run;
          local_pt.x = (int)ROUND(fVar3 * 256.0f);
          local_pt.y = (int)ROUND(fVar1 * 256.0f);
          local_pt.z = (int)ROUND(fVar2 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar12 * 4].projected_vertex,&local_pt);
          local_pt.z = (int)ROUND((fVar2 + this_ptr->run) * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar12 * 4 + 1].projected_vertex,&local_pt);
          local_pt.x = (int)ROUND((fVar3 + this_ptr->width) * 256.0f);
          local_pt.z = (int)ROUND(fVar2 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar12 * 4 + 2].projected_vertex,&local_pt);
          local_pt.z = (int)ROUND((fVar2 + this_ptr->run) * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar12 * 4 + 3].projected_vertex,&local_pt);
          iVar12 = iVar12 + 1;
        } while (iVar12 <= this_ptr->stair_count);
      }

      // Draw 6 wireframe edges per stair, plus a closing edge after the loop.
      g_ActiveRenderColor = 3;
      if (0 < this_ptr->stair_count) {
        local_14 = 0;
        do {
          pSVar15 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          base = local_14 * 4;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar15[base + 0], pSVar15[base + 2]);
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar15[base + 1], pSVar15[base + 3]);
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar15[base + 0], pSVar15[base + 1]);
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar15[base + 3], pSVar15[base + 4]);
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar15[base + 2], pSVar15[base + 3]);
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar15[base + 3], pSVar15[base + 6]);
          local_14 = local_14 + 1;
        } while (local_14 < this_ptr->stair_count);
      }
      pSVar15 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      last_base = this_ptr->stair_count * 4;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar15[last_base], pSVar15[last_base + 2]);

      // Render quads (top faces) over all projected vertices, blue tint.
      local_e4.base.surface_normal.B.i = 4;
      local_e4.vertices[1] = 0;
      local_e4.vertices[0] = 0;
      local_e4.base.surface_normal.D.i = 0;
      local_e4.base.surface_normal.C.i = 0;
      for (i = 0; i <= this_ptr->stair_count * 4; i++) {
        vert = &g_CDemonRendererPtr2->vertex_buffer_ptr[i];
        vert->r = 0;
        vert->g = 0;
        vert->b = 0xff00;
        vert->a = 0x8000;
        vert->u = 0x800000;
        vert->v = 0x800000;
      }
      if (0 < this_ptr->stair_count) {
        iVar39 = 0;
        for (i = 0; i < this_ptr->stair_count; i++) {
          local_e4.vertices[2] = iVar39;
          local_e4.vertices[3] = iVar39 + 1;
          local_e4.vertices[4] = iVar39 + 3;
          local_e4.vertices[5] = iVar39 + 2;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&local_e4.base.surface_normal);
          local_e4.vertices[2] = iVar39 + 1;
          local_e4.vertices[3] = iVar39 + 4;
          local_e4.vertices[4] = iVar39 + 6;
          local_e4.vertices[5] = iVar39 + 3;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&local_e4.base.surface_normal);
          iVar39 = iVar39 + 4;
        }
      }

      // Render triangles (side faces) for each collision triangle, green tint.
      local_e4.base.surface_normal.B.i = 3;
      local_e4.vertices[1] = 0;
      local_e4.vertices[0] = 0;
      local_e4.base.surface_normal.D.i = 0;
      local_e4.vertices[4] = 2;
      local_e4.base.surface_normal.C.i = 0;
      local_e4.vertices[2] = 0;
      local_e4.vertices[3] = 1;
      for (local_8 = 0; local_8 < this_ptr->stair_count * 2; local_8++) {
        tri = &this_ptr->collision_triangles[local_8];

        local_tri_pt.x = (int)ROUND(tri->vertex1.x * 256.0f);
        local_tri_pt.y = (int)ROUND(tri->vertex1.y * 256.0f);
        local_tri_pt.z = (int)ROUND(tri->vertex1.z * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[0].projected_vertex,&local_tri_pt);

        local_tri_pt.x = (int)ROUND(tri->vertex2.x * 256.0f);
        local_tri_pt.y = (int)ROUND(tri->vertex2.y * 256.0f);
        local_tri_pt.z = (int)ROUND(tri->vertex2.z * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_tri_pt);

        local_tri_pt.x = (int)ROUND(tri->vertex3.x * 256.0f);
        local_tri_pt.y = (int)ROUND(tri->vertex3.y * 256.0f);
        local_tri_pt.z = (int)ROUND(tri->vertex3.z * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_tri_pt);

        for (i = 0; i < 3; i++) {
          vert = &g_CDemonRendererPtr2->vertex_buffer_ptr[i];
          vert->r = 0;
          vert->g = 0xff00;
          vert->b = 0;
          vert->a = 0x8000;
          vert->u = 0x800000;
          vert->v = 0x800000;
        }
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&local_e4.base.surface_normal);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return iVar5;
  }
  return 0;
}

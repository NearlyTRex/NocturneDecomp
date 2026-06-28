// Name: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0
// Address: 00474ad0
// MANUAL RECONSTRUCTION
// Address Range: [[00474ad0, 0047520c] [0060c885, 0060c8a1]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(CDemonLight *this_ptr)

{
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar3;
  int iVar6;
  CVector3f *pCVar7;
  int iVar4;
  float fVar8;
  SMRGLPrimitiveQuadIndex local_12c;
  CVector3f local_104;
  CVector3i local_f8;
  CVector3f local_ec;
  CVector3f local_e0;
  CVector3i local_d4;
  CVector3i local_c8;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3i local_74;
  CVector3f local_68;
  float local_50;
  float local_4c;
  CVector3i local_44;
  CDemonRenderer *this_ptr_00;
  float fVar1;
  float fVar2;
  
  if ((this_ptr->volumetric_enabled != 0) && (g_CGamePtr->halo_mode == 2)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr2,&local_8c);
    local_8c.x = local_8c.x - (this_ptr->base).base.position.f.x;
    local_8c.y = local_8c.y - (this_ptr->base).base.position.f.y;
    local_8c.z = local_8c.z - (this_ptr->base).base.position.f.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&(this_ptr->base).base.rotation_matrix,&local_68,&local_8c);
    local_8c = *pCVar3;
    fVar3 = ((local_8c.z * (float)18) / (this_ptr->base).base.focal_length) *
            (float)2;
    fVar8 = local_8c.x * local_8c.x + local_8c.y * local_8c.y;
    fVar3 = fVar3 * fVar3;
    if (fVar8 <= fVar3) {
      fVar1 = fVar8 / fVar3;
      engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                (g_CDemonRendererPtr2,&local_d4);
      fVar8 = (float)local_d4.x * 0.00390625f - (this_ptr->base).base.position.f.x;
      fVar3 = (float)local_d4.y * 0.00390625f - (this_ptr->base).base.position.f.y;
      fVar4 = (float)local_d4.z * 0.00390625f - (this_ptr->base).base.position.f.z;
      fVar2 = SQRT(fVar4 * fVar4 + fVar8 * fVar8 + fVar3 * fVar3);
      if (0.0 < fVar2) {
        fVar5 = 1.0 / fVar2;
        iVar6 = 0xffff - g_PerspectiveReciprocal;
        local_ec.x = 0.0;
        local_ec.y = 0.0;
        local_ec.z = 1.0;
        pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (&(this_ptr->base).base.rotation_matrix,&local_104,&local_ec);
        if (0.0 < (fVar4 * fVar5 * pCVar7->z + fVar8 * fVar5 * pCVar7->x + fVar3 * fVar5 * pCVar7->y
                  ) * (float)iVar6 * 1.525902e-05f) {
          iVar4 = 0;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
          do {
            fVar8 = (float)iVar4 * 0.04f * (this_ptr->base).max_distance;
            fVar3 = (fVar8 * (float)18) / (this_ptr->base).base.focal_length;
            local_a4.x = (this_ptr->base).base.position.f.x +
                         (this_ptr->base).base.rotation_matrix.m[0].z * fVar8;
            local_a4.y = (this_ptr->base).base.position.f.y +
                         (this_ptr->base).base.rotation_matrix.m[1].z * fVar8;
            local_a4.z = (this_ptr->base).base.position.f.z +
                         (this_ptr->base).base.rotation_matrix.m[2].z * fVar8;
            local_e0 = local_a4;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                      (g_CDemonRendererPtr2,&local_e0);
            engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                      (g_CDemonRendererPtr2,&local_98.x);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                      (g_CDemonRendererPtr2,&local_98,(CVector3f *)0x0);
            local_74.x = (int)ROUND(fVar3 * 256.0f);
            local_74.y = (int)ROUND(fVar3 * 256.0f);
            local_74.z = (int)ROUND(256.0f * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_74);
            local_50 = -fVar3;
            local_44.x = (int)ROUND(local_50 * 256.0f);
            local_44.y = (int)ROUND(fVar3 * 256.0f);
            local_44.z = (int)ROUND(256.0f * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_44);
            local_4c = -fVar3;
            local_f8.x = (int)ROUND(local_50 * 256.0f);
            local_f8.y = (int)ROUND(local_4c * 256.0f);
            local_f8.z = (int)ROUND(256.0f * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_f8);
            local_50 = -local_50;
            local_c8.x = (int)ROUND(local_50 * 256.0f);
            local_c8.y = (int)ROUND(local_4c * 256.0f);
            local_c8.z = (int)ROUND(256.0f * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_c8);
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr2,&g_LightGlow.headlight);
            this_ptr_00 = g_CDemonRendererPtr2;
            local_12c.base.base.count = 4;
            local_12c.base.surface_normal.D.i = 0;
            local_12c.base.surface_normal.C.i = 0;
            local_12c.base.surface_normal.B.i = 0;
            local_12c.base.surface_normal.A.i = 0;
            local_12c.vertices[0] = 0;
            iVar6 = (int)ROUND(ROUND(((((this_ptr->base).max_distance - fVar8) *
                                      (float)8192) / (this_ptr->base).max_distance) *
                                     (1.0 - fVar1)));
            g_CDemonRendererPtr2->vertex_buffer_ptr->a = iVar6;
            this_ptr_00->vertex_buffer_ptr->r = 0xffff;
            this_ptr_00->vertex_buffer_ptr->g = 0xffff;
            this_ptr_00->vertex_buffer_ptr->b = 0xffff;
            local_12c.vertices[1] = 1;
            this_ptr_00->vertex_buffer_ptr[1].a = iVar6;
            this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
            this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
            this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
            local_12c.vertices[2] = 2;
            this_ptr_00->vertex_buffer_ptr[2].a = iVar6;
            this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
            this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
            this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
            local_12c.vertices[3] = 3;
            this_ptr_00->vertex_buffer_ptr[3].a = iVar6;
            this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
            this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
            this_ptr_00->vertex_buffer_ptr[3].b = 0xffff;
            this_ptr_00->vertex_buffer_ptr->u = (0xf8 << 16);
            this_ptr_00->vertex_buffer_ptr->v = (0xf8 << 16);
            this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
            this_ptr_00->vertex_buffer_ptr[1].v = (0xf8 << 16);
            this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
            this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
            this_ptr_00->vertex_buffer_ptr[3].u = (0xf8 << 16);
            this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
                      (this_ptr_00,&local_12c.base);
            iVar4 = iVar4 + 1;
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
          } while (iVar4 < 0x19);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
          return;
        }
      }
    }
  }
  return;
}

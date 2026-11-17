// Name: core_water.cpp_CWater_render_FUN_00577760
// Address: 00577760
// Address Range: [[00577760, 00577ced]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_render_FUN_00577760(CWater *this_ptr,int render_mode)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_render_FUN_00577760(CWater *this_ptr,int render_mode)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  int unaff_retaddr;
  CVector3f CStack_80;
  CVector3i local_74;
  CVector3i local_68;
  CVector3i local_5c;
  CVector3i local_50 [2];
  float fStack_30;
  float local_2c;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  
  if (ABS(this_ptr->water_level_y) != 0.0) {
    g_INT_02cfd974 = g_INT_02cfd974 + g_INT_01c5fad0;
    if (g_INT_00606b28 < g_INT_02cfd974) {
      g_INT_02cfd974 = g_INT_02cfd974 - g_INT_00606b28;
      g_INT_02cfd978 = g_INT_02cfd978 + 1;
      if (0xf < g_INT_02cfd978) {
        g_INT_02cfd978 = 0;
      }
    }
    local_2c = g_CGamePtr->delta_time_float;
    fVar5 = g_FLOAT_02cfd964 * local_2c;
    fVar3 = (float)65536;
    fVar4 = (float)g_INT_02d059b0;
    CStack_80.y = 8.032708e-39;
    dVar7 = round
                      ((double)(g_FLOAT_02cfd960 * local_2c * fVar3 + (float)g_INT_02d059ac));
    CStack_80.x = 8.032718e-39;
    dVar8 = round((double)(fVar5 * fVar3 + fVar4));
    g_INT_02d059ac = (int)ROUND(dVar7);
    g_INT_02d059b0 = (int)ROUND(dVar8);
    if (0xffffff < g_INT_02d059ac) {
      g_INT_02d059ac = g_INT_02d059ac + -0x1000000;
    }
    if (g_INT_02d059ac < 0) {
      g_INT_02d059ac._3_1_ = g_INT_02d059ac._3_1_ + '\x01';
    }
    if (0xffffff < g_INT_02d059b0) {
      g_INT_02d059b0 = g_INT_02d059b0 + -0x1000000;
    }
    if (g_INT_02d059b0 < 0) {
      g_INT_02d059b0._3_1_ = g_INT_02d059b0._3_1_ + '\x01';
    }
    g_SMRGLPrimitiveQuad_00606e2c.vertices[0].texture_u = g_INT_02d059ac;
    g_SMRGLPrimitiveQuad_00606e2c.vertices[0].texture_v = g_INT_02d059b0;
    g_SMRGLPrimitiveQuad_00606e2c.vertices[1].texture_u = g_INT_02d059ac + 0x1000000;
    g_SMRGLPrimitiveQuad_00606e2c.vertices[1].texture_v = g_INT_02d059b0;
    g_SMRGLPrimitiveQuad_00606e2c.vertices[2].texture_v = g_INT_02d059b0 + 0x1000000;
    g_SMRGLPrimitiveQuad_00606e2c.vertices[3].texture_u = g_INT_02d059ac;
    g_INT_02d059a4 = (int)(((longlong)g_INT_02cfd974 * 0xffff) / (longlong)g_INT_00606b28);
    if (g_INT_02d059a4 < 0x10000) {
      if (g_INT_02d059a4 < 0) {
        g_INT_02d059a4 = 0;
      }
    }
    else {
      g_INT_02d059a4 = 0xffff;
    }
    g_SMRGLPrimitiveQuad_00606e2c.vertices[2].texture_u =
         g_SMRGLPrimitiveQuad_00606e2c.vertices[1].texture_u;
    g_SMRGLPrimitiveQuad_00606e2c.vertices[3].texture_v =
         g_SMRGLPrimitiveQuad_00606e2c.vertices[2].texture_v;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (g_CDemonRenderer_PTR_005f2afc,g_SMRGLTextureBasic_ARRAY_00606cac + g_INT_02cfd978);
    g_INT_01c6e24c = 0;
    g_FLOAT_02d059a8 =
         g_CGamePtr->delta_time_float * 3.141593f * (float)0.5 *
         (float)2 + g_FLOAT_02d059a8;
    local_2c = 0.0;
    if (0 < g_INT_02cfd97c) {
      local_28 = 0;
      do {
        iVar1 = *(int *)((int)g_INT_ARRAY_02cfd980 + local_28);
        iVar2 = *(int *)((int)g_INT_ARRAY_02d01980 + local_28);
        local_24 = (float)iVar1;
        fStack_30 = (float)iVar2;
        CStack_80.x = local_24 * this_ptr->tile_size + g_FLOAT_02cfd968;
        CStack_80.y = this_ptr->water_level_y + g_FLOAT_02cfd96c;
        CStack_80.z = fStack_30 * this_ptr->tile_size + g_FLOAT_02cfd970;
        local_20 = iVar1;
        local_1c = iVar2;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (g_CDemonRenderer_PTR_005f2afc,&CStack_80);
        CStack_80.x = 0.0;
        CStack_80.y = 0.0;
        CStack_80.z = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar6 = (float10)fsin((float10)fStack_30 * (float10)3.141593f *
                                (float10)0.5 +
                                (float10)local_24 * (float10)3.141593f +
                                (float10)g_FLOAT_02d059a8);
          CStack_80.y = (float)(fVar6 * (float10)g_FLOAT_00606b24);
        }
        local_50[0].x = (int)ROUND(256.0f * 0.0);
        local_50[0].y = (int)ROUND(CStack_80.y * 256.0f);
        local_50[0].z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,local_50);
        CStack_80.x = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = iVar1 + 1;
          fVar6 = (float10)fsin((float10)iVar2 * (float10)3.141593f *
                                (float10)0.5 +
                                (float10)local_1c * (float10)3.141593f +
                                (float10)g_FLOAT_02d059a8);
          CStack_80.y = (float)(fVar6 * (float10)g_FLOAT_00606b24);
        }
        local_68.x = (int)ROUND(CStack_80.x * 256.0f);
        local_68.y = (int)ROUND(CStack_80.y * 256.0f);
        local_68.z = (int)ROUND(CStack_80.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_68);
        CStack_80.z = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = iVar1 + 1;
          fVar6 = (float10)fsin((float10)(iVar2 + 1) * (float10)3.141593f *
                                (float10)0.5 +
                                (float10)local_1c * (float10)3.141593f +
                                (float10)g_FLOAT_02d059a8);
          CStack_80.y = (float)(fVar6 * (float10)g_FLOAT_00606b24);
        }
        local_74.x = (int)ROUND(CStack_80.x * 256.0f);
        local_74.y = (int)ROUND(CStack_80.y * 256.0f);
        local_74.z = (int)ROUND(CStack_80.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_74);
        CStack_80.x = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar6 = (float10)fsin((float10)(iVar2 + 1) * (float10)3.141593f *
                                (float10)0.5 +
                                (float10)iVar1 * (float10)3.141593f +
                                (float10)g_FLOAT_02d059a8);
          CStack_80.y = (float)(fVar6 * (float10)g_FLOAT_00606b24);
          local_1c = iVar1;
        }
        local_5c.x = (int)ROUND(256.0f * 0.0);
        local_5c.y = (int)ROUND(CStack_80.y * 256.0f);
        local_5c.z = (int)ROUND(CStack_80.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_5c);
        if (this_ptr->wave_animation_enabled == 0) {
          if (g_INT_01c6cee8 == 0) {
            if (unaff_retaddr == 0) {
              engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60
                        (g_CDemonRenderer_PTR_005f2afc,
                         (SMRGLPrimitivePoly *)&g_SMRGLPrimitiveQuad_00606e2c);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20
                        (g_CDemonRenderer_PTR_005f2afc,
                         (SMRGLPrimitivePoly *)&g_SMRGLPrimitiveQuad_00606e2c);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0
                      (g_CDemonRenderer_PTR_005f2afc,1);
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
                      (g_CDemonRenderer_PTR_005f2afc,
                       (SMRGLPrimitivePoly *)&g_SMRGLPrimitiveQuad_00606e2c);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
                    (g_CDemonRenderer_PTR_005f2afc,0xc000);
          engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800
                    (g_CDemonRenderer_PTR_005f2afc,
                     (SMRGLPrimitivePoly *)&g_SMRGLPrimitiveQuad_00606e2c);
        }
        local_28 = local_28 + 4;
        local_2c = (float)((int)local_2c + 1);
      } while ((int)local_2c < g_INT_02cfd97c);
    }
  }
  return;
}

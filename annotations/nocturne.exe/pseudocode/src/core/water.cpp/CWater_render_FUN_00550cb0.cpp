// Name: core_water.cpp_CWater_render_FUN_00550cb0
// Address: 00550cb0
// Address Range: [[00550cb0, 0055119a]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_render_FUN_00550cb0(CWater *this_ptr,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_render_FUN_00550cb0(CWater *this_ptr,int render_mode)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  CVector3f local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3f local_30;
  int local_1c;
  int local_18;
  int local_14;
  
  if (ABS(this_ptr->water_level_y) != 0.0) {
    _DAT_02dd122c = _DAT_02dd122c + _DAT_01bd1d80;
    if (0x00002000 < _DAT_02dd122c) {
      _DAT_02dd122c = _DAT_02dd122c - 0x00002000;
      _DAT_02dd1230 = _DAT_02dd1230 + 1;
      if (0xf < _DAT_02dd1230) {
        _DAT_02dd1230 = 0;
      }
    }
    _DAT_02dd925c = (int)(((longlong)_DAT_02dd122c * 0xffff) / (longlong)0x00002000);
    if (_DAT_02dd925c < 0x10000) {
      if (_DAT_02dd925c < 0) {
        _DAT_02dd925c = 0;
      }
    }
    else {
      _DAT_02dd925c = 0xffff;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(&DAT_005c11f4 + _DAT_02dd1230 * 0x18));
    _DAT_01c038f4 = 0;
    _DAT_02dd9260 =
         g_CGame_PTR_005b9354->delta_time_float * (float)3.1415926535000001 * (float)0.5 *
         (float)2 + _DAT_02dd9260;
    local_1c = 0;
    if (0 < _DAT_02dd1234) {
      local_18 = 0;
      do {
        iVar1 = *(int *)(&DAT_02dd1238 + local_18);
        iVar2 = *(int *)(&DAT_02dd5238 + local_18);
        local_6c.x = (float)iVar1 * this_ptr->tile_size + _DAT_02dd1220;
        local_6c.y = this_ptr->water_level_y + _DAT_02dd1224;
        local_6c.z = (float)iVar2 * this_ptr->tile_size + _DAT_02dd1228;
        local_14 = iVar2;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_6c);
        local_30.x = local_6c.x;
        local_30.y = local_6c.y;
        local_30.z = local_6c.z;
        local_6c.x = 0.0;
        local_6c.y = 0.0;
        local_6c.z = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar3 = (float10)fsin((float10)iVar2 * (float10)3.1415926535000001 * (float10)0.5
                                + (float10)iVar1 * (float10)3.1415926535000001 + (float10)_DAT_02dd9260
                               );
          local_6c.y = (float)(fVar3 * (float10)0.25);
          local_14 = iVar1;
        }
        local_60.x = (int)ROUND(_DAT_005a3e8c * 0.0);
        local_60.y = (int)ROUND(local_6c.y * _DAT_005a3e8c);
        local_60.z = (int)ROUND(_DAT_005a3e8c * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_60);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (g_CDemonSet_PTR_005be368,&local_6c,&local_30,0);
        local_6c.x = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)iVar2 * (float10)3.1415926535000001 * (float10)0.5
                                + (float10)local_14 * (float10)3.1415926535000001 +
                                (float10)_DAT_02dd9260);
          local_6c.y = (float)(fVar3 * (float10)0.25);
        }
        local_54.x = (int)ROUND(local_6c.x * _DAT_005a3e8c);
        local_54.y = (int)ROUND(local_6c.y * _DAT_005a3e8c);
        local_54.z = (int)ROUND(local_6c.z * _DAT_005a3e8c);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_54);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (g_CDemonSet_PTR_005be368,&local_6c,&local_30,1);
        local_6c.z = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)3.1415926535000001 *
                                (float10)0.5 +
                                (float10)local_14 * (float10)3.1415926535000001 +
                                (float10)_DAT_02dd9260);
          local_6c.y = (float)(fVar3 * (float10)0.25);
        }
        local_48.x = (int)ROUND(local_6c.x * _DAT_005a3e8c);
        local_48.y = (int)ROUND(local_6c.y * _DAT_005a3e8c);
        local_48.z = (int)ROUND(local_6c.z * _DAT_005a3e8c);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_48);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (g_CDemonSet_PTR_005be368,&local_6c,&local_30,2);
        local_6c.x = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)3.1415926535000001 *
                                (float10)0.5 + (float10)iVar1 * (float10)3.1415926535000001
                                + (float10)_DAT_02dd9260);
          local_6c.y = (float)(fVar3 * (float10)0.25);
          local_14 = iVar1;
        }
        local_3c.x = (int)ROUND(_DAT_005a3e8c * 0.0);
        local_3c.y = (int)ROUND(local_6c.y * _DAT_005a3e8c);
        local_3c.z = (int)ROUND(local_6c.z * _DAT_005a3e8c);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_3c);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (g_CDemonSet_PTR_005be368,&local_6c,&local_30,3);
        if (this_ptr->wave_animation_enabled == 0) {
          if (_DAT_01c02594 == 0) {
            if (render_mode == 0) {
              engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0
                        (DAT_005ae704,(SMRGLPrimitivePoly *)&DAT_005c1374);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790
                        (DAT_005ae704,(SMRGLPrimitivePoly *)&DAT_005c1374);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(DAT_005ae704,1);
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                      (DAT_005ae704,(SMRGLPrimitivePoly *)&DAT_005c1374);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xa000);
          engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
                    (DAT_005ae704,(SMRGLPrimitivePoly *)&DAT_005c1374);
        }
        local_18 = local_18 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < _DAT_02dd1234);
    }
  }
  return;
}

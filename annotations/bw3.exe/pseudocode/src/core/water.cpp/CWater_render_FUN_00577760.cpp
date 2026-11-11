// Name: core_water.cpp_CWater_render_FUN_00577760
// Address: 00577760
// Address Range: [[00577760, 00577ced]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_render_FUN_00577760(CWater *this_ptr,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_render_FUN_00577760(CWater *this_ptr,int render_mode)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  CVector3f local_78;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48 [2];
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  if (ABS(this_ptr->water_level_y) != 0.0) {
    _DAT_02cfd974 = _DAT_02cfd974 + _DAT_01c5fad0;
    if (DAT_00606b28 < _DAT_02cfd974) {
      _DAT_02cfd974 = _DAT_02cfd974 - DAT_00606b28;
      _DAT_02cfd978 = _DAT_02cfd978 + 1;
      if (0xf < _DAT_02cfd978) {
        _DAT_02cfd978 = 0;
      }
    }
    local_2c = g_CGamePtr->delta_time_float;
    fVar3 = (float10)_DAT_02cfd960 * (float10)local_2c * (float10)_DAT_005d71bb +
            (float10)_DAT_02d059ac;
    fVar4 = (float10)_DAT_02cfd964 * (float10)local_2c * (float10)_DAT_005d71bb +
            (float10)_DAT_02d059b0;
    round();
    round();
    _DAT_02d059ac = (int)ROUND(fVar3);
    _DAT_02d059b0 = (int)ROUND(fVar4);
    if (0xffffff < _DAT_02d059ac) {
      _DAT_02d059ac = _DAT_02d059ac + -0x1000000;
    }
    if (_DAT_02d059ac < 0) {
      DAT_02d059af = DAT_02d059af + '\x01';
    }
    if (0xffffff < _DAT_02d059b0) {
      _DAT_02d059b0 = _DAT_02d059b0 + -0x1000000;
    }
    if (_DAT_02d059b0 < 0) {
      DAT_02d059b3 = DAT_02d059b3 + '\x01';
    }
    _DAT_00606e48 = _DAT_02d059ac;
    _DAT_00606e4c = _DAT_02d059b0;
    DAT_00606e54 = _DAT_02d059ac + 0x1000000;
    _DAT_00606e58 = _DAT_02d059b0;
    DAT_00606e64 = _DAT_02d059b0 + 0x1000000;
    _DAT_00606e6c = _DAT_02d059ac;
    _DAT_02d059a4 = (int)(((longlong)_DAT_02cfd974 * 0xffff) / (longlong)DAT_00606b28);
    if (_DAT_02d059a4 < 0x10000) {
      if (_DAT_02d059a4 < 0) {
        _DAT_02d059a4 = 0;
      }
    }
    else {
      _DAT_02d059a4 = 0xffff;
    }
    _DAT_00606e60 = DAT_00606e54;
    _DAT_00606e70 = DAT_00606e64;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_00606cac + _DAT_02cfd978 * 0x18));
    _DAT_01c6e24c = 0;
    _DAT_02d059a8 =
         g_CGamePtr->delta_time_float * _DAT_005d71c3 * (float)_DAT_005d71cb * (float)_DAT_005d71d3
         + _DAT_02d059a8;
    local_24 = 0;
    if (0 < _DAT_02cfd97c) {
      local_20 = 0;
      do {
        iVar1 = *(int *)(&DAT_02cfd980 + local_20);
        iVar2 = *(int *)(&DAT_02d01980 + local_20);
        local_1c = (float)iVar1;
        local_28 = (float)iVar2;
        local_78.x = local_1c * this_ptr->tile_size + _DAT_02cfd968;
        local_78.y = this_ptr->water_level_y + _DAT_02cfd96c;
        local_78.z = local_28 * this_ptr->tile_size + _DAT_02cfd970;
        local_18 = iVar1;
        local_14 = iVar2;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,&local_78);
        local_78.x = 0.0;
        local_78.y = 0.0;
        local_78.z = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar3 = (float10)fsin((float10)local_28 * (float10)_DAT_005d71c3 * (float10)_DAT_005d71cb
                                + (float10)local_1c * (float10)_DAT_005d71c3 +
                                (float10)_DAT_02d059a8);
          local_78.y = (float)(fVar3 * (float10)_DAT_00606b24);
        }
        local_48[0].x = (int)ROUND(_DAT_005e5e7c * 0.0);
        local_48[0].y = (int)ROUND(local_78.y * _DAT_005e5e7c);
        local_48[0].z = (int)ROUND(_DAT_005e5e7c * 0.0);
        engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,local_48)
        ;
        local_78.x = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)iVar2 * (float10)_DAT_005d71c3 * (float10)_DAT_005d71cb +
                                (float10)local_14 * (float10)_DAT_005d71c3 + (float10)_DAT_02d059a8)
          ;
          local_78.y = (float)(fVar3 * (float10)_DAT_00606b24);
        }
        local_60.x = (int)ROUND(local_78.x * _DAT_005e5e7c);
        local_60.y = (int)ROUND(local_78.y * _DAT_005e5e7c);
        local_60.z = (int)ROUND(local_78.z * _DAT_005e5e7c);
        engine_special_cpp_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_60);
        local_78.z = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)_DAT_005d71c3 *
                                (float10)_DAT_005d71cb + (float10)local_14 * (float10)_DAT_005d71c3
                                + (float10)_DAT_02d059a8);
          local_78.y = (float)(fVar3 * (float10)_DAT_00606b24);
        }
        local_6c.x = (int)ROUND(local_78.x * _DAT_005e5e7c);
        local_6c.y = (int)ROUND(local_78.y * _DAT_005e5e7c);
        local_6c.z = (int)ROUND(local_78.z * _DAT_005e5e7c);
        engine_special_cpp_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_6c);
        local_78.x = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)_DAT_005d71c3 *
                                (float10)_DAT_005d71cb + (float10)iVar1 * (float10)_DAT_005d71c3 +
                                (float10)_DAT_02d059a8);
          local_78.y = (float)(fVar3 * (float10)_DAT_00606b24);
          local_14 = iVar1;
        }
        local_54.x = (int)ROUND(_DAT_005e5e7c * 0.0);
        local_54.y = (int)ROUND(local_78.y * _DAT_005e5e7c);
        local_54.z = (int)ROUND(local_78.z * _DAT_005e5e7c);
        engine_special_cpp_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_54);
        if (this_ptr->wave_animation_enabled == 0) {
          if (_DAT_01c6cee8 == 0) {
            if (render_mode == 0) {
              engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60
                        (DAT_005f2afc,(SMRGLPrimitivePoly *)&DAT_00606e2c);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20
                        (DAT_005f2afc,(SMRGLPrimitivePoly *)&DAT_00606e2c);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(DAT_005f2afc,1);
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
                      (DAT_005f2afc,(SMRGLPrimitivePoly *)&DAT_00606e2c);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xc000);
          engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800
                    (DAT_005f2afc,(SMRGLPrimitivePoly *)&DAT_00606e2c);
        }
        local_20 = local_20 + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_02cfd97c);
    }
  }
  return;
}

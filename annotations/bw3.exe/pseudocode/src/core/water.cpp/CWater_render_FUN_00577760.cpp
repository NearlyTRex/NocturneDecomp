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
    _DAT_02cfd974 = _DAT_02cfd974 + _DAT_01c5fad0;
    if (DAT_00606b28 < _DAT_02cfd974) {
      _DAT_02cfd974 = _DAT_02cfd974 - DAT_00606b28;
      _DAT_02cfd978 = _DAT_02cfd978 + 1;
      if (0xf < _DAT_02cfd978) {
        _DAT_02cfd978 = 0;
      }
    }
    local_2c = g_CGamePtr->delta_time_float;
    fVar5 = _DAT_02cfd964 * local_2c;
    fVar3 = (float)_DAT_005d71bb;
    fVar4 = (float)_DAT_02d059b0;
    CStack_80.y = 8.032708e-39;
    dVar7 = round
                      ((double)(_DAT_02cfd960 * local_2c * fVar3 + (float)_DAT_02d059ac));
    CStack_80.x = 8.032718e-39;
    dVar8 = round((double)(fVar5 * fVar3 + fVar4));
    _DAT_02d059ac = (int)ROUND(dVar7);
    _DAT_02d059b0 = (int)ROUND(dVar8);
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
    local_2c = 0.0;
    if (0 < _DAT_02cfd97c) {
      local_28 = 0;
      do {
        iVar1 = *(int *)(&DAT_02cfd980 + local_28);
        iVar2 = *(int *)(&DAT_02d01980 + local_28);
        local_24 = (float)iVar1;
        fStack_30 = (float)iVar2;
        CStack_80.x = local_24 * this_ptr->tile_size + _DAT_02cfd968;
        CStack_80.y = this_ptr->water_level_y + _DAT_02cfd96c;
        CStack_80.z = fStack_30 * this_ptr->tile_size + _DAT_02cfd970;
        local_20 = iVar1;
        local_1c = iVar2;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,&CStack_80);
        CStack_80.x = 0.0;
        CStack_80.y = 0.0;
        CStack_80.z = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar6 = (float10)fsin((float10)fStack_30 * (float10)_DAT_005d71c3 * (float10)_DAT_005d71cb
                                + (float10)local_24 * (float10)_DAT_005d71c3 +
                                (float10)_DAT_02d059a8);
          CStack_80.y = (float)(fVar6 * (float10)_DAT_00606b24);
        }
        local_50[0].x = (int)ROUND(_DAT_005e5e7c * 0.0);
        local_50[0].y = (int)ROUND(CStack_80.y * _DAT_005e5e7c);
        local_50[0].z = (int)ROUND(_DAT_005e5e7c * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,local_50);
        CStack_80.x = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = iVar1 + 1;
          fVar6 = (float10)fsin((float10)iVar2 * (float10)_DAT_005d71c3 * (float10)_DAT_005d71cb +
                                (float10)local_1c * (float10)_DAT_005d71c3 + (float10)_DAT_02d059a8)
          ;
          CStack_80.y = (float)(fVar6 * (float10)_DAT_00606b24);
        }
        local_68.x = (int)ROUND(CStack_80.x * _DAT_005e5e7c);
        local_68.y = (int)ROUND(CStack_80.y * _DAT_005e5e7c);
        local_68.z = (int)ROUND(CStack_80.z * _DAT_005e5e7c);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_68);
        CStack_80.z = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = iVar1 + 1;
          fVar6 = (float10)fsin((float10)(iVar2 + 1) * (float10)_DAT_005d71c3 *
                                (float10)_DAT_005d71cb + (float10)local_1c * (float10)_DAT_005d71c3
                                + (float10)_DAT_02d059a8);
          CStack_80.y = (float)(fVar6 * (float10)_DAT_00606b24);
        }
        local_74.x = (int)ROUND(CStack_80.x * _DAT_005e5e7c);
        local_74.y = (int)ROUND(CStack_80.y * _DAT_005e5e7c);
        local_74.z = (int)ROUND(CStack_80.z * _DAT_005e5e7c);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_74);
        CStack_80.x = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar6 = (float10)fsin((float10)(iVar2 + 1) * (float10)_DAT_005d71c3 *
                                (float10)_DAT_005d71cb + (float10)iVar1 * (float10)_DAT_005d71c3 +
                                (float10)_DAT_02d059a8);
          CStack_80.y = (float)(fVar6 * (float10)_DAT_00606b24);
          local_1c = iVar1;
        }
        local_5c.x = (int)ROUND(_DAT_005e5e7c * 0.0);
        local_5c.y = (int)ROUND(CStack_80.y * _DAT_005e5e7c);
        local_5c.z = (int)ROUND(CStack_80.z * _DAT_005e5e7c);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_5c);
        if (this_ptr->wave_animation_enabled == 0) {
          if (_DAT_01c6cee8 == 0) {
            if (unaff_retaddr == 0) {
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
        local_28 = local_28 + 4;
        local_2c = (float)((int)local_2c + 1);
      } while ((int)local_2c < _DAT_02cfd97c);
    }
  }
  return;
}

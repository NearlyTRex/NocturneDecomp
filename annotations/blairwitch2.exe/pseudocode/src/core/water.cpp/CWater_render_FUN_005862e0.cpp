// Name: core_water.cpp_CWater_render_FUN_005862e0
// Address: 005862e0
// Address Range: [[005862e0, 00586911]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_render_FUN_005862e0(CWater *this_ptr,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_render_FUN_005862e0(CWater *this_ptr,int render_mode)

{
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  int aiStackY_1064 [1011];
  CVector3i local_88;
  CVector3f local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  CVector3f local_4c [2];
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar1 = 0;
  if (ABS(this_ptr->water_level_y) != 0.0) {
    _DAT_026537b4 = _DAT_026537b4 + _DAT_01c2a370;
    if (DAT_0061e528 < _DAT_026537b4) {
      _DAT_026537b4 = _DAT_026537b4 - DAT_0061e528;
      _DAT_026537b8 = _DAT_026537b8 + 1;
      if (0xf < _DAT_026537b8) {
        _DAT_026537b8 = 0;
      }
    }
    local_30 = g_CGamePtr->delta_time_float;
    fVar2 = (float10)_DAT_026537a0 * (float10)local_30 * (float10)_DAT_005edef6 +
            (float10)_DAT_0265b7ec;
    fVar3 = (float10)_DAT_026537a4 * (float10)local_30 * (float10)_DAT_005edef6 +
            (float10)_DAT_0265b7f0;
    round();
    round();
    _DAT_0265b7ec = (int)ROUND(fVar2);
    _DAT_0265b7f0 = (int)ROUND(fVar3);
    if (0xffffff < _DAT_0265b7ec) {
      _DAT_0265b7ec = _DAT_0265b7ec + -0x1000000;
    }
    if (_DAT_0265b7ec < 0) {
      DAT_0265b7ef = DAT_0265b7ef + '\x01';
    }
    if (0xffffff < _DAT_0265b7f0) {
      _DAT_0265b7f0 = _DAT_0265b7f0 + -0x1000000;
    }
    if (_DAT_0265b7f0 < 0) {
      DAT_0265b7f3 = DAT_0265b7f3 + '\x01';
    }
    _DAT_0061e6c8 = _DAT_0265b7ec;
    _DAT_0061e6cc = _DAT_0265b7f0;
    DAT_0061e6d4 = _DAT_0265b7ec + 0x1000000;
    _DAT_0061e6d8 = _DAT_0265b7f0;
    DAT_0061e6e4 = _DAT_0265b7f0 + 0x1000000;
    _DAT_0061e6ec = _DAT_0265b7ec;
    _DAT_0265b7e4 = (int)(((longlong)_DAT_026537b4 * 0xffff) / (longlong)DAT_0061e528);
    if (_DAT_0265b7e4 < 0x10000) {
      if (_DAT_0265b7e4 < 0) {
        _DAT_0265b7e4 = 0;
      }
    }
    else {
      _DAT_0265b7e4 = 0xffff;
    }
    _DAT_0061e6e0 = DAT_0061e6d4;
    _DAT_0061e6f0 = DAT_0061e6e4;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_0061e52c + _DAT_026537b8 * 0x18));
    _DAT_01c38aec = 0;
    _DAT_0265b7e8 =
         g_CGamePtr->delta_time_float * _DAT_005edefe * (float)_DAT_005edf06 * (float)_DAT_005edf0e
         + _DAT_0265b7e8;
    local_24 = 0;
    if (0 < _DAT_026537bc) {
      local_20 = 0;
      do {
        local_1c = *(int *)(&DAT_026537c0 + local_20);
        local_18 = *(int *)(&DAT_026577c0 + local_20);
        local_2c = (float)local_1c;
        local_28 = (float)local_18;
        local_7c.x = local_2c * this_ptr->tile_size + _DAT_026537a8;
        local_7c.y = this_ptr->water_level_y + _DAT_026537ac;
        local_7c.z = local_28 * this_ptr->tile_size + _DAT_026537b0;
        local_14 = local_18;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                  (DAT_0060b280,&local_7c);
        local_4c[0].x = local_7c.x;
        *(uint *)((int)local_4c + (uint)bVar1 * -8 + 4) =
             *(uint *)((int)&local_7c + (uint)bVar1 * -8 + 4);
        *(uint *)((int)local_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
             *(uint *)((int)&local_7c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
        local_7c.x = 0.0;
        local_7c.y = 0.0;
        local_7c.z = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar2 = (float10)fsin((float10)local_28 * (float10)_DAT_005edefe * (float10)_DAT_005edf06
                                + (float10)local_2c * (float10)_DAT_005edefe +
                                (float10)_DAT_0265b7e8);
          local_7c.y = (float)(fVar2 * (float10)_DAT_0061e524);
        }
        local_64.x = (int)ROUND(_DAT_005fdc5c * 0.0);
        local_64.y = (int)ROUND(local_7c.y * _DAT_005fdc5c);
        local_64.z = (int)ROUND(_DAT_005fdc5c * 0.0);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_64);
        core_set_cpp_FUN_00531a90(g_CDemonSetPtr,&local_7c,local_4c,0);
        local_7c.x = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = local_1c + 1;
          fVar2 = (float10)fsin((float10)local_18 * (float10)_DAT_005edefe * (float10)_DAT_005edf06
                                + (float10)local_14 * (float10)_DAT_005edefe +
                                (float10)_DAT_0265b7e8);
          local_7c.y = (float)(fVar2 * (float10)_DAT_0061e524);
        }
        local_70.x = (int)ROUND(local_7c.x * _DAT_005fdc5c);
        local_70.y = (int)ROUND(local_7c.y * _DAT_005fdc5c);
        local_70.z = (int)ROUND(local_7c.z * _DAT_005fdc5c);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_70);
        core_set_cpp_FUN_00531a90(g_CDemonSetPtr,&local_7c,local_4c,1);
        local_7c.z = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = local_1c + 1;
          fVar2 = (float10)fsin((float10)(local_18 + 1) * (float10)_DAT_005edefe *
                                (float10)_DAT_005edf06 + (float10)local_14 * (float10)_DAT_005edefe
                                + (float10)_DAT_0265b7e8);
          local_7c.y = (float)(fVar2 * (float10)_DAT_0061e524);
        }
        local_58.x = (int)ROUND(local_7c.x * _DAT_005fdc5c);
        local_58.y = (int)ROUND(local_7c.y * _DAT_005fdc5c);
        local_58.z = (int)ROUND(local_7c.z * _DAT_005fdc5c);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_58);
        core_set_cpp_FUN_00531a90(g_CDemonSetPtr,&local_7c,local_4c,2);
        local_7c.x = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = local_1c;
          fVar2 = (float10)fsin((float10)(local_18 + 1) * (float10)_DAT_005edefe *
                                (float10)_DAT_005edf06 + (float10)local_1c * (float10)_DAT_005edefe
                                + (float10)_DAT_0265b7e8);
          local_7c.y = (float)(fVar2 * (float10)_DAT_0061e524);
        }
        local_88.x = (int)ROUND(_DAT_005fdc5c * 0.0);
        local_88.y = (int)ROUND(local_7c.y * _DAT_005fdc5c);
        local_88.z = (int)ROUND(local_7c.z * _DAT_005fdc5c);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_88);
        core_set_cpp_FUN_00531a90(g_CDemonSetPtr,&local_7c,local_4c,3);
        if (this_ptr->wave_animation_enabled == 0) {
          if (_DAT_01c37788 == 0) {
            if (render_mode == 0) {
              engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046a270
                        (DAT_0060b280,(SMRGLPrimitivePoly *)&DAT_0061e6ac);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030
                        (DAT_0060b280,(SMRGLPrimitivePoly *)&DAT_0061e6ac);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(DAT_0060b280,1);
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
                      (DAT_0060b280,(SMRGLPrimitivePoly *)&DAT_0061e6ac);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xa000);
          engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20
                    (DAT_0060b280,(SMRGLPrimitivePoly *)&DAT_0061e6ac);
        }
        local_20 = local_20 + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_026537bc);
    }
  }
  return;
}

// Name: core_water.cpp_CWater_render_FUN_005862e0
// Address: 005862e0
// Address Range: [[005862e0, 00586911]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_render_FUN_005862e0(CWater *this_ptr,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_render_FUN_005862e0(CWater *this_ptr,int render_mode)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  int unaff_retaddr;
  int aiStackY_106c [1011];
  CVector3i CStack_90;
  CVector3f local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3f local_54 [2];
  float fStack_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar4 = 0;
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
    fVar3 = _DAT_026537a4 * local_30;
    fVar1 = (float)_DAT_005edef6;
    fVar2 = (float)_DAT_0265b7f0;
    CStack_90.y = 0x58636f;
    dVar6 = round
                      ((double)(_DAT_026537a0 * local_30 * fVar1 + (float)_DAT_0265b7ec));
    CStack_90.x = 0x586376;
    dVar7 = round((double)(fVar3 * fVar1 + fVar2));
    _DAT_0265b7ec = (int)ROUND(dVar6);
    _DAT_0265b7f0 = (int)ROUND(dVar7);
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
    local_2c = 0;
    if (0 < _DAT_026537bc) {
      local_28 = 0;
      do {
        local_24 = *(int *)(&DAT_026537c0 + local_28);
        local_20 = *(int *)(&DAT_026577c0 + local_28);
        fStack_34 = (float)local_24;
        local_30 = (float)local_20;
        local_84.x = fStack_34 * this_ptr->tile_size + _DAT_026537a8;
        local_84.y = this_ptr->water_level_y + _DAT_026537ac;
        local_84.z = local_30 * this_ptr->tile_size + _DAT_026537b0;
        local_1c = local_20;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                  (DAT_0060b280,&local_84);
        local_54[0].x = local_84.x;
        *(uint *)((int)local_54 + (uint)bVar4 * -8 + 4) =
             *(uint *)((int)&local_84 + (uint)bVar4 * -8 + 4);
        *(uint *)((int)local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)((int)&local_84 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        local_84.x = 0.0;
        local_84.y = 0.0;
        local_84.z = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar5 = (float10)fsin((float10)local_30 * (float10)_DAT_005edefe * (float10)_DAT_005edf06
                                + (float10)fStack_34 * (float10)_DAT_005edefe +
                                (float10)_DAT_0265b7e8);
          local_84.y = (float)(fVar5 * (float10)_DAT_0061e524);
        }
        local_6c.x = (int)ROUND(_DAT_005fdc5c * 0.0);
        local_6c.y = (int)ROUND(local_84.y * _DAT_005fdc5c);
        local_6c.z = (int)ROUND(_DAT_005fdc5c * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_6c);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00531a90
                  (g_CDemonSetPtr,&local_84,local_54,0);
        local_84.x = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = local_24 + 1;
          fVar5 = (float10)fsin((float10)local_20 * (float10)_DAT_005edefe * (float10)_DAT_005edf06
                                + (float10)local_1c * (float10)_DAT_005edefe +
                                (float10)_DAT_0265b7e8);
          local_84.y = (float)(fVar5 * (float10)_DAT_0061e524);
        }
        local_78.x = (int)ROUND(local_84.x * _DAT_005fdc5c);
        local_78.y = (int)ROUND(local_84.y * _DAT_005fdc5c);
        local_78.z = (int)ROUND(local_84.z * _DAT_005fdc5c);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_78);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00531a90
                  (g_CDemonSetPtr,&local_84,local_54,1);
        local_84.z = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = local_24 + 1;
          fVar5 = (float10)fsin((float10)(local_20 + 1) * (float10)_DAT_005edefe *
                                (float10)_DAT_005edf06 + (float10)local_1c * (float10)_DAT_005edefe
                                + (float10)_DAT_0265b7e8);
          local_84.y = (float)(fVar5 * (float10)_DAT_0061e524);
        }
        local_60.x = (int)ROUND(local_84.x * _DAT_005fdc5c);
        local_60.y = (int)ROUND(local_84.y * _DAT_005fdc5c);
        local_60.z = (int)ROUND(local_84.z * _DAT_005fdc5c);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_60);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00531a90
                  (g_CDemonSetPtr,&local_84,local_54,2);
        local_84.x = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = local_24;
          fVar5 = (float10)fsin((float10)(local_20 + 1) * (float10)_DAT_005edefe *
                                (float10)_DAT_005edf06 + (float10)local_24 * (float10)_DAT_005edefe
                                + (float10)_DAT_0265b7e8);
          local_84.y = (float)(fVar5 * (float10)_DAT_0061e524);
        }
        CStack_90.x = (int)ROUND(_DAT_005fdc5c * 0.0);
        CStack_90.y = (int)ROUND(local_84.y * _DAT_005fdc5c);
        CStack_90.z = (int)ROUND(local_84.z * _DAT_005fdc5c);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_90);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00531a90
                  (g_CDemonSetPtr,&local_84,local_54,3);
        if (this_ptr->wave_animation_enabled == 0) {
          if (_DAT_01c37788 == 0) {
            if (unaff_retaddr == 0) {
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
        local_28 = local_28 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < _DAT_026537bc);
    }
  }
  return;
}

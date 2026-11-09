// Name: core_water.cpp_FUN_005862e0
// Address: 005862e0
// Address Range: [[005862e0, 00586911]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_FUN_005862e0(CWater *this_ptr,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_FUN_005862e0(CWater *this_ptr,int render_mode)

{
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float afStackY_1064 [1011];
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78 [2];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float afStack_48 [6];
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar1 = 0;
  if ((*(uint *)&this_ptr->field_0x4 & 0x7fffffff) != 0) {
    _DAT_026537b4 = _DAT_026537b4 + _DAT_01c2a370;
    if (DAT_0061e528 < _DAT_026537b4) {
      _DAT_026537b4 = _DAT_026537b4 - DAT_0061e528;
      _DAT_026537b8 = _DAT_026537b8 + 1;
      if (0xf < _DAT_026537b8) {
        _DAT_026537b8 = 0;
      }
    }
    local_30 = *(float *)&g_CGamePtr->field_0x284;
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
         *(float *)&g_CGamePtr->field_0x284 * _DAT_005edefe * (float)_DAT_005edf06 *
         (float)_DAT_005edf0e + _DAT_0265b7e8;
    local_24 = 0;
    if (0 < _DAT_026537bc) {
      local_20 = 0;
      do {
        local_1c = *(int *)(&DAT_026537c0 + local_20);
        local_18 = *(int *)(&DAT_026577c0 + local_20);
        local_2c = (float)local_1c;
        local_28 = (float)local_18;
        local_7c = local_2c * *(float *)&this_ptr->field_0x8 + _DAT_026537a8;
        local_78[0] = *(float *)&this_ptr->field_0x4 + _DAT_026537ac;
        local_78[1] = local_28 * *(float *)&this_ptr->field_0x8 + _DAT_026537b0;
        local_14 = local_18;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                  (DAT_0060b280,(CVector3f *)&local_7c);
        local_4c = local_7c;
        afStack_48[(uint)bVar1 * -2] = local_78[(uint)bVar1 * -2];
        afStack_48[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
             local_78[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
        local_7c = 0.0;
        local_78[0] = 0.0;
        local_78[1] = 0.0;
        if (*(int *)this_ptr != 0) {
          fVar2 = (float10)fsin((float10)local_28 * (float10)_DAT_005edefe * (float10)_DAT_005edf06
                                + (float10)local_2c * (float10)_DAT_005edefe +
                                (float10)_DAT_0265b7e8);
          local_78[0] = (float)(fVar2 * (float10)_DAT_0061e524);
        }
        local_64 = (int)ROUND(_DAT_005fdc5c * 0.0);
        local_60 = (int)ROUND(local_78[0] * _DAT_005fdc5c);
        local_5c = (int)ROUND(_DAT_005fdc5c * 0.0);
        engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_64);
        core_set_cpp_FUN_00531a90(g_CDemonSetPtr,(CVector3f *)&local_7c,(CVector3f *)&local_4c,0);
        local_7c = *(float *)&this_ptr->field_0x8;
        if (*(int *)this_ptr != 0) {
          local_14 = local_1c + 1;
          fVar2 = (float10)fsin((float10)local_18 * (float10)_DAT_005edefe * (float10)_DAT_005edf06
                                + (float10)local_14 * (float10)_DAT_005edefe +
                                (float10)_DAT_0265b7e8);
          local_78[0] = (float)(fVar2 * (float10)_DAT_0061e524);
        }
        local_70 = (int)ROUND(local_7c * _DAT_005fdc5c);
        local_6c = (int)ROUND(local_78[0] * _DAT_005fdc5c);
        local_68 = (int)ROUND(local_78[1] * _DAT_005fdc5c);
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_70);
        core_set_cpp_FUN_00531a90(g_CDemonSetPtr,(CVector3f *)&local_7c,(CVector3f *)&local_4c,1);
        local_78[1] = *(float *)&this_ptr->field_0x8;
        if (*(int *)this_ptr != 0) {
          local_14 = local_1c + 1;
          fVar2 = (float10)fsin((float10)(local_18 + 1) * (float10)_DAT_005edefe *
                                (float10)_DAT_005edf06 + (float10)local_14 * (float10)_DAT_005edefe
                                + (float10)_DAT_0265b7e8);
          local_78[0] = (float)(fVar2 * (float10)_DAT_0061e524);
        }
        local_58 = (int)ROUND(local_7c * _DAT_005fdc5c);
        local_54 = (int)ROUND(local_78[0] * _DAT_005fdc5c);
        local_50 = (int)ROUND(local_78[1] * _DAT_005fdc5c);
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_58);
        core_set_cpp_FUN_00531a90(g_CDemonSetPtr,(CVector3f *)&local_7c,(CVector3f *)&local_4c,2);
        local_7c = 0.0;
        if (*(int *)this_ptr != 0) {
          local_14 = local_1c;
          fVar2 = (float10)fsin((float10)(local_18 + 1) * (float10)_DAT_005edefe *
                                (float10)_DAT_005edf06 + (float10)local_1c * (float10)_DAT_005edefe
                                + (float10)_DAT_0265b7e8);
          local_78[0] = (float)(fVar2 * (float10)_DAT_0061e524);
        }
        local_88 = (int)ROUND(_DAT_005fdc5c * 0.0);
        local_84 = (int)ROUND(local_78[0] * _DAT_005fdc5c);
        local_80 = (int)ROUND(local_78[1] * _DAT_005fdc5c);
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&local_88);
        core_set_cpp_FUN_00531a90(g_CDemonSetPtr,(CVector3f *)&local_7c,(CVector3f *)&local_4c,3);
        if (*(int *)this_ptr == 0) {
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

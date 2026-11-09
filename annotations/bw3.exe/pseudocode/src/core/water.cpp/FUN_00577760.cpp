// Name: core_water.cpp_FUN_00577760
// Address: 00577760
// Address Range: [[00577760, 00577ced]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_FUN_00577760(CWater *this_ptr,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_FUN_00577760(CWater *this_ptr,int render_mode)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  if ((*(uint *)&this_ptr->field_0x4 & 0x7fffffff) != 0) {
    _DAT_02cfd974 = _DAT_02cfd974 + _DAT_01c5fad0;
    if (DAT_00606b28 < _DAT_02cfd974) {
      _DAT_02cfd974 = _DAT_02cfd974 - DAT_00606b28;
      _DAT_02cfd978 = _DAT_02cfd978 + 1;
      if (0xf < _DAT_02cfd978) {
        _DAT_02cfd978 = 0;
      }
    }
    local_2c = *(float *)&g_CGamePtr->field_0x314;
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
         *(float *)&g_CGamePtr->field_0x314 * _DAT_005d71c3 * (float)_DAT_005d71cb *
         (float)_DAT_005d71d3 + _DAT_02d059a8;
    local_24 = 0;
    if (0 < _DAT_02cfd97c) {
      local_20 = 0;
      do {
        iVar1 = *(int *)(&DAT_02cfd980 + local_20);
        iVar2 = *(int *)(&DAT_02d01980 + local_20);
        local_1c = (float)iVar1;
        local_28 = (float)iVar2;
        local_78 = local_1c * *(float *)&this_ptr->field_0x8 + _DAT_02cfd968;
        local_74 = *(float *)&this_ptr->field_0x4 + _DAT_02cfd96c;
        local_70 = local_28 * *(float *)&this_ptr->field_0x8 + _DAT_02cfd970;
        local_18 = iVar1;
        local_14 = iVar2;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,(CVector3f *)&local_78);
        local_78 = 0.0;
        local_74 = 0.0;
        local_70 = 0.0;
        if (*(int *)this_ptr != 0) {
          fVar3 = (float10)fsin((float10)local_28 * (float10)_DAT_005d71c3 * (float10)_DAT_005d71cb
                                + (float10)local_1c * (float10)_DAT_005d71c3 +
                                (float10)_DAT_02d059a8);
          local_74 = (float)(fVar3 * (float10)_DAT_00606b24);
        }
        local_48 = (int)ROUND(_DAT_005e5e7c * 0.0);
        local_44 = (int)ROUND(local_74 * _DAT_005e5e7c);
        local_40 = (int)ROUND(_DAT_005e5e7c * 0.0);
        engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_48);
        local_78 = *(float *)&this_ptr->field_0x8;
        if (*(int *)this_ptr != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)iVar2 * (float10)_DAT_005d71c3 * (float10)_DAT_005d71cb +
                                (float10)local_14 * (float10)_DAT_005d71c3 + (float10)_DAT_02d059a8)
          ;
          local_74 = (float)(fVar3 * (float10)_DAT_00606b24);
        }
        local_60 = (int)ROUND(local_78 * _DAT_005e5e7c);
        local_5c = (int)ROUND(local_74 * _DAT_005e5e7c);
        local_58 = (int)ROUND(local_70 * _DAT_005e5e7c);
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_60);
        local_70 = *(float *)&this_ptr->field_0x8;
        if (*(int *)this_ptr != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)_DAT_005d71c3 *
                                (float10)_DAT_005d71cb + (float10)local_14 * (float10)_DAT_005d71c3
                                + (float10)_DAT_02d059a8);
          local_74 = (float)(fVar3 * (float10)_DAT_00606b24);
        }
        local_6c = (int)ROUND(local_78 * _DAT_005e5e7c);
        local_68 = (int)ROUND(local_74 * _DAT_005e5e7c);
        local_64 = (int)ROUND(local_70 * _DAT_005e5e7c);
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_6c);
        local_78 = 0.0;
        if (*(int *)this_ptr != 0) {
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)_DAT_005d71c3 *
                                (float10)_DAT_005d71cb + (float10)iVar1 * (float10)_DAT_005d71c3 +
                                (float10)_DAT_02d059a8);
          local_74 = (float)(fVar3 * (float10)_DAT_00606b24);
          local_14 = iVar1;
        }
        local_54 = (int)ROUND(_DAT_005e5e7c * 0.0);
        local_50 = (int)ROUND(local_74 * _DAT_005e5e7c);
        local_4c = (int)ROUND(local_70 * _DAT_005e5e7c);
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&local_54);
        if (*(int *)this_ptr == 0) {
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

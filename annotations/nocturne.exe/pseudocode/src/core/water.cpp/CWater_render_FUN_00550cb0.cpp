// Name: core_water.cpp_CWater_render_FUN_00550cb0
// Address: 00550cb0
// Address Range: [[00550cb0, 0055119a]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_render_FUN_00550cb0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_render_FUN_00550cb0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((param_1[1] & 0x7fffffffU) != 0) {
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
              (DAT_005ae704,&DAT_005c11f4 + _DAT_02dd1230 * 0x18);
    _DAT_01c038f4 = 0;
    _DAT_02dd9260 =
         *(float *)(0x01C775EC + 0x264) * (float)_DAT_0059759f * (float)_DAT_005975a7 *
         (float)_DAT_005975af + _DAT_02dd9260;
    local_1c = 0;
    if (0 < _DAT_02dd1234) {
      local_18 = 0;
      do {
        iVar1 = *(int *)(&DAT_02dd1238 + local_18);
        iVar2 = *(int *)(&DAT_02dd5238 + local_18);
        local_6c = (float)iVar1 * (float)param_1[2] + _DAT_02dd1220;
        local_68 = (float)param_1[1] + _DAT_02dd1224;
        local_64 = (float)iVar2 * (float)param_1[2] + _DAT_02dd1228;
        local_14 = iVar2;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_6c);
        local_30 = local_6c;
        local_2c = local_68;
        local_28 = local_64;
        local_6c = 0.0;
        local_68 = 0.0;
        local_64 = 0.0;
        if (*param_1 != 0) {
          fVar3 = (float10)fsin((float10)iVar2 * (float10)_DAT_0059759f * (float10)_DAT_005975a7 +
                                (float10)iVar1 * (float10)_DAT_0059759f + (float10)_DAT_02dd9260);
          local_68 = (float)(fVar3 * (float10)_DAT_005975b7);
          local_14 = iVar1;
        }
        local_60 = (int)ROUND(_DAT_005a3e8c * 0.0);
        local_5c = (int)ROUND(local_68 * _DAT_005a3e8c);
        local_58 = (int)ROUND(_DAT_005a3e8c * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_60);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (0x01E57284,&local_6c,&local_30,0);
        local_6c = (float)param_1[2];
        if (*param_1 != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)iVar2 * (float10)_DAT_0059759f * (float10)_DAT_005975a7 +
                                (float10)local_14 * (float10)_DAT_0059759f + (float10)_DAT_02dd9260)
          ;
          local_68 = (float)(fVar3 * (float10)_DAT_005975b7);
        }
        local_54 = (int)ROUND(local_6c * _DAT_005a3e8c);
        local_50 = (int)ROUND(local_68 * _DAT_005a3e8c);
        local_4c = (int)ROUND(local_64 * _DAT_005a3e8c);
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_54);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (0x01E57284,&local_6c,&local_30,1);
        local_64 = (float)param_1[2];
        if (*param_1 != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)_DAT_0059759f *
                                (float10)_DAT_005975a7 + (float10)local_14 * (float10)_DAT_0059759f
                                + (float10)_DAT_02dd9260);
          local_68 = (float)(fVar3 * (float10)_DAT_005975b7);
        }
        local_48 = (int)ROUND(local_6c * _DAT_005a3e8c);
        local_44 = (int)ROUND(local_68 * _DAT_005a3e8c);
        local_40 = (int)ROUND(local_64 * _DAT_005a3e8c);
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_48);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (0x01E57284,&local_6c,&local_30,2);
        local_6c = 0.0;
        if (*param_1 != 0) {
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)_DAT_0059759f *
                                (float10)_DAT_005975a7 + (float10)iVar1 * (float10)_DAT_0059759f +
                                (float10)_DAT_02dd9260);
          local_68 = (float)(fVar3 * (float10)_DAT_005975b7);
          local_14 = iVar1;
        }
        local_3c = (int)ROUND(_DAT_005a3e8c * 0.0);
        local_38 = (int)ROUND(local_68 * _DAT_005a3e8c);
        local_34 = (int)ROUND(local_64 * _DAT_005a3e8c);
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_3c);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (0x01E57284,&local_6c,&local_30,3);
        if (*param_1 == 0) {
          if (_DAT_01c02594 == 0) {
            if (param_2 == 0) {
              engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0
                        (DAT_005ae704,&DAT_005c1374);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790
                        (DAT_005ae704,&DAT_005c1374);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(DAT_005ae704,1);
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                      (DAT_005ae704,&DAT_005c1374);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xa000);
          engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
                    (DAT_005ae704,&DAT_005c1374);
        }
        local_18 = local_18 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < _DAT_02dd1234);
    }
  }
  return;
}

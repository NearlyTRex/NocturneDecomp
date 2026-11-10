// Name: core_gore.cpp_FUN_004cd690
// Address: 004cd690
// Address Range: [[004cd690, 004cdb1c]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004cd690(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004cd690(uint *param_1,int param_2)

{
  CVector3i *input;
  uint extraout_ECX;
  uint extraout_EDX;
  float10 fVar1;
  CVector3i local_8c;
  CVector3i local_80;
  CVector3i local_74;
  uint local_68;
  uint local_64;
  uint local_60;
  CVector3i local_5c;
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  CVector3i local_2c;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (param_1[4] == *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c)) {
    fVar1 = (float10)(float)param_1[10] * (float10)_DAT_005c4651 + (float10)_DAT_005c4659;
    round();
    local_14 = (uint)ROUND(fVar1);
    if ((int)local_14 < 0) {
      local_14 = extraout_EDX ^ extraout_ECX;
    }
    else if ((0xf < (int)local_14) && (local_14 = 0xf, param_2 != 0)) {
      *param_1 = 1;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,(CVector3f *)(param_1 + 1));
    if (param_1[5] == 1) {
      _DAT_01d22e58 = 0xffff;
      _DAT_01d22e50 = 0;
      _DAT_01d22e54 = 0;
      _DAT_01d22e5c = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,
                 (SMRGLTextureBasic *)(&DAT_005fedac + local_14 * 0x18 + param_1[0xb] * 0x180));
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,(CVector3f *)(param_1 + 7),(CVector3f *)0x0);
      local_68 = 0xbf000000;
      local_60 = 0;
      local_64 = 0xbf000000;
      local_80.x = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_80.y = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_80.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&local_80)
      ;
      local_68 = 0x3f000000;
      local_64 = 0xbf000000;
      local_60 = 0;
      local_38.x = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_38.y = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_38.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&local_38);
      local_68 = 0x3f000000;
      local_60 = 0;
      local_64 = 0x3f000000;
      local_74.x = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_74.y = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_74.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&local_74);
      local_68 = 0xbf000000;
      local_64 = 0x3f000000;
      local_60 = 0;
      local_44.x = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_44.y = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_44.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      input = &local_44;
    }
    else {
      if (param_2 != 0) {
        *param_1 = 1;
      }
      _DAT_01d22e54 = 0xffff;
      _DAT_01d22e50 = 0;
      _DAT_01d22e58 = 0;
      _DAT_01d22e5c = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fed4c + param_1[0xb] * 0x18));
      local_20 = 0xbf000000;
      local_1c = 0;
      local_18 = 0xbf000000;
      local_50.x = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_50.y = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_50.z = (int)ROUND(_DAT_005e0e18 * -0.5);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&local_50)
      ;
      local_20 = 0x3f000000;
      local_1c = 0;
      local_18 = 0xbf000000;
      local_2c.x = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_2c.y = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_2c.z = (int)ROUND(_DAT_005e0e18 * -0.5);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&local_2c);
      local_20 = 0x3f000000;
      local_1c = 0;
      local_18 = 0x3f000000;
      local_8c.x = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_8c.y = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_8c.z = (int)ROUND(_DAT_005e0e18 * 0.5);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&local_8c);
      local_20 = 0xbf000000;
      local_1c = 0;
      local_18 = 0x3f000000;
      local_5c.x = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_5c.y = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_5c.z = (int)ROUND(_DAT_005e0e18 * 0.5);
      input = &local_5c;
    }
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x90),input);
    core_gore_cpp_FUN_004cc970(param_1[6],&DAT_0060b034,&DAT_0060b038,&DAT_0060b03c);
    core_gore_cpp_FUN_004cc970(param_1[6],&DAT_0060b064,&DAT_0060b068,&DAT_0060b06c);
    core_gore_cpp_FUN_004cc970(param_1[6],&DAT_0060b094,&DAT_0060b098,&DAT_0060b09c);
    core_gore_cpp_FUN_004cc970(param_1[6],&DAT_0060b0c4,&DAT_0060b0c8,&DAT_0060b0cc);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1d22e48);
    if (param_1[5] == 1) {
      engine_matrix_c_pop_FUN_0046d080();
      return;
    }
  }
  return;
}

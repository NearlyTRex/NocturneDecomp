// Name: core_gore.cpp_FUN_004cdd30
// Address: 004cdd30
// Address Range: [[004cdd30, 004cdfb8]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004cdd30(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004cdd30(uint *param_1,int param_2)

{
  float10 fVar1;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  CVector3i local_18;
  int local_c;
  
  if (param_1[5] == *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c)) {
    fVar1 = (float10)(float)param_1[7] * (float10)_DAT_005c46d9;
    round();
    local_c = (int)ROUND(fVar1);
    if (local_c < 0) {
      local_c = 0;
    }
    else if ((0x1c < local_c) && (local_c = 0x1c, param_2 != 0)) {
      *param_1 = 1;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,(CVector3f *)(param_1 + 1));
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,
               (SMRGLTextureBasic *)(&DAT_005ff3ac + local_c * 0x18 + param_1[6] * 0x2b8));
    local_24 = 0xbfaa9fbe;
    local_20 = 0;
    local_1c = 0xbfaa9fbe;
    local_30.x = (int)ROUND(_DAT_005e0e18 * -1.333);
    local_30.y = (int)ROUND(_DAT_005e0e18 * 0.0);
    local_30.z = (int)ROUND(_DAT_005e0e18 * -1.333);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_30);
    local_24 = 0x3faa9fbe;
    local_20 = 0;
    local_1c = 0xbfaa9fbe;
    local_48.x = (int)ROUND(_DAT_005e0e18 * 1.333);
    local_48.y = (int)ROUND(_DAT_005e0e18 * 0.0);
    local_48.z = (int)ROUND(_DAT_005e0e18 * -1.333);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_48);
    local_24 = 0x3faa9fbe;
    local_20 = 0;
    local_1c = 0x3faa9fbe;
    local_18.x = (int)ROUND(_DAT_005e0e18 * 1.333);
    local_18.y = (int)ROUND(_DAT_005e0e18 * 0.0);
    local_18.z = (int)ROUND(_DAT_005e0e18 * 1.333);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_18);
    local_24 = 0xbfaa9fbe;
    local_20 = 0;
    local_1c = 0x3faa9fbe;
    local_3c.x = (int)ROUND(_DAT_005e0e18 * -1.333);
    local_3c.y = (int)ROUND(_DAT_005e0e18 * 0.0);
    local_3c.z = (int)ROUND(_DAT_005e0e18 * 1.333);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_3c);
    core_gore_cpp_FUN_004cc970(param_1[4],&DAT_0060b034,&DAT_0060b038,&DAT_0060b03c);
    core_gore_cpp_FUN_004cc970(param_1[4],&DAT_0060b064,&DAT_0060b068,&DAT_0060b06c);
    core_gore_cpp_FUN_004cc970(param_1[4],&DAT_0060b094,&DAT_0060b098,&DAT_0060b09c);
    core_gore_cpp_FUN_004cc970(param_1[4],&DAT_0060b0c4,&DAT_0060b0c8,&DAT_0060b0cc);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1d22e48);
  }
  return;
}

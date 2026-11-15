// Name: core_gore.cpp_FUN_004cdd30
// Address: 004cdd30
// Address Range: [[004cdd30, 004cdfb8]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004cdd30(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004cdd30(uint *param_1)

{
  double dVar1;
  CVector3i local_40;
  CVector3i local_34;
  uint local_28;
  uint local_24;
  uint local_20;
  CVector3i local_1c;
  int local_10;
  
  if (param_1[5] == *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c)) {
    dVar1 = round((double)((float)param_1[7] * (float)_DAT_005c46d9));
    local_10 = (int)ROUND(dVar1);
    if (local_10 < 0) {
      local_10 = 0;
    }
    else if ((0x1c < local_10) && (local_10 = 0x1c, param_1 != (uint *)0x0)) {
      *param_1 = 1;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,(CVector3f *)(param_1 + 1));
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,
               (SMRGLTextureBasic *)(&DAT_005ff3ac + local_10 * 0x18 + param_1[6] * 0x2b8));
    local_28 = 0xbfaa9fbe;
    local_24 = 0;
    local_20 = 0xbfaa9fbe;
    local_34.x = (int)ROUND(_DAT_005e0e18 * -1.333);
    local_34.y = (int)ROUND(_DAT_005e0e18 * 0.0);
    local_34.z = (int)ROUND(_DAT_005e0e18 * -1.333);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_34);
    local_28 = 0x3faa9fbe;
    local_24 = 0;
    local_20 = 0xbfaa9fbe;
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0xffffffb4);
    local_28 = 0x3faa9fbe;
    local_24 = 0;
    local_20 = 0x3faa9fbe;
    local_1c.x = (int)ROUND(_DAT_005e0e18 * 1.333);
    local_1c.y = (int)ROUND(_DAT_005e0e18 * 0.0);
    local_1c.z = (int)ROUND(_DAT_005e0e18 * 1.333);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_1c);
    local_28 = 0xbfaa9fbe;
    local_24 = 0;
    local_20 = 0x3faa9fbe;
    local_40.x = (int)ROUND(_DAT_005e0e18 * -1.333);
    local_40.y = (int)ROUND(_DAT_005e0e18 * 0.0);
    local_40.z = (int)ROUND(_DAT_005e0e18 * 1.333);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_40);
    core_gore_cpp_FUN_004cc970(param_1[4],&DAT_0060b034,&DAT_0060b038,&DAT_0060b03c);
    core_gore_cpp_FUN_004cc970(param_1[4],&DAT_0060b064,&DAT_0060b068,&DAT_0060b06c);
    core_gore_cpp_FUN_004cc970(param_1[4],&DAT_0060b094,&DAT_0060b098,&DAT_0060b09c);
    core_gore_cpp_FUN_004cc970(param_1[4],&DAT_0060b0c4,&DAT_0060b0c8,&DAT_0060b0cc);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1d22e48);
  }
  return;
}

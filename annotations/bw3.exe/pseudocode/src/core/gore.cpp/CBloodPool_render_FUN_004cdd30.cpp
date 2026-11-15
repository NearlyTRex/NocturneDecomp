// Name: core_gore.cpp_CBloodPool_render_FUN_004cdd30
// Address: 004cdd30
// Address Range: [[004cdd30, 004cdfb8]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_render_FUN_004cdd30(CBloodPool *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodPool_render_FUN_004cdd30(CBloodPool *this_ptr,int expire_flag)

{
  double dVar1;
  CVector3i local_40;
  CVector3i local_34;
  uint local_28;
  uint local_24;
  uint local_20;
  CVector3i local_1c;
  int local_10;
  
  if (this_ptr->area_id == *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c)) {
    dVar1 = round((double)(this_ptr->age * (float)_DAT_005c46d9));
    local_10 = (int)ROUND(dVar1);
    if (local_10 < 0) {
      local_10 = 0;
    }
    else if ((0x1c < local_10) && (local_10 = 0x1c, this_ptr != (CBloodPool *)0x0)) {
      this_ptr->expired = 1;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,&this_ptr->position);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,
               (SMRGLTextureBasic *)
               (&DAT_005ff3ac + local_10 * 0x18 + this_ptr->texture_variant * 0x2b8));
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
    core_gore_cpp_getBloodColorParams_FUN_004cc970
              (this_ptr->blood_type,&DAT_0060b034,&DAT_0060b038,&DAT_0060b03c);
    core_gore_cpp_getBloodColorParams_FUN_004cc970
              (this_ptr->blood_type,&DAT_0060b064,&DAT_0060b068,&DAT_0060b06c);
    core_gore_cpp_getBloodColorParams_FUN_004cc970
              (this_ptr->blood_type,(int *)&DAT_0060b094,(int *)&DAT_0060b098,(int *)&DAT_0060b09c);
    core_gore_cpp_getBloodColorParams_FUN_004cc970
              (this_ptr->blood_type,(int *)&DAT_0060b0c4,(int *)&DAT_0060b0c8,(int *)&DAT_0060b0cc);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1d22e48);
  }
  return;
}

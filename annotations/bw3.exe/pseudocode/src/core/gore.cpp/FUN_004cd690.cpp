// Name: core_gore.cpp_FUN_004cd690
// Address: 004cd690
// Address Range: [[004cd690, 004cdb1c]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004cd690(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004cd690(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  CVector3i *input;
  double dVar3;
  CVector3i CStack_90;
  CVector3i local_84;
  CVector3i local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  uVar1 = param_1[4];
  uVar2 = *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  if (uVar1 == uVar2) {
    CStack_90.x = 0x4cd6d3;
    dVar3 = round
                      ((double)((float)param_1[10] * (float)_DAT_005c4651 + (float)_DAT_005c4659));
    local_18 = (uint)ROUND(dVar3);
    if ((int)local_18 < 0) {
      local_18 = uVar1 ^ uVar2;
    }
    else if ((0xf < (int)local_18) && (local_18 = 0xf, param_2 != 0)) {
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
                 (SMRGLTextureBasic *)(&DAT_005fedac + local_18 * 0x18 + param_1[0xb] * 0x180));
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,(CVector3f *)(param_1 + 7),(CVector3f *)0x0);
      local_6c = 0xbf000000;
      local_64 = 0;
      local_68 = 0xbf000000;
      local_84.x = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_84.y = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_84.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_84);
      local_6c = 0x3f000000;
      local_68 = 0xbf000000;
      local_64 = 0;
      local_3c.x = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_3c.y = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_3c.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_3c);
      local_6c = 0x3f000000;
      local_64 = 0;
      local_68 = 0x3f000000;
      local_78.x = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_78.y = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_78.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_78);
      local_6c = 0xbf000000;
      local_68 = 0x3f000000;
      local_64 = 0;
      local_48.x = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_48.y = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_48.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      input = &local_48;
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
      local_24 = 0xbf000000;
      local_20 = 0;
      local_1c = 0xbf000000;
      local_54.x = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_54.y = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_54.z = (int)ROUND(_DAT_005e0e18 * -0.5);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_54);
      local_24 = 0x3f000000;
      local_20 = 0;
      local_1c = 0xbf000000;
      local_30.x = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_30.y = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_30.z = (int)ROUND(_DAT_005e0e18 * -0.5);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_30);
      local_24 = 0x3f000000;
      local_20 = 0;
      local_1c = 0x3f000000;
      CStack_90.x = (int)ROUND(_DAT_005e0e18 * 0.5);
      CStack_90.y = (int)ROUND(_DAT_005e0e18 * 0.0);
      CStack_90.z = (int)ROUND(_DAT_005e0e18 * 0.5);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_90);
      local_24 = 0xbf000000;
      local_20 = 0;
      local_1c = 0x3f000000;
      local_60.x = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_60.y = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_60.z = (int)ROUND(_DAT_005e0e18 * 0.5);
      input = &local_60;
    }
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,input);
    core_gore_cpp_FUN_004cc970(param_1[6],&DAT_0060b034,&DAT_0060b038,&DAT_0060b03c);
    core_gore_cpp_FUN_004cc970(param_1[6],&DAT_0060b064,&DAT_0060b068,&DAT_0060b06c);
    core_gore_cpp_FUN_004cc970(param_1[6],&DAT_0060b094,&DAT_0060b098,&DAT_0060b09c);
    core_gore_cpp_FUN_004cc970(param_1[6],&DAT_0060b0c4,&DAT_0060b0c8,&DAT_0060b0cc);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1d22e48);
    if (param_1[5] == 1) {
      engine_drender_cpp_pop_FUN_0046d080();
      return;
    }
  }
  return;
}

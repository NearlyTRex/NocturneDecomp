// Name: core_gore.cpp_CBloodSplat_render_FUN_004aeb70
// Address: 004aeb70
// Address Range: [[004aeb70, 004af127]]
// Convention: unknown
// Signature: void core_gore_cpp_CBloodSplat_render_FUN_004aeb70(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_CBloodSplat_render_FUN_004aeb70(uint *param_1)

{
  uint uVar1;
  CVector3i *input;
  double dVar2;
  CVector3i CStack_90;
  CVector3i local_84;
  CVector3i local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  CVector3i local_60;
  CVector3i local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  int local_18;
  
  CStack_90.x = 0x4aeb92;
  dVar2 = round
                    ((double)((float)param_1[9] * (float)8 + (float)4));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if (0xf < local_18) {
    *param_1 = 1;
    local_18 = 0xf;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)(param_1 + 1));
  if (param_1[4] == 1) {
    _DAT_01c78c88 = 0;
    _DAT_01c78c8c = 0;
    _DAT_01c78c94 = 0;
    _DAT_01c78c90 = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,
               (SMRGLTextureBasic *)(&DAT_005b974c + local_18 * 0x18 + param_1[10] * 0x180));
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,(CVector3f *)(param_1 + 6),(CVector3f *)0x0);
    local_48 = 0xbf000000;
    local_44 = 0xbf000000;
    local_40 = 0;
    local_78.x = (int)ROUND(256.0f * -0.5);
    local_78.y = (int)ROUND(256.0f * -0.5);
    local_78.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_78);
    local_48 = 0x3f000000;
    local_44 = 0xbf000000;
    local_40 = 0;
    local_54.x = (int)ROUND(256.0f * 0.5);
    local_54.y = (int)ROUND(256.0f * -0.5);
    local_54.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_54);
    local_48 = 0x3f000000;
    local_44 = 0x3f000000;
    local_40 = 0;
    local_24.x = (int)ROUND(256.0f * 0.5);
    local_24.y = (int)ROUND(256.0f * 0.5);
    local_24.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_24);
    input = &CStack_90;
    local_48 = 0xbf000000;
    local_40 = 0;
    local_44 = 0x3f000000;
    CStack_90.x = (int)ROUND(256.0f * -0.5);
    CStack_90.y = (int)ROUND(256.0f * 0.5);
    CStack_90.z = (int)ROUND(256.0f * 0.0);
  }
  else {
    *param_1 = 1;
    _DAT_01c78c88 = 0;
    _DAT_01c78c90 = 0;
    _DAT_01c78c94 = 0;
    _DAT_01c78c8c = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(&DAT_005b96ec + param_1[10] * 0x18));
    local_6c = 0xbf000000;
    local_68 = 0;
    local_64 = 0xbf000000;
    local_60.x = (int)ROUND(256.0f * -0.5);
    local_60.y = (int)ROUND(256.0f * 0.0);
    local_60.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_60);
    local_6c = 0x3f000000;
    local_68 = 0;
    local_64 = 0xbf000000;
    local_3c.x = (int)ROUND(256.0f * 0.5);
    local_3c.y = (int)ROUND(256.0f * 0.0);
    local_3c.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_3c);
    local_6c = 0x3f000000;
    local_68 = 0;
    local_64 = 0x3f000000;
    local_30.x = (int)ROUND(256.0f * 0.5);
    local_30.y = (int)ROUND(256.0f * 0.0);
    local_30.z = (int)ROUND(256.0f * 0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_30);
    local_6c = 0xbf000000;
    local_68 = 0;
    local_64 = 0x3f000000;
    local_84.x = (int)ROUND(256.0f * -0.5);
    local_84.y = (int)ROUND(256.0f * 0.0);
    local_84.z = (int)ROUND(256.0f * 0.5);
    input = &local_84;
  }
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,input);
  uVar1 = param_1[5];
  if (uVar1 == 0) {
LAB_004aedaf:
    DAT_005c5034 = 0x2000;
    DAT_005c5038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5038 = 0x7f80;
    DAT_005c5034 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004aedaf;
    DAT_005c5038 = 0;
    DAT_005c5034 = 0;
  }
  DAT_005c503c = 0;
  uVar1 = param_1[5];
  if (uVar1 == 0) {
LAB_004aeddc:
    DAT_005c5064 = 0x2000;
    DAT_005c5068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5068 = 0x7f80;
    DAT_005c5064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004aeddc;
    DAT_005c5068 = 0;
    DAT_005c5064 = 0;
  }
  DAT_005c506c = 0;
  uVar1 = param_1[5];
  if (uVar1 == 0) {
LAB_004aee09:
    DAT_005c5094 = 0x2000;
    DAT_005c5098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5098 = 0x7f80;
    DAT_005c5094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004aee09;
    DAT_005c5098 = 0;
    DAT_005c5094 = 0;
  }
  DAT_005c509c = 0;
  uVar1 = param_1[5];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_005c50c8 = 0x7f80;
      DAT_005c50c4 = 0;
      goto LAB_004aee48;
    }
    if (uVar1 == 2) {
      DAT_005c50c8 = 0;
      DAT_005c50c4 = 0;
      goto LAB_004aee48;
    }
  }
  DAT_005c50c4 = 0x2000;
  DAT_005c50c8 = 0;
LAB_004aee48:
  DAT_005c50cc = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
            (DAT_005ae704,(SMRGLHeaderPrimitive *)0x1c78c80);
  if (param_1[4] == 1) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    return;
  }
  return;
}

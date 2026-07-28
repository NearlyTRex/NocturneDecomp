// Name: core_gore.cpp_CBloodPool_render_FUN_004af340
// Address: 004af340
// Address Range: [[004af340, 004af6f7]]
// Convention: unknown
// Signature: void core_gore_cpp_CBloodPool_render_FUN_004af340(undefined4 *param_1)

#include "nocturne.h"

void core_gore_cpp_CBloodPool_render_FUN_004af340(uint *param_1)

{
  uint uVar1;
  double dVar2;
  CVector3i CStack_54;
  CVector3i local_48;
  CVector3i local_3c;
  uint local_30;
  uint local_2c;
  uint local_28;
  CVector3i local_24;
  int local_18;
  
  CStack_54.x = 0x4af359;
  dVar2 = round((double)((float)param_1[6] * (float)8));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if (0x1c < local_18) {
    *param_1 = 1;
    local_18 = 0x1c;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)(param_1 + 1));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,
             (SMRGLTextureBasic *)(&DAT_005b9d4c + local_18 * 0x18 + param_1[5] * 0x2b8));
  local_30 = 0xbfaa9fbe;
  local_28 = 0xbfaa9fbe;
  local_2c = 0;
  local_24.x = (int)ROUND(256.0f * -1.333);
  local_24.y = (int)ROUND(256.0f * 0.0);
  local_24.z = (int)ROUND(256.0f * -1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_24);
  local_30 = 0x3faa9fbe;
  local_2c = 0;
  local_28 = 0xbfaa9fbe;
  CStack_54.x = (int)ROUND(256.0f * 1.333);
  CStack_54.y = (int)ROUND(256.0f * 0.0);
  CStack_54.z = (int)ROUND(256.0f * -1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&CStack_54);
  local_30 = 0x3faa9fbe;
  local_28 = 0x3faa9fbe;
  local_2c = 0;
  local_48.x = (int)ROUND(256.0f * 1.333);
  local_48.y = (int)ROUND(256.0f * 0.0);
  local_48.z = (int)ROUND(256.0f * 1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_48);
  local_30 = 0xbfaa9fbe;
  local_2c = 0;
  local_28 = 0x3faa9fbe;
  local_3c.x = (int)ROUND(256.0f * -1.333);
  local_3c.y = (int)ROUND(256.0f * 0.0);
  local_3c.z = (int)ROUND(256.0f * 1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_3c);
  uVar1 = param_1[4];
  if (uVar1 == 0) {
LAB_004af532:
    DAT_005c5034 = 0x2000;
    DAT_005c5038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5034 = 0;
    DAT_005c5038 = 0x7f80;
  }
  else {
    if (uVar1 != 2) goto LAB_004af532;
    DAT_005c5038 = 0;
    DAT_005c5034 = 0;
  }
  DAT_005c503c = 0;
  uVar1 = param_1[4];
  if (uVar1 == 0) {
LAB_004af55f:
    DAT_005c5064 = 0x2000;
    DAT_005c5068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5068 = 0x7f80;
    DAT_005c5064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004af55f;
    DAT_005c5068 = 0;
    DAT_005c5064 = 0;
  }
  DAT_005c506c = 0;
  uVar1 = param_1[4];
  if (uVar1 == 0) {
LAB_004af58c:
    DAT_005c5094 = 0x2000;
    DAT_005c5098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5098 = 0x7f80;
    DAT_005c5094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004af58c;
    DAT_005c5098 = 0;
    DAT_005c5094 = 0;
  }
  DAT_005c509c = 0;
  uVar1 = param_1[4];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_005c50c8 = 0x7f80;
      DAT_005c50c4 = 0;
      goto LAB_004af5dc;
    }
    if (uVar1 == 2) {
      DAT_005c50c8 = 0;
      DAT_005c50c4 = 0;
      goto LAB_004af5dc;
    }
  }
  DAT_005c50c4 = 0x2000;
  DAT_005c50c8 = 0;
LAB_004af5dc:
  DAT_005c50cc = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
            (DAT_005ae704,(SMRGLHeaderPrimitive *)0x1c78c80);
  return;
}

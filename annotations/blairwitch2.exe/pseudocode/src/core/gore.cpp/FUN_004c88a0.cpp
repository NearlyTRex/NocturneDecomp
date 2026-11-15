// Name: core_gore.cpp_FUN_004c88a0
// Address: 004c88a0
// Address Range: [[004c88a0, 004c8cdc]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004c88a0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004c88a0(uint *param_1)

{
  uint uVar1;
  double dVar2;
  CVector3i CStack_60;
  CVector3i local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_3c;
  CVector3i local_30;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  int local_18;
  
  CStack_60.x = 0x4c88b9;
  dVar2 = round((double)((float)param_1[6] * (float)_DAT_005d94da));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if ((0x1c < local_18) && (local_18 = 0x1c, param_1 != (uint *)0x0)) {
    *param_1 = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)(param_1 + 1));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,
             (SMRGLTextureBasic *)(&DAT_00616e68 + local_18 * 0x18 + param_1[5] * 0x2b8));
  local_48 = 0xbfaa9fbe;
  local_40 = 0xbfaa9fbe;
  local_44 = 0;
  local_54.x = (int)ROUND(_DAT_005f7ba8 * -1.333);
  local_54.y = (int)ROUND(_DAT_005f7ba8 * 0.0);
  local_54.z = (int)ROUND(_DAT_005f7ba8 * -1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_54);
  local_48 = 0x3faa9fbe;
  local_44 = 0;
  local_40 = 0xbfaa9fbe;
  CStack_60.x = (int)ROUND(_DAT_005f7ba8 * 1.333);
  CStack_60.y = (int)ROUND(_DAT_005f7ba8 * 0.0);
  CStack_60.z = (int)ROUND(_DAT_005f7ba8 * -1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_60);
  local_48 = 0x3faa9fbe;
  local_40 = 0x3faa9fbe;
  local_44 = 0;
  local_3c.x = (int)ROUND(_DAT_005f7ba8 * 1.333);
  local_3c.y = (int)ROUND(_DAT_005f7ba8 * 0.0);
  local_3c.z = (int)ROUND(_DAT_005f7ba8 * 1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_3c);
  local_48 = 0xbfaa9fbe;
  local_44 = 0;
  local_40 = 0x3faa9fbe;
  local_30.x = (int)ROUND(_DAT_005f7ba8 * -1.333);
  local_30.y = (int)ROUND(_DAT_005f7ba8 * 0.0);
  local_30.z = (int)ROUND(_DAT_005f7ba8 * 1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_30);
  uVar1 = param_1[4];
  local_24 = &DAT_00622038;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c8aac:
    DAT_00622034 = 0x2000;
    *local_24 = 0;
    DAT_0062203c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622038 = 0x9a80;
    DAT_0062203c = 0xb100;
    DAT_00622034 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c8aac;
    DAT_00622038 = 0;
    DAT_0062203c = 0;
    DAT_00622034 = 0;
  }
  uVar1 = param_1[4];
  local_1c = &DAT_0062206c;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c8af1:
    DAT_00622064 = 0x2000;
    DAT_00622068 = 0;
    *local_1c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622068 = 0x9a80;
    DAT_0062206c = 0xb100;
    DAT_00622064 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c8af1;
    DAT_00622068 = 0;
    DAT_0062206c = 0;
    DAT_00622064 = 0;
  }
  uVar1 = param_1[4];
  local_20 = &DAT_00622098;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c8b36:
    DAT_00622094 = 0x2000;
    *local_20 = 0;
    DAT_0062209c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622098 = 0x9a80;
    DAT_0062209c = 0xb100;
    DAT_00622094 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c8b36;
    DAT_00622098 = 0;
    DAT_0062209c = 0;
    DAT_00622094 = 0;
  }
  uVar1 = param_1[4];
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_006220c8 = 0x9a80;
      DAT_006220cc = 0xb100;
      DAT_006220c4 = 0x9000;
      goto LAB_004c8b9a;
    }
    if (uVar1 == 2) {
      DAT_006220c8 = 0;
      DAT_006220cc = 0;
      DAT_006220c4 = 0;
      goto LAB_004c8b9a;
    }
  }
  DAT_006220c4 = 0x2000;
  DAT_006220c8 = 0;
  DAT_006220cc = 0;
LAB_004c8b9a:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1cb8288);
  return;
}

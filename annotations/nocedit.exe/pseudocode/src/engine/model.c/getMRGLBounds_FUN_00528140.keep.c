// Name: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
// MANUAL RECONSTRUCTION
// Address Range: [[00528140, 005285ea] [03fc3673, 03fc3741]]
// Convention: __stack_esi
// Signature: SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds)

#include "nocturne.h"

SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds)

{
  longlong lVar1;
  SMRGLHeaderExtended *mrgl_data_00;
  int iVar6;
  int iVar4;
  uint uVar8;
  uint uVar5;
  int iVar9;
  int iVar10;
  SMRGLModelBounds *puVar11;
  int iVar14;
  int i;
  SMRGLVertexBlock *vert_block;
  char local_160 [80];
  SMRGLModelBounds local_dc;
  SMRGLModelBounds local_a8;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  longlong lVar4;
  float fVar5;

  iVar4 = mrgl_data->type;
  if (iVar4 == 0x20) {
    mrgl_data_00 = engine_model_c_loadModelFile_FUN_00527ec0(((SMRGLKeyframeModel *)mrgl_data)->filenames[0]);
    engine_model_c_getMRGLBounds_FUN_00528140(&mrgl_data_00->base,&local_a8);
    engine_model_c_freeMRGLData_FUN_005280b0(mrgl_data_00);
    puVar11 = &local_a8;
  }
  else if (iVar4 == 0x26) {
    engine_boss_c_modelStructNotSupported4_FUN_0041dbe0((SMRGLHeaderExtended *)mrgl_data,&local_dc);
    puVar11 = &local_dc;
  }
  else {
    if (mrgl_data->type != 0x14) {
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 370;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to read magnify!");
    }
    iVar4 = (int)(0x7fffffff / (longlong)mrgl_data->count) * 2;
    vert_block = (SMRGLVertexBlock *)&mrgl_data[1];
    if (vert_block->base.base.type != 2) {
      _sprintf(local_160,"Unable to read verticies in model!");
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 374;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_160);
    }
    iVar14 = -0x80000000;
    iVar10 = -0x80000000;
    local_20 = 0x7fffffff;
    iVar6 = 0x7fffffff;
    iVar9 = 0x7fffffff;
    local_24 = -0x80000000;
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = 0.0;
    for (i = 0; i < vert_block->base.child_count; i = i + 1) {
      int x = vert_block->vertices[i].x;
      int y = vert_block->vertices[i].y;
      int z = vert_block->vertices[i].z;
      if (iVar10 < x) iVar10 = x;
      if (iVar14 < y) iVar14 = y;
      if (local_24 < z) local_24 = z;
      if (x < iVar9) iVar9 = x;
      if (y < iVar6) iVar6 = y;
      if (z < local_20) local_20 = z;
      local_14 = (float)x + local_14;
      local_18 = (float)y + local_18;
      local_1c = (float)z + local_1c;
    }
    local_a8.max_scaled.x =
         (uint)((longlong)iVar4 * (longlong)iVar10) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar10) >> 0x20) << 0x10;
    local_a8.max_scaled.y =
         (uint)((longlong)iVar4 * (longlong)iVar14) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar14) >> 0x20) << 0x10;
    local_a8.max_scaled.z =
         (uint)((longlong)iVar4 * (longlong)local_24) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)local_24) >> 0x20) << 0x10;
    local_a8.min_scaled.x =
         (uint)((longlong)iVar4 * (longlong)iVar9) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar9) >> 0x20) << 0x10;
    local_a8.min_scaled.y =
         (uint)((longlong)iVar4 * (longlong)iVar6) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar6) >> 0x20) << 0x10;
    local_a8.min_scaled.z =
         (uint)((longlong)iVar4 * (longlong)local_20) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)local_20) >> 0x20) << 0x10;
    fVar5 = 1.0 / (float)vert_block->base.child_count;
    lVar4 = (longlong)iVar4 * (longlong)(int)ROUND(ROUND(local_14 * fVar5));
    local_a8.center_scaled.x = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar4 * (longlong)(int)ROUND(ROUND(local_18 * fVar5));
    local_a8.center_scaled.y = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar4 * (longlong)(int)ROUND(ROUND(local_1c * fVar5));
    local_a8.center_scaled.z = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    local_a8.extent.x =
         (local_a8.max_scaled.x ^ local_a8.max_scaled.x >> 0x1f) - (local_a8.max_scaled.x >> 0x1f);
    uVar8 = local_a8.min_scaled.x >> 0x1f;
    if (local_a8.extent.x < (int)((local_a8.min_scaled.x ^ uVar8) - uVar8)) {
      local_a8.extent.x = (local_a8.min_scaled.x ^ uVar8) - uVar8;
    }
    local_a8.extent.y =
         (local_a8.max_scaled.y ^ local_a8.max_scaled.y >> 0x1f) - (local_a8.max_scaled.y >> 0x1f);
    uVar5 = local_a8.min_scaled.y >> 0x1f;
    if (local_a8.extent.y < (int)((local_a8.min_scaled.y ^ uVar5) - uVar5)) {
      local_a8.extent.y = (local_a8.min_scaled.y ^ uVar5) - uVar5;
    }
    local_a8.extent.z =
         (local_a8.max_scaled.z ^ local_a8.max_scaled.z >> 0x1f) - (local_a8.max_scaled.z >> 0x1f);
    uVar5 = local_a8.min_scaled.z >> 0x1f;
    if (local_a8.extent.z < (int)((local_a8.min_scaled.z ^ uVar5) - uVar5)) {
      local_a8.extent.z = (local_a8.min_scaled.z ^ uVar5) - uVar5;
    }
    local_a8.radius_scaled =
         (int)ROUND(ROUND(SQRT((float10)local_a8.extent.z * (float10)local_a8.extent.z +
                               (float10)local_a8.extent.y * (float10)local_a8.extent.y +
                               (float10)local_a8.extent.x * (float10)local_a8.extent.x)));
    puVar11 = &local_a8;
  }
  *output_bounds = *puVar11;
  return output_bounds;
}

// Name: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430
// Address: 0044f430
// Address Range: [[0044f430, 0044f9a3]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(CDemonLight *this_ptr)

{
  CVector3f *world_position;
  longlong lVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  uint uVar4;
  byte bVar5;
  double dVar6;
  float afStackY_1064 [992];
  SMRGLHeaderPrimitive local_d8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  float local_a0;
  float local_9c;
  CVector3i local_98;
  CVector3i local_8c;
  int local_7c;
  float afStack_78 [4];
  float local_68;
  int local_64;
  float local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3i local_44;
  byte local_34 [12];
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar5 = 0;
  if (this_ptr->volumetric_enabled == 0) {
    return;
  }
  world_position = &(this_ptr->base).position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,world_position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
            (DAT_005ae704,(CVector3f *)local_34);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,(CVector3f *)local_34,(CVector3f *)0x0);
  engine_drender_cpp_FUN_00460d10(DAT_005ae704);
  local_64 = local_7c;
  (&local_60)[(uint)bVar5 * -2] = afStack_78[(uint)bVar5 * -2];
  (&local_60)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  local_68 = (float)0.00390625;
  afStack_78[2] = (float)local_64 * local_68;
  local_14 = local_5c;
  afStack_78[3] = (float)(int)local_60 * local_68;
  local_68 = (float)local_5c * local_68;
  local_a0 = world_position->x - afStack_78[2];
  local_9c = (this_ptr->base).position.y - afStack_78[3];
  local_98.x = (int)((this_ptr->base).position.z - local_68);
  if (&local_58 != &local_a0) {
    local_58 = local_a0;
    local_54 = local_9c;
    local_50 = (float)local_98.x;
  }
  local_4c = (this_ptr->base).rotation_matrix.m[0].z;
  local_48 = (this_ptr->base).rotation_matrix.m[1].z;
  local_44.x = (int)(this_ptr->base).rotation_matrix.m[2].z;
  local_d8.base.type = (int)SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
  if ((float)local_d8.base.type <= 0.0) {
    local_54 = 0.0;
    local_58 = 0.0;
    local_50 = 0.0;
  }
  else {
    fVar2 = 1.0 / (float)local_d8.base.type;
    local_58 = local_58 * fVar2;
    local_54 = local_54 * fVar2;
    local_50 = local_50 * fVar2;
  }
  iVar3 = _DAT_01c038f4 / 2;
  local_1c = -(local_50 * (float)local_44.x + local_58 * local_4c + local_54 * local_48);
  dVar6 = round
                    ((double)(local_1c * local_1c * local_1c * local_1c * (float)65536));
  local_1c = (float)(int)ROUND(dVar6);
  lVar1 = (longlong)(0xffff - iVar3) * (longlong)(int)local_1c;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_20) {
    local_b0 = 0x3f000000;
    local_ac = 0x3f000000;
    local_a8 = 0xbf000000;
    local_44.x = (int)ROUND(_DAT_0059c030 * 0.5);
    local_44.y = (int)ROUND(_DAT_0059c030 * 0.5);
    local_44.z = (int)ROUND(_DAT_0059c030 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_44);
    local_b0 = 0xbf000000;
    local_ac = 0x3f000000;
    local_a8 = 0xbf000000;
    local_34._8_4_ = (uint)ROUND(_DAT_0059c030 * -0.5);
    local_28 = (int)ROUND(_DAT_0059c030 * 0.5);
    local_24 = (int)ROUND(_DAT_0059c030 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(local_34 + 8));
    local_b0 = 0xbf000000;
    local_ac = 0xbf000000;
    local_a8 = 0xbf000000;
    local_8c.x = (int)ROUND(_DAT_0059c030 * -0.5);
    local_8c.y = (int)ROUND(_DAT_0059c030 * -0.5);
    local_8c.z = (int)ROUND(_DAT_0059c030 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_8c);
    local_b0 = 0x3f000000;
    local_a8 = 0xbf000000;
    local_ac = 0xbf000000;
    local_98.x = (int)ROUND(_DAT_0059c030 * 0.5);
    local_98.y = (int)ROUND(_DAT_0059c030 * -0.5);
    local_98.z = (int)ROUND(_DAT_0059c030 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_98);
    this_ptr_00 = DAT_005ae704;
    DAT_005ae704->vertex_buffer_ptr->u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->a = uVar4;
    this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[1].a = uVar4;
    this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].a = uVar4;
    this_ptr_00->vertex_buffer_ptr[3].u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[3].a = uVar4;
    this_ptr_00->vertex_buffer_ptr->r = 0xffff;
    this_ptr_00->vertex_buffer_ptr->g = 0xffff;
    this_ptr_00->vertex_buffer_ptr->b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].b = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (this_ptr_00,(SMRGLTextureBasic *)&DAT_005ae470);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    local_d8.base.count = 4;
    local_d8.surface_normal.A.i = 0;
    local_d8.surface_normal.B.i = 0;
    local_d8.surface_normal.C.i = -0xffff;
    local_d8.surface_normal.D.i = -0x7fff;
    local_c0 = 0;
    local_b4 = 3;
    local_bc = 1;
    local_b8 = 2;
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(DAT_005ae704,&local_d8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520(this_ptr);
  return;
}

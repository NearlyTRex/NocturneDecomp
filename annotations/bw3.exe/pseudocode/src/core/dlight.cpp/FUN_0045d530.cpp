// Name: core_dlight.cpp_FUN_0045d530
// Address: 0045d530
// Address Range: [[0045d530, 0045d55f] [0045d561, 0045daec]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_FUN_0045d530(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_FUN_0045d530(CDemonLight *this_ptr)

{
  UVector3 *world_position;
  longlong lVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  uint uVar3;
  byte bVar4;
  float10 fVar5;
  ulonglong uVar6;
  float afStackY_1094 [996];
  CVector3f *translation;
  SMRGLHeaderPrimitive SStack_f8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  CVector3i local_d0;
  CVector3i local_c4;
  CVector3i local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [4];
  float local_80;
  int local_7c;
  float afStack_78 [5];
  int local_64;
  float local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [2];
  CVector3i local_34;
  float local_28;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar4 = 0;
  if (this_ptr->volumetric_enabled == 0) {
    return;
  }
  world_position = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&world_position->f);
  engine_matrix_c_FUN_0046d250(DAT_005f2afc);
  translation = (CVector3f *)0x0;
  local_ac.x = afStack_78[2];
  *(float *)((int)&local_ac + (uint)bVar4 * -8 + 4) = afStack_78[(uint)bVar4 * -2 + 3];
  *(float *)((int)&local_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&local_ac,translation);
  engine_matrix_c_FUN_0046d1a0(DAT_005f2afc);
  local_64 = local_7c;
  (&local_60)[(uint)bVar4 * -2] = afStack_78[(uint)bVar4 * -2];
  (&local_60)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fVar2 = (float)_DAT_005bb49c;
  local_18 = local_5c;
  local_90[2] = (float)local_64 * fVar2;
  local_94 = (world_position->f).x - (float)local_64 * fVar2;
  local_90[3] = (float)(int)local_60 * fVar2;
  local_80 = (float)local_5c * fVar2;
  local_90[0] = (this_ptr->base).base.position.f.y - (float)(int)local_60 * fVar2;
  local_90[1] = (this_ptr->base).base.position.f.z - (float)local_5c * fVar2;
  local_40 = local_94;
  local_3c[(uint)bVar4 * -2] = local_90[(uint)bVar4 * -2];
  local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (&local_a0 != &local_40) {
    local_a0 = local_40;
    local_9c = local_3c[0];
    local_98 = local_3c[1];
  }
  local_4c = (this_ptr->base).base.rotation_matrix.m[0].z;
  local_48 = (this_ptr->base).base.rotation_matrix.m[1].z;
  local_44 = (this_ptr->base).base.rotation_matrix.m[2].z;
  local_1c = SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
  if (local_1c <= 0.0) {
    local_9c = 0.0;
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  else {
    fVar2 = 1.0 / local_1c;
    local_a0 = local_a0 * fVar2;
    local_9c = local_9c * fVar2;
    local_98 = local_98 * fVar2;
  }
  fVar5 = -((float10)local_98 * (float10)local_44 +
           (float10)local_a0 * (float10)local_4c + (float10)local_9c * (float10)local_48);
  local_28 = (float)fVar5;
  fVar5 = fVar5 * (float10)local_28 * (float10)local_28 * (float10)local_28 * (float10)_DAT_005bb4a4
  ;
  uVar6 = round();
  local_20 = (int)ROUND(fVar5);
  lVar1 = (longlong)((int)((ulonglong)uVar6 >> 0x20) - (int)uVar6) * (longlong)local_20;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_28) {
    local_58 = 0x40000000;
    local_54 = 0x40000000;
    local_50 = 0xbf000000;
    local_d0.x = (int)ROUND(_DAT_005de4f0 * 2.0);
    local_d0.y = (int)ROUND(_DAT_005de4f0 * 2.0);
    local_d0.z = (int)ROUND(_DAT_005de4f0 * -0.5);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_d0);
    local_54 = 0x40000000;
    local_58 = 0xc0000000;
    local_50 = 0xbf000000;
    local_b8.x = (int)ROUND(_DAT_005de4f0 * -2.0);
    local_b8.y = (int)ROUND(_DAT_005de4f0 * 2.0);
    local_b8.z = (int)ROUND(_DAT_005de4f0 * -0.5);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_b8);
    local_58 = 0xc0000000;
    local_54 = 0xc0000000;
    local_50 = 0xbf000000;
    local_c4.x = (int)ROUND(_DAT_005de4f0 * -2.0);
    local_c4.y = (int)ROUND(_DAT_005de4f0 * -2.0);
    local_c4.z = (int)ROUND(_DAT_005de4f0 * -0.5);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_c4);
    local_58 = 0x40000000;
    local_50 = 0xbf000000;
    local_54 = 0xc0000000;
    local_34.x = (int)ROUND(_DAT_005de4f0 * 2.0);
    local_34.y = (int)ROUND(_DAT_005de4f0 * -2.0);
    local_34.z = (int)ROUND(_DAT_005de4f0 * -0.5);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_34);
    this_ptr_00 = DAT_005f2afc;
    DAT_005f2afc->vertex_buffer_ptr->u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->a = uVar3;
    this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[1].a = uVar3;
    this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].a = uVar3;
    this_ptr_00->vertex_buffer_ptr[3].u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[3].a = uVar3;
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
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (this_ptr_00,(SMRGLTextureBasic *)&DAT_005f2858);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    SStack_f8.base.count = 4;
    SStack_f8.surface_normal.A.i = 0;
    SStack_f8.surface_normal.B.i = 0;
    SStack_f8.surface_normal.C.i = -0xffff;
    SStack_f8.surface_normal.D.i = -0x1fffe;
    local_e0 = 0;
    local_d4 = 3;
    local_dc = 1;
    local_d8 = 2;
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,&SStack_f8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_matrix_c_pop_FUN_0046d080();
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_0045dea0(this_ptr);
  return;
}

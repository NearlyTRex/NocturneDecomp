// Name: core_dlight.cpp_FUN_0044b020
// Address: 0044b020
// Address Range: [[0044b020, 0044b04f] [0044b051, 0044b5a7]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_FUN_0044b020(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_FUN_0044b020(CDemonLight *this_ptr)

{
  UVector3 *world_position;
  longlong lVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  uint uVar3;
  byte bVar4;
  float10 fVar5;
  ulonglong uVar6;
  float afStackY_1094 [15];
  int aiStackY_1058 [981];
  CVector3f *translation;
  SMRGLHeaderPrimitive SStack_f8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  CVector3i local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [6];
  float local_90 [2];
  CVector3i local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  int aiStack_60 [2];
  CVector3i local_58;
  CVector3i local_4c;
  CVector3i local_40;
  int local_34;
  int local_30 [2];
  float local_28;
  int local_24;
  float local_20;
  int local_18;
  
  bVar4 = 0;
  if (this_ptr->volumetric_enabled == 0) {
    return;
  }
  world_position = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&world_position->f);
  engine_drender_cpp_FUN_0046b670(DAT_0060b280);
  translation = (CVector3f *)0x0;
  local_70.x = local_64;
  *(int *)((int)&local_70 + (uint)bVar4 * -8 + 4) = aiStack_60[(uint)bVar4 * -2];
  *(int *)((int)&local_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       aiStack_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_70,translation);
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0(DAT_0060b280,&local_58);
  local_34 = local_58.x;
  local_30[(uint)bVar4 * -2] = *(int *)((int)&local_58 + (uint)bVar4 * -8 + 4);
  local_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(int *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  fVar2 = (float)_DAT_005cf467;
  local_18 = local_30[1];
  local_7c = (float)local_34 * fVar2;
  local_ac = (world_position->f).x - (float)local_34 * fVar2;
  local_78 = (float)local_30[0] * fVar2;
  local_74 = (float)local_30[1] * fVar2;
  local_a8[0] = (this_ptr->base).base.position.f.y - (float)local_30[0] * fVar2;
  local_a8[1] = (this_ptr->base).base.position.f.z - (float)local_30[1] * fVar2;
  local_a8[5] = local_ac;
  local_90[(uint)bVar4 * -2] = local_a8[(uint)bVar4 * -2];
  local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (local_a8 + 2 != local_a8 + 5) {
    local_a8[2] = local_a8[5];
    local_a8[3] = local_90[0];
    local_a8[4] = local_90[1];
  }
  local_b8 = (this_ptr->base).base.rotation_matrix.m[0].z;
  local_b4 = (this_ptr->base).base.rotation_matrix.m[1].z;
  local_b0 = (this_ptr->base).base.rotation_matrix.m[2].z;
  local_20 = SQRT(local_a8[4] * local_a8[4] + local_a8[2] * local_a8[2] + local_a8[3] * local_a8[3])
  ;
  if (local_20 <= 0.0) {
    local_a8[3] = 0.0;
    local_a8[2] = 0.0;
    local_a8[4] = 0.0;
  }
  else {
    fVar2 = 1.0 / local_20;
    local_a8[2] = local_a8[2] * fVar2;
    local_a8[3] = local_a8[3] * fVar2;
    local_a8[4] = local_a8[4] * fVar2;
  }
  fVar5 = -((float10)local_a8[4] * (float10)local_b0 +
           (float10)local_a8[2] * (float10)local_b8 + (float10)local_a8[3] * (float10)local_b4) *
          (float10)this_ptr->bloom_intensity;
  local_28 = (float)fVar5;
  fVar5 = fVar5 * (float10)local_28 * (float10)local_28 * (float10)local_28 * (float10)_DAT_005cf46f
  ;
  uVar6 = round();
  local_24 = (int)ROUND(fVar5);
  lVar1 = (longlong)((int)((ulonglong)uVar6 >> 0x20) - (int)uVar6) * (longlong)local_24;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_28) {
    local_d0 = 0x3f800000;
    local_cc = 0x3f800000;
    local_c8 = 0xbf000000;
    local_40.x = (int)ROUND(_DAT_005f5050 * 1.0);
    local_40.y = (int)ROUND(_DAT_005f5050 * 1.0);
    local_40.z = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_40);
    local_cc = 0x3f800000;
    local_d0 = 0xbf800000;
    local_c8 = 0xbf000000;
    local_c4.x = (int)ROUND(_DAT_005f5050 * -1.0);
    local_c4.y = (int)ROUND(_DAT_005f5050 * 1.0);
    local_c4.z = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_c4);
    local_d0 = 0xbf800000;
    local_cc = 0xbf800000;
    local_c8 = 0xbf000000;
    local_88.x = (int)ROUND(_DAT_005f5050 * -1.0);
    local_88.y = (int)ROUND(_DAT_005f5050 * -1.0);
    local_88.z = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_88);
    local_d0 = 0x3f800000;
    local_c8 = 0xbf000000;
    local_cc = 0xbf800000;
    local_4c.x = (int)ROUND(_DAT_005f5050 * 1.0);
    local_4c.y = (int)ROUND(_DAT_005f5050 * -1.0);
    local_4c.z = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_4c);
    this_ptr_00 = DAT_0060b280;
    DAT_0060b280->vertex_buffer_ptr->u = 0xf80000;
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
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (this_ptr_00,(SMRGLTextureBasic *)&DAT_0060afe0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    SStack_f8.base.count = 4;
    SStack_f8.surface_normal.A.i = 0;
    SStack_f8.surface_normal.B.i = 0;
    SStack_f8.surface_normal.C.i = -0xffff;
    SStack_f8.surface_normal.D.i = -0xffff;
    local_e0 = 0;
    local_d4 = 3;
    local_dc = 1;
    local_d8 = 2;
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(DAT_0060b280,&SStack_f8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_drender_cpp_pop_FUN_0046b4a0();
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960(this_ptr);
  return;
}

// Name: core_fire.cpp_CLightningBolt_render_FUN_0049abd0
// Address: 0049abd0
// Address Range: [[0049abd0, 0049b2c4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_render_FUN_0049abd0(CLightningBolt *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CLightningBolt_render_FUN_0049abd0(CLightningBolt *this_ptr)

{
  CVector3f *world_position;
  CVector3f *pCVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  uint uVar3;
  int *extraout_EDX;
  CDemonRenderer *this_ptr_01;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int aiStackY_103c [975];
  SMRGLHeaderPrimitive local_e8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  CVector3i local_c0;
  CVector3i local_b4;
  CVector3i local_a8;
  CVector3i local_9c;
  CVector3i local_90;
  CVector3i local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  float local_54;
  int aiStack_50 [2];
  CVector3i local_48;
  CVector3i local_3c;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  CVector3i local_18;
  int local_c;
  int local_8;
  
  bVar4 = 0;
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  iVar2 = rand();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_006157cc + (iVar2 % 6) * 0x18));
  local_e8.base.count = 4;
  local_e8.surface_normal.D.i = 0;
  local_e8.surface_normal.C.i = 0;
  local_e8.surface_normal.B.i = 0;
  local_e8.surface_normal.A.i = 0;
  local_d0 = 0;
  local_c4 = 3;
  local_cc = 1;
  local_c8 = 2;
  uVar3 = rand();
  if ((uVar3 & 1) == 0) {
    _DAT_0062205c = 0x80000;
    _DAT_0062208c = 0x80000;
    _DAT_006220bc = 0xf80000;
    DAT_0062202c = 0xf80000;
  }
  else {
    _DAT_0062205c = 0xf80000;
    _DAT_0062208c = 0xf80000;
    _DAT_006220bc = 0x80000;
    DAT_0062202c = 0x80000;
  }
  _DAT_006220c0 = 0xf80000;
  DAT_00622090 = 0xf80000;
  _DAT_00622060 = 0x80000;
  _DAT_00622030 = 0x80000;
  DAT_00622034 = 0xffff;
  DAT_00622038 = 0xffff;
  DAT_0062203c = 0xffff;
  DAT_00622064 = 0xffff;
  DAT_00622068 = 0xffff;
  DAT_0062206c = 0xffff;
  DAT_00622094 = 0xffff;
  DAT_00622098 = 0xffff;
  DAT_0062209c = 0xffff;
  DAT_006220c4 = 0xffff;
  DAT_006220c8 = 0xffff;
  DAT_006220cc = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  world_position = &this_ptr->start_position;
  if (this_ptr->mode == 0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,world_position);
    engine_matrix_c_FUN_0046b670(DAT_0060b280);
    local_24.x = local_54;
    *(int *)((int)&local_24 + (uint)bVar4 * -8 + 4) = aiStack_50[(uint)bVar4 * -2];
    *(int *)((int)&local_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         aiStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_24.x = 0.0;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&local_24,(CVector3f *)0x0);
    local_28 = 0.0;
    if (0.0 < this_ptr->end_width) {
      local_30 = this_ptr->end_width;
    }
    else {
      local_30 = this_ptr->start_width * (float)_DAT_005d5732;
    }
    local_2c = this_ptr->start_width;
    local_60.x = (int)ROUND(local_30 * _DAT_005f64e4);
    local_60.y = (int)ROUND(local_2c * _DAT_005f64e4);
    local_60.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&local_60);
    local_30 = -local_30;
    local_b4.x = (int)ROUND(local_30 * _DAT_005f64e4);
    local_b4.y = (int)ROUND(local_2c * _DAT_005f64e4);
    local_b4.z = (int)ROUND(local_28 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&local_b4);
    local_2c = 0.0;
    local_48.x = (int)ROUND(local_30 * _DAT_005f64e4);
    local_48.y = (int)ROUND(_DAT_005f64e4 * 0.0);
    local_48.z = (int)ROUND(local_28 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&local_48);
    local_30 = -local_30;
    local_18.x = (int)ROUND(local_30 * _DAT_005f64e4);
    local_18.y = (int)ROUND(local_2c * _DAT_005f64e4);
    local_18.z = (int)ROUND(local_28 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&local_18);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&local_e8);
    engine_matrix_c_pop_FUN_0046b4a0();
  }
  else {
    local_9c.x = (int)ROUND(world_position->x * _DAT_005f64e4);
    local_9c.y = (int)ROUND((this_ptr->start_position).y * _DAT_005f64e4);
    local_9c.z = (int)ROUND((this_ptr->start_position).z * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&local_9c);
    local_6c.x = (int)ROUND(world_position->x * _DAT_005f64e4);
    local_6c.y = (int)ROUND((this_ptr->start_position).y * _DAT_005f64e4);
    local_6c.z = (int)ROUND((this_ptr->start_position).z * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&local_6c);
    pCVar1 = &this_ptr->end_position;
    local_3c.x = (int)ROUND(pCVar1->x * _DAT_005f64e4);
    local_3c.y = (int)ROUND((this_ptr->end_position).y * _DAT_005f64e4);
    local_3c.z = (int)ROUND((this_ptr->end_position).z * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&local_3c);
    local_90.x = (int)ROUND(pCVar1->x * _DAT_005f64e4);
    local_90.y = (int)ROUND((this_ptr->end_position).y * _DAT_005f64e4);
    local_90.z = (int)ROUND((this_ptr->end_position).z * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&local_90);
    fVar5 = (float10)_DAT_005d572a;
    fVar6 = (float10)this_ptr->end_width * fVar5;
    fVar7 = (float10)this_ptr->end_spread;
    *(uint *)(DAT_0060b280->vertex_buffer_ptr + 0x10) = 0x80000000;
    round();
    local_8 = (int)ROUND(fVar6);
    *(int *)(*extraout_EDX + 4) = *(int *)(*extraout_EDX + 4) - local_8;
    *(uint *)(*extraout_EDX + 0x40) = 0x80000000;
    *(int *)(*extraout_EDX + 0x34) = *(int *)(*extraout_EDX + 0x34) + local_8;
    fVar7 = fVar7 * fVar5;
    *(uint *)(*extraout_EDX + 0x70) = 0x80000000;
    round();
    local_c = (int)ROUND(fVar7);
    *(int *)(this_ptr_01->vertex_buffer_ptr + 100) =
         *(int *)(this_ptr_01->vertex_buffer_ptr + 100) + local_c;
    *(uint *)(this_ptr_01->vertex_buffer_ptr + 0xa0) = 0x80000000;
    *(int *)(this_ptr_01->vertex_buffer_ptr + 0x94) =
         *(int *)(this_ptr_01->vertex_buffer_ptr + 0x94) - local_c;
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(this_ptr_01,&local_e8);
    local_a8.x = (int)ROUND(world_position->x * _DAT_005f64e4);
    local_a8.y = (int)ROUND((this_ptr->start_position).y * _DAT_005f64e4);
    local_a8.z = (int)ROUND((this_ptr->start_position).z * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&local_a8);
    local_78.x = (int)ROUND(world_position->x * _DAT_005f64e4);
    local_78.y = (int)ROUND((this_ptr->start_position).y * _DAT_005f64e4);
    local_78.z = (int)ROUND((this_ptr->start_position).z * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&local_78);
    local_c0.x = (int)ROUND(pCVar1->x * _DAT_005f64e4);
    local_c0.y = (int)ROUND((this_ptr->end_position).y * _DAT_005f64e4);
    local_c0.z = (int)ROUND((this_ptr->end_position).z * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&local_c0);
    local_84.x = (int)ROUND(pCVar1->x * _DAT_005f64e4);
    local_84.y = (int)ROUND((this_ptr->end_position).y * _DAT_005f64e4);
    local_84.z = (int)ROUND((this_ptr->end_position).z * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&local_84);
    this_ptr_00 = DAT_0060b280;
    *(uint *)(DAT_0060b280->vertex_buffer_ptr + 0x10) = 0x80000000;
    *(int *)this_ptr_00->vertex_buffer_ptr = *(int *)this_ptr_00->vertex_buffer_ptr - local_8;
    *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x40) = 0x80000000;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x30) =
         *(int *)(this_ptr_00->vertex_buffer_ptr + 0x30) + local_8;
    *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x70) = 0x80000000;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x60) =
         *(int *)(this_ptr_00->vertex_buffer_ptr + 0x60) + local_c;
    *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xa0) = 0x80000000;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x90) =
         *(int *)(this_ptr_00->vertex_buffer_ptr + 0x90) - local_c;
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(this_ptr_00,&local_e8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}

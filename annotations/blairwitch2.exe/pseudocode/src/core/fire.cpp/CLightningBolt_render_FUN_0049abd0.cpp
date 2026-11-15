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
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonRenderer *pCVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  double dVar10;
  uint auStackY_103c [974];
  SMRGLHeaderPrimitive local_e8;
  uint local_d0;
  uint local_cc;
  CVector3i local_c8;
  byte local_b4 [8];
  int local_ac;
  int local_a8;
  CVector3i local_9c;
  byte local_90 [8];
  int local_88;
  int local_84;
  CVector3i local_80;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3f local_54;
  CVector3i local_48;
  CVector3i local_3c;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  CVector3i local_18;
  int local_c;
  
  bVar9 = 0;
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  iVar7 = rand();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_006157cc + (iVar7 % 6) * 0x18));
  local_e8.base.count = 4;
  local_e8.surface_normal.D.i = 0;
  local_e8.surface_normal.C.i = 0;
  local_e8.surface_normal.B.i = 0;
  local_e8.surface_normal.A.i = 0;
  local_d0 = 0;
  local_c8.y = 3;
  local_cc = 1;
  local_c8.x = 2;
  uVar8 = rand();
  if ((uVar8 & 1) == 0) {
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
    engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670(DAT_0060b280,&local_54);
    local_24.x = local_54.x;
    *(uint *)((int)&local_24 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_54 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&local_24 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
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
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_60);
    local_30 = -local_30;
    local_b4._0_4_ = (uint)ROUND(local_30 * _DAT_005f64e4);
    local_b4._4_4_ = (uint)ROUND(local_2c * _DAT_005f64e4);
    local_ac = (int)ROUND(local_28 * _DAT_005f64e4);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_b4);
    local_2c = 0.0;
    local_48.x = (int)ROUND(local_30 * _DAT_005f64e4);
    local_48.y = (int)ROUND(_DAT_005f64e4 * 0.0);
    local_48.z = (int)ROUND(local_28 * _DAT_005f64e4);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_48);
    local_30 = -local_30;
    local_18.x = (int)ROUND(local_30 * _DAT_005f64e4);
    local_18.y = (int)ROUND(local_2c * _DAT_005f64e4);
    local_18.z = (int)ROUND(local_28 * _DAT_005f64e4);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_18);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&local_e8);
    engine_drender_cpp_pop_FUN_0046b4a0();
  }
  else {
    local_9c.x = (int)ROUND(world_position->x * _DAT_005f64e4);
    local_9c.y = (int)ROUND((this_ptr->start_position).y * _DAT_005f64e4);
    local_9c.z = (int)ROUND((this_ptr->start_position).z * _DAT_005f64e4);
    engine_special_cpp_transformPoint_FUN_0055d9ec
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_9c);
    local_6c.x = (int)ROUND(world_position->x * _DAT_005f64e4);
    local_6c.y = (int)ROUND((this_ptr->start_position).y * _DAT_005f64e4);
    local_6c.z = (int)ROUND((this_ptr->start_position).z * _DAT_005f64e4);
    engine_special_cpp_transformPoint_FUN_0055d9ec
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_6c);
    pCVar1 = &this_ptr->end_position;
    local_3c.x = (int)ROUND(pCVar1->x * _DAT_005f64e4);
    local_3c.y = (int)ROUND((this_ptr->end_position).y * _DAT_005f64e4);
    local_3c.z = (int)ROUND((this_ptr->end_position).z * _DAT_005f64e4);
    engine_special_cpp_transformPoint_FUN_0055d9ec
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_90._0_4_ = (uint)ROUND(pCVar1->x * _DAT_005f64e4);
    local_90._4_4_ = (uint)ROUND((this_ptr->end_position).y * _DAT_005f64e4);
    local_88 = (int)ROUND((this_ptr->end_position).z * _DAT_005f64e4);
    engine_special_cpp_transformPoint_FUN_0055d9ec
              (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_90);
    pCVar6 = DAT_0060b280;
    fVar3 = this_ptr->end_width;
    fVar5 = (float)_DAT_005d572a;
    fVar4 = this_ptr->end_spread;
    (DAT_0060b280->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    dVar10 = round((double)(fVar3 * fVar5));
    local_c = (int)ROUND(dVar10);
    piVar2 = &(pCVar6->vertex_buffer_ptr->projected_vertex).transformed_y;
    *piVar2 = *piVar2 - local_c;
    pCVar6->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    piVar2 = &pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + local_c;
    pCVar6->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    dVar10 = round((double)(fVar4 * fVar5));
    local_18.y = (int)ROUND(dVar10);
    piVar2 = &pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + local_18.y;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_y =
         pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_y - local_18.y;
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
              (pCVar6,(SMRGLHeaderPrimitive *)&stack0xffffff10);
    local_b4._4_4_ = (uint)ROUND(world_position->x * _DAT_005f64e4);
    local_ac = (int)ROUND((this_ptr->start_position).y * _DAT_005f64e4);
    local_a8 = (int)ROUND((this_ptr->start_position).z * _DAT_005f64e4);
    engine_special_cpp_transformPoint_FUN_0055d9ec
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_b4 + 4));
    local_80.x = (int)ROUND(world_position->x * _DAT_005f64e4);
    local_80.y = (int)ROUND((this_ptr->start_position).y * _DAT_005f64e4);
    local_80.z = (int)ROUND((this_ptr->start_position).z * _DAT_005f64e4);
    engine_special_cpp_transformPoint_FUN_0055d9ec
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_80);
    local_c8.x = (int)ROUND(pCVar1->x * _DAT_005f64e4);
    local_c8.y = (int)ROUND((this_ptr->end_position).y * _DAT_005f64e4);
    local_c8.z = (int)ROUND((this_ptr->end_position).z * _DAT_005f64e4);
    engine_special_cpp_transformPoint_FUN_0055d9ec
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_c8);
    local_90._4_4_ = (uint)ROUND(pCVar1->x * _DAT_005f64e4);
    local_88 = (int)ROUND((this_ptr->end_position).y * _DAT_005f64e4);
    local_84 = (int)ROUND((this_ptr->end_position).z * _DAT_005f64e4);
    engine_special_cpp_transformPoint_FUN_0055d9ec
              (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)(local_90 + 4));
    pCVar6 = DAT_0060b280;
    (DAT_0060b280->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    (pCVar6->vertex_buffer_ptr->projected_vertex).transformed_x =
         (pCVar6->vertex_buffer_ptr->projected_vertex).transformed_x - local_18.z;
    pCVar6->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_x =
         pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_x + local_18.z;
    pCVar6->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_x =
         pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_x + local_18.y;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_x =
         pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_x - local_18.y;
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
              (pCVar6,(SMRGLHeaderPrimitive *)&stack0xffffff10);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}

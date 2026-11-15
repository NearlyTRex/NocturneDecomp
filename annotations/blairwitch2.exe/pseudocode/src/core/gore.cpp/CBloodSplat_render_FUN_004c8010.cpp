// Name: core_gore.cpp_CBloodSplat_render_FUN_004c8010
// Address: 004c8010
// Address Range: [[004c8010, 004c8680]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004c8010(CBloodSplat *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004c8010(CBloodSplat *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  CVector3i *input;
  double dVar2;
  CVector3i CStack_a0;
  CVector3i local_94;
  uint local_88;
  uint local_84;
  uint local_80;
  CVector3i local_7c;
  CVector3i local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  CVector3i local_58;
  CVector3i local_4c;
  CVector3i local_40;
  CVector3i local_34;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  int local_18;
  
  CStack_a0.x = 0x4c803c;
  dVar2 = round
                    ((double)(this_ptr->age * (float)_DAT_005d945a + (float)_DAT_005d9462));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if ((0xf < local_18) && (local_18 = 0xf, expire_flag != 0)) {
    this_ptr->expired = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&this_ptr->position);
  if (this_ptr->is_wall_splat == 1) {
    _DAT_01cb8290 = 0;
    _DAT_01cb8298 = 0xffff;
    _DAT_01cb8294 = 0;
    _DAT_01cb829c = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,
               (SMRGLTextureBasic *)
               (&DAT_00616868 + local_18 * 0x18 + this_ptr->texture_variant * 0x180));
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&this_ptr->rotation,(CVector3f *)0x0);
    local_88 = 0xbf000000;
    local_84 = 0xbf000000;
    local_80 = 0;
    local_7c.x = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_7c.y = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_7c.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_7c);
    local_88 = 0x3f000000;
    local_80 = 0;
    local_84 = 0xbf000000;
    local_58.x = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_58.y = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_58.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_58);
    local_88 = 0x3f000000;
    local_80 = 0;
    local_84 = 0x3f000000;
    local_34.x = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_34.y = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_34.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_34);
    input = &CStack_a0;
    local_88 = 0xbf000000;
    local_80 = 0;
    local_84 = 0x3f000000;
    CStack_a0.x = (int)ROUND(_DAT_005f7ba8 * -0.5);
    CStack_a0.y = (int)ROUND(_DAT_005f7ba8 * 0.5);
    CStack_a0.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
  }
  else {
    if (expire_flag != 0) {
      this_ptr->expired = 1;
    }
    _DAT_01cb8294 = 0xffff;
    _DAT_01cb8290 = 0;
    _DAT_01cb8298 = 0;
    _DAT_01cb829c = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_00616808 + this_ptr->texture_variant * 0x18))
    ;
    local_64 = 0xbf000000;
    local_60 = 0;
    local_5c = 0xbf000000;
    local_4c.x = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_4c.y = (int)ROUND(_DAT_005f7ba8 * 0.0);
    local_4c.z = (int)ROUND(_DAT_005f7ba8 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_4c);
    local_64 = 0x3f000000;
    local_5c = 0xbf000000;
    local_60 = 0;
    local_40.x = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_40.y = (int)ROUND(_DAT_005f7ba8 * 0.0);
    local_40.z = (int)ROUND(_DAT_005f7ba8 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_40);
    local_64 = 0x3f000000;
    local_60 = 0;
    local_5c = 0x3f000000;
    local_94.x = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_94.y = (int)ROUND(_DAT_005f7ba8 * 0.0);
    local_94.z = (int)ROUND(_DAT_005f7ba8 * 0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_94);
    local_64 = 0xbf000000;
    local_5c = 0x3f000000;
    local_60 = 0;
    local_70.x = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_70.y = (int)ROUND(_DAT_005f7ba8 * 0.0);
    local_70.z = (int)ROUND(_DAT_005f7ba8 * 0.5);
    input = &local_70;
  }
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,input);
  EVar1 = this_ptr->blood_type;
  local_28 = &DAT_0062203c;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c827a:
    DAT_00622034 = 0x2000;
    DAT_00622038 = 0;
    *local_28 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00622038 = 0x9a80;
    DAT_0062203c = 0xb100;
    DAT_00622034 = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c827a;
    DAT_00622038 = 0;
    DAT_0062203c = 0;
    DAT_00622034 = 0;
  }
  EVar1 = this_ptr->blood_type;
  local_1c = &DAT_00622068;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c82c2:
    DAT_00622064 = 0x2000;
    *local_1c = 0;
    DAT_0062206c = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00622068 = 0x9a80;
    DAT_0062206c = 0xb100;
    DAT_00622064 = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c82c2;
    DAT_00622068 = 0;
    DAT_0062206c = 0;
    DAT_00622064 = 0;
  }
  EVar1 = this_ptr->blood_type;
  local_24 = &DAT_00622098;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c830d:
    DAT_00622094 = 0x2000;
    *local_24 = 0;
    DAT_0062209c = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00622098 = 0x9a80;
    DAT_0062209c = 0xb100;
    DAT_00622094 = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c830d;
    DAT_00622098 = 0;
    DAT_0062209c = 0;
    DAT_00622094 = 0;
  }
  EVar1 = this_ptr->blood_type;
  local_20 = &DAT_006220c8;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      DAT_006220c8 = 0x9a80;
      DAT_006220cc = 0xb100;
      DAT_006220c4 = 0x9000;
      goto LAB_004c836f;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      DAT_006220c8 = 0;
      DAT_006220cc = 0;
      DAT_006220c4 = 0;
      goto LAB_004c836f;
    }
  }
  DAT_006220c4 = 0x2000;
  *local_20 = 0;
  DAT_006220cc = 0;
LAB_004c836f:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1cb8288);
  if (this_ptr->is_wall_splat == 1) {
    engine_drender_cpp_pop_FUN_0046b4a0();
    return;
  }
  return;
}

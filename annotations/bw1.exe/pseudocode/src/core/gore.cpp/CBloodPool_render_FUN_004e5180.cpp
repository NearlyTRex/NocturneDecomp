// Name: core_gore.cpp_CBloodPool_render_FUN_004e5180
// Address: 004e5180
// Address Range: [[004e5180, 004e553e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_render_FUN_004e5180(CBloodPool *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodPool_render_FUN_004e5180(CBloodPool *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  double dVar2;
  CVector3i CStack_54;
  CVector3i local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  CVector3i local_30;
  CVector3i local_24;
  int local_18;
  
  CStack_54.x = 0x4e5199;
  dVar2 = round((double)(this_ptr->age * (float)_DAT_005e40bd));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if ((0x1c < local_18) && (local_18 = 0x1c, this_ptr != (CBloodPool *)0x0)) {
    this_ptr->expired = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,
             (SMRGLTextureBasic *)
             (&DAT_0061e32c + local_18 * 0x18 + this_ptr->texture_variant * 0x2b8));
  local_3c = 0xbfaa9fbe;
  local_34 = 0xbfaa9fbe;
  local_38 = 0;
  local_24.x = (int)ROUND(_DAT_006016a8 * -1.333);
  local_24.y = (int)ROUND(_DAT_006016a8 * 0.0);
  local_24.z = (int)ROUND(_DAT_006016a8 * -1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_24);
  local_3c = 0x3faa9fbe;
  local_38 = 0;
  local_34 = 0xbfaa9fbe;
  local_48.x = (int)ROUND(_DAT_006016a8 * 1.333);
  local_48.y = (int)ROUND(_DAT_006016a8 * 0.0);
  local_48.z = (int)ROUND(_DAT_006016a8 * -1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_48);
  local_3c = 0x3faa9fbe;
  local_34 = 0x3faa9fbe;
  local_38 = 0;
  local_30.x = (int)ROUND(_DAT_006016a8 * 1.333);
  local_30.y = (int)ROUND(_DAT_006016a8 * 0.0);
  local_30.z = (int)ROUND(_DAT_006016a8 * 1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_30);
  local_3c = 0xbfaa9fbe;
  local_38 = 0;
  local_34 = 0x3faa9fbe;
  CStack_54.x = (int)ROUND(_DAT_006016a8 * -1.333);
  CStack_54.y = (int)ROUND(_DAT_006016a8 * 0.0);
  CStack_54.z = (int)ROUND(_DAT_006016a8 * 1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_54);
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e5379:
    DAT_00629034 = 0x2000;
    DAT_00629038 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629034 = 0;
    DAT_00629038 = 0x7f80;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e5379;
    DAT_00629038 = 0;
    DAT_00629034 = 0;
  }
  DAT_0062903c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e53a6:
    DAT_00629064 = 0x2000;
    DAT_00629068 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629068 = 0x7f80;
    DAT_00629064 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e53a6;
    DAT_00629068 = 0;
    DAT_00629064 = 0;
  }
  DAT_0062906c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e53d3:
    DAT_00629094 = 0x2000;
    DAT_00629098 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629098 = 0x7f80;
    DAT_00629094 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e53d3;
    DAT_00629098 = 0;
    DAT_00629094 = 0;
  }
  DAT_0062909c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      DAT_006290c8 = 0x7f80;
      DAT_006290c4 = 0;
      goto LAB_004e5423;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      DAT_006290c8 = 0;
      DAT_006290c4 = 0;
      goto LAB_004e5423;
    }
  }
  DAT_006290c4 = 0x2000;
  DAT_006290c8 = 0;
LAB_004e5423:
  DAT_006290cc = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1cd0e40);
  return;
}

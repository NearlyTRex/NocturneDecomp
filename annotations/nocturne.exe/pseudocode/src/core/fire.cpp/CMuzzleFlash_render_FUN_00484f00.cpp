// Name: core_fire.cpp_CMuzzleFlash_render_FUN_00484f00
// Address: 00484f00
// Address Range: [[00484f00, 004850a1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_00484f00(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_00484f00(CMuzzleFlash *this_ptr)

{
  uint uVar1;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  float local_10;
  float local_c;
  
  if (this_ptr->frames_remaining != 2) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&this_ptr->rotation,(CVector3f *)0x0);
  local_28.z = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x40c90fdb);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_10 = local_28.z;
  local_c = local_28.z;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&local_28,(CVector3f *)0x0);
  *(uint *)(0x01E57284 + 0x15a898) = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (DAT_005ae704,(uVar1 & 0x3fff) + 0x1800);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)0x1c09338,0.0,99);
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  local_1c.z = 1.5707964;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&local_1c,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)0x1c09338,0.0,99);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  local_34.x = 0.0;
  local_34.y = 0.0;
  local_34.z = 0.7853982;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&local_34,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)0x1c09338,0.0,99);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  *(uint *)(0x01E57284 + 0x15a898) = 0;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  return;
}

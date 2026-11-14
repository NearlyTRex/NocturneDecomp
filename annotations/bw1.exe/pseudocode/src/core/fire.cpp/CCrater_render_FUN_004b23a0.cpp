// Name: core_fire.cpp_CCrater_render_FUN_004b23a0
// Address: 004b23a0
// Address Range: [[004b23a0, 004b25f4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_render_FUN_004b23a0(CCrater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CCrater_render_FUN_004b23a0(CCrater *this_ptr)

{
  SMRGLHeaderPrimitive local_60;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3i local_20;
  CVector3i local_14;
  
  if (this_ptr->active == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&this_ptr->center_position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061ca94);
  local_38.x = (int)ROUND(this_ptr->corner_positions[0].x * _DAT_005fff94);
  local_38.y = (int)ROUND(this_ptr->corner_positions[0].y * _DAT_005fff94);
  local_38.z = (int)ROUND(this_ptr->corner_positions[0].z * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)&DAT_00629014,&local_38);
  local_20.x = (int)ROUND(this_ptr->corner_positions[1].x * _DAT_005fff94);
  local_20.y = (int)ROUND(this_ptr->corner_positions[1].y * _DAT_005fff94);
  local_20.z = (int)ROUND(this_ptr->corner_positions[1].z * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)&DAT_00629044,&local_20);
  local_2c.x = (int)ROUND(this_ptr->corner_positions[2].x * _DAT_005fff94);
  local_2c.y = (int)ROUND(this_ptr->corner_positions[2].y * _DAT_005fff94);
  local_2c.z = (int)ROUND(this_ptr->corner_positions[2].z * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)&DAT_00629074,&local_2c);
  local_14.x = (int)ROUND(this_ptr->corner_positions[3].x * _DAT_005fff94);
  local_14.y = (int)ROUND(this_ptr->corner_positions[3].y * _DAT_005fff94);
  local_14.z = (int)ROUND(this_ptr->corner_positions[3].z * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)&DAT_006290a4,&local_14);
  DAT_00629034 = 0xffff;
  DAT_00629038 = 0xffff;
  DAT_0062903c = 0xffff;
  DAT_00629064 = 0xffff;
  DAT_00629068 = 0xffff;
  DAT_0062906c = 0xffff;
  DAT_00629094 = 0xffff;
  DAT_00629098 = 0xffff;
  DAT_0062909c = 0xffff;
  DAT_006290c4 = 0xffff;
  DAT_006290c8 = 0xffff;
  DAT_006290cc = 0xffff;
  DAT_0062902c = 0x80000;
  _DAT_00629030 = 0xf80000;
  _DAT_0062905c = 0xf80000;
  _DAT_00629060 = 0xf80000;
  _DAT_0062908c = 0xf80000;
  DAT_00629090 = 0x80000;
  _DAT_006290bc = 0x80000;
  _DAT_006290c0 = 0x80000;
  local_60.surface_normal.B.i = 0xffff;
  local_60.surface_normal.A.i = 0;
  local_60.surface_normal.C.i = 0;
  local_60.base.count = 3;
  local_60.surface_normal.D.i = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,&local_60);
  local_48 = 0;
  local_44 = 2;
  local_40 = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,&local_60);
  return;
}

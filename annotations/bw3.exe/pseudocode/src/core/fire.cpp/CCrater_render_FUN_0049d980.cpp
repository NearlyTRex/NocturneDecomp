// Name: core_fire.cpp_CCrater_render_FUN_0049d980
// Address: 0049d980
// Address Range: [[0049d980, 0049dbd4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_render_FUN_0049d980(CCrater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CCrater_render_FUN_0049d980(CCrater *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&this_ptr->center_position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fd5f4);
  local_38.x = (int)ROUND(this_ptr->corner_positions[0].x * _DAT_005df8e4);
  local_38.y = (int)ROUND(this_ptr->corner_positions[0].y * _DAT_005df8e4);
  local_38.z = (int)ROUND(this_ptr->corner_positions[0].z * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c((SProjectedVertex *)&DAT_0060b014,&local_38);
  local_20.x = (int)ROUND(this_ptr->corner_positions[1].x * _DAT_005df8e4);
  local_20.y = (int)ROUND(this_ptr->corner_positions[1].y * _DAT_005df8e4);
  local_20.z = (int)ROUND(this_ptr->corner_positions[1].z * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c((SProjectedVertex *)&DAT_0060b044,&local_20);
  local_2c.x = (int)ROUND(this_ptr->corner_positions[2].x * _DAT_005df8e4);
  local_2c.y = (int)ROUND(this_ptr->corner_positions[2].y * _DAT_005df8e4);
  local_2c.z = (int)ROUND(this_ptr->corner_positions[2].z * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c((SProjectedVertex *)&DAT_0060b074,&local_2c);
  local_14.x = (int)ROUND(this_ptr->corner_positions[3].x * _DAT_005df8e4);
  local_14.y = (int)ROUND(this_ptr->corner_positions[3].y * _DAT_005df8e4);
  local_14.z = (int)ROUND(this_ptr->corner_positions[3].z * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c((SProjectedVertex *)&DAT_0060b0a4,&local_14);
  DAT_0060b034 = 0xffff;
  DAT_0060b038 = 0xffff;
  DAT_0060b03c = 0xffff;
  DAT_0060b064 = 0xffff;
  DAT_0060b068 = 0xffff;
  DAT_0060b06c = 0xffff;
  _DAT_0060b094 = 0xffff;
  _DAT_0060b098 = 0xffff;
  _DAT_0060b09c = 0xffff;
  _DAT_0060b0c4 = 0xffff;
  _DAT_0060b0c8 = 0xffff;
  _DAT_0060b0cc = 0xffff;
  DAT_0060b02c = 0x80000;
  _DAT_0060b030 = 0xf80000;
  _DAT_0060b05c = 0xf80000;
  _DAT_0060b060 = 0xf80000;
  _DAT_0060b08c = 0xf80000;
  DAT_0060b090 = 0x80000;
  _DAT_0060b0bc = 0x80000;
  _DAT_0060b0c0 = 0x80000;
  local_60.surface_normal.B.i = 0xffff;
  local_60.surface_normal.A.i = 0;
  local_60.surface_normal.C.i = 0;
  local_60.base.count = 3;
  local_60.surface_normal.D.i = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,&local_60);
  local_48 = 0;
  local_44 = 2;
  local_40 = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,&local_60);
  return;
}

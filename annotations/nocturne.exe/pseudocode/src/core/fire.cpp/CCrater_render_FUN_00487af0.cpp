// Name: core_fire.cpp_CCrater_render_FUN_00487af0
// Address: 00487af0
// Address Range: [[00487af0, 00487d44]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_render_FUN_00487af0(CCrater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CCrater_render_FUN_00487af0(CCrater *this_ptr)

{
  SMRGLHeaderPrimitive local_6c;
  uint local_54;
  uint local_50;
  uint local_4c;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3i local_20;
  CVector3i local_14;
  
  if (this_ptr->active == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,&this_ptr->center_position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b8afc);
  local_20.x = (int)ROUND(this_ptr->corner_positions[0].x * 256.0f);
  local_20.y = (int)ROUND(this_ptr->corner_positions[0].y * 256.0f);
  local_20.z = (int)ROUND(this_ptr->corner_positions[0].z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25((SProjectedVertex *)&DAT_005c5014,&local_20);
  local_2c.x = (int)ROUND(this_ptr->corner_positions[1].x * 256.0f);
  local_2c.y = (int)ROUND(this_ptr->corner_positions[1].y * 256.0f);
  local_2c.z = (int)ROUND(this_ptr->corner_positions[1].z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25((SProjectedVertex *)&DAT_005c5044,&local_2c);
  local_38.x = (int)ROUND(this_ptr->corner_positions[2].x * 256.0f);
  local_38.y = (int)ROUND(this_ptr->corner_positions[2].y * 256.0f);
  local_38.z = (int)ROUND(this_ptr->corner_positions[2].z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25((SProjectedVertex *)&DAT_005c5074,&local_38);
  local_14.x = (int)ROUND(this_ptr->corner_positions[3].x * 256.0f);
  local_14.y = (int)ROUND(this_ptr->corner_positions[3].y * 256.0f);
  local_14.z = (int)ROUND(this_ptr->corner_positions[3].z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25((SProjectedVertex *)&DAT_005c50a4,&local_14);
  DAT_005c5034 = 0xffff;
  DAT_005c5038 = 0xffff;
  DAT_005c503c = 0xffff;
  DAT_005c5064 = 0xffff;
  DAT_005c5068 = 0xffff;
  DAT_005c506c = 0xffff;
  DAT_005c5094 = 0xffff;
  DAT_005c5098 = 0xffff;
  DAT_005c509c = 0xffff;
  DAT_005c50c4 = 0xffff;
  DAT_005c50c8 = 0xffff;
  DAT_005c50cc = 0xffff;
  DAT_005c502c = 0x80000;
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  _DAT_005c5090 = 0x80000;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
  local_6c.surface_normal.B.i = 0xffff;
  local_6c.surface_normal.A.i = 0;
  local_6c.surface_normal.C.i = 0;
  local_6c.base.count = 3;
  local_6c.surface_normal.D.i = 0;
  local_54 = 0;
  local_50 = 1;
  local_4c = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,&local_6c);
  local_54 = 0;
  local_50 = 2;
  local_4c = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,&local_6c);
  return;
}

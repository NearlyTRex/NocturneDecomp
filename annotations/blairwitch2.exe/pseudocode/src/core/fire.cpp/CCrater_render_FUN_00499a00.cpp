// Name: core_fire.cpp_CCrater_render_FUN_00499a00
// Address: 00499a00
// Address Range: [[00499a00, 00499c54]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_render_FUN_00499a00(CCrater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CCrater_render_FUN_00499a00(CCrater *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&this_ptr->center_position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_006157b4);
  local_38.x = (int)ROUND(this_ptr->corner_positions[0].x * _DAT_005f64e4);
  local_38.y = (int)ROUND(this_ptr->corner_positions[0].y * _DAT_005f64e4);
  local_38.z = (int)ROUND(this_ptr->corner_positions[0].z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec((SProjectedVertex *)&DAT_00622014,&local_38);
  local_20.x = (int)ROUND(this_ptr->corner_positions[1].x * _DAT_005f64e4);
  local_20.y = (int)ROUND(this_ptr->corner_positions[1].y * _DAT_005f64e4);
  local_20.z = (int)ROUND(this_ptr->corner_positions[1].z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec((SProjectedVertex *)&DAT_00622044,&local_20);
  local_2c.x = (int)ROUND(this_ptr->corner_positions[2].x * _DAT_005f64e4);
  local_2c.y = (int)ROUND(this_ptr->corner_positions[2].y * _DAT_005f64e4);
  local_2c.z = (int)ROUND(this_ptr->corner_positions[2].z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec((SProjectedVertex *)&DAT_00622074,&local_2c);
  local_14.x = (int)ROUND(this_ptr->corner_positions[3].x * _DAT_005f64e4);
  local_14.y = (int)ROUND(this_ptr->corner_positions[3].y * _DAT_005f64e4);
  local_14.z = (int)ROUND(this_ptr->corner_positions[3].z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec((SProjectedVertex *)&DAT_006220a4,&local_14);
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
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0xf80000;
  _DAT_0062205c = 0xf80000;
  _DAT_00622060 = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0x80000;
  _DAT_006220bc = 0x80000;
  _DAT_006220c0 = 0x80000;
  local_60.surface_normal.B.i = 0xffff;
  local_60.surface_normal.A.i = 0;
  local_60.surface_normal.C.i = 0;
  local_60.base.count = 3;
  local_60.surface_normal.D.i = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&local_60);
  local_48 = 0;
  local_44 = 2;
  local_40 = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&local_60);
  return;
}

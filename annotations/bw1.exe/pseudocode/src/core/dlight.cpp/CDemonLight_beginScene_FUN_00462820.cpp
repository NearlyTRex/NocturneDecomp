// Name: core_dlight.cpp_CDemonLight_beginScene_FUN_00462820
// Address: 00462820
// Address Range: [[00462820, 00462a08]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(CDemonLight *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(CDemonLight *this_ptr,int skip_clear_buffers)

{
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  CDemonLight *pCVar3;
  
  if ((this_ptr->base).scene_open_flag != 0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0xf3;
    core_main_c_FUN_005030e0("CDemonLight::beginScene - Scene already open");
  }
  (this_ptr->base).scene_open_flag = 1;
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044ce60(&this_ptr->base,skip_clear_buffers);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00483c10
            (DAT_00612560,0,0,this_ptr->shadow_map_width + -1,this_ptr->shadow_map_height + -1);
  (this_ptr->base).viewport_rect.y_min = this_ptr->shadow_map_width + -1;
  iVar2 = this_ptr->shadow_map_height;
  (this_ptr->base).viewport_rect.x_min = 0;
  (this_ptr->base).viewport_rect.y_max = iVar2 + -1;
  (this_ptr->base).viewport_rect.x_max = 0;
  this_ptr_00 = DAT_00612560;
  (this_ptr->base).rect_array_count = 0;
  (this_ptr->base).skip_clear_buffer_flag = skip_clear_buffers;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
            (this_ptr_00,&(this_ptr->base).base.position.f);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
            (DAT_00612560,(this_ptr->base).base.focal_length);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
            (DAT_00612560,&(this_ptr->base).base.rotation_matrix);
  lVar1 = (longlong)this_ptr->transform_scale_factor * (longlong)(int)_DAT_01c51d60;
  _DAT_01c51d60 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->transform_scale_factor * (longlong)(int)_DAT_01c51d6c;
  _DAT_01c51d6c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->transform_scale_factor * (longlong)(int)_DAT_01c51d78;
  _DAT_01c51d78 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (skip_clear_buffers == 0) {
    _memset
              (this_ptr->shadow_depth_buffer,0xff,
               this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2);
  }
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->shadow_map_height) {
    do {
      pCVar3->saved_screen_buffer_rows[0] = *(void **)(&DAT_01c4354c + iVar2 * 4);
      *(ushort **)(&DAT_01c4354c + iVar2 * 4) =
           this_ptr->shadow_depth_buffer + this_ptr->shadow_map_width * iVar2;
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonLight *)&(pCVar3->base).base.position;
    } while (iVar2 < this_ptr->shadow_map_height);
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(DAT_00612560,1);
  if (skip_clear_buffers == 0) {
    _DAT_01bc0cd0 = skip_clear_buffers;
    return;
  }
  _DAT_01bc0cd0 = 0x8000;
  return;
}

// Name: core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470
// Address: 0044e470
// Address Range: [[0044e470, 0044e658]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(CDemonLight *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(CDemonLight *this_ptr,int skip_clear_buffers)

{
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  CDemonLight *pCVar3;
  
  if ((this_ptr->base).scene_open_flag != 0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dlight.cpp";
    g_INT_01cc4804 = 0xf3;
    core_main_c_FUN_004c8440("CDemonLight::beginScene - Scene already open");
  }
  (this_ptr->base).scene_open_flag = 1;
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(&this_ptr->base,skip_clear_buffers);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40
            (DAT_005ae704,0,0,this_ptr->shadow_map_width + -1,this_ptr->shadow_map_height + -1);
  (this_ptr->base).viewport_rect.y_min = this_ptr->shadow_map_width + -1;
  iVar2 = this_ptr->shadow_map_height;
  (this_ptr->base).viewport_rect.x_min = 0;
  (this_ptr->base).viewport_rect.y_max = iVar2 + -1;
  (this_ptr->base).viewport_rect.x_max = 0;
  this_ptr_00 = DAT_005ae704;
  (this_ptr->base).rect_array_count = 0;
  (this_ptr->base).skip_clear_buffer_flag = skip_clear_buffers;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (this_ptr_00,&(this_ptr->base).position);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
            (DAT_005ae704,(this_ptr->base).focal_length);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
            (DAT_005ae704,&(this_ptr->base).rotation_matrix);
  lVar1 = (longlong)this_ptr->transform_scale_factor * (longlong)(int)_DAT_01c039ec;
  _DAT_01c039ec = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->transform_scale_factor * (longlong)(int)_DAT_01c039f8;
  _DAT_01c039f8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->transform_scale_factor * (longlong)(int)_DAT_01c03a04;
  _DAT_01c03a04 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (skip_clear_buffers == 0) {
    _memset(this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2);
  }
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->shadow_map_height) {
    do {
      pCVar3->saved_screen_buffer_rows[0] = *(void **)(&DAT_01bd2fa0 + iVar2 * 4);
      *(ushort **)(&DAT_01bd2fa0 + iVar2 * 4) =
           this_ptr->shadow_depth_buffer + this_ptr->shadow_map_width * iVar2;
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonLight *)((pCVar3->base).camera_name + 4);
    } while (iVar2 < this_ptr->shadow_map_height);
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,1);
  if (skip_clear_buffers == 0) {
    _DAT_01b4d1fc = skip_clear_buffers;
    return;
  }
  _DAT_01b4d1fc = 0x8000;
  return;
}

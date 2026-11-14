// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00449840
// Address: 00449840
// Address Range: [[00449840, 004499f6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (this_ptr->scene_open_flag == 0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x436;
    core_main_c_FUN_004e4330("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  _DAT_0149ef08 = _DAT_0149ef08 + 1;
  if (_DAT_0149ef08 == 1) {
    _DAT_0149ef0c = DAT_005fba20;
    _DAT_0149ef10 = _DAT_01c6cee8;
    puVar4 = (uint *)&DAT_01c5faec;
    puVar5 = (uint *)&DAT_0149ef14;
    for (uVar1 = DAT_005fba1c & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    _DAT_014a01d4 = _DAT_01c6af74;
    DAT_005fba20 = 0x20;
    _DAT_01c6cee8 = 0;
    _DAT_014a01d8 = _DAT_01c6af80;
    _DAT_01c6af80 = 8;
    _DAT_014a01dc = _DAT_01c6af8c;
    _DAT_01c6af8c = 0;
    _DAT_01c6af74 = 0x10;
    iVar2 = 0;
    if (0 < this_ptr->framebuffer_height) {
      iVar3 = 0;
      do {
        *(void **)(&DAT_01c5faec + iVar3) =
             (void *)((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * iVar2 * 4);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->framebuffer_height);
    }
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
              (DAT_005f2afc,0,0,this_ptr->framebuffer_width + -1,this_ptr->framebuffer_height + -1);
    this_ptr_00 = DAT_005f2afc;
    (this_ptr->cached_projection).half_width_fixed = _DAT_01c6b598;
    (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c6b59c;
    (this_ptr->cached_projection).center_x_fixed = _DAT_01c6b5a0;
    (this_ptr->cached_projection).center_y_fixed = _DAT_01c6b5a4;
    engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880
              (this_ptr_00,(SCameraViewportState *)0x14a01f0);
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
              (DAT_005f2afc,&(this_ptr->base).position.f);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
              (DAT_005f2afc,(this_ptr->base).focal_length);
    engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
              (DAT_005f2afc,&(this_ptr->base).rotation_matrix);
  }
  return;
}

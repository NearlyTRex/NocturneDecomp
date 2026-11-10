// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700
// Address: 0044d700
// Address Range: [[0044d700, 0044d8b6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(CDemonCamera *this_ptr)

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
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x436;
    core_main_c_FUN_005030e0("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  _DAT_01482658 = _DAT_01482658 + 1;
  if (_DAT_01482658 == 1) {
    _DAT_0148265c = DAT_0061b4a0;
    _DAT_01482660 = _DAT_01c50948;
    puVar4 = (uint *)&DAT_01c4354c;
    puVar5 = (uint *)&DAT_01482664;
    for (uVar1 = DAT_0061b49c & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    _DAT_01483924 = _DAT_01c4e9d4;
    DAT_0061b4a0 = 0x20;
    _DAT_01c50948 = 0;
    _DAT_01483928 = _DAT_01c4e9e0;
    _DAT_01c4e9e0 = 8;
    _DAT_0148392c = _DAT_01c4e9ec;
    _DAT_01c4e9ec = 0;
    _DAT_01c4e9d4 = 0x10;
    iVar2 = 0;
    if (0 < this_ptr->framebuffer_height) {
      iVar3 = 0;
      do {
        *(void **)(&DAT_01c4354c + iVar3) =
             (void *)((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * iVar2 * 4);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->framebuffer_height);
    }
    engine_matrix_c_FUN_00483c10
              (DAT_00612560,0,0,this_ptr->framebuffer_width + -1,this_ptr->framebuffer_height + -1);
    this_ptr_00 = DAT_00612560;
    (this_ptr->cached_projection).half_width_fixed = _DAT_01c4eff8;
    (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c4effc;
    (this_ptr->cached_projection).center_x_fixed = _DAT_01c4f000;
    (this_ptr->cached_projection).center_y_fixed = _DAT_01c4f004;
    engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0
              (this_ptr_00,(SCameraViewportState *)0x1483940);
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
              (DAT_00612560,&(this_ptr->base).position.f);
    engine_matrix_c_FUN_004839b0(DAT_00612560,(this_ptr->base).focal_length);
    engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
              (DAT_00612560,&(this_ptr->base).rotation_matrix);
  }
  return;
}

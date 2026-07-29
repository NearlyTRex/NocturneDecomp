// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
// Address: 00440a20
// Address Range: [[00440a20, 00440b11]]
// Convention: unknown
// Signature: void core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(CDemonCamera *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(CDemonCamera *param_1,int param_2)

{
  int iVar1;
  
  if (param_1->scene_open_flag == 0) {
    PTR_01cc4800 = "..\\core\\dcamera.cpp";
    INT_01cc4804 = 0x3f9;
    core_main_c_FUN_004c8440("CDemonCamera::endScene - Scene not open!");
  }
  else {
    param_1->scene_open_flag = 0;
  }
  if (INT_02dc9d60 != 0) {
    engine_special_cpp_endScene_FUN_00532360();
  }
  if ((param_1->skip_clear_buffer_flag == 0) && (param_2 == 0)) {
    if (_DAT_01c02594 != 0) {
      engine_special_cpp_masterZBuffer_FUN_00532c70(0);
    }
    iVar1 = 0;
    if (0 < (int)param_1->max_distance) {
      do {
        iVar1 = iVar1 + 1;
        _memcpy(*(int *)(param_1->camera_name + 0xfc) << 2);
      } while (iVar1 < (int)param_1->max_distance);
    }
  }
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70();
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00440270(param_1);
  return;
}

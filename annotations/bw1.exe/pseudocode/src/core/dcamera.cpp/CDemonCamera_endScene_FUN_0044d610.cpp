// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610
// Address: 0044d610
// Address Range: [[0044d610, 0044d6f1]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(CDemonCamera *this_ptr,int skip_zbuffer_copy)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(CDemonCamera *this_ptr,int skip_zbuffer_copy)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x11e4 == 0) {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x3f2;
    core_main_c_FUN_005030e0("CDemonCamera::endScene - Scene not open!");
  }
  else {
    *(uint *)&this_ptr->field_0x11e4 = 0;
  }
  if (_DAT_02c83370 != 0) {
    engine_special_cpp_FUN_00582000();
  }
  if ((*(int *)&this_ptr->field_0x168 == 0) && (skip_zbuffer_copy == 0)) {
    if (_DAT_01c50948 != 0) {
      engine_special_cpp_FUN_00582a80(0);
    }
    iVar1 = 0;
    if (0 < *(int *)&this_ptr->field_0x148) {
      do {
        iVar1 = iVar1 + 1;
        _memcpy(*(int *)&this_ptr->field_0x144 << 2);
      } while (iVar1 < *(int *)&this_ptr->field_0x148);
    }
  }
  engine_matrix_c_popViewport_FUN_00483c40();
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044ce90(this_ptr);
  return;
}

// Name: engine_model.c_freeMRGLData_FUN_005280b0
// Address: 005280b0
// MANUAL RECONSTRUCTION
// Address Range: [[005280b0, 0052813d]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended *mrgl_data)

#include "nocturne.h"

void __cdecl engine_model_c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended *mrgl_data)

{
  int iVar1;
  int *children;

  if (mrgl_data != (SMRGLHeaderExtended *)0x0) {
    iVar1 = (mrgl_data->base).type;
    if (iVar1 == 0x20) {
      engine_model_c_freeMRGLData_FUN_005280b0((SMRGLHeaderExtended *)mrgl_data[1].child_count);
      iVar1 = 0;
      if (0 < mrgl_data->child_count) {
        children = (int *)((char *)mrgl_data + 0x118);
        do {
          engine_model_c_freeMRGLData_FUN_005280b0((SMRGLHeaderExtended *)children[iVar1]);
          iVar1 = iVar1 + 1;
        } while (iVar1 < mrgl_data->child_count);
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(mrgl_data,"..\\engine\\model.c",307);
      return;
    }
    if (iVar1 != 0x26) {
      shape_memdbg_cpp_debugFree_FUN_0050f460(mrgl_data,"..\\engine\\model.c",316);
      return;
    }
    engine_boss_c_modelStructNotSupported3_FUN_0041dbb0(mrgl_data);
  }
  return;
}

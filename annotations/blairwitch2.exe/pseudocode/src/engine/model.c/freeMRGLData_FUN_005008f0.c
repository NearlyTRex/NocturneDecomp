// Name: engine_model.c_freeMRGLData_FUN_005008f0
// Address: 005008f0
// Address Range: [[005008f0, 00500969]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_freeMRGLData_FUN_005008f0(SMRGLHeaderExtended *mrgl_data)

#include "nocturne.h"

void __cdecl engine_model_c_freeMRGLData_FUN_005008f0(SMRGLHeaderExtended *mrgl_data)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (mrgl_data != (SMRGLHeaderExtended *)0x0) {
    iVar1 = (mrgl_data->base).type;
    if (iVar1 == 0x20) {
      engine_model_c_freeMRGLData_FUN_005008f0((SMRGLHeaderExtended *)mrgl_data[1].child_count);
      iVar1 = 0;
      pSVar2 = mrgl_data;
      if (0 < mrgl_data->child_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_model_c_freeMRGLData_FUN_005008f0((SMRGLHeaderExtended *)pSVar2[0x17].base.count);
          pSVar2 = (SMRGLHeaderExtended *)&(pSVar2->base).count;
        } while (iVar1 < mrgl_data->child_count);
      }
      debugFree(mrgl_data);
      return;
    }
    if (iVar1 != 0x26) {
      debugFree(mrgl_data);
      return;
    }
    engine_boss_c_modelStructNotSupported3_FUN_0041a4e0(mrgl_data);
  }
  return;
}

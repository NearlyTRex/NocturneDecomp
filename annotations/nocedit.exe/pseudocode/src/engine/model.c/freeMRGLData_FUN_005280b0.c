// Name: engine_model.c_freeMRGLData_FUN_005280b0
// Address: 005280b0
// Address Range: [[005280b0, 0052813d]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended *modelStruct)

#include "nocturne.h"

void __cdecl engine_model_c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended *modelStruct)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (modelStruct != (SMRGLHeaderExtended *)0x0) {
    iVar1 = (modelStruct->base).type;
    if (iVar1 == 0x20) {
      engine_model_c_freeMRGLData_FUN_005280b0((SMRGLHeaderExtended *)modelStruct[1].child_count);
      iVar1 = 0;
      pSVar2 = modelStruct;
      if (0 < modelStruct->child_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_model_c_freeMRGLData_FUN_005280b0((SMRGLHeaderExtended *)pSVar2[0x17].base.count);
          pSVar2 = (SMRGLHeaderExtended *)&(pSVar2->base).count;
        } while (iVar1 < modelStruct->child_count);
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(modelStruct,"..\\engine\\model.c",0x133);
      return;
    }
    if (iVar1 != 0x26) {
      shape_memdbg_cpp_debugFree_FUN_0050f460(modelStruct,"..\\engine\\model.c",0x13c);
      return;
    }
    engine_boss_c_modelStructNotSupported_FUN_0041dbb0(modelStruct);
  }
  return;
}

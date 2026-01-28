// Name: shape_meshlod.cpp_testLodGeneration_FUN_0051ed60
// Address: 0051ed60
// Address Range: [[0051ed60, 0051edc7]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_testLodGeneration_FUN_0051ed60(void)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_testLodGeneration_FUN_0051ed60(void)

{
  CLodMesh local_74;
  
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(0x280,0x1e0,0x20);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(&local_74);
  shape_design_c_loadModelFile_FUN_00458ac0("hsw737.mdl");
  shape_meshlod_cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(&local_74);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520(&local_74,1,0);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_74);
  return;
}

// Name: shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
// Address: 00516f50
// MANUAL RECONSTRUCTION
// Address Range: [[00516f50, 00516ff5]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh *this_ptr)

{
  CLodMesh *this_ptr_00;
  CLodMesh *pCVar1;
  
  g_CurrentDebugLine = 0x55f;
  g_CurrentDebugFilename = "..\\shape\\meshlod.cpp";
  if (this_ptr->next_lod != (CLodMesh *)0x0) {
    pCVar1 = shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(this_ptr->next_lod,0);
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar1);
  }
  this_ptr_00 = (CLodMesh *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                          (sizeof(CLodMesh),"..\\shape\\meshlod.cpp",1376);
  pCVar1 = (CLodMesh *)0x0;
  if (this_ptr_00 != (CLodMesh *)0x0) {
    pCVar1 = shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(this_ptr_00);
  }
  this_ptr->next_lod = pCVar1;
  if (pCVar1 != (CLodMesh *)0x0) {
    shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(this_ptr->next_lod,this_ptr);
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 1377;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(this_ptr->next_lod,this_ptr);
  return;
}

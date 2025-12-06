// Name: shape_meshlod.cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720
// Address: 0051b720
// Address Range: [[0051b720, 0051b760]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720(CLodMesh * this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720(CLodMesh *this_ptr)

{
  FILE *file_handle;
  int iVar1;
  
  file_handle = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(this_ptr,"rt");
  if (file_handle == (FILE *)0x0) {
    return 0;
  }
  iVar1 = shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\shape\\meshlod.cpp",0x121e);
  return iVar1;
}

// Name: shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0
// Address: 0051b6f0
// Address Range: [[0051b6f0, 0051b71f]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0(CLodMesh *this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0(CLodMesh *this_ptr)

{
  _FILE *file_ptr;
  
  file_ptr = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(this_ptr,"rt");
  if (file_ptr == (_FILE *)0x0) {
    return 0;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\meshlod.cpp",0x1210);
  return 1;
}

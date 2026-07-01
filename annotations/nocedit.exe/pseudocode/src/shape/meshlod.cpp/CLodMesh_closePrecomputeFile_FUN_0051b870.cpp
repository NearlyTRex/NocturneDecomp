// Name: shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
// Address: 0051b870
// Address Range: [[0051b870, 0051b899]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh *this_ptr)

{
  if (this_ptr->precompute_file == (_FILE *)0x0) {
    return;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0
            (this_ptr->precompute_file,"..\\shape\\meshlod.cpp",4670);
  this_ptr->precompute_file = (_FILE *)0x0;
  return;
}

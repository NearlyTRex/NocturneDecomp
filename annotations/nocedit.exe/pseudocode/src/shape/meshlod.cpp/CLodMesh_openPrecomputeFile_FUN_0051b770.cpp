// Name: shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
// Address: 0051b770
// Address Range: [[0051b770, 0051b860]]
// Convention: __cdecl
// Signature: _FILE * __cdecl shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh *this_ptr,char *mode)

#include "nocturne.h"

_FILE * __cdecl shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh *this_ptr,char *mode)

{
  _FILE *p_Var1;
  char local_514 [260];
  char local_410 [256];
  char local_310 [256];
  char local_210 [256];
  char local_110 [256];
  uint local_10;
  char local_c [4];
  
  splitpath(g_MeshLodIdentifier,local_c,local_110,local_310,local_210);
  makepath(local_410,(char *)0x0,local_110,local_310,local_210);
  local_10 = 0;
  shape_meshlod_cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0(this_ptr,&local_10);
  _sprintf(local_310,"%08X",local_10);
  makepath(local_514,local_c,local_410,local_310,"lod");
  p_Var1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_514,(char *)0x0,mode,"..\\shape\\meshlod.cpp",4665);
  return p_Var1;
}

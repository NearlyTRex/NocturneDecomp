// Name: shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
// Address: 0051b770
// Address Range: [[0051b770, 0051b860]]
// Convention: __cdecl
// Signature: FILE * shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh * this_ptr, char * mode)

#include "nocturne.h"

FILE * __cdecl
shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh *this_ptr,char *mode)

{
  FILE *pFVar1;
  char local_514 [260];
  char local_410 [256];
  char local_310 [256];
  char local_210 [256];
  char local_110 [256];
  uint local_10;
  char local_c [4];
  
  crt_string_c_splitpath_FUN_005ff178("meshlod",local_c,local_110,local_310,local_210);
  crt_file_c_makepath_FUN_005febfc(local_410,(char *)0x0,local_110,local_310,local_210);
  local_10 = 0;
  shape_meshlod_cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0(this_ptr,&local_10);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_310,"%08X",local_10);
  crt_file_c_makepath_FUN_005febfc(local_514,local_c,local_410,local_310,"lod");
  pFVar1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_514,(char *)0x0,mode,"..\\shape\\meshlod.cpp",0x1239);
  return pFVar1;
}

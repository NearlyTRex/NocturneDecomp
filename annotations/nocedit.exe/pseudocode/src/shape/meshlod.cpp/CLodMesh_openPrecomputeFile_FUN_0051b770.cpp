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
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  CLodMesh *in_stack_0000000c;
  char *in_stack_0000001c;
  char acStack_500 [244];
  char acStack_40c [12];
  char acStack_400 [240];
  char local_310 [4];
  char acStack_30c [8];
  char acStack_304 [4];
  char acStack_300 [240];
  char local_210 [4];
  char acStack_20c [252];
  char local_110 [4];
  char acStack_10c [256];
  char local_c [4];
  
  crt_string_c_splitpath_FUN_005ff178("meshlod",local_c,local_110,local_310,local_210);
  crt_file_c_makepath_FUN_005febfc(acStack_40c,(char *)0x0,acStack_10c,acStack_30c,acStack_20c);
  shape_meshlod_cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0
            (in_stack_0000000c,(uint *)&stack0xfffffff8);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_304,"%08X",unaff_EBX);
  crt_file_c_makepath_FUN_005febfc
            (&stack0xfffffafc,(char *)&this_ptr,acStack_400,acStack_300,"lod");
  pFVar1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_500,(char *)0x0,in_stack_0000001c,"..\\shape\\meshlod.cpp",0x1239)
  ;
  return pFVar1;
}

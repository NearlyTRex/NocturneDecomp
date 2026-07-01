// Name: core_skeledit.cpp_saveIni_FUN_00589a40
// Address: 00589a40
// Address Range: [[00589a40, 00589b06]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_saveIni_FUN_00589a40(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_saveIni_FUN_00589a40(void)

{
  _FILE *file;
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("skeledit.ini",(char *)0x0,"wt","..\\core\\skeledit.cpp",
                    324);
  if (file == (_FILE *)0x0) {
    return;
  }
  _fprintf(file,"// version\n");
  _fprintf(file,"%d\n",1);
  _fprintf(file,"// lastPOSimported\n");
  _fprintf(file,"\"%s\"\n",g_SkeleditLastPOSImported);
  _fprintf(file,"// lastMOTimported\n");
  _fprintf(file,"\"%s\"\n",g_SkeleditLastMOTImported);
  _fprintf(file,"// lastTestSkeletonDir\n");
  _fprintf(file,"\"%s\"\n",g_SkeleditLastTestSkeletonDir);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",340);
  return;
}

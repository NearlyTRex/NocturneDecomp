// Name: core_skeledit.cpp_FUN_00589a40
// Address: 00589a40
// Address Range: [[00589a40, 00589b06]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_00589a40(undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX)

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589a40(uint param_1,uint param_2,uint unaff_EBX)

{
  _FILE *file;
  
  __STK(0x1c);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("skeledit.ini",(char *)0x0,"wt","..\\core\\skeledit.cpp",
                    0x144);
  if (file == (_FILE *)0x0) {
    return;
  }
  _fprintf(file,"// version\n",unaff_EBX);
  _fprintf(file,"%d\n",1);
  _fprintf(file,"// lastPOSimported\n");
  _fprintf(file,"\"%s\"\n",&DAT_03670848);
  _fprintf(file,"// lastMOTimported\n");
  _fprintf(file,"\"%s\"\n",&DAT_03670950);
  _fprintf(file,"// lastTestSkeletonDir\n");
  _fprintf(file,"\"%s\"\n",&DAT_03670a58);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x154);
  return;
}

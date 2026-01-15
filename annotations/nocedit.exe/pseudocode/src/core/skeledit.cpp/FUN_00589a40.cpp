// Name: core_skeledit.cpp_FUN_00589a40
// Address: 00589a40
// Address Range: [[00589a40, 00589b06]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589a40()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589a40(uint param_1,uint param_2,uint unaff_EBX)

{
  FILE *file;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("skeledit.ini",(char *)0x0,"wt","..\\core\\skeledit.cpp",
                    0x144);
  if (file == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// version\n",unaff_EBX);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",1);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// lastPOSimported\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"\"%s\"\n",&DAT_03670848);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// lastMOTimported\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"\"%s\"\n",&DAT_03670950);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// lastTestSkeletonDir\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"\"%s\"\n",&DAT_03670a58);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x154);
  return;
}

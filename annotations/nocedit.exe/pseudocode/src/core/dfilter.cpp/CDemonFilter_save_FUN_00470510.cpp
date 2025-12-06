// Name: core_dfilter.cpp_CDemonFilter_save_FUN_00470510
// Address: 00470510
// Address Range: [[00470510, 0047059a]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CDemonFilter_save_FUN_00470510(CDemonFilter * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_save_FUN_00470510(CDemonFilter *this_ptr,char *filename)

{
  FILE *file;
  int iVar1;
  
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"wb");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xeb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::save - Bad filename");
  }
  for (iVar1 = 0; iVar1 < this_ptr->size * this_ptr->count; iVar1 = iVar1 + 1) {
    crt_stdio_c_fputc_FUN_006007a0((uint)*(byte *)(iVar1 + (int)this_ptr->data_buffer) << 2,file);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dfilter.cpp",0xf5);
  return;
}

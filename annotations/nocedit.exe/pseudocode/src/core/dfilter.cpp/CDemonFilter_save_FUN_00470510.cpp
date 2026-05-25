// Name: core_dfilter.cpp_CDemonFilter_save_FUN_00470510
// Address: 00470510
// Address Range: [[00470510, 0047059a]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_save_FUN_00470510(CDemonFilter *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_save_FUN_00470510(CDemonFilter *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  
  file = engine_dosio_cpp_getFile_FUN_00481a50("art",filename,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xeb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::save - Bad filename");
  }
  for (iVar1 = 0; iVar1 < this_ptr->size * this_ptr->count; iVar1 = iVar1 + 1) {
    _fputc((uint)this_ptr->data_buffer[iVar1] << 2,file);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dfilter.cpp",0xf5);
  return;
}

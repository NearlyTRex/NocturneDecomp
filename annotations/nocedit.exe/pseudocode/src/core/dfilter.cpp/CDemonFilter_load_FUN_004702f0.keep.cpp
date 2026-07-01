// Name: core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
// Address: 004702f0
// MANUAL RECONSTRUCTION
// Address Range: [[004702f0, 00470500]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter *this_ptr,char *filename)

{
  _FILE *p_Var2;
  int iVar3;
  _FILE *file;
  int iVar4;
  
  p_Var2 = engine_dosio_cpp_getFile_FUN_00481a50("art",filename,"rb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 171;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filename : %s",filename);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\dfilter.cpp",173);
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00481880("art",filename);
  this_ptr->size = (int)ROUND(ROUND(SQRT((float10)iVar3)));
  this_ptr->count = iVar3 / this_ptr->size;
  if (this_ptr->size != this_ptr->count) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 183;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonFilter::load - Non-square filter %dx%d",this_ptr->size,this_ptr->count);
  }
  if ((this_ptr->size < 0x40) || (0x100 < this_ptr->size)) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 185;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filter size %d",this_ptr->size)
    ;
  }
  if ((this_ptr->count < 0x40) || (0x100 < this_ptr->count)) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 188;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonFilter::load - Bad filter size %d",this_ptr->count);
  }
  core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(this_ptr);
  file = engine_dosio_cpp_getFile_FUN_00481a50("art",filename,"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 198;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filename");
  }
  _fread(this_ptr->data_buffer,this_ptr->size,this_ptr->count,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dfilter.cpp",206);
  for (iVar4 = 0; iVar4 < this_ptr->size * this_ptr->count; iVar4 = iVar4 + 1) {
    this_ptr->data_buffer[iVar4] = (uchar)((int)(uint)this_ptr->data_buffer[iVar4] >> 2);
  }
  strcpy(this_ptr->name, filename);
  return;
}

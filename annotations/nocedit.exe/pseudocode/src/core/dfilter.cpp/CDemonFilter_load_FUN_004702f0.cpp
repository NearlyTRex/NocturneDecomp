// Name: core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
// Address: 004702f0
// Address Range: [[004702f0, 00470500]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter *this_ptr,char *filename)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  char *pcVar4;
  double dVar5;
  uint uVar6;
  
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xab;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filename : %s",filename);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\dfilter.cpp",0xad);
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880("art",filename);
  uVar6 = 0x47034c;
  dVar5 = round(SQRT((double)iVar3));
  this_ptr->size = (int)ROUND(dVar5);
  this_ptr->count = iVar3 / this_ptr->size;
  if (this_ptr->size != this_ptr->count) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xb7;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonFilter::load - Non-square filter %dx%d",this_ptr->size,this_ptr->count,uVar6);
  }
  if ((this_ptr->size < 0x40) || (0x100 < this_ptr->size)) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xb9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filter size %d",this_ptr->size)
    ;
  }
  if ((this_ptr->count < 0x40) || (0x100 < this_ptr->count)) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xbc;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonFilter::load - Bad filter size %d",this_ptr->count);
  }
  core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(this_ptr);
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xc6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filename");
  }
  _fread(this_ptr->data_buffer,this_ptr->size,this_ptr->count,p_Var2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\dfilter.cpp",0xce);
  for (iVar3 = 0; iVar3 < this_ptr->size * this_ptr->count; iVar3 = iVar3 + 1) {
    *(char *)(iVar3 + (int)this_ptr->data_buffer) =
         (char)((int)(uint)*(byte *)(iVar3 + (int)this_ptr->data_buffer) >> 2);
  }
  pcVar4 = this_ptr->name;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}

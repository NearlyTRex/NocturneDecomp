// Name: core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90
// Address: 0044bf90
// Address Range: [[0044bf90, 0044c18c]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_0044bf90(CDemonFilter *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_0044bf90(CDemonFilter *this_ptr,char *filename)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  char *pcVar4;
  double dVar5;
  uint uVar6;
  
  p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60("art",filename,"rb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 171;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonFilter::load - Bad filename : %s",filename);
  }
  _fclose(p_Var2);
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",filename);
  uVar6 = 0x44bfe2;
  dVar5 = round(SQRT((double)iVar3));
  this_ptr->size = (int)ROUND(dVar5);
  this_ptr->count = iVar3 / this_ptr->size;
  if (this_ptr->size != this_ptr->count) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 183;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("CDemonFilter::load - Non-square filter %dx%d",this_ptr->size,this_ptr->count,uVar6);
  }
  if ((this_ptr->size < 0x40) || (0x100 < this_ptr->size)) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 185;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonFilter::load - Bad filter size %d",this_ptr->size)
    ;
  }
  if ((this_ptr->count < 0x40) || (0x100 < this_ptr->count)) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 188;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("CDemonFilter::load - Bad filter size %d",this_ptr->count);
  }
  core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0044bf20(this_ptr);
  p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60("art",filename,"rb");
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 198;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonFilter::load - Bad filename");
  }
  _fread(this_ptr->data_buffer,this_ptr->size,this_ptr->count,p_Var2);
  _fclose(p_Var2);
  for (iVar3 = 0; iVar3 < this_ptr->size * this_ptr->count; iVar3 = iVar3 + 1) {
    this_ptr->data_buffer[iVar3] = (uchar)((int)(uint)this_ptr->data_buffer[iVar3] >> 2);
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

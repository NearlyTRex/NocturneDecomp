// Name: core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
// Address: 0059b8d0
// Address Range: [[0059b8d0, 0059b960]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel *this_ptr,char *filename)

{
  char cVar1;
  FILE *file_handle;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = this_ptr->model_filename;
  pcVar2 = filename;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  file_handle = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rt");
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x4b2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\skeleton.cpp",0x4b4);
  return;
}

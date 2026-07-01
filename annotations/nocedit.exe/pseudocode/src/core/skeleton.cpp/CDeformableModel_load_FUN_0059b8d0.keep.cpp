// Name: core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
// Address: 0059b8d0
// MANUAL RECONSTRUCTION
// Address Range: [[0059b8d0, 0059b960]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel *this_ptr,char *filename)

{
  _FILE *file_handle;

  strcpy(this_ptr->model_filename,filename);
  file_handle = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 1202;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\skeleton.cpp",1204);
  return;
}

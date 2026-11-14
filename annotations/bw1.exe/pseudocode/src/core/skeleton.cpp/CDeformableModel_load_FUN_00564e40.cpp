// Name: core_skeleton.cpp_CDeformableModel_load_FUN_00564e40
// Address: 00564e40
// Address Range: [[00564e40, 00564ec0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_00564e40(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_00564e40(CDeformableModel *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file_handle;
  char *pcVar2;
  
  file_handle = engine_dosio_cpp_FUN_00479180("models",filename,&DAT_005f2011);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x4ca;
    core_main_c_FUN_005030e0("CDeformableModel::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CDeformableModel_loadStream_FUN_00564ed0(this_ptr,file_handle);
  pcVar2 = this_ptr->model_filename;
  do {
    cVar1 = *filename;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  _fclose(file_handle);
  return;
}

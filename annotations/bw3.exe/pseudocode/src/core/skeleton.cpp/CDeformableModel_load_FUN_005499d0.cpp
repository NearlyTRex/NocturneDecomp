// Name: core_skeleton.cpp_CDeformableModel_load_FUN_005499d0
// Address: 005499d0
// Address Range: [[005499d0, 00549a50]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_005499d0(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_005499d0(CDeformableModel *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file_handle;
  char *pcVar2;
  
  file_handle = engine_dosio_cpp_FUN_004659c0("models",filename,&DAT_005d1b14);
  if (file_handle == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x4c1;
    core_main_c_FUN_004e4330("CDeformableModel::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CDeformableModel_loadStream_FUN_00549a60(this_ptr,file_handle);
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

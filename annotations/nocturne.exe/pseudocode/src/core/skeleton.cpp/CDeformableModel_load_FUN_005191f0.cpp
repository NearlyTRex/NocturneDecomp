// Name: core_skeleton.cpp_CDeformableModel_load_FUN_005191f0
// Address: 005191f0
// Address Range: [[005191f0, 00519276]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_005191f0(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_005191f0(CDeformableModel *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file_handle;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = this_ptr->texture_sets[1].textures[0x44].textures[0].texture_name + 8;
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
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("models",filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x4b2;
    core_main_c_FUN_004c8440("CDeformableModel::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(this_ptr,file_handle);
  _fclose(file_handle);
  return;
}

// Name: core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
// Address: 00476db0
// MANUAL RECONSTRUCTION
// Address Range: [[00476db0, 00476f16]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel *this_ptr,char *filename)

{
  _FILE *file;
  int iVar2;

  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  file = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xb8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open keyframed model %s",filename);
  }
  strcpy(this_ptr->model_filename,filename);
  iVar2 = _fgetc(file);
  _ungetc(iVar2,file);
  if (iVar2 == 0x2f) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dmodel.cpp",0xc3);
    file = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"rt");
    if (file == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0xc5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open keyframed model %s",filename);
    }
    core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00477110(this_ptr,file);
  }
  else {
    core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(this_ptr,file);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dmodel.cpp",0xcd);
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  iVar2 = 0;
  if (0 < this_ptr->texture_count) {
    do {
      this_ptr->texture_list[iVar2].textures[0].base.count = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
  return;
}

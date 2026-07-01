// Name: core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
// Address: 0047ee30
// MANUAL RECONSTRUCTION
// Address Range: [[0047ee30, 0047eeed]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_writeModelDependencies_FUN_0047ee30(_FILE *dependency_file,char *model_filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_writeModelDependencies_FUN_0047ee30(_FILE *dependency_file,char *model_filename)

{
  CKeyFramedModel *this_ptr;
  CKeyFramedModel *pCVar1;
  
  _fprintf(dependency_file,"models\\%s\n",model_filename);
  this_ptr = (CKeyFramedModel *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                       (sizeof(CKeyFramedModel),"..\\core\\dmodel.cpp",0xe8a);
  pCVar1 = (CKeyFramedModel *)0x0;
  if (this_ptr != (CKeyFramedModel *)0x0) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(this_ptr);
  }
  if (pCVar1 == (CKeyFramedModel *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xe8b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
  }
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(pCVar1,model_filename);
  core_dmodel_cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(pCVar1,dependency_file,0);
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0xe8e;
  if (pCVar1 == (CKeyFramedModel *)0x0) {
    return;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(pCVar1,0);
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar1);
  return;
}

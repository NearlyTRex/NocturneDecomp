// Name: core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
// Address: 0047ee30
// Address Range: [[0047ee30, 0047eeed]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_writeModelDependencies_FUN_0047ee30(FILE * dependency_file, char * model_filename)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_writeModelDependencies_FUN_0047ee30(FILE *dependency_file,char *model_filename)

{
  CKeyFramedModel *pCVar1;
  FILE *in_stack_00000014;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(dependency_file,"models\\%s\n",model_filename);
  pCVar1 = (CKeyFramedModel *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x56d8,"..\\core\\dmodel.cpp",0xe8a);
  if (pCVar1 != (CKeyFramedModel *)0x0) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(pCVar1);
  }
  if (pCVar1 == (CKeyFramedModel *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xe8b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
  }
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(pCVar1,(char *)in_stack_00000014);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(pCVar1,in_stack_00000014,0);
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0xe8e;
  if (pCVar1 == (CKeyFramedModel *)0x0) {
    return;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(pCVar1);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  return;
}

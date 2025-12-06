// Name: core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0
// Address: 0057a0c0
// Address Range: [[0057a0c0, 0057a26f]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_ExportSomething_FUN_0057a0c0(CDemonSet *this_ptr)

{
  FILE *file;
  int iVar1;
  C3DSCamera *this_ptr_00;
  BADSPACEBASE *in_ESP;
  C3DSLight *this_ptr_01;
  char local_110 [4];
  char acStack_10c [252];
  
  engine_dosio_c_splitPath_FUN_00481f20
            (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffdf0,(char *)0x0,(char *)0x0,acStack_10c,"lc");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Exporting lights and cameras to %s");
  file = engine_dosio_c_getFile_FUN_00481a50("models",&stack0xfffffdf8,"wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x659;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create models\\%s");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"1\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// lightCount,cameraCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// light list\n");
  if (0 < this_ptr->light_count) {
    this_ptr_01 = this_ptr->lights;
    do {
      iVar1 = iVar1 + 1;
      core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(this_ptr_01,file);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < this_ptr->light_count);
  }
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// camera list\n");
  if (0 < this_ptr->camera_count) {
    this_ptr_00 = this_ptr->cameras;
    do {
      iVar1 = iVar1 + 1;
      core_setutil_cpp_C3DSCamera_exportS3D_FUN_00586190(this_ptr_00,file);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar1 < this_ptr->camera_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x672);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Exported %s OK.");
  return;
}

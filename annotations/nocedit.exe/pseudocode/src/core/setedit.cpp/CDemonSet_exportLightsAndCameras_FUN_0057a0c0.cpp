// Name: core_setedit.cpp_CDemonSet_exportLightsAndCameras_FUN_0057a0c0
// Address: 0057a0c0
// Address Range: [[0057a0c0, 0057a26f]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_exportLightsAndCameras_FUN_0057a0c0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_exportLightsAndCameras_FUN_0057a0c0(CDemonSet *this_ptr)

{
  _FILE *file;
  int iVar1;
  C3DSCamera *this_ptr_00;
  C3DSLight *this_ptr_01;
  char local_214 [260];
  char local_110 [256];
  
  engine_dosio_c_splitPath_FUN_00481f20
            (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50(local_214,(char *)0x0,(char *)0x0,local_110,"lc");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Exporting lights and cameras to %s");
  file = engine_dosio_c_getFile_FUN_00481a50("models",local_214,"wt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x659;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create models\\%s",local_214);
  }
  _fprintf(file,"// version\n");
  _fprintf(file,"1\n");
  _fprintf(file,"// lightCount,cameraCount\n");
  _fprintf(file,"%d,%d\n",this_ptr->light_count,this_ptr->camera_count)
  ;
  iVar1 = 0;
  _fprintf(file,"// light list\n");
  if (0 < this_ptr->light_count) {
    this_ptr_01 = this_ptr->lights;
    do {
      iVar1 = iVar1 + 1;
      core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(this_ptr_01,file);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < this_ptr->light_count);
  }
  iVar1 = 0;
  _fprintf(file,"// camera list\n");
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

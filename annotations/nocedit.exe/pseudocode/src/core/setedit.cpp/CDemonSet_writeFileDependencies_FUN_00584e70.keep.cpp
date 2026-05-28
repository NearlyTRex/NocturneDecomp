// Name: core_setedit.cpp_CDemonSet_writeFileDependencies_FUN_00584e70
// Address: 00584e70
// MANUAL RECONSTRUCTION
// Address Range: [[00584e70, 00585197]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_writeFileDependencies_FUN_00584e70(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_writeFileDependencies_FUN_00584e70(CDemonSet *this_ptr,_FILE *file_handle)

{
  _FILE *file_ptr;
  C3DSCamera *pCVar2;
  char *pcVar5;
  char *pcVar6;
  char local_218 [256];
  char local_118 [256];
  int local_14;
  
  _fprintf(file_handle,"data\\%s\n",this_ptr->geometry_filename);
  if (this_ptr->use_enviro_model != 0) {
    core_dmodel_cpp_writeModelDependencies_FUN_0047ee30(file_handle,this_ptr->enviro_model_name);
  }
  core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,1);
  strcpy(local_118,this_ptr->geometry_filename);
  pcVar5 = strchr(local_118,'.');
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x1756;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to find ext in geomName");
  }
  _sprintf(pcVar5,".zth");
  _fprintf(file_handle,"data\\%s\n",local_118);
  _sprintf(pcVar5,".thm");
  _fprintf(file_handle,"data\\%s\n",local_118);
  local_14 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar2 = this_ptr->cameras;
    do {
      if (pCVar2->is_panning == 0) {
        _sprintf(local_118,"%s.raw",pCVar2->name);
        file_ptr = engine_dosio_cpp_getFile_FUN_00481a50("backdrop",local_118,"rb");
        if (file_ptr == (_FILE *)0x0) {
          strcpy(local_218,"art");
        }
        else {
          strcpy(local_218,"backdrop");
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x177e);
        }
        _fprintf(file_handle,"%s\\%s.raw\n",local_218,pCVar2->name);
        _fprintf(file_handle,"%s\\%s.act\n",local_218,pCVar2->name);
        pcVar6 = "backdrop\\%s.fog\n";
      }
      else {
        _fprintf(file_handle,"backdrop\\%sn.raw\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%sn.act\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%ss.raw\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%ss.act\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%se.raw\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%se.act\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%sw.raw\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%sw.act\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%su.raw\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%su.act\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%sd.raw\n",pCVar2->name);
        _fprintf(file_handle,"backdrop\\%sd.act\n",pCVar2->name);
        pcVar6 = "backdrop\\%s.cm\n";
      }
      _fprintf(file_handle,pcVar6,pCVar2->name);
      pCVar2 = pCVar2 + 1;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->camera_count);
  }
  return;
}

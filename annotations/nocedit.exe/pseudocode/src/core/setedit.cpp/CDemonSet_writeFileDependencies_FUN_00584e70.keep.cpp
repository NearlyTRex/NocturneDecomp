// Name: core_setedit.cpp_CDemonSet_writeFileDependencies_FUN_00584e70
// Address: 00584e70
// MANUAL RECONSTRUCTION
// Address Range: [[00584e70, 00585197]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_writeFileDependencies_FUN_00584e70(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_writeFileDependencies_FUN_00584e70(CDemonSet *this_ptr,_FILE *file_handle)

{
  char cVar2;
  _FILE *file_ptr;
  C3DSCamera *pCVar2;
  char *pcVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar4;
  char local_218 [256];
  char local_118 [256];
  CDemonSet *local_18;
  int local_14;
  char cVar1;
  
  _fprintf(file_handle,"data\\%s\n",this_ptr->geometry_filename);
  if (this_ptr->use_enviro_model != 0) {
    core_dmodel_cpp_writeModelDependencies_FUN_0047ee30(file_handle,this_ptr->enviro_model_name);
  }
  pcVar4 = local_118;
  core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,1);
  pcVar3 = this_ptr->geometry_filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pcVar6 = local_118;
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_00584f0b;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_00584f0b;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00584f0b:
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
    local_18 = this_ptr;
    do {
      if (local_18->cameras[0].is_panning == 0) {
        _sprintf(local_118,"%s.raw",pCVar2->name);
        file_ptr = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_118,"rb");
        if (file_ptr == (_FILE *)0x0) {
          pcVar5 = "art";
          pcVar6 = local_218;
          do {
            cVar2 = *pcVar5;
            *pcVar6 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar6[1] = cVar2;
            pcVar6 = pcVar6 + 2;
          } while (cVar2 != '\0');
        }
        else {
          pcVar5 = "backdrop";
          pcVar6 = local_218;
          do {
            cVar2 = *pcVar5;
            *pcVar6 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar6[1] = cVar2;
            pcVar6 = pcVar6 + 2;
          } while (cVar2 != '\0');
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
      local_18 = (CDemonSet *)&local_18->cameras[0].enabled;
      pCVar2 = pCVar2 + 1;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->camera_count);
  }
  return;
}

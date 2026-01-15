// Name: core_setedit.cpp_CDemonSet_FUN_00584e70
// Address: 00584e70
// Address Range: [[00584e70, 00585197]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_FUN_00584e70(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_00584e70(CDemonSet *this_ptr)

{
  char cVar1;
  FILE *file_ptr;
  C3DSCamera *pCVar2;
  char *pcVar3;
  char *pcVar4;
  FILE *in_stack_00000008;
  char local_218 [256];
  char local_118 [256];
  CDemonSet *local_18;
  int local_14;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",this_ptr->geometry_filename);
  if (this_ptr->use_enviro_model != 0) {
    core_dmodel_cpp_writeModelDependencies_FUN_0047ee30
              (in_stack_00000008,this_ptr->enviro_model_name);
  }
  pcVar4 = local_118;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
  pcVar3 = this_ptr->geometry_filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = local_118;
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00584f0b;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_00584f0b;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00584f0b:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x1756;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to find ext in geomName");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,".zth");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",local_118);
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,".thm");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",local_118);
  local_14 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar2 = this_ptr->cameras;
    local_18 = this_ptr;
    do {
      if (local_18->cameras[0].is_panning == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_118,"%s.raw",pCVar2);
        file_ptr = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_118,"rb");
        if (file_ptr == (FILE *)0x0) {
          pcVar4 = "art";
          pcVar3 = local_218;
          do {
            cVar1 = *pcVar4;
            *pcVar3 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar3[1] = cVar1;
            pcVar3 = pcVar3 + 2;
          } while (cVar1 != '\0');
        }
        else {
          pcVar4 = "backdrop";
          pcVar3 = local_218;
          do {
            cVar1 = *pcVar4;
            *pcVar3 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar3[1] = cVar1;
            pcVar3 = pcVar3 + 2;
          } while (cVar1 != '\0');
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x177e);
        }
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%s\\%s.raw\n",local_218,pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%s\\%s.act\n",local_218,pCVar2);
        pcVar3 = "backdrop\\%s.fog\n";
      }
      else {
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sn.raw\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sn.act\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%ss.raw\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%ss.act\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%se.raw\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%se.act\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sw.raw\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sw.act\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%su.raw\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%su.act\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sd.raw\n",pCVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sd.act\n",pCVar2);
        pcVar3 = "backdrop\\%s.cm\n";
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,pcVar3,pCVar2);
      local_18 = (CDemonSet *)&local_18->cameras[0].field17_0x1a0;
      pCVar2 = pCVar2 + 1;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->camera_count);
  }
  return;
}

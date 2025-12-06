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
  int *piVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  FILE *in_stack_00000008;
  CDemonSet *in_stack_0000000c;
  int *in_stack_00000024;
  int in_stack_00000040;
  int *in_stack_00000058;
  int *apiStack_1cc [47];
  char acStack_110 [12];
  byte auStack_104 [8];
  byte auStack_fc [4];
  char acStack_f8 [32];
  char acStack_d8 [200];
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",this_ptr->geometry_filename);
  if (*(int *)&in_stack_00000008[0xc629]._ungotten != 0) {
    core_dmodel_cpp_writeModelDependencies_FUN_0047ee30
              (in_stack_00000008,(char *)(in_stack_00000008 + 0xc62a));
  }
  pcVar4 = acStack_110;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(in_stack_0000000c);
  pcVar3 = in_stack_0000000c->geometry_filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = acStack_110 + 4;
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
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",auStack_104);
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,".thm");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",auStack_fc);
  if (0 < *in_stack_00000024) {
    piVar2 = in_stack_00000024 + 1;
    do {
      if (in_stack_00000024[0x51] == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_f8,"%s.raw",piVar2);
        file_ptr = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_d8,"rb")
        ;
        pcVar3 = &stack0xfffffe30;
        pcVar4 = &stack0xfffffe30;
        if (file_ptr == (FILE *)0x0) {
          pcVar4 = "art";
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
          pcVar3 = "backdrop";
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x177e);
        }
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_00000008,"%s\\%s.raw\n",&stack0xfffffe30,piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%s\\%s.act\n",apiStack_1cc);
        pcVar3 = "backdrop\\%s.fog\n";
      }
      else {
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sn.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sn.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%ss.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%ss.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%se.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%se.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sw.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sw.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%su.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%su.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sd.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sd.act\n");
        pcVar3 = "backdrop\\%s.cm\n";
      }
      apiStack_1cc[0] = piVar2;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,pcVar3);
      piVar2 = piVar2 + 0x69;
      in_stack_00000040 = in_stack_00000040 + 1;
    } while (in_stack_00000040 < *in_stack_00000058);
  }
  return;
}

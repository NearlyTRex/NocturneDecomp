// Name: core_script.cpp_CScript_dbLoad_FUN_005603c0
// Address: 005603c0
// Address Range: [[005603c0, 005606dc]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_dbLoad_FUN_005603c0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_dbLoad(CScript* param_1, uint dbfilename) */

void core_script_cpp_CScript_dbLoad_FUN_005603c0(void)

{
  char cVar1;
  int iVar2;
  FILE *file_handle;
  long lVar3;
  void *pvVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  byte bVar9;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000024;
  uint uStack_324;
  char acStack_2e8 [44];
  char local_2bc [4];
  char acStack_2b8 [4];
  char acStack_2b4 [4];
  char acStack_2b0 [4];
  char acStack_2ac [8];
  byte auStack_2a4 [20];
  char acStack_290 [4];
  char acStack_28c [6];
  byte auStack_286 [426];
  char acStack_dc [4];
  char acStack_d8 [208];
  
  bVar9 = 0;
  *(uint *)(in_stack_00000004 + 0x1c) = 0;
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880("world",in_stack_00000008);
  if (iVar2 < 1) {
    return;
  }
  file_handle = engine_dosio_c_getFile_FUN_00481a50
                          ("world",in_stack_0000000c,"rt");
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xec2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",in_stack_00000010);
  }
  crt_stdio_c_ftell_FUN_00601560(file_handle);
  do {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," ");
    lVar3 = crt_stdio_c_ftell_FUN_00601560(file_handle);
    if ((int)in_stack_0000000c <= lVar3) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\script.cpp",0xf02);
      return;
    }
    iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (file_handle,"%[^,], %[^,], %[^\n]\n",&stack0xfffffce4,auStack_2a4,auStack_286);
    if (iVar2 != 3) {
      uStack_324 = *(uint *)(in_stack_00000004 + 0x1c);
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xed6;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("SCScipt::dbLoad - error parsing %s record %d",in_stack_00000024);
    }
    uStack_324 = 0x5604ba;
    core_script_cpp_FUN_00559360();
    core_script_cpp_FUN_00559360();
    core_script_cpp_FUN_00559360();
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(acStack_290,"stranger");
    if (iVar2 == 0) {
      pcVar5 = "$";
      pcVar7 = acStack_28c;
      do {
        cVar1 = *pcVar5;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    uStack_324 = 0x560534;
    crt_string_c_splitpath_FUN_005ff178
              (&stack0xfffffcfc,(char *)0x0,(char *)0x0,acStack_dc,(char *)0x0);
    pcVar5 = acStack_d8;
    pcVar7 = &stack0xfffffd00;
    do {
      cVar1 = *pcVar5;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    iVar2 = core_script_cpp_FUN_005606e0();
    if (-1 < iVar2) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Warning! Duplicate wav string %s detected in %s");
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_2bc,"%s.wav");
    iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_2b8);
    if (iVar2 < 1) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2b4,"%s.mp3");
      iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_2b0);
      if (iVar2 < 1) {
        pcVar7 = acStack_2e8;
        pcVar5 = acStack_2ac;
        do {
          cVar1 = *pcVar7;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
      }
    }
    iVar2 = *(int *)(in_stack_00000004 + 0x1c) + 1;
    *(int *)(in_stack_00000004 + 0x1c) = iVar2;
    pvVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (*(void **)(in_stack_00000004 + 0x20),iVar2 * 0x226,
                        "..\\core\\script.cpp",0xefa);
    *(void **)(in_stack_00000004 + 0x20) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xefb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCScipt::dbLoad - out of memory");
    }
    puVar6 = &uStack_324;
    puVar8 = (uint *)
             (*(int *)(in_stack_00000004 + 0x20) + (*(int *)(in_stack_00000004 + 0x1c) + -1) * 0x226
             );
    for (iVar2 = 0x89; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    *(ushort *)puVar8 = *(ushort *)puVar6;
  } while( true );
}

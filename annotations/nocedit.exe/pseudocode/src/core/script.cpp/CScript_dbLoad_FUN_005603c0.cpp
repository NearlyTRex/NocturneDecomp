// Name: core_script.cpp_CScript_dbLoad_FUN_005603c0
// Address: 005603c0
// Address Range: [[005603c0, 005606dc]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_dbLoad_FUN_005603c0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_dbLoad(CScript* param_1, uint dbfilename) */

void core_script_cpp_CScript_dbLoad_FUN_005603c0(void)

{
  char cVar1;
  FILE *file_handle;
  long lVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  byte bVar8;
  int in_stack_00000004;
  char *in_stack_00000008;
  char local_334 [60];
  char local_2f8 [60];
  char local_2bc [30];
  byte local_29e [402];
  char local_10c [256];
  int local_c;
  
  bVar8 = 0;
  *(uint *)(in_stack_00000004 + 0x1c) = 0;
  local_c = engine_dosio_c_getFileSize_FUN_00481880("world",in_stack_00000008);
  if (local_c < 1) {
    return;
  }
  file_handle = engine_dosio_c_getFile_FUN_00481a50
                          ("world",in_stack_00000008,"rt");
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xec2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",in_stack_00000008);
  }
  lVar2 = crt_stdio_c_ftell_FUN_00601560(file_handle);
  local_c = local_c + lVar2;
  do {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," ");
    lVar2 = crt_stdio_c_ftell_FUN_00601560(file_handle);
    if (local_c <= lVar2) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\script.cpp",0xf02);
      return;
    }
    iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (file_handle,"%[^,], %[^,], %[^\n]\n",local_334,local_2bc,local_29e);
    if (iVar3 != 3) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xed6;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("SCScipt::dbLoad - error parsing %s record %d",in_stack_00000008,
                 *(uint *)(in_stack_00000004 + 0x1c));
    }
    core_script_cpp_FUN_00559360();
    core_script_cpp_FUN_00559360();
    core_script_cpp_FUN_00559360();
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_2bc,"stranger");
    if (iVar3 == 0) {
      pcVar5 = "$";
      pcVar6 = local_2bc;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    crt_string_c_splitpath_FUN_005ff178(local_334,(char *)0x0,(char *)0x0,local_10c,(char *)0x0);
    pcVar5 = local_10c;
    pcVar6 = local_334;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar3 = core_script_cpp_FUN_005606e0();
    if (-1 < iVar3) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Warning! Duplicate wav string %s detected in %s",local_334,in_stack_00000008);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_2f8,"%s.wav",local_334);
    iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_2f8);
    if (iVar3 < 1) {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_2f8,"%s.mp3",local_334);
      iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_2f8);
      if (iVar3 < 1) {
        pcVar6 = local_334;
        pcVar5 = local_2f8;
        do {
          cVar1 = *pcVar6;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
      }
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x1c) + 1;
    *(int *)(in_stack_00000004 + 0x1c) = iVar3;
    pvVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (*(void **)(in_stack_00000004 + 0x20),iVar3 * 0x226,
                        "..\\core\\script.cpp",0xefa);
    *(void **)(in_stack_00000004 + 0x20) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xefb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCScipt::dbLoad - out of memory");
    }
    pcVar6 = local_334;
    puVar7 = (uint *)
             (*(int *)(in_stack_00000004 + 0x20) + (*(int *)(in_stack_00000004 + 0x1c) + -1) * 0x226
             );
    for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *(uint *)pcVar6;
      pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    *(ushort *)puVar7 = *(ushort *)pcVar6;
  } while( true );
}

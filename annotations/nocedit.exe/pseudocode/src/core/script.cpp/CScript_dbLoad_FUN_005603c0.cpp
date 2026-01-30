// Name: core_script.cpp_CScript_dbLoad_FUN_005603c0
// Address: 005603c0
// Address Range: [[005603c0, 005606dc]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_dbLoad_FUN_005603c0(CScript *this_ptr,char *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_dbLoad_FUN_005603c0(CScript *this_ptr,char *param_2)

{
  char cVar1;
  _FILE *file_handle;
  long lVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  byte bVar8;
  char local_334 [60];
  char local_2f8 [60];
  char local_2bc [30];
  char local_29e [402];
  char local_10c [256];
  int local_c;
  
  bVar8 = 0;
  this_ptr->unk4[4] = '\0';
  this_ptr->unk4[5] = '\0';
  this_ptr->unk4[6] = '\0';
  this_ptr->unk4[7] = '\0';
  local_c = engine_dosio_c_getFileSize_FUN_00481880("world",param_2);
  if (local_c < 1) {
    return;
  }
  file_handle = engine_dosio_c_getFile_FUN_00481a50("world",param_2,"rt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xec2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",param_2);
  }
  lVar2 = _ftell(file_handle);
  local_c = local_c + lVar2;
  do {
    _fscanf(file_handle," ");
    lVar2 = _ftell(file_handle);
    if (local_c <= lVar2) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\script.cpp",0xf02);
      return;
    }
    iVar3 = _fscanf(file_handle,"%[^,], %[^,], %[^\n]\n",local_334,local_2bc,local_29e);
    if (iVar3 != 3) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xed6;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("SCScipt::dbLoad - error parsing %s record %d",param_2,*(uint *)(this_ptr->unk4 + 4));
    }
    core_script_cpp_FUN_00559360(local_334);
    core_script_cpp_FUN_00559360(local_2bc);
    core_script_cpp_FUN_00559360(local_29e);
    iVar3 = stricmp(local_2bc,"stranger");
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
    splitpath(local_334,(char *)0x0,(char *)0x0,local_10c,(char *)0x0);
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
    iVar3 = core_script_cpp_CScript_FUN_005606e0(this_ptr,local_334);
    if (-1 < iVar3) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Warning! Duplicate wav string %s detected in %s",local_334,param_2);
    }
    sprintf(local_2f8,"%s.wav",local_334);
    iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_2f8);
    if (iVar3 < 1) {
      sprintf(local_2f8,"%s.mp3",local_334);
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
    iVar3 = *(int *)(this_ptr->unk4 + 4) + 1;
    *(int *)(this_ptr->unk4 + 4) = iVar3;
    pvVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (*(void **)(this_ptr->unk4 + 8),iVar3 * 0x226,"..\\core\\script.cpp",
                        0xefa);
    *(void **)(this_ptr->unk4 + 8) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xefb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCScipt::dbLoad - out of memory");
    }
    pcVar6 = local_334;
    puVar7 = (uint *)
             (*(int *)(this_ptr->unk4 + 8) + (*(int *)(this_ptr->unk4 + 4) + -1) * 0x226);
    for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *(uint *)pcVar6;
      pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    *(ushort *)puVar7 = *(ushort *)pcVar6;
  } while( true );
}

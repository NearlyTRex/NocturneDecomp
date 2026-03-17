// Name: core_script.cpp_CScript_dbLoad_FUN_005603c0
// Address: 005603c0
// Address Range: [[005603c0, 005606dc]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_dbLoad_FUN_005603c0(CScript *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_dbLoad_FUN_005603c0(CScript *this_ptr,char *filename)

{
  char cVar2;
  int iVar4;
  _FILE *file_handle;
  long lVar2;
  long lVar5;
  int iVar3;
  int iVar6;
  SDialogEntry *pSVar4;
  char *pcVar5;
  char *pcVar7;
  char *pcVar6;
  char *pcVar8;
  SDialogEntry *pSVar9;
  byte bVar7;
  char local_334 [60];
  char local_2f8 [60];
  char local_2bc [30];
  char local_29e [402];
  char local_10c [256];
  int local_c;
  char cVar1;
  
  bVar7 = 0;
  this_ptr->dialog_entry_count = 0;
  iVar4 = engine_dosio_c_getFileSize_FUN_00481880("world",filename);
  if (iVar4 < 1) {
    return;
  }
  file_handle = engine_dosio_c_getFile_FUN_00481a50("world",filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xec2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",filename);
  }
  lVar2 = _ftell(file_handle);
  do {
    _fscanf(file_handle," ");
    lVar5 = _ftell(file_handle);
    if (iVar4 + lVar2 <= lVar5) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\script.cpp",0xf02);
      return;
    }
    iVar3 = _fscanf(file_handle,"%[^,], %[^,], %[^\n]\n",local_334,local_2bc,local_29e);
    if (iVar3 != 3) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xed6;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("SCScipt::dbLoad - error parsing %s record %d",filename,this_ptr->dialog_entry_count);
    }
    core_script_cpp_trimString_FUN_00559360(local_334);
    core_script_cpp_trimString_FUN_00559360(local_2bc);
    core_script_cpp_trimString_FUN_00559360(local_29e);
    iVar6 = _stricmp(local_2bc,"stranger");
    if (iVar6 == 0) {
      pcVar5 = "$";
      pcVar6 = local_2bc;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar2;
        pcVar6 = pcVar6 + 2;
      } while (cVar2 != '\0');
    }
    splitpath(local_334,(char *)0x0,(char *)0x0,local_10c,(char *)0x0);
    pcVar7 = local_10c;
    pcVar8 = local_334;
    do {
      cVar2 = *pcVar7;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    iVar6 = core_script_cpp_CScript_findDialogEntry_FUN_005606e0(this_ptr,local_334);
    if (-1 < iVar6) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Warning! Duplicate wav string %s detected in %s",local_334,filename);
    }
    _sprintf(local_2f8,"%s.wav",local_334);
    iVar6 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_2f8);
    if (iVar6 < 1) {
      _sprintf(local_2f8,"%s.mp3",local_334);
      iVar6 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_2f8);
      if (iVar6 < 1) {
        pcVar8 = local_334;
        pcVar7 = local_2f8;
        do {
          cVar2 = *pcVar8;
          *pcVar7 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar7[1] = cVar2;
          pcVar7 = pcVar7 + 2;
        } while (cVar2 != '\0');
      }
    }
    iVar6 = this_ptr->dialog_entry_count + 1;
    this_ptr->dialog_entry_count = iVar6;
    pSVar4 = (SDialogEntry *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->dialog_entries,iVar6 * 0x226,"..\\core\\script.cpp",0xefa);
    this_ptr->dialog_entries = pSVar4;
    if (pSVar4 == (SDialogEntry *)0x0) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xefb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCScipt::dbLoad - out of memory");
    }
    pcVar8 = local_334;
    pSVar9 = this_ptr->dialog_entries + this_ptr->dialog_entry_count + -1;
    for (iVar6 = 0x89; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(uint *)pSVar9->data = *(uint *)pcVar8;
      pcVar8 = pcVar8 + (uint)bVar7 * -8 + 4;
      pSVar9 = (SDialogEntry *)((int)pSVar9 + (uint)bVar7 * -8 + 4);
    }
    *(ushort *)pSVar9->data = *(ushort *)pcVar8;
  } while( true );
}

// Name: core_script.cpp_CScript_dbLoad_FUN_00504e70
// Address: 00504e70
// Address Range: [[00504e70, 00505174]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_dbLoad_FUN_00504e70(CScript *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_dbLoad_FUN_00504e70(CScript *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file_handle;
  long lVar2;
  int iVar3;
  SDialogEntry *pSVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_334 [60];
  char local_2f8 [60];
  char local_2bc [30];
  char local_29e [402];
  char local_10c [256];
  int local_c;
  
  bVar7 = 0;
  this_ptr->dialog_entry_count = 0;
  local_c = engine_dosio_cpp_getFileSize_FUN_004568c0("world",filename);
  if (local_c < 1) {
    return;
  }
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("world",filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\core\\script.cpp";
    INT_01cc4804 = 0xec2;
    core_main_c_FUN_004c8440("Can't open world\\%s",filename);
  }
  lVar2 = _ftell(file_handle);
  local_c = local_c + lVar2;
  do {
    _fscanf(file_handle," ");
    lVar2 = _ftell(file_handle);
    if (local_c <= lVar2) {
      _fclose(file_handle);
      return;
    }
    iVar3 = _fscanf(file_handle,"%[^,], %[^,], %[^\n]\n",local_334,local_2bc,local_29e);
    if (iVar3 != 3) {
      PTR_01cc4800 = "..\\core\\script.cpp";
      INT_01cc4804 = 0xed6;
      core_main_c_FUN_004c8440
                ("SCScipt::dbLoad - error parsing %s record %d",filename,this_ptr->dialog_entry_count);
    }
    core_script_cpp_trimString_FUN_004fe000(local_334);
    core_script_cpp_trimString_FUN_004fe000(local_2bc);
    core_script_cpp_trimString_FUN_004fe000(local_29e);
    iVar3 = _stricmp(local_2bc,"stranger");
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
    iVar3 = core_script_cpp_CScript_findDialogEntry_FUN_00505180(this_ptr,local_334);
    if (-1 < iVar3) {
      shape_edittool_cpp_FUN_0046fcd0
                (0x01BCD074,"Warning! Duplicate wav string %s detected in %s",local_334,filename);
    }
    _sprintf(local_2f8,"%s.wav",local_334);
    iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_2f8);
    if (iVar3 < 1) {
      _sprintf(local_2f8,"%s.mp3",local_334);
      iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_2f8);
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
    iVar3 = this_ptr->dialog_entry_count + 1;
    this_ptr->dialog_entry_count = iVar3;
    pSVar4 = (SDialogEntry *)realloc(this_ptr->dialog_entries,iVar3 * 0x226);
    this_ptr->dialog_entries = pSVar4;
    if (pSVar4 == (SDialogEntry *)0x0) {
      PTR_01cc4800 = "..\\core\\script.cpp";
      INT_01cc4804 = 0xefb;
      core_main_c_FUN_004c8440("SCScipt::dbLoad - out of memory");
    }
    pcVar6 = local_334;
    pSVar4 = this_ptr->dialog_entries + this_ptr->dialog_entry_count + -1;
    for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pSVar4->data = *(uint *)pcVar6;
      pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
      pSVar4 = (SDialogEntry *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
    }
    *(ushort *)pSVar4->data = *(ushort *)pcVar6;
  } while( true );
}

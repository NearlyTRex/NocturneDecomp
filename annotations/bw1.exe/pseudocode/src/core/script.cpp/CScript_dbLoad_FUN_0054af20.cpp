// Name: core_script.cpp_CScript_dbLoad_FUN_0054af20
// Address: 0054af20
// Address Range: [[0054af20, 0054b29c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_dbLoad_FUN_0054af20(CScript *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_dbLoad_FUN_0054af20(CScript *this_ptr,char *filename)

{
  char cVar1;
  _FILE *p_Var2;
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
  local_c = engine_dosio_cpp_getFileSize_FUN_00478fb0("world",filename);
  if (local_c < 1) {
    return;
  }
  p_Var2 = engine_dosio_cpp_FUN_00479180("world",filename,&DAT_005efec7);
  if (p_Var2 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\script.cpp";
    _DAT_01d1d404 = 0x1047;
    core_main_c_FUN_005030e0("Can't open world\\%s",filename);
  }
  iVar3 = _ftell(p_Var2);
  local_c = local_c + iVar3;
  do {
    _fscanf(p_Var2,&DAT_005efef7);
    iVar3 = _ftell(p_Var2);
    if (local_c <= iVar3) {
      _fclose(p_Var2);
      return;
    }
    iVar3 = _fscanf(p_Var2,"%[^,], ",local_334);
    if (iVar3 != 1) {
      _DAT_01d1d400 = "..\\core\\script.cpp";
      _DAT_01d1d404 = 0x105c;
      core_main_c_FUN_005030e0
                ("SCScipt::dbLoad - error parsing %s record %d",filename,this_ptr->dialog_entry_count);
    }
    iVar3 = _fgetc(p_Var2);
    if (iVar3 == 0x2c) {
      local_2bc[0] = '\0';
    }
    else {
      _ungetc(iVar3,p_Var2);
      iVar3 = _fscanf(p_Var2,"%[^,],",local_2bc);
      if (iVar3 != 1) {
        _DAT_01d1d400 = "..\\core\\script.cpp";
        _DAT_01d1d404 = 0x1065;
        core_main_c_FUN_005030e0
                  ("SCScipt::dbLoad - error parsing %s record %d",filename,this_ptr->dialog_entry_count);
      }
    }
    iVar3 = _fscanf(p_Var2," %[^\n]\n",local_29e);
    if (iVar3 != 1) {
      _DAT_01d1d400 = "..\\core\\script.cpp";
      _DAT_01d1d404 = 0x106a;
      core_main_c_FUN_005030e0
                ("SCScipt::dbLoad - error parsing %s record %d",filename,this_ptr->dialog_entry_count);
    }
    core_script_cpp_trimString_FUN_00543240(local_334);
    core_script_cpp_trimString_FUN_00543240(local_2bc);
    core_script_cpp_trimString_FUN_00543240(local_29e);
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
    iVar3 = core_script_cpp_CScript_findDialogEntry_FUN_0054b2a0(this_ptr,local_334);
    if (-1 < iVar3) {
      shape_edittool_cpp_FUN_004943a0
                (g_CEditorToolsPtr,"Warning! Duplicate wav string %s detected in %s",local_334,filename);
    }
    _sprintf(local_2f8,"%s.wav");
    iVar3 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",local_2f8);
    if (iVar3 < 1) {
      _sprintf(local_2f8,"%s.mp3");
      iVar3 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",local_2f8);
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
      _DAT_01d1d400 = "..\\core\\script.cpp";
      _DAT_01d1d404 = 0x108b;
      core_main_c_FUN_005030e0("SCScipt::dbLoad - out of memory");
    }
    pcVar6 = local_334;
    pSVar4 = this_ptr->dialog_entries + (this_ptr->dialog_entry_count + -1) * 0x226;
    for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pSVar4 = *(uint *)pcVar6;
      pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
      pSVar4 = pSVar4 + (uint)bVar7 * -8 + 4;
    }
    *(ushort *)pSVar4 = *(ushort *)pcVar6;
  } while( true );
}

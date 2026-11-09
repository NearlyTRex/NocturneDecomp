// Name: core_script.cpp_CScript_dbLoad_FUN_00530610
// Address: 00530610
// Address Range: [[00530610, 0053098c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_dbLoad_FUN_00530610(CScript *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_dbLoad_FUN_00530610(CScript *this_ptr,char *filename)

{
  char cVar1;
  _FILE *p_Var2;
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
  *(uint *)&this_ptr->field_0x20 = 0;
  local_c = engine_dosio_cpp_getFileSize_FUN_004657f0("world",filename);
  if (local_c < 1) {
    return;
  }
  p_Var2 = engine_dosio_cpp_FUN_004659c0("world",filename,&DAT_005cfb58);
  if (p_Var2 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\script.cpp";
    _DAT_01d71de4 = 0x104d;
    core_main_c_FUN_004e4330("Can't open world\\%s",filename);
  }
  iVar3 = _ftell(p_Var2);
  local_c = local_c + iVar3;
  do {
    _fscanf(p_Var2,&DAT_005cfb88);
    iVar3 = _ftell(p_Var2);
    if (local_c <= iVar3) {
      _fclose(p_Var2);
      return;
    }
    iVar3 = _fscanf(p_Var2,"%[^,], ",local_334);
    if (iVar3 != 1) {
      _DAT_01d71de0 = "..\\core\\script.cpp";
      _DAT_01d71de4 = 0x1062;
      core_main_c_FUN_004e4330
                ("SCScipt::dbLoad - error parsing %s record %d",filename,*(uint *)&this_ptr->field_0x20);
    }
    iVar3 = _fgetc(p_Var2);
    if (iVar3 == 0x2c) {
      local_2bc[0] = '\0';
    }
    else {
      _ungetc(iVar3,p_Var2);
      iVar3 = _fscanf(p_Var2,"%[^,],",local_2bc);
      if (iVar3 != 1) {
        _DAT_01d71de0 = "..\\core\\script.cpp";
        _DAT_01d71de4 = 0x106b;
        core_main_c_FUN_004e4330
                  ("SCScipt::dbLoad - error parsing %s record %d",filename,*(uint *)&this_ptr->field_0x20
                  );
      }
    }
    iVar3 = _fscanf(p_Var2," %[^\n]\n",local_29e);
    if (iVar3 != 1) {
      _DAT_01d71de0 = "..\\core\\script.cpp";
      _DAT_01d71de4 = 0x1070;
      core_main_c_FUN_004e4330
                ("SCScipt::dbLoad - error parsing %s record %d",filename,*(uint *)&this_ptr->field_0x20);
    }
    core_script_cpp_trimString_FUN_00528830(local_334);
    core_script_cpp_trimString_FUN_00528830(local_2bc);
    core_script_cpp_trimString_FUN_00528830(local_29e);
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
    iVar3 = core_script_cpp_FUN_00530990(this_ptr,local_334);
    if (-1 < iVar3) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"Warning! Duplicate wav string %s detected in %s");
    }
    FUN_005a28c0(local_2f8,"%s.wav",local_334);
    iVar3 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",local_2f8);
    if (iVar3 < 1) {
      FUN_005a28c0(local_2f8,"%s.mp3",local_334);
      iVar3 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",local_2f8);
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
    iVar3 = *(int *)&this_ptr->field_0x20 + 1;
    *(int *)&this_ptr->field_0x20 = iVar3;
    pvVar4 = realloc(*(void **)&this_ptr->field_0x24,iVar3 * 0x226);
    *(void **)&this_ptr->field_0x24 = pvVar4;
    if (pvVar4 == (void *)0x0) {
      _DAT_01d71de0 = "..\\core\\script.cpp";
      _DAT_01d71de4 = 0x1091;
      core_main_c_FUN_004e4330("SCScipt::dbLoad - out of memory");
    }
    pcVar6 = local_334;
    puVar7 = (uint *)
             (*(int *)&this_ptr->field_0x24 + (*(int *)&this_ptr->field_0x20 + -1) * 0x226);
    for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *(uint *)pcVar6;
      pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    *(ushort *)puVar7 = *(ushort *)pcVar6;
  } while( true );
}

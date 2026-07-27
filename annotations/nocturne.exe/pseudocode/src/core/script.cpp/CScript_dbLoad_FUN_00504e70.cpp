// Name: core_script.cpp_CScript_dbLoad_FUN_00504e70
// Address: 00504e70
// Address Range: [[00504e70, 00505174]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_dbLoad_FUN_00504e70(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_dbLoad_FUN_00504e70(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  byte bVar7;
  char local_334 [60];
  char local_2f8 [60];
  char local_2bc [30];
  byte local_29e [402];
  char local_10c [256];
  int local_c;
  
  bVar7 = 0;
  *(uint *)(param_1 + 0x1c) = 0;
  local_c = engine_dosio_cpp_getFileSize_FUN_004568c0("world",param_2);
  if (local_c < 1) {
    return;
  }
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60("world",param_2,"rt");
  if (iVar2 == 0) {
    PTR_01cc4800 = "..\\core\\script.cpp";
    INT_01cc4804 = 0xec2;
    core_main_c_FUN_004c8440("Can't open world\\%s",param_2);
  }
  iVar3 = _ftell(iVar2);
  local_c = local_c + iVar3;
  do {
    _fscanf(iVar2," ");
    iVar3 = _ftell(iVar2);
    if (local_c <= iVar3) {
      _fclose(iVar2);
      return;
    }
    iVar3 = _fscanf(iVar2,"%[^,], %[^,], %[^\n]\n",local_334,local_2bc,local_29e);
    if (iVar3 != 3) {
      PTR_01cc4800 = "..\\core\\script.cpp";
      INT_01cc4804 = 0xed6;
      core_main_c_FUN_004c8440
                ("SCScipt::dbLoad - error parsing %s record %d",param_2,*(uint *)(param_1 + 0x1c));
    }
    core_script_cpp_trimString_FUN_004fe000(local_334);
    core_script_cpp_trimString_FUN_004fe000(local_2bc);
    core_script_cpp_trimString_FUN_004fe000(local_29e);
    iVar3 = _stricmp(local_2bc,"stranger");
    if (iVar3 == 0) {
      pcVar4 = "$";
      pcVar5 = local_2bc;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    splitpath(local_334,0,0,local_10c,0);
    pcVar4 = local_10c;
    pcVar5 = local_334;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar3 = core_script_cpp_CScript_findDialogEntry_FUN_00505180(param_1,local_334);
    if (-1 < iVar3) {
      shape_edittool_cpp_FUN_0046fcd0
                (0x01BCD074,"Warning! Duplicate wav string %s detected in %s",local_334,param_2);
    }
    _sprintf(local_2f8,"%s.wav",local_334);
    iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_2f8);
    if (iVar3 < 1) {
      _sprintf(local_2f8,"%s.mp3",local_334);
      iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_2f8);
      if (iVar3 < 1) {
        pcVar5 = local_334;
        pcVar4 = local_2f8;
        do {
          cVar1 = *pcVar5;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
      }
    }
    iVar3 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar3;
    iVar3 = realloc(*(uint *)(param_1 + 0x20),iVar3 * 0x226);
    *(int *)(param_1 + 0x20) = iVar3;
    if (iVar3 == 0) {
      PTR_01cc4800 = "..\\core\\script.cpp";
      INT_01cc4804 = 0xefb;
      core_main_c_FUN_004c8440("SCScipt::dbLoad - out of memory");
    }
    pcVar5 = local_334;
    puVar6 = (uint *)(*(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x1c) + -1) * 0x226);
    for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *(uint *)pcVar5;
      pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    *(ushort *)puVar6 = *(ushort *)pcVar5;
  } while( true );
}

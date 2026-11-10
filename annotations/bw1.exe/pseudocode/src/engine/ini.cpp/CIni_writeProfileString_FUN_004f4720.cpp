// Name: engine_ini.cpp_CIni_writeProfileString_FUN_004f4720
// Address: 004f4720
// Address Range: [[004f4720, 004f49e9]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004f4720(CIni *this_ptr,char *section,char *key,char *value,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004f4720(CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_314 [254];
  char acStack_216 [258];
  char local_114 [256];
  int local_14;
  
  bVar8 = 0;
  local_14 = 0;
  iVar2 = engine_ini_cpp_FUN_004f4550(this_ptr,section,key,filename,value);
  if (*this_ptr == (CIni)0x0) {
    return 1;
  }
  iVar3 = _fopen(filename,"rt");
  if (iVar3 == 0) {
    _DAT_01d1d400 = "..\\engine\\ini.cpp";
    _DAT_01d1d404 = 0x18b;
    core_main_c_FUN_005030e0("cIni::writeProfileString: Unable to open input");
  }
  pcVar7 = acStack_216;
  pcVar6 = filename;
  do {
    pcVar7 = pcVar7 + 2;
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar7 = filename;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  acStack_216[~uVar5] = 'x';
  iVar4 = _fopen(acStack_216 + 2,"wt");
  if (iVar4 == 0) {
    _DAT_01d1d400 = "..\\engine\\ini.cpp";
    _DAT_01d1d404 = 399;
    core_main_c_FUN_005030e0("cIni::writeProfileString: Unable to open output");
  }
  if (iVar2 == 0) {
    _sprintf(local_114,"[%s]\n");
    bVar8 = *(byte *)(iVar3 + 0xc);
    while (((bVar8 & 0x10) == 0 &&
           (iVar2 = _fgets(local_314,0xff,iVar3), iVar2 != 0))) {
      FUN_005c03c0(iVar4,local_314);
      iVar2 = _strcmp(local_114,local_314);
      if (iVar2 == 0) {
        FUN_005c03c0(iVar4,"%s=%s\n",key,value);
        local_14 = 1;
      }
      bVar8 = *(byte *)(iVar3 + 0xc);
    }
    if (local_14 == 0) {
      FUN_005c03c0(iVar4,local_114);
      FUN_005c03c0(iVar4,"%s=%s\n",key,value);
    }
  }
  else {
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      _fgets(local_314,0xff,iVar3);
      FUN_005c03c0(iVar4,local_314);
    }
    FUN_005c03c0(iVar4,"%s=%s\n",key,value);
    _fgets(local_314,0xff,iVar3);
    bVar8 = *(byte *)(iVar3 + 0xc);
    while (((bVar8 & 0x10) == 0 &&
           (iVar2 = _fgets(local_314,0xff,iVar3), iVar2 != 0))) {
      FUN_005c03c0(iVar4,local_314);
      bVar8 = *(byte *)(iVar3 + 0xc);
    }
  }
  _fclose(iVar3);
  _fclose(iVar4);
  FUN_005c25c0(filename);
  _rename(acStack_216 + 2,filename);
  return 1;
}

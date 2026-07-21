// Name: engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0
// Address: 004bd0a0
// Address Range: [[004bd0a0, 004bd2a8]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004bd0a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,int param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004bd0a0(uint param_1,uint param_2,uint param_3,char *param_4,char *param_5,int param_6,uint param_7)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *unaff_EBP;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char local_210 [256];
  byte local_110 [256];
  
  bVar9 = 0;
  bVar3 = false;
  iVar4 = _fopen(param_7,&DAT_005864e5);
  if (iVar4 == 0) {
    _DAT_01cc4800 = "..\\engine\\ini.cpp";
    _DAT_01cc4804 = 0x57;
    FUN_004c8440("cIni::getProfileString: Unable to open input");
  }
  _sprintf(local_110,"[%s]\n",param_2);
  do {
    if (((*(byte *)(iVar4 + 0xc) & 0x10) != 0) ||
       (iVar5 = _fgets(local_210,0xff,iVar4), iVar5 == 0))
    goto LAB_004bd11f;
    iVar5 = _strcmp(local_210,local_110);
  } while (iVar5 != 0);
  bVar2 = *(byte *)(iVar4 + 0xc);
  bVar3 = false;
  do {
    if (((bVar2 & 0x10) != 0) ||
       (iVar5 = _fgets(local_210,0xff,iVar4), pcVar8 = local_210, iVar5 == 0
       )) goto LAB_004bd11f;
    do {
      unaff_EBP = pcVar8;
      if (*pcVar8 == '=') goto LAB_004bd1ee;
      if (*pcVar8 == '\0') break;
      unaff_EBP = pcVar8 + 1;
      if (*unaff_EBP == '=') goto LAB_004bd1ee;
      pcVar8 = pcVar8 + 2;
    } while (*unaff_EBP != '\0');
    unaff_EBP = (char *)0x0;
LAB_004bd1ee:
    if (unaff_EBP != (char *)0x0) {
      *unaff_EBP = '\0';
    }
    iVar5 = _strcmp(local_210,param_3);
    if (iVar5 == 0) break;
    bVar2 = *(byte *)(iVar4 + 0xc);
  } while( true );
  bVar3 = true;
LAB_004bd11f:
  _fclose(iVar4);
  if (bVar3) {
    pcVar7 = unaff_EBP + 1;
    uVar6 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar7[~uVar6 - 2] = '\0';
    if ((int)(~uVar6 - 2) < param_6) {
      do {
        cVar1 = *pcVar7;
        *param_5 = cVar1;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        param_5[1] = cVar1;
        param_5 = param_5 + 2;
      } while (cVar1 != '\0');
      return 1;
    }
  }
  else {
    uVar6 = 0xffffffff;
    pcVar8 = param_4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if ((int)(~uVar6 - 1) < param_6) {
      do {
        cVar1 = *param_4;
        *param_5 = cVar1;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = param_4[1];
        param_4 = param_4 + 2;
        param_5[1] = cVar1;
        param_5 = param_5 + 2;
      } while (cVar1 != '\0');
      return 1;
    }
  }
  return 0;
}

// Name: core_fldnotes.cpp_FUN_004a2cc0
// Address: 004a2cc0
// Address Range: [[004a2cc0, 004a3091]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a2cc0(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004a2cc0(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  SPageResourceTwanaEntry *pSVar4;
  SPageResourceTwanaEntry *this_ptr;
  byte local_220 [256];
  byte local_120 [256];
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  iVar1 = _stricmp(param_2,&DAT_005d5b91);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x14)) ||
       (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18))) {
      core_fldnotes_cpp_FUN_004a2bf0(param_1);
    }
    uVar2 = 1;
  }
  else {
    iVar1 = _stricmp(param_2,&DAT_005d5b94);
    if (iVar1 == 0) {
      core_fldnotes_cpp_FUN_004a2c90(param_1);
      return 1;
    }
    iVar1 = _stricmp(param_2,&DAT_005d5b97);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x34) = 1;
      return 1;
    }
    iVar1 = _stricmp(param_2,&DAT_005d5b9a);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x34) = 0;
      return 1;
    }
    iVar1 = _strnicmp(param_2,"image",5);
    if (iVar1 != 0) {
      iVar1 = _strnicmp(param_2,"twanachar",9);
      if (iVar1 == 0) {
        local_14 = -1;
        sscanf(param_2 + 9," %s%n");
        if (local_14 < 3) {
          FUN_005b7790(&DAT_01cab7f0,"Error parsing 'twanachar' parms: '%s'",param_2);
          return 0xffffffff;
        }
        iVar1 = FUN_005b8be2(0x4c);
        pSVar4 = (SPageResourceTwanaEntry *)0x0;
        if (iVar1 != 0) {
          pSVar4 = (SPageResourceTwanaEntry *)core_fldnotes_cpp_FUN_004a2290(iVar1,local_220);
        }
        if (pSVar4 == (SPageResourceTwanaEntry *)0x0) {
          _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
          _DAT_01d046a4 = 0x5c7;
          core_main_c_FUN_004e4500("Out of memory");
        }
        iVar1 = core_fldnotes_cpp_FUN_004a30a0
                          (param_1,*(uint *)&pSVar4->field_0x8,
                           *(uint *)&pSVar4->field_0xc);
        if (iVar1 != 0) {
          *(uint *)pSVar4 = *(uint *)(param_1 + 0x14);
          *(uint *)&pSVar4->field_0x4 = *(uint *)(param_1 + 0x18);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)&pSVar4->field_0x8;
          core_fldnotes_cpp_FUN_004a2bb0(param_1,pSVar4);
          return 1;
        }
      }
      else {
        iVar1 = _stricmp(param_2,"twanaentry");
        if (iVar1 != 0) {
          FUN_005b7790(&DAT_01cab7f0,"Ignoring unknown markup tag: %s",param_2);
          return 0xffffffff;
        }
        this_ptr = (SPageResourceTwanaEntry *)FUN_005b8be2(0x114);
        pSVar4 = (SPageResourceTwanaEntry *)0x0;
        if (this_ptr != (SPageResourceTwanaEntry *)0x0) {
          pSVar4 = core_fldnotes_cpp_PageResource_TwanaEntry_ctor_FUN_004a23c0(this_ptr);
        }
        if (pSVar4 == (SPageResourceTwanaEntry *)0x0) {
          _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
          _DAT_01d046a4 = 0x5df;
          core_main_c_FUN_004e4500("Out of memory");
        }
        iVar1 = core_fldnotes_cpp_FUN_004a30a0
                          (param_1,*(uint *)&pSVar4->field_0x8,
                           *(uint *)&pSVar4->field_0xc);
        if (iVar1 != 0) {
          *(uint *)pSVar4 = *(uint *)(param_1 + 0x14);
          *(uint *)&pSVar4->field_0x4 = *(uint *)(param_1 + 0x18);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)&pSVar4->field_0x8;
          core_fldnotes_cpp_FUN_004a2bb0(param_1,pSVar4);
          return 1;
        }
      }
      (*(code *)**(uint **)&pSVar4->field_0x14)(pSVar4,2);
      return 0;
    }
    local_18 = -1;
    sscanf(param_2 + 5,"%s %d %d%n");
    if (local_18 < 3) {
      FUN_005b7790(&DAT_01cab7f0,"Error parsing 'image' tag parms: '%s'",param_2);
      return 0xffffffff;
    }
    iVar1 = core_fldnotes_cpp_FUN_004a30a0(param_1,local_20,local_1c);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_005b8be2(0x2c);
      puVar3 = (uint *)0x0;
      if (iVar1 != 0) {
        puVar3 = (uint *)core_fldnotes_cpp_FUN_004a2170(iVar1,local_120,local_20,local_1c);
      }
      if (puVar3 == (uint *)0x0) {
        _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
        _DAT_01d046a4 = 0x5b1;
        core_main_c_FUN_004e4500("Out of memory");
      }
      *puVar3 = *(uint *)(param_1 + 0x14);
      puVar3[1] = *(uint *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + local_20;
      core_fldnotes_cpp_FUN_004a2bb0(param_1,puVar3);
      return 1;
    }
  }
  return uVar2;
}

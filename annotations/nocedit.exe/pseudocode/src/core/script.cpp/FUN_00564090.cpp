// Name: core_script.cpp_FUN_00564090
// Address: 00564090
// Address Range: [[00564090, 005643cb]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00564090(int param_1,int *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_00564090(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  uint local_124;
  uint local_24;
  
  piVar5 = &local_124;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_2;
    param_2 = param_2 + 1;
    piVar5 = piVar5 + 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xcc)) {
    iVar3 = param_1 + 0xd0;
    do {
      switch(*(uint *)(iVar3 + 600)) {
      case 3:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        if (*(char *)(iVar3 + 100) == '@') {
          local_24 = 0xb;
        }
        else {
          local_24 = 7;
        }
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case 4:
        core_script_cpp_CScript_FUN_005671a0(g_CScriptPtr,iVar3 + 100,&local_124);
        break;
      case 7:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 10;
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case 0xb:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 8;
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case 0xc:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 9;
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case 0xf:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 5;
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case 0x10:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 6;
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case 0x14:
        core_script_cpp_CScript_FUN_00567010(g_CScriptPtr,(char *)(iVar3 + 100),&local_124);
        break;
      case 0x15:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 2;
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case 0x16:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 3;
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case 0x1c:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 4;
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case 0x1f:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar6 = (char *)&local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 0xc;
        core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,&local_124);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x328;
    } while (iVar2 < *(int *)(param_1 + 0xcc));
  }
  return;
}

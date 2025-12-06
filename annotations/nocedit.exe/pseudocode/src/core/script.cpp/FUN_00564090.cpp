// Name: core_script.cpp_FUN_00564090
// Address: 00564090
// Address Range: [[00564090, 005643cb]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00564090()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00564090(uint param_1, uint param_2) */

void core_script_cpp_FUN_00564090(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int in_stack_00000004;
  uint *in_stack_00000008;
  char local_124 [256];
  uint local_24;
  
  pcVar13 = local_124;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar13 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    pcVar13 = (char *)((int)pcVar13 + 4);
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xcc)) {
    iVar3 = in_stack_00000004 + 0xd0;
    do {
      pcVar5 = local_124;
      pcVar6 = local_124;
      pcVar7 = local_124;
      pcVar8 = local_124;
      pcVar9 = local_124;
      pcVar10 = local_124;
      pcVar11 = local_124;
      pcVar12 = local_124;
      pcVar4 = local_124;
      pcVar13 = local_124;
      switch(*(uint *)(iVar3 + 600)) {
      case 3:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        if (*(char *)(iVar3 + 100) == '@') {
          local_24 = 0xb;
        }
        else {
          local_24 = 7;
        }
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 4:
        core_script_cpp_FUN_005671a0();
        break;
      case 7:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 10;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0xb:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar12[1] = cVar1;
          pcVar12 = pcVar12 + 2;
        } while (cVar1 != '\0');
        local_24 = 8;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0xc:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        local_24 = 9;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0xf:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        local_24 = 5;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x10:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar11 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar11[1] = cVar1;
          pcVar11 = pcVar11 + 2;
        } while (cVar1 != '\0');
        local_24 = 6;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x14:
        core_script_cpp_FUN_00567010();
        break;
      case 0x15:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        local_24 = 2;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x16:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        local_24 = 3;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x1c:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        local_24 = 4;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x1f:
        pcVar4 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar4;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
        local_24 = 0xc;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x328;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0xcc));
  }
  return;
}

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
  char *pcVar4;
  char *pcVar5;
  int in_stack_00000004;
  uint *in_stack_00000008;
  char local_124 [256];
  uint local_24;
  
  pcVar4 = local_124;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    pcVar4 = (char *)((int)pcVar4 + 4);
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xcc)) {
    iVar3 = in_stack_00000004 + 0xd0;
    do {
      switch(*(uint *)(iVar3 + 600)) {
      case 3:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
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
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        local_24 = 10;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0xb:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        local_24 = 8;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0xc:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        local_24 = 9;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0xf:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        local_24 = 5;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x10:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        local_24 = 6;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x14:
        core_script_cpp_FUN_00567010();
        break;
      case 0x15:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        local_24 = 2;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x16:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        local_24 = 3;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x1c:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        local_24 = 4;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x1f:
        pcVar4 = (char *)(iVar3 + 100);
        pcVar5 = local_124;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
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

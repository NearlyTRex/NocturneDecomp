// Name: core_script.cpp_CScript_WriteScriptFile_FUN_00560b50
// Address: 00560b50
// Address Range: [[00560b50, 00560d7a]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_WriteScriptFile_FUN_00560b50()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: void core_script.cpp_CScript_WriteScriptFile(CScript* pScript, FILE* pFilePtr) */

void core_script_cpp_CScript_WriteScriptFile_FUN_00560b50
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               int param_5,FILE *param_6)

{
  int iVar1;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// CScript version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n",6);
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// gGame->letterboxMode\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n",g_CGamePtr->letterbox_mode,unaff_EBX);
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// gGame->allowDamageFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// gGame->allowEnemyAttackFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// letterBoxBlackT\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%g\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// nextCmd\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// currentMessage\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// cmdTimer\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%g\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// dialogWavTime\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%g\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// whoIsSpeaking\n");
  core_script_cpp_FUN_005607e0();
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// focusActor\n");
  core_script_cpp_FUN_005607e0();
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// focusActorLocked\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// callStack count, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  if (0 < *(int *)(param_5 + 0x45c)) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
    } while (iVar1 < *(int *)(param_5 + 0x45c));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// CRC\n");
  core_script_cpp_CalculateCRC_FUN_00560d80();
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%u\n");
  return;
}

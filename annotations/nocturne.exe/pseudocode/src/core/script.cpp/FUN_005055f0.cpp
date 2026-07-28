// Name: core_script.cpp_FUN_005055f0
// Address: 005055f0
// Address Range: [[005055f0, 0050581a]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_005055f0(CScript *param_1,_FILE *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_script_cpp_FUN_005055f0(CScript *param_1,_FILE *param_2)

{
  uint uVar1;
  int iVar2;
  
  _fprintf(param_2,"// CScript version\n");
  _fprintf(param_2,"%d\n",6);
  _fprintf(param_2,"// gGame->letterboxMode\n");
  _fprintf(param_2,"%d\n",*(uint *)(0x01C775EC + 0x228));
  _fprintf(param_2,"// gGame->allowDamageFlag\n");
  _fprintf(param_2,"%d\n",*(uint *)(0x01C775EC + 0x22c));
  _fprintf(param_2,"// gGame->allowEnemyAttackFlag\n");
  _fprintf(param_2,"%d\n",*(uint *)(0x01C775EC + 0x230));
  _fprintf(param_2,"// letterBoxBlackT\n");
  _fprintf(param_2,"%g\n",(double)_DAT_01e56c20);
  _fprintf(param_2,"// nextCmd\n");
  _fprintf(param_2,"%d\n",(param_1->script_text).data_array);
  _fprintf(param_2,"// currentMessage\n");
  _fprintf(param_2,"\"%s\"\n",&param_1->cmd_timer);
  _fprintf(param_2,"// cmdTimer\n");
  _fprintf(param_2,"%g\n",(double)(float)(param_1->script_text).vtable);
  _fprintf(param_2,"// dialogWavTime\n");
  _fprintf(param_2,"%g\n",(double)(float)param_1->next_cmd);
  _fprintf(param_2);
  core_script_cpp_writeActorReference_FUN_00505280(param_2,&param_1->who_is_speaking);
  _fprintf(param_2);
  core_script_cpp_writeActorReference_FUN_00505280(param_2,&param_1->focus_actor);
  _fprintf(param_2);
  _fprintf(param_2,"%d\n");
  _fprintf(param_2);
  iVar2 = 0;
  _fprintf(param_2,"%d\n");
  if (0 < (int)param_1->message_duration) {
    do {
      iVar2 = iVar2 + 1;
      _fprintf(param_2,"%d\n");
    } while (iVar2 < (int)param_1->message_duration);
  }
  _fprintf(param_2);
  uVar1 = core_script_cpp_CScript_computeChecksum_FUN_00505820(param_1);
  _fprintf(param_2,"%u\n",uVar1);
  return;
}

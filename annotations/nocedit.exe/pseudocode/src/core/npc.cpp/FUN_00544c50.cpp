// Name: core_npc.cpp_FUN_00544c50
// Address: 00544c50
// Address Range: [[00544c50, 00544d28]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_FUN_00544c50(void)

#include "nocturne.h"

/* Signature: byte actors_npc_npc.cpp_FUN_00544c50(uint param_1, uint param_2) */

int __cdecl core_npc_cpp_FUN_00544c50(void)

{
  char cVar1;
  CMotionList *this_ptr;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CMotionController *in_stack_00000004;
  char *in_stack_00000008;
  char local_d8 [200];
  
  iVar3 = 0;
  this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(in_stack_00000004);
  pcVar4 = local_d8;
  while( true ) {
    sprintf(local_d8,"%s_%d");
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr);
    if (iVar2 < 0) break;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    do {
      cVar1 = *in_stack_00000008;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000008[1];
      in_stack_00000008 = in_stack_00000008 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  else {
    core_actor_cpp_getRandomInt_FUN_0040cc70(1,iVar3);
    sprintf(local_d8,"%s_%d");
  }
  iVar3 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr);
  if (-1 < iVar3) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(in_stack_00000004,iVar3,1);
    return 1;
  }
  return 0;
}

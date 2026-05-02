// Name: core_npc.cpp_CNPC_setRandomMotionVariant_FUN_00544c50
// Address: 00544c50
// MANUAL RECONSTRUCTION
// Address Range: [[00544c50, 00544d28]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00544c50(CNPC *this_ptr,char *motion_name)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00544c50(CNPC *this_ptr,char *motion_name)

{
  CMotionList *this_ptr_00;
  int iVar2;
  int iVar4;
  int iVar3;
  char *pcVar4;
  char local_d8 [200];
  
  iVar3 = 0;
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          ((CMotionController *)this_ptr);
  pcVar4 = local_d8;
  while( true ) {
    _sprintf(local_d8,"%s_%d",motion_name,iVar3 + 1);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00,local_d8,0);
    if (iVar2 < 0) break;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    strcpy(pcVar4,motion_name);
  }
  else {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,iVar3);
    _sprintf(local_d8,"%s_%d",motion_name,iVar4);
  }
  iVar4 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00,local_d8,0);
  if (-1 < iVar4) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr,iVar4,1);
    return 1;
  }
  return 0;
}

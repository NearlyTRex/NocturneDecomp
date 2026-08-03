// Name: core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0
// Address: 004eedc0
// Address Range: [[004eedc0, 004eee98]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(CNPC *this_ptr,char *motion_name)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(CNPC *this_ptr,char *motion_name)

{
  char cVar1;
  CMotionList *this_ptr_00;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_d8 [200];
  
  iVar3 = 0;
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                          ((CMotionController *)this_ptr);
  pcVar4 = local_d8;
  while( true ) {
    _sprintf(local_d8,"%s_%d");
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(this_ptr_00,local_d8,0);
    if (iVar2 < 0) break;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    do {
      cVar1 = *motion_name;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = motion_name[1];
      motion_name = motion_name + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  else {
    core_actor_cpp_getRandomInt_FUN_0040de00(1,iVar3);
    _sprintf(local_d8,"%s_%d");
  }
  iVar3 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(this_ptr_00,local_d8,0);
  if (-1 < iVar3) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              ((CMotionController *)this_ptr,iVar3,1);
    return 1;
  }
  return 0;
}

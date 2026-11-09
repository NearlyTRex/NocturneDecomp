// Name: core_npc.cpp_CNPC_setRandomMotionVariant_FUN_00510ab0
// Address: 00510ab0
// Address Range: [[00510ab0, 00510b88]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00510ab0(CNPC *this_ptr,char *motion_name)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00510ab0(CNPC *this_ptr,char *motion_name)

{
  char cVar1;
  CMotionList *this_ptr_00;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_d8 [200];
  
  iVar3 = 0;
  this_ptr_00 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr);
  pcVar4 = local_d8;
  while( true ) {
    FUN_005b7790(local_d8,"%s_%d",motion_name,iVar3 + 1);
    iVar2 = core_motion_cpp_FUN_00502fa0(this_ptr_00,local_d8,0);
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
    iVar3 = core_actor_cpp_FUN_0040cfc0(1,iVar3);
    FUN_005b7790(local_d8,"%s_%d",motion_name,iVar3);
  }
  iVar3 = core_motion_cpp_FUN_00502fa0(this_ptr_00,local_d8,0);
  if (-1 < iVar3) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,iVar3,1);
    return 1;
  }
  return 0;
}

// Name: core_bird.cpp_FUN_00410030
// Address: 00410030
// Address Range: [[00410030, 00410108]]
// Convention: unknown
// Signature: undefined4 core_bird_cpp_FUN_00410030(CMotionController *param_1,char *param_2)

#include "nocturne.h"

uint core_bird_cpp_FUN_00410030(CMotionController *param_1,char *param_2)

{
  char cVar1;
  CMotionList *this_ptr;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_d8 [200];
  
  iVar3 = 0;
  this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(param_1);
  pcVar4 = local_d8;
  while( true ) {
    _sprintf(local_d8,"%s_%d");
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr,local_d8,0);
    if (iVar2 < 0) break;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    do {
      cVar1 = *param_2;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  else {
    core_actor_cpp_getRandomInt_FUN_0040cea0(1,iVar3);
    _sprintf(local_d8,"%s_%d");
  }
  iVar3 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr,local_d8,0);
  if (-1 < iVar3) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(param_1,iVar3,1);
    return 1;
  }
  return 0;
}

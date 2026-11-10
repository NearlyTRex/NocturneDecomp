// Name: unkafter_bird.cpp_FUN_00415830
// Address: 00415830
// Address Range: [[00415830, 00415908]]
// Convention: unknown
// Signature: undefined4 unkafter_bird_cpp_FUN_00415830(CMotionController *param_1,char *param_2)

#include "nocturne.h"

uint unkafter_bird_cpp_FUN_00415830(CMotionController *param_1,char *param_2)

{
  char cVar1;
  CMotionList *this_ptr;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_d8 [200];
  
  iVar3 = 0;
  this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(param_1);
  pcVar4 = local_d8;
  while( true ) {
    _sprintf(local_d8,"%s_%d");
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_00524150(this_ptr,local_d8,0);
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
    core_actor_cpp_getRandomInt_FUN_0040cc60(1,iVar3);
    _sprintf(local_d8,"%s_%d");
  }
  iVar3 = core_motion_cpp_CMotionList_findStateIndex_FUN_00524150(this_ptr,local_d8,0);
  if (-1 < iVar3) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(param_1,iVar3,1);
    return 1;
  }
  return 0;
}

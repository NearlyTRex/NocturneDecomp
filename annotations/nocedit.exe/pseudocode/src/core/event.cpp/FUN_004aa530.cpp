// Name: core_event.cpp_FUN_004aa530
// Address: 004aa530
// Address Range: [[004aa530, 004aa643]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_FUN_004aa530(int param_1,int *param_2,float *param_3)

#include "nocturne.h"

int __cdecl core_event_cpp_FUN_004aa530(int param_1,int *param_2,float *param_3)

{
  CHero *pCVar1;
  CLocation *pCVar2;
  char local_78 [100];
  int local_14;
  
  local_14 = -1;
  sscanf
            ((char *)(param_1 + *param_2)," { %f, %f, %f }%n",param_3,param_3 + 1,param_3 + 2,
             &local_14);
  if (6 < local_14) {
    *param_2 = *param_2 + local_14;
    return 1;
  }
  sscanf((char *)(param_1 + *param_2)," %[^ ,(){}]%n",local_78,&local_14);
  if (local_14 < 0) {
    _sprintf(&DAT_02d0a460,"Error parsing vector location");
    return -1;
  }
  pCVar1 = core_event_cpp_FUN_004aa400(local_78,g_CDemonActorClassInfo.name_hash,0x821ff8);
  if (pCVar1 == (CHero *)0x0) {
    return -1;
  }
  *param_2 = *param_2 + local_14;
  if (pCVar1 != 0x0FFFFFFF) {
    pCVar2 = &(pCVar1->base).base.location;
    if ((CLocation *)param_3 != pCVar2) {
      *param_3 = (pCVar2->position).x;
      param_3[1] = (pCVar1->base).base.location.position.y;
      param_3[2] = (pCVar1->base).base.location.position.z;
    }
    return 1;
  }
  return 0;
}

// Name: core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0
// Address: 005119b0
// Address Range: [[005119b0, 00511a02]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(CDemonSet *this_ptr)

{
  int iVar1;
  CWayPoint *pCVar2;
  CDemonSet *pCVar3;
  int iVar4;
  
  iVar1 = *(int *)this_ptr->lights[199].filter_names[0x14];
  this_ptr->waypoints[0x6d6] = (CWayPoint *)0x0;
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < iVar1) {
    do {
      pCVar2 = *(CWayPoint **)(pCVar3->lights[199].filter_names[0x14] + 4);
      if ((pCVar2->base).base.collision_disabled == 0) {
        this_ptr->waypoints[(int)(this_ptr->waypoints[0x6d6][1].base.actor_name + 0x17)] = pCVar2;
        this_ptr->waypoints[0x6d6] =
             (CWayPoint *)((this_ptr->waypoints[0x6d6]->base).base.actor_name + 1);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar4 < *(int *)this_ptr->lights[199].filter_names[0x14]);
  }
  return;
}

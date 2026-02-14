// Name: core_msnedit.cpp_CDemonMission_deleteActor_FUN_00538ea0
// Address: 00538ea0
// Address Range: [[00538ea0, 00538f3a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(CDemonMission *this_ptr,int param_2)

{
  CDemonActor *this_ptr_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  CActorPropertyList CStack_2510;
  
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    if (this_ptr_00 != (CDemonActor *)param_2) {
      (*((this_ptr_00->vtable)._ub)->onActorDeleted)(this_ptr_00,(CDemonActor *)param_2);
      core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&CStack_2510);
      (*((this_ptr_00->vtable)._ub)->getPropertyList)(this_ptr_00,&CStack_2510);
      iVar3 = 0;
      if (0 < CStack_2510.count) {
        iVar2 = 0;
        do {
          if ((*(int *)(CStack_2510.properties[0].name + iVar2 + -4) == 5) &&
             (piVar1 = *(int **)(CStack_2510.properties[0].string1 + iVar2 + -8), param_2 == *piVar1
             )) {
            *piVar1 = 0;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0xec;
        } while (iVar3 < CStack_2510.count);
      }
    }
  }
  return;
}

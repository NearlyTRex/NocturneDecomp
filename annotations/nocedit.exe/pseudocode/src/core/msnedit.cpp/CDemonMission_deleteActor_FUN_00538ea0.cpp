// Name: core_msnedit.cpp_CDemonMission_deleteActor_FUN_00538ea0
// Address: 00538ea0
// Address Range: [[00538ea0, 00538f3a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl
core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(CDemonMission *this_ptr,int param_2)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  int iVar2;
  int iStack_24fc;
  int aiStack_24f8 [26];
  uint auStack_2490 [2337];
  
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    if (this_ptr_00 != (CDemonActor *)param_2) {
      (*((this_ptr_00->vtable)._ub)->onActorDeleted)(this_ptr_00,(CDemonActor *)param_2);
      core_actor_cpp_CActorPropertyList_init_FUN_0040e130((CActorPropertyList *)&stack0xffffdaf8);
      (*((this_ptr_00->vtable)._ub)->getPropertyList)
                (this_ptr_00,(CActorPropertyList *)&stack0xffffdaf8);
      iVar2 = 0;
      if (0 < iStack_24fc) {
        iVar1 = 0;
        do {
          if ((*(int *)((int)aiStack_24f8 + iVar1) == 5) &&
             (param_2 == **(int **)((int)auStack_2490 + iVar1))) {
            **(int **)((int)auStack_2490 + iVar1) = 0;
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0xec;
        } while (iVar2 < iStack_24fc);
      }
    }
  }
  return;
}

// Name: core_msnedit.cpp_CDemonMission_FUN_0053ea30
// Address: 0053ea30
// Address Range: [[0053ea30, 0053eb30]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ea30(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ea30(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  CActorProperty *this_ptr_01;
  int iVar1;
  int iStack_261c;
  CActorProperty aCStack_2618 [40];
  int aiStack_11c [63];
  CDemonActor *local_20;
  uint uStack_1c;
  int iStack_14;
  
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    local_20 = this_ptr_00;
    core_actor_cpp_CActorPropertyList_init_FUN_0040e130((CActorPropertyList *)&stack0xffffd9d8);
    (*((this_ptr_00->vtable)._ub)->getPropertyList)
              (this_ptr_00,(CActorPropertyList *)&stack0xffffd9d8);
    iVar1 = 0;
    if (0 < iStack_261c) {
      this_ptr_01 = aCStack_2618;
      do {
        core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                  (this_ptr_01,this_ptr_00,(char *)aiStack_11c);
        iStack_14 = iVar1;
        switch(this_ptr_01->type) {
        case PROP_CHOICE:
          if (*(this_ptr_01->data).v_int_ptr != 0) {
            uStack_1c = 7;
            core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,aiStack_11c);
          }
          break;
        case PROP_EVENT:
          core_script_cpp_CScript_FUN_005671a0(g_CScriptPtr,(int)aiStack_11c,aiStack_11c);
          break;
        case PROP_BUTTON:
          core_script_cpp_CScript_FUN_00567010(g_CScriptPtr,(char *)aiStack_11c,aiStack_11c);
        }
        iVar1 = iVar1 + 1;
        this_ptr_01 = this_ptr_01 + 1;
      } while (iVar1 < iStack_261c);
    }
  }
  return;
}

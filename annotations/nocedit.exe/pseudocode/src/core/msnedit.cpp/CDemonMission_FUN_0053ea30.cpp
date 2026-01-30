// Name: core_msnedit.cpp_CDemonMission_FUN_0053ea30
// Address: 0053ea30
// Address Range: [[0053ea30, 0053eb30]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ea30(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ea30(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  uint *puVar1;
  int iVar2;
  int iStack_261c;
  uint auStack_2618 [2367];
  int aiStack_11c [63];
  CDemonActor *local_20;
  uint uStack_1c;
  int iStack_14;
  
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    local_20 = this_ptr_00;
    core_actor_cpp_FUN_0040e130();
    (*((this_ptr_00->vtable)._ub)->getPropertyList)
              (this_ptr_00,(CActorPropertyList *)&stack0xffffd9d8);
    iVar2 = 0;
    if (0 < iStack_261c) {
      puVar1 = auStack_2618;
      do {
        core_actor_cpp_CActorProperty_FUN_0040ea50();
        iStack_14 = iVar2;
        switch(*puVar1) {
        case 5:
          if (*(int *)puVar1[0x1a] != 0) {
            uStack_1c = 7;
            core_script_cpp_CScript_FUN_00567510(g_CScriptPtr,aiStack_11c);
          }
          break;
        case 0xb:
          core_script_cpp_CScript_FUN_005671a0(g_CScriptPtr,(int)aiStack_11c,aiStack_11c);
          break;
        case 0xc:
          core_script_cpp_CScript_FUN_00567010(g_CScriptPtr,(char *)aiStack_11c,aiStack_11c);
        }
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 0x3b;
      } while (iVar2 < iStack_261c);
    }
  }
  return;
}

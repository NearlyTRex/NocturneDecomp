// Name: core_msnedit.cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30
// Address: 0053ea30
// Address Range: [[0053ea30, 0053eb30]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  CActorProperty *this_ptr_01;
  int iVar1;
  CActorPropertyList CStack_2628;
  SScriptXRef SStack_124;
  
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    SStack_124.actor = this_ptr_00;
    core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&CStack_2628);
    (*((this_ptr_00->vtable)._ub)->getPropertyList)(this_ptr_00,&CStack_2628);
    iVar1 = 0;
    if (0 < CStack_2628.count) {
      this_ptr_01 = CStack_2628.properties;
      do {
        core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                  (this_ptr_01,this_ptr_00,SStack_124.name);
        SStack_124.property_index = iVar1;
        switch(this_ptr_01->type) {
        case PROP_CHOICE:
          if (*(this_ptr_01->data).v_int_ptr != 0) {
            SStack_124.type = 7;
            core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&SStack_124);
          }
          break;
        case PROP_EVENT:
          core_script_cpp_CScript_extractCrossReferences_FUN_005671a0
                    (g_CScriptPtr,SStack_124.name,&SStack_124);
          break;
        case PROP_BUTTON:
          core_script_cpp_CScript_parseCommandList_FUN_00567010
                    (g_CScriptPtr,SStack_124.name,&SStack_124);
        }
        iVar1 = iVar1 + 1;
        this_ptr_01 = this_ptr_01 + 1;
      } while (iVar1 < CStack_2628.count);
    }
  }
  return;
}

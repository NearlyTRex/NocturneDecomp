// Name: core_msnedit.cpp_CDemonMission_FUN_0053c730
// Address: 0053c730
// Address Range: [[0053c730, 0053c8c7]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c730(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c730(CDemonMission *this_ptr)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  byte *puVar5;
  char *pcVar6;
  byte bVar7;
  int config_param2;
  CPickList CStack_540;
  char acStack_198 [300];
  char local_6c [100];
  
  bVar7 = 0;
  core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150((CActorPropertyList *)&DAT_02f7a024)
  ;
  if (this_ptr->selected_actor != (CDemonActor *)0x0) {
    puVar3 = &DAT_00680908;
    pcVar4 = local_6c;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
      pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    }
    while( true ) {
      core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150
                ((CActorPropertyList *)&DAT_02f7a024);
      (*((this_ptr->selected_actor->vtable)._ub)->getPropertyList)
                (this_ptr->selected_actor,(CActorPropertyList *)&DAT_02f7a024);
      iVar2 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_540);
      if (0 < INT_02f7a028) {
        puVar5 = &DAT_02f7a030;
        do {
          core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                    ((CActorProperty *)(&DAT_02f7a02c + iVar2 * 0xec),this_ptr->selected_actor,
                     &DAT_02f79820);
          _sprintf(&DAT_02f79c20,"%s\t%s",puVar5,&DAT_02f79820);
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 0xec;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_540.base,&DAT_02f79c20);
        } while (iVar2 < INT_02f7a028);
      }
      _sprintf
                (acStack_198,"Edit %s properties",this_ptr->selected_actor);
      config_param2 = 0;
      iVar2 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070(&CStack_540.base,local_6c);
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_540,acStack_198,iVar2,config_param2);
      if (iVar2 < 0) break;
      iVar2 = iVar2 * 0xec;
      pcVar6 = local_6c;
      pcVar4 = &DAT_02f7a030 + iVar2;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      if (*(int *)(&DAT_02f7a080 + iVar2) != 0) {
        core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                  ((CActorProperty *)(&DAT_02f7a02c + iVar2),this_ptr->selected_actor);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_540,0);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_540,0);
  }
  return;
}

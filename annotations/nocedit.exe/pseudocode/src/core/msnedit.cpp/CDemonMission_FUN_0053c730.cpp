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
  uint *puVar5;
  byte *puVar6;
  char *pcVar7;
  byte bVar8;
  int config_param2;
  CPickList CStack_538;
  char acStack_190 [292];
  uint local_6c [2];
  char acStack_64 [92];
  
  bVar8 = 0;
  core_actor_cpp_FUN_0040e150();
  if (this_ptr->selected_actor != (CDemonActor *)0x0) {
    puVar3 = &DAT_00680908;
    puVar5 = local_6c;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    }
    while( true ) {
      core_actor_cpp_FUN_0040e150();
      (*((this_ptr->selected_actor->vtable)._ub)->getPropertyList)
                (this_ptr->selected_actor,(CActorPropertyList *)&DAT_02f7a024);
      iVar2 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_538);
      if (0 < INT_02f7a028) {
        puVar6 = &DAT_02f7a030;
        do {
          core_actor_cpp_CActorProperty_FUN_0040ea50();
          sprintf(&DAT_02f79c20,"%s\t%s",puVar6,&DAT_02f79820);
          iVar2 = iVar2 + 1;
          puVar6 = puVar6 + 0xec;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_538.base,&DAT_02f79c20);
        } while (iVar2 < INT_02f7a028);
      }
      sprintf
                (acStack_190,"Edit %s properties",this_ptr->selected_actor);
      config_param2 = 0;
      iVar2 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070(&CStack_538.base,acStack_64)
      ;
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_538,acStack_190,iVar2,config_param2);
      if (iVar2 < 0) break;
      iVar2 = iVar2 * 0xec;
      pcVar7 = acStack_64;
      pcVar4 = &DAT_02f7a030 + iVar2;
      do {
        cVar1 = *pcVar4;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      if (*(int *)(&DAT_02f7a080 + iVar2) != 0) {
        core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                  ((CActorProperty *)(&DAT_02f7a02c + iVar2),this_ptr->selected_actor);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_538,0);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_538,0);
  }
  return;
}

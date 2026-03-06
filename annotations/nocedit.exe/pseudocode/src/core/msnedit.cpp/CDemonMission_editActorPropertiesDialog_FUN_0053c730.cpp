// Name: core_msnedit.cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730
// Address: 0053c730
// Address Range: [[0053c730, 0053c8c7]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730(CDemonMission *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  uint window_flags;
  CPickList CStack_540;
  char acStack_198 [300];
  char local_6c [100];
  
  bVar6 = 0;
  core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150(&g_MsnEditPropertyList);
  if (this_ptr->selected_actor != (CDemonActor *)0x0) {
    pcVar3 = g_MsnEditLastSelectedPropertyName;
    pcVar5 = local_6c;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar5 = *(uint *)pcVar3;
      pcVar3 = pcVar3 + ((uint)bVar6 * -2 + 1) * 4;
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    while( true ) {
      core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150(&g_MsnEditPropertyList);
      (*((this_ptr->selected_actor->vtable)._ub)->getPropertyList)
                (this_ptr->selected_actor,&g_MsnEditPropertyList);
      iVar2 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_540);
      if (0 < g_MsnEditPropertyList.count) {
        iVar4 = 0x2f7a030;
        do {
          core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                    (g_MsnEditPropertyList.properties + iVar2,this_ptr->selected_actor,&DAT_02f79820
                    );
          _sprintf(&DAT_02f79c20,"%s\t%s",iVar4,&DAT_02f79820);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0xec;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_540.base,&DAT_02f79c20);
        } while (iVar2 < g_MsnEditPropertyList.count);
      }
      _sprintf
                (acStack_198,"Edit %s properties",this_ptr->selected_actor);
      window_flags = 0;
      iVar2 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070(&CStack_540.base,local_6c);
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_540,acStack_198,iVar2,window_flags);
      if (iVar2 < 0) break;
      pcVar5 = local_6c;
      pcVar3 = g_MsnEditPropertyList.properties[iVar2].name;
      do {
        cVar1 = *pcVar3;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      if (g_MsnEditPropertyList.properties[iVar2].enabled_flag != 0) {
        core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                  (g_MsnEditPropertyList.properties + iVar2,this_ptr->selected_actor);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_540,0);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_540,0);
  }
  return;
}

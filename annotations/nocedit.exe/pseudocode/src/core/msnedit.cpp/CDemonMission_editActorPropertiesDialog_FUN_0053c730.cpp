// Name: core_msnedit.cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730
// Address: 0053c730
// Address Range: [[0053c730, 0053c8c7]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730(CDemonMission *this_ptr)

{
  char cVar2;
  int iVar2;
  char *pcVar4;
  int iVar5;
  char *pcVar3;
  char *pcVar6;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  CPickList CStack_540;
  char acStack_198 [300];
  char local_6c [100];
  uint window_flags;
  char cVar1;
  
  bVar6 = 0;
  core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150(&g_MsnEditPropertyList);
  if (this_ptr->selected_actor != (CDemonActor *)0x0) {
    pcVar4 = g_MsnEditLastSelectedPropertyName;
    pcVar6 = local_6c;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar6 = *(uint *)pcVar4;
      pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
      pcVar6 = pcVar6 + (uint)bVar6 * -8 + 4;
    }
    while( true ) {
      core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150(&g_MsnEditPropertyList);
      (*((this_ptr->selected_actor->vtable)._ub)->getPropertyList)
                (this_ptr->selected_actor,&g_MsnEditPropertyList);
      iVar5 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_540);
      if (0 < g_MsnEditPropertyList.count) {
        iVar4 = 0x2f7a030;
        do {
          core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                    (g_MsnEditPropertyList.properties + iVar5,this_ptr->selected_actor,
                     g_MsnEditPropertyValueBuffer);
          _sprintf(g_MsnEditPropertyFormatBuffer,"%s\t%s",iVar4,g_MsnEditPropertyValueBuffer
                    );
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0xec;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_540.base,g_MsnEditPropertyFormatBuffer);
        } while (iVar5 < g_MsnEditPropertyList.count);
      }
      _sprintf(acStack_198,"Edit %s properties",this_ptr->selected_actor);
      window_flags = 0;
      iVar5 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070(&CStack_540.base,local_6c);
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_540,acStack_198,iVar5,window_flags);
      if (iVar5 < 0) break;
      pcVar5 = local_6c;
      pcVar3 = g_MsnEditPropertyList.properties[iVar5].name;
      do {
        cVar1 = *pcVar3;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar5[1] = cVar2;
        pcVar5 = pcVar5 + 2;
      } while (cVar2 != '\0');
      if (g_MsnEditPropertyList.properties[iVar5].enabled_flag != 0) {
        core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                  (g_MsnEditPropertyList.properties + iVar5,this_ptr->selected_actor);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_540,0);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_540,0);
  }
  return;
}

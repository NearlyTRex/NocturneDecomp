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
  uint unaff_ESI;
  uint *puVar3;
  char *pcVar4;
  uint unaff_EDI;
  byte *puVar5;
  char *pcVar6;
  byte bVar7;
  int config_param2;
  uint in_stack_fffffac0;
  uint in_stack_fffffac4;
  char **in_stack_fffffac8;
  char acStack_198 [300];
  char local_6c [100];
  
  bVar7 = 0;
  core_actor_cpp_FUN_0040e150();
  if (*(int *)(this_ptr->unk2 + 0x1c) != 0) {
    puVar3 = &DAT_00680908;
    pcVar4 = local_6c;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
      pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    }
    while( true ) {
      core_actor_cpp_FUN_0040e150();
      (**(code **)(*(int *)(*(int *)(this_ptr->unk2 + 0x1c) + 0x154) + 0xd4))();
      iVar2 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffac0);
      if (0 < INT_02f7a028) {
        puVar5 = &DAT_02f7a030;
        do {
          core_actor_cpp_CActorProperty_FUN_0040ea50();
          sprintf(&DAT_02f79c20,"%s\t%s",puVar5,&DAT_02f79820);
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 0xec;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffac0,&DAT_02f79c20);
        } while (iVar2 < INT_02f7a028);
      }
      sprintf
                (acStack_198,"Edit %s properties",*(uint *)(this_ptr->unk2 + 0x1c));
      config_param2 = 0;
      iVar2 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070
                        ((CStrList *)&stack0xfffffac0,local_6c);
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffac0,acStack_198,iVar2,config_param2);
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
                  ((CActorProperty *)(&DAT_02f7a02c + iVar2),
                   *(CDemonActor **)(this_ptr->unk2 + 0x1c));
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffac0,0,unaff_ESI,unaff_EDI,in_stack_fffffac0,
                 in_stack_fffffac4,(uint)in_stack_fffffac8);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffac0,0,unaff_ESI,unaff_EDI,in_stack_fffffac0,
               in_stack_fffffac4,(uint)in_stack_fffffac8);
  }
  return;
}

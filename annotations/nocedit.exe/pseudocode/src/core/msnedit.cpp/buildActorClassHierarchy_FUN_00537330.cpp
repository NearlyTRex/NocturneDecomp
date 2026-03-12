// Name: core_msnedit.cpp_buildActorClassHierarchy_FUN_00537330
// Address: 00537330
// Address Range: [[00537330, 0053740f]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_buildActorClassHierarchy_FUN_00537330(CStrList *class_list,CDemonActor *parent_class,int indent_level)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_buildActorClassHierarchy_FUN_00537330(CStrList *class_list,CDemonActor *parent_class,int indent_level)

{
  char cVar2;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar3;
  byte bVar7;
  char local_80 [100];
  char *local_1c;
  int local_18;
  int local_14;
  char cVar1;
  char *pcVar6;
  CDemonActor *parent_class_00;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < g_NumActorClassTypes) {
    iVar3 = 0;
    do {
      parent_class_00 = *(CDemonActor **)((int)g_ActorClassRegistrations + iVar3);
      if (parent_class == (CDemonActor *)(parent_class_00->location).position.z) {
        memset(local_80,0x20,100);
        _sprintf
                  (local_80 + indent_level * 2,"%s\t%d",parent_class_00,
                   (parent_class_00->orient).vec.y);
        if ((parent_class_00->location).area_id == 0) {
          pcVar4 = "\t(abstract)";
          iVar2 = -1;
          pcVar5 = local_80;
          do {
            pcVar5 = pcVar5;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5;
          } while (cVar1 != '\0');
          pcVar3 = pcVar5 + -1;
          do {
            cVar2 = *pcVar4;
            *pcVar3 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar3[1] = cVar2;
            pcVar3 = pcVar3 + 2;
          } while (cVar2 != '\0');
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(class_list,local_80);
        core_msnedit_cpp_buildActorClassHierarchy_FUN_00537330
                  (class_list,parent_class_00,indent_level + 1);
      }
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 4;
    } while (local_14 < g_NumActorClassTypes);
  }
  return;
}

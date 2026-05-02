// Name: core_msnedit.cpp_buildActorClassHierarchy_FUN_00537330
// Address: 00537330
// MANUAL RECONSTRUCTION
// Address Range: [[00537330, 0053740f]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_buildActorClassHierarchy_FUN_00537330(CStrList *class_list,CDemonActor *parent_class,int indent_level)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_buildActorClassHierarchy_FUN_00537330(CStrList *class_list,CDemonActor *parent_class,int indent_level)

{
  int iVar3;
  char local_80 [100];
  int local_14;
  CDemonActorType *parent_class_00;

  local_14 = 0;
  if (0 < g_NumActorClassTypes) {
    iVar3 = 0;
    do {
      parent_class_00 = *(CDemonActorType **)((int)g_ActorClassRegistrations + iVar3);
      if (parent_class == (CDemonActor *)parent_class_00->parent_type) {
        memset(local_80,0x20,100);
        _sprintf
                  (local_80 + indent_level * 2,"%s\t%d",parent_class_00->class_name,
                   parent_class_00->type_id);
        if (parent_class_00->factory_func == (CDemonActor_FactoryFunc *)0x0) {
          strcat(local_80,"\t(abstract)");
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(class_list,local_80);
        core_msnedit_cpp_buildActorClassHierarchy_FUN_00537330
                  (class_list,(CDemonActor *)parent_class_00,indent_level + 1);
      }
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 4;
    } while (local_14 < g_NumActorClassTypes);
  }
  return;
}

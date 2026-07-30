// Name: core_trash.cpp_staticInit_FUN_00546c30
// Address: 00546c30
// Address Range: [[00546c30, 00546c53]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_staticInit_FUN_00546c30(void)

#include "nocturne.h"

void __cdecl core_trash_cpp_staticInit_FUN_00546c30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTrashActorType_02dd1048,"CTrash",core_trash_cpp_factoryFunc_FUN_00546c60,
             &INT_005c111c,1,&g_CDemonActorActorType_00763e48);
  return;
}

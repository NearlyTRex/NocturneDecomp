// Name: core_trash.cpp_CTrash_getActorType_FUN_005deb60
// Address: 005deb60
// Address Range: [[005deb60, 005deb65]]
// Convention: __cdecl
// Signature: CDemonActorType * core_trash.cpp_CTrash_getActorType_FUN_005deb60(CTrash * this_ptr)
// Globals:
//   CDemonActorType g_CTrashClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_trash_cpp_CTrash_getActorType_FUN_005deb60(CTrash *this_ptr)

{
  return &g_CTrashClassInfo;
}


// Assembly code:
// 005deb60: MOV EAX,0x3f8741c
//   Label: core_trash.cpp_CTrash_getActorType_FUN_005deb60
//   XREF to: 03f8741c (DATA)
// 005deb65: RET

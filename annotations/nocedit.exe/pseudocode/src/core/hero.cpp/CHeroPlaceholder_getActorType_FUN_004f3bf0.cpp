// Name: core_hero.cpp_CHeroPlaceholder_getActorType_FUN_004f3bf0
// Address: 004f3bf0
// Address Range: [[004f3bf0, 004f3bf5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_hero.cpp_CHeroPlaceholder_getActorType_FUN_004f3bf0(CHeroPlaceholder * this_ptr)
// Globals:
//   CDemonActorType g_CHeroPlaceholderClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_hero_cpp_CHeroPlaceholder_getActorType_FUN_004f3bf0(CHeroPlaceholder *this_ptr)

{
  return &g_CHeroPlaceholderClassInfo;
}


// Assembly code:
// 004f3bf0: MOV EAX,0x2db8810
//   Label: core_hero.cpp_CHeroPlaceholder_getActorType_FUN_004f3bf0
//   XREF to: 02db8810 (DATA)
// 004f3bf5: RET

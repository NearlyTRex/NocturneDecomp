// Name: core_baron.cpp_CBaronWeapon_getActorType_FUN_00413d30
// Address: 00413d30
// Address Range: [[00413d30, 00413d35]]
// Convention: __cdecl
// Signature: CDemonActorType * core_baron.cpp_CBaronWeapon_getActorType_FUN_00413d30(CBaronWeapon * this_ptr)
// Globals:
//   CDemonActorType g_CBaronWeaponClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_baron_cpp_CBaronWeapon_getActorType_FUN_00413d30(CBaronWeapon *this_ptr)

{
  return &g_CBaronWeaponClassInfo;
}


// Assembly code:
// 00413d30: MOV EAX,0x822698
//   Label: core_baron.cpp_CBaronWeapon_getActorType_FUN_00413d30
//   XREF to: 00822698 (DATA)
// 00413d35: RET

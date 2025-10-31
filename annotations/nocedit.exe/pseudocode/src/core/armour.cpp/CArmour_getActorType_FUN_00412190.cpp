// Name: core_armour.cpp_CArmour_getActorType_FUN_00412190
// Address: 00412190
// Address Range: [[00412190, 00412195]]
// Convention: __cdecl
// Signature: CDemonActorType * core_armour.cpp_CArmour_getActorType_FUN_00412190(CArmour * this_ptr)
// Globals:
//   CDemonActorType g_CArmourClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_armour_cpp_CArmour_getActorType_FUN_00412190(CArmour *this_ptr)

{
  return &g_CArmourClassInfo;
}


// Assembly code:
// 00412190: MOV EAX,0x822420
//   Label: core_armour.cpp_CArmour_getActorType_FUN_00412190
//   XREF to: 00822420 (DATA)
// 00412195: RET

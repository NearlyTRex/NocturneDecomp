// Name: core_door.cpp_CDoor_allowBulletHoles_FUN_00480e00
// Address: 00480e00
// Address Range: [[00480e00, 00480e0a]]
// Convention: __cdecl
// Signature: int core_door.cpp_CDoor_allowBulletHoles_FUN_00480e00(CDoor * this_ptr)

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_allowBulletHoles_FUN_00480e00(CDoor *this_ptr)

{
  return this_ptr->allow_bullet_holes;
}


// Assembly code:
// 00480e00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_door.cpp_CDoor_allowBulletHoles_FUN_00480e00
//   XREF to: Stack[0x4] (READ)
// 00480e04: MOV EAX,dword ptr [EAX + 0x9dc]
// 00480e0a: RET

// Name: core_door.cpp_CDoor_getGroundType_FUN_00480dd0
// Address: 00480dd0
// Address Range: [[00480dd0, 00480dda]]
// Convention: __cdecl
// Signature: int core_door.cpp_CDoor_getGroundType_FUN_00480dd0(CDoor * this_ptr)

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_getGroundType_FUN_00480dd0(CDoor *this_ptr)

{
  return this_ptr->ground_type;
}


// Assembly code:
// 00480dd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_door.cpp_CDoor_getGroundType_FUN_00480dd0
//   XREF to: Stack[0x4] (READ)
// 00480dd4: MOV EAX,dword ptr [EAX + 0x2d4]
// 00480dda: RET

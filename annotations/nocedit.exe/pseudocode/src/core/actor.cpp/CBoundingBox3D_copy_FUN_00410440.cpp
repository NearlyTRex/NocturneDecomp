// Name: core_actor.cpp_CBoundingBox3D_copy_FUN_00410440
// Address: 00410440
// Address Range: [[00410440, 00410485]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_actor.cpp_CBoundingBox3D_copy_FUN_00410440(CBoundingBox3D * this_ptr, CBoundingBox3D * other)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_actor_cpp_CBoundingBox3D_copy_FUN_00410440(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

{
  (this_ptr->min).x = (other->min).x;
  (this_ptr->min).y = (other->min).y;
  (this_ptr->min).z = (other->min).z;
  (this_ptr->max).x = (other->max).x;
  (this_ptr->max).y = (other->max).y;
  (this_ptr->max).z = (other->max).z;
  return this_ptr;
}


// Assembly code:
// 00410440: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_CBoundingBox3D_copy_FUN_00410440
//   XREF to: Stack[0x4] (READ)
// 00410444: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00410448: ADD EAX,0x4
// 0041044b: MOV EDX,dword ptr [ECX]
// 0041044d: MOV dword ptr [EAX + -0x4],EDX
// 00410450: LEA EDX,[ECX + 0x4]
// 00410453: ADD EAX,0x4
// 00410456: MOV EDX,dword ptr [EDX]
// 00410458: MOV dword ptr [EAX + -0x4],EDX
// 0041045b: LEA EDX,[ECX + 0x8]
// 0041045e: SUB EAX,0x8
// 00410461: MOV EDX,dword ptr [EDX]
// 00410463: MOV dword ptr [EAX + 0x8],EDX
// 00410466: LEA EDX,[EAX + 0xc]
// 00410469: LEA EAX,[ECX + 0xc]
// 0041046c: MOV ECX,dword ptr [EAX]
// 0041046e: MOV dword ptr [EDX],ECX
// 00410470: LEA ECX,[EAX + 0x4]
// 00410473: ADD EDX,0x4
// 00410476: MOV ECX,dword ptr [ECX]
// 00410478: MOV dword ptr [EDX],ECX
// 0041047a: ADD EDX,0x4
// 0041047d: MOV EAX,dword ptr [EAX + 0x8]
// 00410480: MOV dword ptr [EDX],EAX
// 00410482: LEA EAX,[EDX + -0x14]
// 00410485: RET

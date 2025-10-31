// Name: core_setdir.cpp_copySet_FUN_005768c0
// Address: 005768c0
// Address Range: [[005768c0, 005768ce]]
// Convention: __cdecl
// Signature: CDemonSet * core_setdir.cpp_copySet_FUN_005768c0(CDemonSet * * set1, CDemonSet * * set2)

#include "nocturne.h"

CDemonSet * __cdecl core_setdir_cpp_copySet_FUN_005768c0(CDemonSet **set1,CDemonSet **set2)

{
  *set1 = *set2;
  return (CDemonSet *)set1;
}


// Assembly code:
// 005768c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_setdir.cpp_copySet_FUN_005768c0
//   XREF to: Stack[0x4] (READ)
// 005768c4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005768c8: MOV EAX,dword ptr [EAX]
// 005768ca: MOV dword ptr [EDX],EAX
// 005768cc: MOV EAX,EDX
// 005768ce: RET

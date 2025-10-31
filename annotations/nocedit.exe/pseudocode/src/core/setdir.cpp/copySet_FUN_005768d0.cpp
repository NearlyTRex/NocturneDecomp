// Name: core_setdir.cpp_copySet_FUN_005768d0
// Address: 005768d0
// Address Range: [[005768d0, 005768de]]
// Convention: __cdecl
// Signature: CDemonSet * core_setdir.cpp_copySet_FUN_005768d0(CDemonSet * * set1, CDemonSet * * set2)

#include "nocturne.h"

CDemonSet * __cdecl core_setdir_cpp_copySet_FUN_005768d0(CDemonSet **set1,CDemonSet **set2)

{
  *set1 = *set2;
  return (CDemonSet *)set1;
}


// Assembly code:
// 005768d0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_setdir.cpp_copySet_FUN_005768d0
//   XREF to: Stack[0x4] (READ)
// 005768d4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005768d8: MOV EAX,dword ptr [EAX]
// 005768da: MOV dword ptr [EDX],EAX
// 005768dc: MOV EAX,EDX
// 005768de: RET

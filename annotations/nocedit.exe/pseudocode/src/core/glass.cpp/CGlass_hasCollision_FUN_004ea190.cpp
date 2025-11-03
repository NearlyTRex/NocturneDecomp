// Name: core_glass.cpp_CGlass_hasCollision_FUN_004ea190
// Address: 004ea190
// Address Range: [[004ea190, 004ea1b8]]
// Convention: __cdecl
// Signature: int core_glass.cpp_CGlass_hasCollision_FUN_004ea190(CGlass * this_ptr, SCollisionInfo * collision_info)

#include "nocturne.h"

int __cdecl
core_glass_cpp_CGlass_hasCollision_FUN_004ea190(CGlass *this_ptr,SCollisionInfo *collision_info)

{
  if ((this_ptr->shattered != 0) && (this_ptr->mirror_flag == 0)) {
    (this_ptr->base).field16_0x100 = 1;
    return 0;
  }
  return 1;
}


// Assembly code:
// 004ea190: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_glass.cpp_CGlass_hasCollision_FUN_004ea190
//   XREF to: Stack[0x4] (READ)
// 004ea194: CMP dword ptr [EAX + 0x180],0x0
// 004ea19b: JZ 0x004ea1a6
//   XREF to: 004ea1a6 (CONDITIONAL_JUMP)
// 004ea19d: CMP dword ptr [EAX + 0x1e8],0x0
// 004ea1a4: JZ 0x004ea1ac
//   XREF to: 004ea1ac (CONDITIONAL_JUMP)
// 004ea1a6: MOV EAX,0x1
//   Label: LAB_004ea1a6
// 004ea1ab: RET
// 004ea1ac: MOV dword ptr [EAX + 0x100],0x1
//   Label: LAB_004ea1ac
// 004ea1b6: XOR EAX,EAX
// 004ea1b8: RET

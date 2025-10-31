// Name: core_vessel.cpp_CCryptVessel_FUN_005e9b90
// Address: 005e9b90
// Address Range: [[005e9b90, 005e9baa]]
// Convention: __cdecl
// Signature: int core_vessel.cpp_CCryptVessel_FUN_005e9b90(CCryptVessel * this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9b90(CCryptVessel *this_ptr)

{
  if (((this_ptr->base_actor).was_created == 1) && (this_ptr->field3_0x2d4 == 0)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005e9b90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_vessel.cpp_CCryptVessel_FUN_005e9b90
//   XREF to: Stack[0x4] (READ)
// 005e9b94: MOV EDX,dword ptr [EAX + 0x70]
// 005e9b97: CMP EDX,0x1
// 005e9b9a: JNZ 0x005e9ba5
//   XREF to: 005e9ba5 (CONDITIONAL_JUMP)
// 005e9b9c: CMP dword ptr [EAX + 0x2d4],0x0
// 005e9ba3: JZ 0x005e9ba8
//   XREF to: 005e9ba8 (CONDITIONAL_JUMP)
// 005e9ba5: XOR EAX,EAX
//   Label: LAB_005e9ba5
// 005e9ba7: RET
// 005e9ba8: MOV EAX,EDX
//   Label: LAB_005e9ba8
// 005e9baa: RET

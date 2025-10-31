// Name: core_tvbat.cpp_CTVBat_FUN_005e50d0
// Address: 005e50d0
// Address Range: [[005e50d0, 005e50ef] [005e50f3, 005e50f8]]
// Convention: __cdecl
// Signature: int core_tvbat.cpp_CTVBat_FUN_005e50d0(CTVBat * this_ptr)

#include "nocturne.h"

int __cdecl core_tvbat_cpp_CTVBat_FUN_005e50d0(CTVBat *this_ptr)

{
  if ((0.0 < (this_ptr->base_enemy).base_character.hit_points) && (this_ptr->state != 3)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005e50d0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_tvbat.cpp_CTVBat_FUN_005e50d0
//   XREF to: Stack[0x4] (READ)
// 005e50d4: FLD float ptr [EDX + 0x243c]
// 005e50da: FLDZ
// 005e50dc: FCOMPP
// 005e50de: FNSTSW AX
// 005e50e0: SAHF
// 005e50e1: JNC 0x005e50f0
//   XREF to: 005e50f0 (CONDITIONAL_JUMP)
// 005e50e3: CMP dword ptr [EDX + 0xc078],0x3
// 005e50ea: JNZ 0x005e50f3
//   XREF to: 005e50f3 (CONDITIONAL_JUMP)
// 005e50ec: LEA EAX,[EAX]
// 005e50f3: MOV EAX,0x1
//   Label: LAB_005e50f3
// 005e50f8: RET

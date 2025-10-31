// Name: shape_meshlod.cpp_FUN_0051a83f
// Address: 0051a83f
// Address Range: [[0051a83f, 0051a861]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a83f()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a6b0 (0051a6b0) at 0051a760 [COMPUTED_JUMP]

#include "nocturne.h"

undefined4 *
shape_meshlod_cpp_FUN_0051a83f(undefined4 param_1,undefined4 param_2,undefined4 *unaff_EBX)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBX = *unaff_EBP;
  unaff_EBX[1] = unaff_EBP[1];
  unaff_EBX[2] = unaff_EBP[2];
  return unaff_EBX;
}


// Assembly code:
// 0051a83f: MOV EDX,dword ptr [EBP]
//   Label: shape_meshlod.cpp_FUN_0051a83f
// 0051a842: LEA ECX,[EBP + 0x4]
// 0051a845: MOV dword ptr [EBX],EDX
// 0051a847: LEA EDX,[EBX + 0x4]
// 0051a84a: MOV ECX,dword ptr [ECX]
// 0051a84c: MOV dword ptr [EDX],ECX
// 0051a84e: LEA ECX,[EDX + 0x4]
// 0051a851: LEA EDX,[EBP + 0x8]
// 0051a854: MOV EDX,dword ptr [EDX]
// 0051a856: MOV dword ptr [ECX],EDX
// 0051a858: MOV EAX,EBX
// 0051a85a: ADD ESP,0x14
// 0051a85d: POP EBP
// 0051a85e: POP EDI
// 0051a85f: POP ESI
// 0051a860: POP EBX
// 0051a861: RET

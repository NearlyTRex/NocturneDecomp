// Name: shape_meshlod.cpp_FUN_0051a862
// Address: 0051a862
// Address Range: [[0051a862, 0051a881]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a862()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a6b0 (0051a6b0) at 0051a760 [COMPUTED_JUMP]

#include "nocturne.h"

undefined4 *
shape_meshlod_cpp_FUN_0051a862(undefined4 param_1,undefined4 param_2,undefined4 *unaff_EBX)

{
  undefined4 *unaff_EDI;
  
  *unaff_EBX = *unaff_EDI;
  unaff_EBX[1] = unaff_EDI[1];
  unaff_EBX[2] = unaff_EDI[2];
  return unaff_EBX;
}


// Assembly code:
// 0051a862: MOV EDX,dword ptr [EDI]
//   Label: shape_meshlod.cpp_FUN_0051a862
// 0051a864: LEA ECX,[EDI + 0x4]
// 0051a867: MOV dword ptr [EBX],EDX
// 0051a869: LEA EDX,[EBX + 0x4]
// 0051a86c: MOV ECX,dword ptr [ECX]
// 0051a86e: MOV dword ptr [EDX],ECX
// 0051a870: LEA ECX,[EDI + 0x8]
// 0051a873: MOV ECX,dword ptr [ECX]
// 0051a875: MOV dword ptr [EDX + 0x4],ECX
// 0051a878: MOV EAX,EBX
// 0051a87a: ADD ESP,0x14
// 0051a87d: POP EBP
// 0051a87e: POP EDI
// 0051a87f: POP ESI
// 0051a880: POP EBX
// 0051a881: RET

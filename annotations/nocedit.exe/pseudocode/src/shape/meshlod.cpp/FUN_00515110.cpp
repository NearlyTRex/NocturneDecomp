// Name: shape_meshlod.cpp_FUN_00515110
// Address: 00515110
// Address Range: [[00515110, 0051514f]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00515110()
// Function calls:
//   shape_meshlod.cpp_FUN_00514f90

#include "nocturne.h"

double shape_meshlod_cpp_FUN_00515110(void)

{
  float *pfVar1;
  float *in_stack_00000004;
  
  pfVar1 = (float *)shape_meshlod_cpp_FUN_00514f90();
  return (double)((in_stack_00000004[2] - pfVar1[2]) * (in_stack_00000004[2] - pfVar1[2]) +
                 (in_stack_00000004[1] - pfVar1[1]) * (in_stack_00000004[1] - pfVar1[1]) +
                 (*in_stack_00000004 - *pfVar1) * (*in_stack_00000004 - *pfVar1));
}


// Assembly code:
// 00515110: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00515110
// 00515111: SUB ESP,0x20
// 00515114: MOV EBX,dword ptr [ESP + 0x28]
// 00515118: MOV EDX,dword ptr [ESP + 0x30]
// 0051511c: PUSH EDX
// 0051511d: MOV ECX,dword ptr [ESP + 0x30]
// 00515121: PUSH ECX
// 00515122: PUSH EBX
// 00515123: LEA EAX,[ESP + 0xc]
// 00515127: PUSH EAX
// 00515128: CALL shape_meshlod.cpp_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051512d: FLD float ptr [EBX]
// 0051512f: ADD ESP,0x10
// 00515132: FSUB float ptr [EAX]
// 00515134: FMUL ST0
// 00515136: FLD float ptr [EBX + 0x4]
// 00515139: FSUB float ptr [EAX + 0x4]
// 0051513c: FMUL ST0
// 0051513e: FLD float ptr [EBX + 0x8]
// 00515141: FXCH
// 00515143: FADDP ST2,ST0
// 00515145: FSUB float ptr [EAX + 0x8]
// 00515148: FMUL ST0
// 0051514a: FADDP
// 0051514c: FSTP double ptr [ESP + 0xc]

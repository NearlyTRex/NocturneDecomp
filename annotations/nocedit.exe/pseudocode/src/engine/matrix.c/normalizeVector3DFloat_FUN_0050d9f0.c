// Name: engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
// Address: 0050d9f0
// Address Range: [[0050d9f0, 0050dac0]]
// Convention: __cdecl
// Signature: CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * inputVector)
// Cross-references:
//   core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0 (004effb0) at 004f00b1 [UNCONDITIONAL_CALL]
//   core_moon.cpp_FUN_0052a2c0 (0052a2c0) at 0052a374 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005702b0 (005702b0) at 005704b8 [UNCONDITIONAL_CALL]
//   engine_light.cpp_calculatePhongLighting_FUN_00505530 (00505530) at 0050564f [UNCONDITIONAL_CALL]
// Globals:
//   double g_NormalizationScale = 65535

#include "nocturne.h"

CVector3i * __cdecl engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i *inputVector)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  CVector3i *unaff_ESI;
  int local_38;
  double local_30;
  double local_28;
  double local_20;
  
  dVar1 = (double)inputVector->x;
  dVar2 = (double)inputVector->y;
  dVar3 = (double)inputVector->z;
  dVar4 = SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  local_38 = SUB84(dVar4,0);
  if ((((ulonglong)dVar4 & 0x7fffffff00000000) == 0) && (local_38 == 0)) {
    local_20 = 0.0;
    local_28 = 0.0;
    local_30 = 0.0;
  }
  else {
    dVar4 = 1.0 / dVar4;
    local_30 = dVar1 * dVar4 * g_NormalizationScale;
    local_28 = dVar2 * dVar4 * g_NormalizationScale;
    local_20 = g_NormalizationScale * dVar3 * dVar4;
  }
  unaff_ESI->x = (int)ROUND(local_30);
  unaff_ESI->y = (int)ROUND(local_28);
  unaff_ESI->z = (int)ROUND(local_20);
  return unaff_ESI;
}


// Assembly code:
// 0050d9f0: PUSH EBX
//   Label: engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
// 0050d9f1: PUSH EDI
// 0050d9f2: PUSH EBP
// 0050d9f3: MOV EBP,ESP
// 0050d9f5: SUB ESP,0x44
// 0050d9f8: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050d9fb: MOV dword ptr [EBP + -0x4],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0050d9fe: FILD dword ptr [EAX]
// 0050da00: FSTP double ptr [EBP + -0x24]
//   XREF to: Stack[-0x30] (WRITE)
// 0050da03: FILD dword ptr [EAX + 0x4]
// 0050da06: FSTP double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x28] (WRITE)
// 0050da09: FILD dword ptr [EAX + 0x8]
// 0050da0c: FSTP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x20] (WRITE)
// 0050da0f: FLD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x30] (READ)
// 0050da12: FMUL ST0
// 0050da14: FLD double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x28] (READ)
// 0050da17: FMUL ST0
// 0050da19: FADDP
// 0050da1b: FLD double ptr [EBP + -0x14]
//   XREF to: Stack[-0x20] (READ)
// 0050da1e: FMUL ST0
// 0050da20: FADDP
// 0050da22: FSQRT
// 0050da24: FSTP double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x38] (WRITE)
// 0050da27: MOV EDX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x34] (READ)
// 0050da2a: MOV ECX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x38] (READ)
// 0050da2d: TEST EDX,0x7fffffff
// 0050da33: JNZ 0x0050da39
//   XREF to: 0050da39 (CONDITIONAL_JUMP)
// 0050da35: TEST ECX,ECX
// 0050da37: JZ 0x0050da9f
//   XREF to: 0050da9f (CONDITIONAL_JUMP)
// 0050da39: FLD1
//   Label: LAB_0050da39
// 0050da3b: FDIV double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x38] (READ)
// 0050da3e: FLD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x30] (READ)
// 0050da41: FMUL ST1
// 0050da43: FLD double ptr [0x00635ae5]
//   XREF to: 00635ae5 (READ)
// 0050da49: FXCH
// 0050da4b: FMUL ST1
// 0050da4d: FSTP double ptr [EBP + -0x24]
//   XREF to: Stack[-0x30] (WRITE)
// 0050da50: FLD double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x28] (READ)
// 0050da53: FMUL ST2
// 0050da55: FMUL ST1
// 0050da57: FSTP double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x28] (WRITE)
// 0050da5a: FLD double ptr [EBP + -0x14]
//   XREF to: Stack[-0x20] (READ)
// 0050da5d: FMULP ST2
// 0050da5f: FMULP
// 0050da61: FSTP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x20] (WRITE)
// 0050da64: LEA EBX,[EBP + 0xffffffc8]
//   Label: LAB_0050da64
//   XREF to: Stack[-0x44] (DATA)
// 0050da6a: FLD double ptr [EBP + 0xffffffdc]
//   XREF to: Stack[-0x30] (READ)
// 0050da70: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x44] (DATA)
// 0050da72: FLD double ptr [EBP + 0xffffffe4]
//   XREF to: Stack[-0x28] (READ)
// 0050da78: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x40] (WRITE)
// 0050da7b: FLD double ptr [EBP + 0xffffffec]
//   XREF to: Stack[-0x20] (READ)
// 0050da81: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x3c] (WRITE)
// 0050da84: LEA EDI,[EBP + -0x44]
//   XREF to: Stack[-0x50] (DATA)
// 0050da87: LEA ESI,[EBP + -0x38]
//   XREF to: Stack[-0x44] (DATA)
// 0050da8a: MOVSD ES:EDI,ESI
// 0050da8b: MOVSD ES:EDI,ESI
// 0050da8c: MOVSD ES:EDI,ESI
// 0050da8d: MOV EDI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x10] (READ)
// 0050da90: LEA ESI,[EBP + -0x44]
//   XREF to: Stack[-0x50] (DATA)
// 0050da93: MOVSD ES:EDI,ESI
// 0050da94: MOVSD ES:EDI,ESI
// 0050da95: MOVSD ES:EDI,ESI
// 0050da96: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x10] (READ)
// 0050da99: MOV ESP,EBP
// 0050da9b: POP EBP
// 0050da9c: POP EDI
// 0050da9d: POP EBX
// 0050da9e: RET
// 0050da9f: XOR EBX,EBX
//   Label: LAB_0050da9f
// 0050daa1: MOV dword ptr [EBP + -0x14],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0050daa4: MOV dword ptr [EBP + -0x10],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0050daa7: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x20] (READ)
// 0050daaa: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0050daad: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0050dab0: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0050dab3: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x28] (READ)
// 0050dab6: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0050dab9: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x24] (READ)
// 0050dabc: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0050dabf: JMP 0x0050da64
//   XREF to: 0050da64 (UNCONDITIONAL_JUMP)

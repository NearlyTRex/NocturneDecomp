// Name: core_mimic.cpp_FUN_0051f130
// Address: 0051f130
// Address Range: [[0051f130, 0051f181]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_0051f130()
// Globals:
//   int g_RelativeX
//   int g_LightDirectionX
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
// Function calls:
//   engine_matrix.c_matrixPush_FUN_0050d620

#include "nocturne.h"

void core_mimic_cpp_FUN_0051f130(void)

{
  engine_matrix_c_matrixPush_FUN_0050d620();
  g_RelativeX = -g_RelativeX;
  g_LightDirectionX = -g_LightDirectionX;
  g_TransformMatrix.m[0][0] = -g_TransformMatrix.m[0][0];
  g_TransformMatrix.m[0][1] = -g_TransformMatrix.m[0][1];
  g_TransformMatrix.m[0][2] = -g_TransformMatrix.m[0][2];
  return;
}


// Assembly code:
// 0051f130: PUSH EBX
//   Label: core_mimic.cpp_FUN_0051f130
// 0051f131: PUSH ESI
// 0051f132: PUSH EDI
// 0051f133: CALL engine_matrix.c_matrixPush_FUN_0050d620
//   XREF to: 0050d620 (UNCONDITIONAL_CALL)
// 0051f138: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0051f13e: MOV ECX,dword ptr [0x02d052dc]
//   XREF to: 02d052dc (READ)
// 0051f144: MOV EBX,dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0051f14a: MOV ESI,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0051f150: MOV EDI,dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0051f156: NEG EDX
// 0051f158: NEG ECX
// 0051f15a: NEG EBX
// 0051f15c: NEG ESI
// 0051f15e: NEG EDI
// 0051f160: MOV dword ptr [0x02d052b8],EDX
//   XREF to: 02d052b8 (WRITE)
// 0051f166: MOV dword ptr [0x02d052dc],ECX
//   XREF to: 02d052dc (WRITE)
// 0051f16c: MOV dword ptr [0x02d052e8],EBX
//   XREF to: 02d052e8 (WRITE)
// 0051f172: MOV dword ptr [0x02d052ec],ESI
//   XREF to: 02d052ec (WRITE)
// 0051f178: MOV dword ptr [0x02d052f0],EDI
//   XREF to: 02d052f0 (WRITE)
// 0051f17e: POP EDI
// 0051f17f: POP ESI
// 0051f180: POP EBX
// 0051f181: RET

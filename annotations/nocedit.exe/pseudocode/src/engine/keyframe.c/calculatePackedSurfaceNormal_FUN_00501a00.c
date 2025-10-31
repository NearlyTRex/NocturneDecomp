// Name: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
// Address: 00501a00
// Address Range: [[00501a00, 00501bbb]]
// Convention: __cdecl
// Signature: void engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00(CVector3i * vertex_data, SSurfacePackedNormal * data)
// Cross-references:
//   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 (00501f30) at 0050230b [UNCONDITIONAL_CALL]
//   engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320 (00502320) at 005023f9 [UNCONDITIONAL_CALL]
// Globals:
//   double g_NormalTo16BitScale1 = 65535
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
          (CVector3i *vertex_data,SSurfacePackedNormal *data)

{
  CVector3i *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  float local_30;
  
  iVar10 = data->vertex_index_1;
  pCVar1 = vertex_data + data->vertex_index_2;
  iVar2 = data->vertex_index_3;
  fVar8 = (float)(pCVar1->z - vertex_data[iVar10].z);
  fVar3 = (float)(vertex_data[iVar2].x - pCVar1->x);
  fVar7 = (float)(pCVar1->x - vertex_data[iVar10].x);
  fVar9 = (float)(vertex_data[iVar2].y - pCVar1->y);
  fVar5 = (float)(pCVar1->y - vertex_data[iVar10].y);
  fVar4 = (float)(vertex_data[iVar2].z - pCVar1->z);
  fVar6 = fVar5 * fVar4 - fVar9 * fVar8;
  fVar4 = fVar3 * fVar8 - fVar7 * fVar4;
  fVar3 = fVar7 * fVar9 - fVar3 * fVar5;
  local_30 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6);
  if (ABS(local_30) == 0.0) {
    local_30 = 65535.0;
  }
  local_30 = 1.0 / local_30;
  iVar10 = data->vertex_index_1;
  fVar7 = (float)g_NormalTo16BitScale1;
  fVar5 = fVar6 * local_30 * fVar7;
  fVar4 = fVar4 * local_30 * fVar7;
  fVar7 = fVar3 * local_30 * fVar7;
  fVar15 = (float10)vertex_data[iVar10].x * (float10)fVar5 +
           (float10)vertex_data[iVar10].y * (float10)fVar4;
  fVar11 = (float10)vertex_data[iVar10].z * (float10)fVar7;
  fVar12 = (float10)fVar5;
  fVar13 = (float10)fVar4;
  fVar14 = (float10)fVar7;
  dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(data,iVar10 * 3));
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  iVar10 = (int)((ulonglong)dVar16 >> 0x20);
  *(int *)(iVar10 + 8) = (int)ROUND(fVar12);
  *(int *)(iVar10 + 0xc) = (int)ROUND(fVar13);
  *(int *)(iVar10 + 0x10) = (int)ROUND(fVar14);
  fVar11 = fVar11 + fVar15;
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  *(int *)((int)((ulonglong)dVar16 >> 0x20) + 0x14) = (int)ROUND(fVar11);
  return;
}


// Assembly code:
// 00501a00: PUSH EBX
//   Label: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
// 00501a01: PUSH ESI
// 00501a02: PUSH EDI
// 00501a03: PUSH EBP
// 00501a04: SUB ESP,0x3c
// 00501a07: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 00501a0b: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 00501a0f: MOV ECX,dword ptr [EDX + 0x1c]
// 00501a12: LEA EAX,[ECX*0x4 + 0x0]
// 00501a19: SUB EAX,ECX
// 00501a1b: SHL EAX,0x2
// 00501a1e: MOV ESI,dword ptr [EDX + 0x18]
// 00501a21: LEA ECX,[EAX + EBX*0x1]
// 00501a24: LEA EAX,[ESI*0x4 + 0x0]
// 00501a2b: SUB EAX,ESI
// 00501a2d: MOV ESI,dword ptr [ECX]
// 00501a2f: SUB ESI,dword ptr [EBX + EAX*0x4]
// 00501a32: MOV EBP,dword ptr [EBX + EAX*0x4 + 0x4]
// 00501a36: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00501a3a: MOV ESI,dword ptr [ECX + 0x4]
// 00501a3d: SUB ESI,EBP
// 00501a3f: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00501a43: MOV ESI,dword ptr [ECX + 0x8]
// 00501a46: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x8]
// 00501a4a: MOV EAX,ESI
// 00501a4c: SUB EAX,EDI
// 00501a4e: MOV ESI,dword ptr [EDX + 0x20]
// 00501a51: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00501a55: LEA EAX,[ESI*0x4 + 0x0]
// 00501a5c: SUB EAX,ESI
// 00501a5e: MOV EBP,dword ptr [ECX]
// 00501a60: MOV ESI,dword ptr [EBX + EAX*0x4]
// 00501a63: SUB ESI,EBP
// 00501a65: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00501a69: FILD dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 00501a6d: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 00501a71: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x44] (WRITE)
// 00501a75: FXCH
// 00501a77: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4c] (DATA)
// 00501a7a: FMUL float ptr [ESP]
//   XREF to: Stack[-0x4c] (DATA)
// 00501a7d: MOV EDI,dword ptr [ECX + 0x4]
// 00501a80: MOV ESI,dword ptr [EBX + EAX*0x4 + 0x4]
// 00501a84: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 00501a88: SUB ESI,EDI
// 00501a8a: MOV EBP,dword ptr [ECX + 0x8]
// 00501a8d: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00501a91: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8]
// 00501a95: FLD ST0
// 00501a97: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 00501a9b: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (WRITE)
// 00501a9f: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (READ)
// 00501aa3: SUB EAX,EBP
// 00501aa5: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 00501aa9: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00501aad: FLD ST0
// 00501aaf: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 00501ab3: FXCH
// 00501ab5: FMUL ST1
// 00501ab7: FXCH ST4
// 00501ab9: FMULP
// 00501abb: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (READ)
// 00501abf: FMUL float ptr [ESP]
//   XREF to: Stack[-0x4c] (DATA)
// 00501ac2: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 00501ac6: FMULP ST3
// 00501ac8: FSUBP ST4,ST0
// 00501aca: FSUBP ST4,ST0
// 00501acc: FXCH ST2
// 00501ace: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (WRITE)
// 00501ad2: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 00501ad6: FXCH ST3
// 00501ad8: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 00501adc: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 00501ae0: FXCH ST2
// 00501ae2: FSUBP
// 00501ae4: FXCH
// 00501ae6: FADDP ST2,ST0
// 00501ae8: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (WRITE)
// 00501aec: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 00501af0: FADDP
// 00501af2: FSQRT
// 00501af4: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (WRITE)
// 00501af8: TEST dword ptr [ESP + 0x1c],0x7fffffff
//   XREF to: Stack[-0x30] (READ)
// 00501b00: JZ 0x00501baf
//   XREF to: 00501baf (CONDITIONAL_JUMP)
// 00501b06: FLD1
//   Label: LAB_00501b06
// 00501b08: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 00501b0c: FXCH
// 00501b0e: FDIV float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 00501b12: FXCH
// 00501b14: FMUL ST1
// 00501b16: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 00501b1a: FMUL ST2
// 00501b1c: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 00501b20: MOV ECX,dword ptr [EDX + 0x18]
// 00501b23: FMULP ST3
// 00501b25: LEA EAX,[ECX*0x4 + 0x0]
// 00501b2c: FXCH
// 00501b2e: FLD double ptr [0x00630c98]
//   XREF to: 00630c98 (READ)
// 00501b34: FXCH
// 00501b36: FMUL ST1
// 00501b38: SUB EAX,ECX
// 00501b3a: FXCH ST2
// 00501b3c: FMUL ST1
// 00501b3e: FILD dword ptr [EBX + EAX*0x4 + 0x4]
// 00501b42: FXCH
// 00501b44: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 00501b48: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 00501b4c: FXCH ST2
// 00501b4e: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (WRITE)
// 00501b52: FILD dword ptr [EBX + EAX*0x4]
// 00501b55: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 00501b59: FXCH ST3
// 00501b5b: FMULP
// 00501b5d: FXCH ST2
// 00501b5f: FADDP
// 00501b61: FXCH
// 00501b63: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (WRITE)
// 00501b67: FILD dword ptr [EBX + EAX*0x4 + 0x8]
// 00501b6b: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 00501b6f: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 00501b73: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 00501b77: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 00501b7b: FXCH ST2
// 00501b7d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00501b82: FXCH
// 00501b84: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00501b89: FXCH ST2
// 00501b8b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00501b90: FXCH
// 00501b92: FISTP dword ptr [EDX + 0x8]
// 00501b95: FXCH
// 00501b97: FISTP dword ptr [EDX + 0xc]
// 00501b9a: FISTP dword ptr [EDX + 0x10]
// 00501b9d: FADDP
// 00501b9f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00501ba4: FISTP dword ptr [EDX + 0x14]
// 00501ba7: ADD ESP,0x3c
// 00501baa: POP EBP
// 00501bab: POP EDI
// 00501bac: POP ESI
// 00501bad: POP EBX
// 00501bae: RET
// 00501baf: MOV dword ptr [ESP + 0x1c],0x477fff00
//   Label: LAB_00501baf
//   XREF to: Stack[-0x30] (WRITE)
// 00501bb7: JMP 0x00501b06
//   XREF to: 00501b06 (UNCONDITIONAL_JUMP)

// Name: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0
// Address: 0044dbd0
// Address Range: [[0044dbd0, 0044dddc]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0(CDemonCamera * this_ptr, CVector3i * input_vector, CVector3i * output_vector)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
// Function calls:
//   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0
          (CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  byte bVar5;
  uint auStackY_ffc [1013];
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  bVar5 = 0;
  lVar1 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].x +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].x +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].x;
  local_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].y +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].y +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].y;
  local_20 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].z +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].z +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].z;
  local_1c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar4 == 0) {
    lVar1 = (longlong)(int)local_1c * (longlong)input_vector[0x23].y +
            (longlong)(int)local_20 * (longlong)input_vector[0x22].y +
            (longlong)local_18 * (longlong)input_vector[0x24].y;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)local_1c * (longlong)input_vector[0x23].z +
            (longlong)(int)local_20 * (longlong)input_vector[0x22].z +
            (longlong)local_18 * (longlong)input_vector[0x24].z;
    local_10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *unaff_ESI = local_14;
    unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8);
    (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         *(uint *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    return;
  }
  lVar1 = (longlong)(&input_vector[0x19e].y)[iVar4] * (longlong)(int)local_20;
  lVar2 = (longlong)(&input_vector[0x1a6].y)[iVar4] * (longlong)(int)local_1c;
  lVar3 = (longlong)(&input_vector[0x1ae].y)[iVar4] * (longlong)local_18;
  local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)(&input_vector[0x1a1].x)[iVar4] * (longlong)(int)local_20;
  lVar2 = (longlong)(&input_vector[0x1a9].x)[iVar4] * (longlong)(int)local_1c;
  lVar3 = (longlong)(&input_vector[0x1b1].x)[iVar4] * (longlong)local_18;
  local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  *unaff_ESI = local_14;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}


// Assembly code:
// 0044dbd0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0
// 0044dbd1: PUSH EDI
// 0044dbd2: PUSH EBP
// 0044dbd3: SUB ESP,0x18
// 0044dbd6: MOV EBP,ESI
// 0044dbd8: MOV EDI,0x2d052e8
//   XREF to: 02d052e8 (DATA)
// 0044dbdd: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0044dbe1: MOV EAX,dword ptr [ESI]
// 0044dbe3: IMUL dword ptr [EDI]
//   XREF to: 02d052e8 (READ)
// 0044dbe5: MOV EBX,EAX
// 0044dbe7: MOV ECX,EDX
// 0044dbe9: MOV EAX,dword ptr [ESI + 0x4]
// 0044dbec: IMUL dword ptr [EDI + 0xc]
//   XREF to: 02d052f4 (READ)
// 0044dbef: ADD EBX,EAX
// 0044dbf1: ADC ECX,EDX
// 0044dbf3: MOV EAX,dword ptr [ESI + 0x8]
// 0044dbf6: IMUL dword ptr [EDI + 0x18]
//   XREF to: 02d05300 (READ)
// 0044dbf9: ADD EAX,EBX
// 0044dbfb: ADC EDX,ECX
// 0044dbfd: SHRD EAX,EDX,0x10
// 0044dc01: MOV EDI,0x2d052ec
//   XREF to: 02d052ec (DATA)
// 0044dc06: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0044dc0a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 0044dc0d: MOV EAX,dword ptr [ESI]
// 0044dc0f: IMUL dword ptr [EDI]
//   XREF to: 02d052ec (READ)
// 0044dc11: MOV EBX,EAX
// 0044dc13: MOV ECX,EDX
// 0044dc15: MOV EAX,dword ptr [ESI + 0x4]
// 0044dc18: IMUL dword ptr [EDI + 0xc]
//   XREF to: 02d052f8 (READ)
// 0044dc1b: ADD EBX,EAX
// 0044dc1d: ADC ECX,EDX
// 0044dc1f: MOV EAX,dword ptr [ESI + 0x8]
// 0044dc22: IMUL dword ptr [EDI + 0x18]
//   XREF to: 02d05304 (READ)
// 0044dc25: ADD EAX,EBX
// 0044dc27: ADC EDX,ECX
// 0044dc29: SHRD EAX,EDX,0x10
// 0044dc2d: MOV EDI,0x2d052f0
//   XREF to: 02d052f0 (DATA)
// 0044dc32: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0044dc36: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044dc3a: MOV EAX,dword ptr [ESI]
// 0044dc3c: IMUL dword ptr [EDI]
//   XREF to: 02d052f0 (READ)
// 0044dc3e: MOV EBX,EAX
// 0044dc40: MOV ECX,EDX
// 0044dc42: MOV EAX,dword ptr [ESI + 0x4]
// 0044dc45: IMUL dword ptr [EDI + 0xc]
//   XREF to: 02d052fc (READ)
// 0044dc48: ADD EBX,EAX
// 0044dc4a: ADC ECX,EDX
// 0044dc4c: MOV EAX,dword ptr [ESI + 0x8]
// 0044dc4f: IMUL dword ptr [EDI + 0x18]
//   XREF to: 02d05308 (READ)
// 0044dc52: ADD EAX,EBX
// 0044dc54: ADC EDX,ECX
// 0044dc56: SHRD EAX,EDX,0x10
// 0044dc5a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044dc60: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0044dc61: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044dc65: CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
// 0044dc6a: ADD ESP,0x4
// 0044dc6d: TEST EAX,EAX
// 0044dc6f: JNZ 0x0044dd17
//   XREF to: 0044dd17 (CONDITIONAL_JUMP)
// 0044dc75: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0044dc79: MOV ESI,ESP
// 0044dc7b: ADD EDI,0x19c
// 0044dc81: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x24] (DATA)
// 0044dc83: IMUL dword ptr [EDI]
// 0044dc85: MOV EBX,EAX
// 0044dc87: MOV ECX,EDX
// 0044dc89: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0044dc8c: IMUL dword ptr [EDI + 0xc]
// 0044dc8f: ADD EBX,EAX
// 0044dc91: ADC ECX,EDX
// 0044dc93: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0044dc96: IMUL dword ptr [EDI + 0x18]
// 0044dc99: ADD EAX,EBX
// 0044dc9b: ADC EDX,ECX
// 0044dc9d: SHRD EAX,EDX,0x10
// 0044dca1: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0044dca5: MOV ESI,ESP
// 0044dca7: ADD EDI,0x1a0
// 0044dcad: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044dcb1: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x24] (DATA)
// 0044dcb3: IMUL dword ptr [EDI]
// 0044dcb5: MOV EBX,EAX
// 0044dcb7: MOV ECX,EDX
// 0044dcb9: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0044dcbc: IMUL dword ptr [EDI + 0xc]
// 0044dcbf: ADD EBX,EAX
// 0044dcc1: ADC ECX,EDX
// 0044dcc3: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0044dcc6: IMUL dword ptr [EDI + 0x18]
// 0044dcc9: ADD EAX,EBX
// 0044dccb: ADC EDX,ECX
// 0044dccd: SHRD EAX,EDX,0x10
// 0044dcd1: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0044dcd5: MOV ESI,ESP
// 0044dcd7: ADD EDI,0x1a4
// 0044dcdd: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044dce1: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x24] (DATA)
// 0044dce3: IMUL dword ptr [EDI]
// 0044dce5: MOV EBX,EAX
// 0044dce7: MOV ECX,EDX
// 0044dce9: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0044dcec: IMUL dword ptr [EDI + 0xc]
// 0044dcef: ADD EBX,EAX
// 0044dcf1: ADC ECX,EDX
// 0044dcf3: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0044dcf6: IMUL dword ptr [EDI + 0x18]
// 0044dcf9: ADD EAX,EBX
// 0044dcfb: ADC EDX,ECX
// 0044dcfd: SHRD EAX,EDX,0x10
// 0044dd01: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0044dd05: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x18] (DATA)
// 0044dd09: MOV EDI,EBP
// 0044dd0b: MOVSD ES:EDI,ESI
// 0044dd0c: MOVSD ES:EDI,ESI
// 0044dd0d: MOVSD ES:EDI,ESI
// 0044dd0e: MOV EAX,EBP
// 0044dd10: ADD ESP,0x18
// 0044dd13: POP EBP
// 0044dd14: POP EDI
// 0044dd15: POP EBX
// 0044dd16: RET
// 0044dd17: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_0044dd17
//   XREF to: Stack[0x4] (READ)
// 0044dd1b: SHL EAX,0x2
// 0044dd1e: ADD ECX,EAX
// 0044dd20: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0044dd23: MOV EAX,dword ptr [ECX + 0x136c]
// 0044dd29: IMUL EDX
// 0044dd2b: SHRD EAX,EDX,0x10
// 0044dd2f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0044dd33: MOV ESI,EAX
// 0044dd35: MOV EAX,dword ptr [ECX + 0x13cc]
// 0044dd3b: IMUL EDX
// 0044dd3d: SHRD EAX,EDX,0x10
// 0044dd41: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0044dd45: ADD ESI,EAX
// 0044dd47: MOV EAX,dword ptr [ECX + 0x142c]
// 0044dd4d: IMUL EDX
// 0044dd4f: SHRD EAX,EDX,0x10
// 0044dd53: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0044dd56: ADD ESI,EAX
// 0044dd58: MOV EAX,dword ptr [ECX + 0x138c]
// 0044dd5e: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0044dd62: IMUL EDX
// 0044dd64: SHRD EAX,EDX,0x10
// 0044dd68: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0044dd6c: MOV ESI,EAX
// 0044dd6e: MOV EAX,dword ptr [ECX + 0x13ec]
// 0044dd74: IMUL EDX
// 0044dd76: SHRD EAX,EDX,0x10
// 0044dd7a: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0044dd7e: ADD ESI,EAX
// 0044dd80: MOV EAX,dword ptr [ECX + 0x144c]
// 0044dd86: IMUL EDX
// 0044dd88: SHRD EAX,EDX,0x10
// 0044dd8c: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0044dd8f: ADD ESI,EAX
// 0044dd91: MOV EAX,dword ptr [ECX + 0x13ac]
// 0044dd97: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0044dd9b: IMUL EDX
// 0044dd9d: SHRD EAX,EDX,0x10
// 0044dda1: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0044dda5: MOV ESI,EAX
// 0044dda7: MOV EAX,dword ptr [ECX + 0x140c]
// 0044ddad: IMUL EDX
// 0044ddaf: SHRD EAX,EDX,0x10
// 0044ddb3: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0044ddb7: ADD ESI,EAX
// 0044ddb9: MOV EAX,dword ptr [ECX + 0x146c]
// 0044ddbf: IMUL EDX
// 0044ddc1: SHRD EAX,EDX,0x10
// 0044ddc5: ADD ESI,EAX
// 0044ddc7: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0044ddcb: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x18] (DATA)
// 0044ddcf: MOV EDI,EBP
// 0044ddd1: MOVSD ES:EDI,ESI
// 0044ddd2: MOVSD ES:EDI,ESI
// 0044ddd3: MOVSD ES:EDI,ESI
// 0044ddd4: MOV EAX,EBP
// 0044ddd6: ADD ESP,0x18
// 0044ddd9: POP EBP
// 0044ddda: POP EDI
// 0044dddb: POP EBX
// 0044dddc: RET

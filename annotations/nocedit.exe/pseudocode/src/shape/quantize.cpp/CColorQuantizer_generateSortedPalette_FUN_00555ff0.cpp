// Name: shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
// Address: 00555ff0
// Address Range: [[00555ff0, 00556178]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0(CColorQuantizer * this_ptr, uchar * output_buffer)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0 (00554cc0) at 00554d31 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00640d83 = 0.590000000000000
//   double DOUBLE_00640d8b = 0.300000000000000
//   double DOUBLE_00640d93 = 0.110000000000000
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
          (CColorQuantizer *this_ptr,uchar *output_buffer)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CColorQuantizer *pCVar7;
  uchar *puVar8;
  int iVar9;
  CColorQuantizer *pCVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  
  iVar11 = 0;
  if (0 < this_ptr->num_colors) {
    fVar4 = (float)DOUBLE_00640d93;
    fVar5 = (float)DOUBLE_00640d8b;
    fVar6 = (float)DOUBLE_00640d83;
    pCVar7 = this_ptr;
    pCVar10 = this_ptr;
    do {
      pCVar7->palette[0].r = (float)pCVar10->boxes[0].avg_red;
      pCVar7->palette[0].g = (float)pCVar10->boxes[0].avg_green;
      sVar1 = pCVar10->boxes[0].avg_blue;
      fVar2 = pCVar7->palette[0].g;
      pCVar7->field12_0x30[0] = '\0';
      pCVar7->field12_0x30[1] = '\0';
      pCVar7->field12_0x30[2] = '\0';
      pCVar7->field12_0x30[3] = '\0';
      pCVar7->field12_0x30[4] = '\0';
      pCVar7->field12_0x30[5] = '\0';
      pCVar7->field12_0x30[6] = '\0';
      pCVar7->field12_0x30[7] = '\0';
      fVar3 = pCVar7->palette[0].r;
      pCVar7->field12_0x30[8] = '\0';
      pCVar7->field12_0x30[9] = '\0';
      pCVar7->field12_0x30[10] = '\0';
      pCVar7->field12_0x30[0xb] = '\0';
      pCVar7->palette[0].b = (float)sVar1;
      pCVar7->field12_0x30[0xc] = '\0';
      pCVar7->field12_0x30[0xd] = '\0';
      pCVar7->field12_0x30[0xe] = '\0';
      pCVar7->field12_0x30[0xf] = '\0';
      iVar11 = iVar11 + 1;
      pCVar7->palette[0].intensity = (float)sVar1 * fVar4 + fVar3 * fVar5 + fVar2 * fVar6;
      pCVar10 = (CColorQuantizer *)&pCVar10->current_b;
      pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
    } while (iVar11 < this_ptr->num_colors);
  }
  iVar11 = 0;
  if (0 < this_ptr->num_colors) {
    do {
      iVar9 = 0;
      pCVar7 = this_ptr;
      while (iVar9 < this_ptr->num_colors + -1) {
        if (pCVar7->palette[1].intensity < pCVar7->palette[0].intensity) {
          fVar4 = pCVar7->palette[0].r;
          fVar5 = pCVar7->palette[0].g;
          fVar6 = pCVar7->palette[0].b;
          fVar2 = pCVar7->palette[0].intensity;
          pCVar7->palette[0].r = pCVar7->palette[1].r;
          pCVar7->palette[0].g = pCVar7->palette[1].g;
          pCVar7->palette[0].b = pCVar7->palette[1].b;
          pCVar7->palette[0].intensity = pCVar7->palette[1].intensity;
          pCVar7->palette[1].r = fVar4;
          pCVar7->palette[1].g = fVar5;
          pCVar7->palette[1].b = fVar6;
          pCVar7->palette[1].intensity = fVar2;
          iVar9 = iVar9 + 1;
          pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
        }
        else {
          iVar9 = iVar9 + 1;
          pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < this_ptr->num_colors);
  }
  puVar8 = (uchar *)this_ptr->num_colors;
  iVar11 = 0;
  pCVar7 = this_ptr;
  if (0 < (int)puVar8) {
    do {
      fVar12 = (float10)pCVar7->palette[0].r;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pCVar7,output_buffer));
      iVar9 = (int)((ulonglong)dVar13 >> 0x20);
      *(char *)(SUB84(dVar13,0) + 2) = (char)(int)ROUND(fVar12);
      fVar12 = (float10)*(float *)(iVar9 + 0x1034);
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar9,SUB84(dVar13,0) + 3));
      *(char *)(SUB84(dVar13,0) + -2) = (char)(int)ROUND(fVar12);
      fVar12 = (float10)*(float *)((int)((ulonglong)dVar13 >> 0x20) + 0x1038);
      dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
      puVar8 = SUB84(dVar13,0);
      iVar11 = iVar11 + 1;
      puVar8[-3] = (uchar)(int)ROUND(fVar12);
      output_buffer = puVar8;
      pCVar7 = (CColorQuantizer *)((int)((ulonglong)dVar13 >> 0x20) + 0x10);
    } while (iVar11 < this_ptr->num_colors);
  }
  return (int)puVar8;
}


// Assembly code:
// 00555ff0: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
// 00555ff1: PUSH ESI
// 00555ff2: PUSH EDI
// 00555ff3: PUSH EBP
// 00555ff4: SUB ESP,0x14
// 00555ff7: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00555ffb: MOV EDX,dword ptr [EBX + 0x4b40]
// 00556001: XOR EBP,EBP
// 00556003: TEST EDX,EDX
// 00556005: JLE 0x00556096
//   XREF to: 00556096 (CONDITIONAL_JUMP)
// 0055600b: FLD double ptr [0x00640d93]
//   XREF to: 00640d93 (READ)
// 00556011: FLD double ptr [0x00640d8b]
//   XREF to: 00640d8b (READ)
// 00556017: MOV EAX,EBX
// 00556019: MOV EDX,EBX
// 0055601b: FLD double ptr [0x00640d83]
//   XREF to: 00640d83 (READ)
// 00556021: FILD word ptr [EDX + 0x2030]
//   Label: LAB_00556021
// 00556027: FSTP float ptr [EAX + 0x1030]
// 0055602d: ADD EAX,0x10
// 00556030: FILD word ptr [EDX + 0x2032]
// 00556036: FSTP float ptr [EAX + 0x1024]
// 0055603c: FILD word ptr [EDX + 0x2034]
// 00556042: FLD float ptr [EAX + 0x1024]
// 00556048: MOV dword ptr [EAX + 0x20],0x0
// 0055604f: FMUL ST2
// 00556051: MOV dword ptr [EAX + 0x24],0x0
// 00556058: FLD float ptr [EAX + 0x1020]
// 0055605e: FMUL ST4
// 00556060: MOV dword ptr [EAX + 0x28],0x0
// 00556067: FADDP
// 00556069: FXCH
// 0055606b: FST float ptr [EAX + 0x1028]
// 00556071: FMUL ST4
// 00556073: MOV dword ptr [EAX + 0x2c],0x0
// 0055607a: FADDP
// 0055607c: INC EBP
// 0055607d: FSTP float ptr [EAX + 0x102c]
// 00556083: MOV ECX,dword ptr [EBX + 0x4b40]
// 00556089: ADD EDX,0x28
// 0055608c: CMP EBP,ECX
// 0055608e: JL 0x00556021
//   XREF to: 00556021 (CONDITIONAL_JUMP)
// 00556090: FSTP ST0
// 00556092: FSTP ST0
// 00556094: FSTP ST0
// 00556096: MOV ESI,dword ptr [EBX + 0x4b40]
//   Label: LAB_00556096
// 0055609c: XOR EBP,EBP
// 0055609e: TEST ESI,ESI
// 005560a0: JLE 0x005560d5
//   XREF to: 005560d5 (CONDITIONAL_JUMP)
// 005560a2: MOV EDX,EBX
//   Label: LAB_005560a2
// 005560a4: XOR ECX,ECX
// 005560a6: MOV EAX,dword ptr [EBX + 0x4b40]
//   Label: LAB_005560a6
// 005560ac: DEC EAX
// 005560ad: CMP ECX,EAX
// 005560af: JGE 0x005560cc
//   XREF to: 005560cc (CONDITIONAL_JUMP)
// 005560b1: FLD float ptr [EDX + 0x103c]
// 005560b7: FCOMP float ptr [EDX + 0x104c]
// 005560bd: FNSTSW AX
// 005560bf: SAHF
// 005560c0: JA 0x00556148
//   XREF to: 00556148 (CONDITIONAL_JUMP)
// 005560c6: INC ECX
// 005560c7: ADD EDX,0x10
// 005560ca: JMP 0x005560a6
//   XREF to: 005560a6 (UNCONDITIONAL_JUMP)
// 005560cc: INC EBP
//   Label: LAB_005560cc
// 005560cd: CMP EBP,dword ptr [EBX + 0x4b40]
// 005560d3: JL 0x005560a2
//   XREF to: 005560a2 (CONDITIONAL_JUMP)
// 005560d5: MOV EAX,dword ptr [EBX + 0x4b40]
//   Label: LAB_005560d5
// 005560db: XOR EBP,EBP
// 005560dd: TEST EAX,EAX
// 005560df: JLE 0x00556140
//   XREF to: 00556140 (CONDITIONAL_JUMP)
// 005560e1: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005560e5: MOV EDX,EBX
// 005560e7: FLD float ptr [EDX + 0x1030]
//   Label: LAB_005560e7
// 005560ed: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005560f2: ADD EAX,0x3
// 005560f5: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 005560f9: MOV CL,byte ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 005560fd: MOV byte ptr [EAX + -0x1],CL
// 00556100: FLD float ptr [EDX + 0x1034]
// 00556106: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0055610b: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 0055610f: MOV CL,byte ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 00556113: MOV byte ptr [EAX + -0x2],CL
// 00556116: FLD float ptr [EDX + 0x1038]
// 0055611c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00556121: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 00556125: MOV CL,byte ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 00556129: INC EBP
// 0055612a: MOV byte ptr [EAX + -0x3],CL
// 0055612d: MOV ECX,dword ptr [EBX + 0x4b40]
// 00556133: ADD EDX,0x10
// 00556136: CMP EBP,ECX
// 00556138: JL 0x005560e7
//   XREF to: 005560e7 (CONDITIONAL_JUMP)
// 0055613a: LEA EAX,[EAX]
// 00556140: ADD ESP,0x14
//   Label: LAB_00556140
// 00556143: POP EBP
// 00556144: POP EDI
// 00556145: POP ESI
// 00556146: POP EBX
// 00556147: RET
// 00556148: MOV EDI,ESP
//   Label: LAB_00556148
// 0055614a: LEA ESI,[EDX + 0x1030]
// 00556150: MOVSD ES:EDI,ESI
// 00556151: MOVSD ES:EDI,ESI
// 00556152: MOVSD ES:EDI,ESI
// 00556153: MOVSD ES:EDI,ESI
// 00556154: LEA EDI,[EDX + 0x1030]
// 0055615a: LEA ESI,[EDX + 0x1040]
// 00556160: MOVSD ES:EDI,ESI
// 00556161: MOVSD ES:EDI,ESI
// 00556162: MOVSD ES:EDI,ESI
// 00556163: MOVSD ES:EDI,ESI
// 00556164: MOV ESI,ESP
// 00556166: LEA EDI,[EDX + 0x1040]
// 0055616c: MOVSD ES:EDI,ESI
// 0055616d: MOVSD ES:EDI,ESI
// 0055616e: MOVSD ES:EDI,ESI
// 0055616f: MOVSD ES:EDI,ESI
// 00556170: INC ECX
// 00556171: ADD EDX,0x10
// 00556174: JMP 0x005560a6
//   XREF to: 005560a6 (UNCONDITIONAL_JUMP)

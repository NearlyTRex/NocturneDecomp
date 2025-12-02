// Name: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
// Address: 0044d480
// Address Range: [[0044d480, 0044d5f0]]
// Convention: __cdecl
// Signature: CVector3f * core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480(CDemonCamera * this_ptr, CVector3f * output_ptr, int screen_x, int screen_y)
// Cross-references:
//   core_msnedit.cpp_FUN_0053c340 (0053c340) at 0053c3a5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583fa6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
          (CDemonCamera *this_ptr,CVector3f *output_ptr,int screen_x,int screen_y)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(((longlong)(screen_x * 0x10000 - (this_ptr->saved_viewport_rect).right) * 0x10000) /
               (longlong)(this_ptr->saved_viewport_rect).left);
  iVar4 = (int)(((longlong)(screen_y * 0x10000 - (this_ptr->saved_viewport_rect).bottom) * 0x10000)
               / (longlong)(this_ptr->saved_viewport_rect).top);
  lVar1 = (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[1].x +
          (longlong)iVar3 * (longlong)(this_ptr->inverted_matrix).m[0].x +
          (longlong)(this_ptr->inverted_matrix).m[2].x * 0x10000;
  output_ptr->x = (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[1].y +
          (longlong)iVar3 * (longlong)(this_ptr->inverted_matrix).m[0].y +
          (longlong)(this_ptr->inverted_matrix).m[2].y * 0x10000;
  output_ptr->y = (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[1].z +
          (longlong)iVar3 * (longlong)(this_ptr->inverted_matrix).m[0].z +
          (longlong)(this_ptr->inverted_matrix).m[2].z * 0x10000;
  fVar2 = (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  output_ptr->z = fVar2;
  fVar2 = SQRT(fVar2 * output_ptr->z + output_ptr->x * output_ptr->x + output_ptr->y * output_ptr->y
              );
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    output_ptr->x = output_ptr->x * fVar2;
    output_ptr->y = output_ptr->y * fVar2;
    output_ptr->z = output_ptr->z * fVar2;
    return output_ptr;
  }
  output_ptr->z = 0.0;
  output_ptr->y = output_ptr->z;
  output_ptr->x = output_ptr->y;
  return output_ptr;
}


// Assembly code:
// 0044d480: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
// 0044d481: PUSH ESI
// 0044d482: PUSH EDI
// 0044d483: PUSH EBP
// 0044d484: MOV EBP,ESP
// 0044d486: SUB ESP,0x14
// 0044d489: AND ESP,0xfffffff8
// 0044d48c: MOV EDX,0x10000
// 0044d491: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044d494: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0044d497: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044d49a: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044d49e: SHL EAX,0x10
// 0044d4a1: MOV ECX,dword ptr [ESI + 0x1c8]
// 0044d4a7: MOV EBX,dword ptr [EBX + 0x1c0]
// 0044d4ad: SUB EAX,ECX
// 0044d4af: IMUL EDX
// 0044d4b1: IDIV EBX
// 0044d4b3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0044d4b7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0044d4bb: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0044d4be: MOV EDI,dword ptr [ESI + 0x1cc]
// 0044d4c4: SHL EAX,0x10
// 0044d4c7: MOV EBX,dword ptr [ESI + 0x1c4]
// 0044d4cd: SUB EAX,EDI
// 0044d4cf: LEA EDI,[ESI + 0x19c]
// 0044d4d5: IMUL EDX
// 0044d4d7: IDIV EBX
// 0044d4d9: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0044d4dd: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044d4e1: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x24] (DATA)
// 0044d4e3: IMUL dword ptr [EDI]
// 0044d4e5: MOV EBX,EAX
// 0044d4e7: MOV ECX,EDX
// 0044d4e9: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0044d4ec: IMUL dword ptr [EDI + 0xc]
// 0044d4ef: ADD EBX,EAX
// 0044d4f1: ADC ECX,EDX
// 0044d4f3: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0044d4f6: IMUL dword ptr [EDI + 0x18]
// 0044d4f9: ADD EAX,EBX
// 0044d4fb: ADC EDX,ECX
// 0044d4fd: SHRD EAX,EDX,0x10
// 0044d501: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044d504: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0044d508: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044d50c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044d50f: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0044d513: ADD EDI,0x1a0
// 0044d519: FSTP float ptr [EAX]
// 0044d51b: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x24] (DATA)
// 0044d51d: IMUL dword ptr [EDI]
// 0044d51f: MOV EBX,EAX
// 0044d521: MOV ECX,EDX
// 0044d523: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0044d526: IMUL dword ptr [EDI + 0xc]
// 0044d529: ADD EBX,EAX
// 0044d52b: ADC ECX,EDX
// 0044d52d: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0044d530: IMUL dword ptr [EDI + 0x18]
// 0044d533: ADD EAX,EBX
// 0044d535: ADC EDX,ECX
// 0044d537: SHRD EAX,EDX,0x10
// 0044d53b: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044d53e: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0044d542: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044d546: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044d549: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0044d54d: ADD EDI,0x1a4
// 0044d553: FSTP float ptr [EAX + 0x4]
// 0044d556: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x24] (DATA)
// 0044d558: IMUL dword ptr [EDI]
// 0044d55a: MOV EBX,EAX
// 0044d55c: MOV ECX,EDX
// 0044d55e: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0044d561: IMUL dword ptr [EDI + 0xc]
// 0044d564: ADD EBX,EAX
// 0044d566: ADC ECX,EDX
// 0044d568: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0044d56b: IMUL dword ptr [EDI + 0x18]
// 0044d56e: ADD EAX,EBX
// 0044d570: ADC EDX,ECX
// 0044d572: SHRD EAX,EDX,0x10
// 0044d576: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044d57a: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044d57d: FLD float ptr [EAX + 0x4]
// 0044d580: FMUL ST0
// 0044d582: FLD float ptr [EAX]
// 0044d584: FMUL ST0
// 0044d586: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0044d58a: FXCH
// 0044d58c: FADDP ST2,ST0
// 0044d58e: FST float ptr [EAX + 0x8]
// 0044d591: FMUL float ptr [EAX + 0x8]
// 0044d594: FADDP
// 0044d596: FSQRT
// 0044d598: FST float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0044d59b: FLDZ
// 0044d59d: FCOMPP
// 0044d59f: FNSTSW AX
// 0044d5a1: SAHF
// 0044d5a2: JNC 0x0044d5d2
//   XREF to: 0044d5d2 (CONDITIONAL_JUMP)
// 0044d5a4: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044d5a7: FLD1
// 0044d5a9: FLD float ptr [EAX]
// 0044d5ab: FXCH
// 0044d5ad: FDIV float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0044d5b0: FXCH
// 0044d5b2: FMUL ST1
// 0044d5b4: FLD float ptr [EAX + 0x4]
// 0044d5b7: FMUL ST2
// 0044d5b9: FLD float ptr [EAX + 0x8]
// 0044d5bc: FMULP ST3
// 0044d5be: FXCH
// 0044d5c0: FSTP float ptr [EAX]
// 0044d5c2: FSTP float ptr [EAX + 0x4]
// 0044d5c5: FSTP float ptr [EAX + 0x8]
// 0044d5c8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044d5cb: MOV ESP,EBP
// 0044d5cd: POP EBP
// 0044d5ce: POP EDI
// 0044d5cf: POP ESI
// 0044d5d0: POP EBX
// 0044d5d1: RET
// 0044d5d2: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0044d5d2
//   XREF to: Stack[0x8] (READ)
// 0044d5d5: MOV dword ptr [EAX + 0x8],0x0
// 0044d5dc: MOV EDX,dword ptr [EAX + 0x8]
// 0044d5df: MOV dword ptr [EAX + 0x4],EDX
// 0044d5e2: MOV EDX,dword ptr [EAX + 0x4]
// 0044d5e5: MOV dword ptr [EAX],EDX
// 0044d5e7: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044d5ea: MOV ESP,EBP
// 0044d5ec: POP EBP
// 0044d5ed: POP EDI
// 0044d5ee: POP ESI
// 0044d5ef: POP EBX
// 0044d5f0: RET

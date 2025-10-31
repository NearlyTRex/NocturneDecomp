// Name: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
// Address: 00495aa0
// Address Range: [[00495aa0, 00495b6d]]
// Convention: __cdecl
// Signature: CVector3f * core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0(CDemonRaytrace * this_ptr, CVector3f * output_point, CVector3f * ray_start, CVector3f * ray_end)
// Cross-references:
//   core_drip.cpp_FUN_0048e2a0 (0048e2a0) at 0048e33d [UNCONDITIONAL_CALL]
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70

#include "nocturne.h"

CVector3f * __cdecl
core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
          (CDemonRaytrace *this_ptr,CVector3f *output_point,CVector3f *ray_start,CVector3f *ray_end)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                    (this_ptr,ray_start,ray_end,(CVector3f *)0x0,(int *)0x0);
  if ((0.0 <= fVar5) && (fVar5 < 1.0)) {
    fVar1 = ray_end->y;
    fVar2 = ray_start->y;
    fVar3 = ray_end->z;
    fVar4 = ray_start->z;
    output_point->x = ray_start->x + (ray_end->x - ray_start->x) * fVar5;
    output_point->y = ray_start->y + (fVar1 - fVar2) * fVar5;
    output_point->z = ray_start->z + (fVar3 - fVar4) * fVar5;
    return output_point;
  }
  output_point->x = ray_end->x;
  output_point->y = ray_end->y;
  output_point->z = ray_end->z;
  return output_point;
}


// Assembly code:
// 00495aa0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
// 00495aa1: PUSH ESI
// 00495aa2: PUSH EDI
// 00495aa3: PUSH EBP
// 00495aa4: MOV EBP,ESP
// 00495aa6: SUB ESP,0x28
// 00495aa9: AND ESP,0xfffffff8
// 00495aac: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00495aaf: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00495ab2: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00495ab5: PUSH 0x0
// 00495ab7: PUSH 0x0
// 00495ab9: PUSH EBX
// 00495aba: PUSH EDI
// 00495abb: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00495abe: PUSH EDX
// 00495abf: CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   XREF to: 00495b70 (UNCONDITIONAL_CALL)
// 00495ac4: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00495ac8: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 00495acc: ADD ESP,0x14
// 00495acf: FLDZ
// 00495ad1: FXCH
// 00495ad3: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 00495ad7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00495ada: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00495add: FNSTSW AX
// 00495adf: SAHF
// 00495ae0: JA 0x00495b51
//   XREF to: 00495b51 (CONDITIONAL_JUMP)
// 00495ae2: FLD1
// 00495ae4: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00495ae7: FNSTSW AX
// 00495ae9: SAHF
// 00495aea: JBE 0x00495b51
//   XREF to: 00495b51 (CONDITIONAL_JUMP)
// 00495aec: FLD float ptr [EBX]
// 00495aee: FSUB float ptr [EDI]
// 00495af0: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 00495af4: FLD float ptr [EBX + 0x4]
// 00495af7: FSUB float ptr [EDI + 0x4]
// 00495afa: FXCH
// 00495afc: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 00495b00: FXCH
// 00495b02: FMUL ST1
// 00495b04: FXCH ST2
// 00495b06: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00495b0a: FLD float ptr [EBX + 0x8]
// 00495b0d: FSUB float ptr [EDI + 0x8]
// 00495b10: FXCH
// 00495b12: FMUL ST2
// 00495b14: FXCH
// 00495b16: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 00495b1a: FMULP ST2
// 00495b1c: FXCH ST2
// 00495b1e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 00495b22: FXCH
// 00495b24: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 00495b28: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00495b2c: FLD float ptr [EDI]
// 00495b2e: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 00495b32: FSTP float ptr [ESI]
// 00495b34: FLD float ptr [EDI + 0x4]
// 00495b37: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00495b3b: FSTP float ptr [ESI + 0x4]
// 00495b3e: FLD float ptr [EDI + 0x8]
// 00495b41: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00495b45: FSTP float ptr [ESI + 0x8]
// 00495b48: MOV EAX,ESI
// 00495b4a: MOV ESP,EBP
// 00495b4c: POP EBP
// 00495b4d: POP EDI
// 00495b4e: POP ESI
// 00495b4f: POP EBX
// 00495b50: RET
// 00495b51: MOV EAX,dword ptr [EBX]
//   Label: LAB_00495b51
// 00495b53: MOV dword ptr [ESI],EAX
// 00495b55: LEA EAX,[EBX + 0x4]
// 00495b58: LEA EDI,[ESI + 0x4]
// 00495b5b: MOV EAX,dword ptr [EAX]
// 00495b5d: MOV dword ptr [EDI],EAX
// 00495b5f: MOV EAX,dword ptr [EBX + 0x8]
// 00495b62: MOV dword ptr [EDI + 0x4],EAX
// 00495b65: MOV EAX,ESI
// 00495b67: MOV ESP,EBP
// 00495b69: POP EBP
// 00495b6a: POP EDI
// 00495b6b: POP ESI
// 00495b6c: POP EBX
// 00495b6d: RET

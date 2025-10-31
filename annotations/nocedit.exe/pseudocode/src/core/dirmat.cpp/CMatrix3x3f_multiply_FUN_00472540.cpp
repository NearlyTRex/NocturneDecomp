// Name: core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540
// Address: 00472540
// Address Range: [[00472540, 00472674]]
// Convention: __cdecl
// Signature: CMatrix3x3f * core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540(CMatrix3x3f * this_ptr, CMatrix3x3f * matrix_a, CMatrix3x3f * matrix_b)

#include "nocturne.h"

CMatrix3x3f * __cdecl
core_dirmat_cpp_CMatrix3x3f_multiply_FUN_00472540
          (CMatrix3x3f *this_ptr,CMatrix3x3f *matrix_a,CMatrix3x3f *matrix_b)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_30[1] = this_ptr->m[0].z * matrix_a->m[2].y +
                this_ptr->m[0].x * matrix_a->m[0].y + this_ptr->m[0].y * matrix_a->m[1].y;
  local_30[2] = this_ptr->m[0].z * matrix_a->m[2].z +
                this_ptr->m[0].x * matrix_a->m[0].z + this_ptr->m[0].y * matrix_a->m[1].z;
  local_30[3] = this_ptr->m[1].z * matrix_a->m[2].x +
                this_ptr->m[1].x * matrix_a->m[0].x + this_ptr->m[1].y * matrix_a->m[1].x;
  local_20 = this_ptr->m[1].z * matrix_a->m[2].y +
             this_ptr->m[1].y * matrix_a->m[1].y + this_ptr->m[1].x * matrix_a->m[0].y;
  local_1c = this_ptr->m[1].z * matrix_a->m[2].z +
             this_ptr->m[1].y * matrix_a->m[1].z + this_ptr->m[1].x * matrix_a->m[0].z;
  local_18 = this_ptr->m[2].z * matrix_a->m[2].x +
             this_ptr->m[2].x * matrix_a->m[0].x + this_ptr->m[2].y * matrix_a->m[1].x;
  local_14 = this_ptr->m[2].z * matrix_a->m[2].y +
             this_ptr->m[2].y * matrix_a->m[1].y + this_ptr->m[2].x * matrix_a->m[0].y;
  local_10 = this_ptr->m[2].z * matrix_a->m[2].z +
             this_ptr->m[2].y * matrix_a->m[1].z + this_ptr->m[2].x * matrix_a->m[0].z;
  local_30[0] = this_ptr->m[0].z * matrix_a->m[2].x +
                this_ptr->m[0].x * matrix_a->m[0].x + this_ptr->m[0].y * matrix_a->m[1].x;
  pfVar2 = local_30;
  pfVar3 = unaff_ESI;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return (CMatrix3x3f *)unaff_ESI;
}


// Assembly code:
// 00472540: PUSH EBX
//   Label: core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540
// 00472541: PUSH EDI
// 00472542: SUB ESP,0x28
// 00472545: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00472549: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0047254d: MOV EBX,ESI
// 0047254f: FLD float ptr [EDX + 0x4]
// 00472552: FMUL float ptr [EAX + 0xc]
// 00472555: FLD float ptr [EDX + 0x4]
// 00472558: FMUL float ptr [EAX + 0x10]
// 0047255b: FLD float ptr [EDX + 0x4]
// 0047255e: FMUL float ptr [EAX + 0x14]
// 00472561: FLD float ptr [EDX + 0x10]
// 00472564: FMUL float ptr [EAX + 0xc]
// 00472567: FLD float ptr [EDX + 0xc]
// 0047256a: FMUL float ptr [EAX + 0x4]
// 0047256d: FLD float ptr [EDX]
// 0047256f: FMUL float ptr [EAX]
// 00472571: FLD float ptr [EDX]
// 00472573: FMUL float ptr [EAX + 0x4]
// 00472576: FXCH
// 00472578: FADDP ST6,ST0
// 0047257a: FADDP ST4,ST0
// 0047257c: FLD float ptr [EDX + 0x8]
// 0047257f: FMUL float ptr [EAX + 0x18]
// 00472582: FLD float ptr [EDX + 0x8]
// 00472585: FMUL float ptr [EAX + 0x1c]
// 00472588: FXCH
// 0047258a: FADDP ST6,ST0
// 0047258c: FLD float ptr [EDX]
// 0047258e: FXCH
// 00472590: FADDP ST5,ST0
// 00472592: FMUL float ptr [EAX + 0x8]
// 00472595: FXCH ST4
// 00472597: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 0047259b: FLD float ptr [EDX + 0xc]
// 0047259e: FXCH ST4
// 004725a0: FADDP ST3,ST0
// 004725a2: FXCH ST3
// 004725a4: FMUL float ptr [EAX + 0x8]
// 004725a7: FLD float ptr [EDX + 0x8]
// 004725aa: FMUL float ptr [EAX + 0x20]
// 004725ad: FLD float ptr [EDX + 0xc]
// 004725b0: FXCH
// 004725b2: FADDP ST4,ST0
// 004725b4: FMUL float ptr [EAX]
// 004725b6: FXCH ST3
// 004725b8: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 004725bc: FLD float ptr [EDX + 0x1c]
// 004725bf: FXCH ST3
// 004725c1: FADDP ST2,ST0
// 004725c3: FXCH ST2
// 004725c5: FMUL float ptr [EAX + 0xc]
// 004725c8: FLD float ptr [EDX + 0x14]
// 004725cb: FMUL float ptr [EAX + 0x18]
// 004725ce: FLD float ptr [EDX + 0x10]
// 004725d1: FXCH
// 004725d3: FADDP ST3,ST0
// 004725d5: FMUL float ptr [EAX + 0x10]
// 004725d8: FXCH ST2
// 004725da: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 004725de: FLD float ptr [EDX + 0x18]
// 004725e1: FXCH ST2
// 004725e3: FADDP ST4,ST0
// 004725e5: FXCH
// 004725e7: FMUL float ptr [EAX + 0x4]
// 004725ea: FLD float ptr [EDX + 0x14]
// 004725ed: FMUL float ptr [EAX + 0x1c]
// 004725f0: FLD float ptr [EDX + 0x10]
// 004725f3: FXCH
// 004725f5: FADDP ST5,ST0
// 004725f7: FMUL float ptr [EAX + 0x14]
// 004725fa: FXCH ST4
// 004725fc: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00472600: FLD float ptr [EDX + 0x18]
// 00472603: FXCH ST4
// 00472605: FADDP ST3,ST0
// 00472607: FXCH ST3
// 00472609: FMUL float ptr [EAX + 0x8]
// 0047260c: FLD float ptr [EDX + 0x14]
// 0047260f: FMUL float ptr [EAX + 0x20]
// 00472612: FLD float ptr [EDX + 0x18]
// 00472615: FMUL float ptr [EAX]
// 00472617: FXCH
// 00472619: FADDP ST4,ST0
// 0047261b: FLD float ptr [EDX + 0x1c]
// 0047261e: FXCH
// 00472620: FADDP ST3,ST0
// 00472622: FMUL float ptr [EAX + 0x10]
// 00472625: FLD float ptr [EDX + 0x20]
// 00472628: FMUL float ptr [EAX + 0x18]
// 0047262b: FXCH
// 0047262d: FADDP ST5,ST0
// 0047262f: FLD float ptr [EDX + 0x1c]
// 00472632: FMUL float ptr [EAX + 0x14]
// 00472635: FADDP ST2,ST0
// 00472637: FADDP ST2,ST0
// 00472639: FLD float ptr [EDX + 0x20]
// 0047263c: FMUL float ptr [EAX + 0x1c]
// 0047263f: FLD float ptr [EDX + 0x20]
// 00472642: FMUL float ptr [EAX + 0x20]
// 00472645: MOV ECX,0xa
// 0047264a: MOV EDI,ESI
// 0047264c: MOV ESI,ESP
// 0047264e: FXCH
// 00472650: FADDP ST5,ST0
// 00472652: FADDP
// 00472654: FXCH ST2
// 00472656: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 0047265a: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 0047265e: FXCH
// 00472660: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (WRITE)
// 00472664: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (WRITE)
// 00472668: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0047266b: MOVSD.REP ES:EDI,ESI
// 0047266d: MOV EAX,EBX
// 0047266f: ADD ESP,0x28
// 00472672: POP EDI
// 00472673: POP EBX
// 00472674: RET

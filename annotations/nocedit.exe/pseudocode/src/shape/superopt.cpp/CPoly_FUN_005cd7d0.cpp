// Name: shape_superopt.cpp_CPoly_FUN_005cd7d0
// Address: 005cd7d0
// Address Range: [[005cd7d0, 005cdfdf]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cd7d0(CPoly * this_ptr)
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7add [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cd7d0(CPoly *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 local_2d8;
  double local_2a8;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_b0;
  double local_a8;
  double local_a0;
  double *local_18;
  
  uStack_2ec = 0x3ff00000;
  local_2f0 = 0;
  pvVar4 = this_ptr->parent_obj->vertex_data;
  pdVar7 = (double *)((int)pvVar4 + this_ptr->vertex_idx_0 * 0x38);
  pdVar9 = (double *)((int)pvVar4 + this_ptr->vertex_idx_1 * 0x38);
  local_158 = *pdVar9 - *pdVar7;
  local_150 = pdVar9[1] - pdVar7[1];
  local_18 = (double *)((int)pvVar4 + this_ptr->vertex_idx_2 * 0x38);
  local_148 = pdVar9[2] - pdVar7[2];
  pdVar6 = &local_158;
  pdVar8 = &local_248;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar8 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar8 = (double *)((int)pdVar8 + 4);
  }
  local_190 = 1.0 / SQRT(local_238 * local_238 + local_248 * local_248 + local_240 * local_240);
  local_1a0 = local_248 * local_190;
  local_198 = local_240 * local_190;
  local_190 = local_238 * local_190;
  local_278 = *local_18 - *pdVar9;
  local_270 = local_18[1] - pdVar9[1];
  local_268 = local_18[2] - pdVar9[2];
  pdVar6 = &local_278;
  pdVar8 = &local_188;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar8 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar8 = (double *)((int)pdVar8 + 4);
  }
  local_250 = 1.0 / SQRT(local_178 * local_178 + local_188 * local_188 + local_180 * local_180);
  local_260 = local_188 * local_250;
  local_258 = local_180 * local_250;
  local_250 = local_178 * local_250;
  local_2d8 = local_1a0 * local_260 + local_198 * local_258 + local_190 * local_250;
  if (local_2d8 < 0.0) {
    local_2d8 = -local_2d8;
  }
  if (local_2d8 < 1.0) {
    local_2f0 = (undefined4)local_2d8;
    uStack_2ec = local_2d8._4_4_;
    local_1e8 = local_198 * local_250 - local_190 * local_258;
    local_1e0 = local_190 * local_260 - local_1a0 * local_250;
    local_1d8 = local_1a0 * local_258 - local_198 * local_260;
    (this_ptr->normal).x = local_1e8;
    (this_ptr->normal).y = local_1e0;
    (this_ptr->normal).z = local_1d8;
  }
  local_110 = *local_18 - *pdVar9;
  local_108 = local_18[1] - pdVar9[1];
  local_100 = local_18[2] - pdVar9[2];
  pdVar6 = &local_110;
  pdVar8 = &local_170;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar8 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar8 = (double *)((int)pdVar8 + 4);
  }
  dVar1 = 1.0 / SQRT(local_160 * local_160 + local_170 * local_170 + local_168 * local_168);
  local_f8 = local_170 * dVar1;
  local_f0 = local_168 * dVar1;
  local_e8 = local_160 * dVar1;
  local_1d0 = *pdVar7 - *local_18;
  local_1c8 = pdVar7[1] - local_18[1];
  local_1c0 = pdVar7[2] - local_18[2];
  pdVar6 = &local_1d0;
  pdVar8 = &local_200;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar8 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar8 = (double *)((int)pdVar8 + 4);
  }
  local_118 = 1.0 / SQRT(local_1f0 * local_1f0 + local_200 * local_200 + local_1f8 * local_1f8);
  local_128 = local_200 * local_118;
  local_120 = local_1f8 * local_118;
  local_118 = local_1f0 * local_118;
  local_2e8 = local_f8 * local_128 + local_f0 * local_120 + local_e8 * local_118;
  if (local_2e8 < 0.0) {
    local_2e8 = -local_2e8;
  }
  if (local_2e8 < (double)CONCAT44(uStack_2ec,local_2f0)) {
    local_2f0 = (undefined4)local_2e8;
    uStack_2ec = local_2e8._4_4_;
    local_b0 = local_f0 * local_118 - local_e8 * local_120;
    local_a8 = local_e8 * local_128 - local_f8 * local_118;
    local_a0 = local_f8 * local_120 - local_f0 * local_128;
    (this_ptr->normal).x = local_b0;
    (this_ptr->normal).y = local_a8;
    (this_ptr->normal).z = local_a0;
  }
  local_140 = *pdVar7 - *local_18;
  local_138 = pdVar7[1] - local_18[1];
  local_130 = pdVar7[2] - local_18[2];
  pdVar6 = &local_140;
  pdVar8 = &local_230;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar8 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar8 = (double *)((int)pdVar8 + 4);
  }
  dVar1 = 1.0 / SQRT(local_220 * local_220 + local_230 * local_230 + local_228 * local_228);
  local_218 = local_230 * dVar1;
  local_210 = local_228 * dVar1;
  local_208 = local_220 * dVar1;
  local_e0 = *pdVar9 - *pdVar7;
  local_d8 = pdVar9[1] - pdVar7[1];
  local_d0 = pdVar9[2] - pdVar7[2];
  pdVar7 = &local_e0;
  pdVar9 = &local_290;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar9 = *(undefined4 *)pdVar7;
    pdVar7 = (double *)((int)pdVar7 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dVar3 = 1.0 / SQRT(local_280 * local_280 + local_290 * local_290 + local_288 * local_288);
  dVar1 = local_290 * dVar3;
  dVar2 = local_288 * dVar3;
  dVar3 = local_280 * dVar3;
  local_2a8 = local_218 * dVar1 + local_210 * dVar2 + local_208 * dVar3;
  if (local_2a8 < 0.0) {
    local_2a8 = -local_2a8;
  }
  if (local_2a8 < (double)CONCAT44(uStack_2ec,local_2f0)) {
    (this_ptr->normal).x = local_210 * dVar3 - local_208 * dVar2;
    (this_ptr->normal).y = local_208 * dVar1 - local_218 * dVar3;
    (this_ptr->normal).z = local_218 * dVar2 - local_210 * dVar1;
  }
  dVar1 = (this_ptr->normal).y;
  dVar2 = (this_ptr->normal).x;
  dVar3 = (this_ptr->normal).z;
  dVar1 = 1.0 / SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  (this_ptr->normal).x = (this_ptr->normal).x * dVar1;
  (this_ptr->normal).y = (this_ptr->normal).y * dVar1;
  (this_ptr->normal).z = (this_ptr->normal).z * dVar1;
  return;
}


// Assembly code:
// 005cd7d0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cd7d0
// 005cd7d1: PUSH ESI
// 005cd7d2: PUSH EDI
// 005cd7d3: PUSH EBP
// 005cd7d4: MOV EBP,ESP
// 005cd7d6: SUB ESP,0x2dc
// 005cd7dc: AND ESP,0xfffffff8
// 005cd7df: MOV ECX,0x3ff00000
// 005cd7e4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cd7e7: XOR EDX,EDX
// 005cd7e9: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x2ec] (WRITE)
// 005cd7ed: MOV EAX,dword ptr [EAX + 0x4]
// 005cd7f0: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cd7f3: SHL EAX,0x3
// 005cd7f6: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x2f0] (DATA)
// 005cd7f9: MOV EDX,EAX
// 005cd7fb: MOV ECX,dword ptr [ECX]
// 005cd7fd: SHL EAX,0x3
// 005cd800: MOV ECX,dword ptr [ECX + 0x4]
// 005cd803: SUB EAX,EDX
// 005cd805: LEA EBX,[ECX + EAX*0x1]
// 005cd808: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cd80b: MOV EAX,dword ptr [EAX + 0x8]
// 005cd80e: SHL EAX,0x3
// 005cd811: MOV EDX,EAX
// 005cd813: SHL EAX,0x3
// 005cd816: SUB EAX,EDX
// 005cd818: LEA EDX,[ECX + EAX*0x1]
// 005cd81b: LEA EDI,[ESP + 0xa8]
//   XREF to: Stack[-0x248] (DATA)
// 005cd822: FLD double ptr [EDX]
// 005cd824: FLD double ptr [EDX + 0x8]
// 005cd827: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cd82a: FLD double ptr [EDX + 0x10]
// 005cd82d: MOV EAX,dword ptr [EAX + 0xc]
// 005cd830: FXCH ST2
// 005cd832: FSUB double ptr [EBX]
// 005cd834: FXCH
// 005cd836: FSUB double ptr [EBX + 0x8]
// 005cd839: SHL EAX,0x3
// 005cd83c: FXCH ST2
// 005cd83e: FSUB double ptr [EBX + 0x10]
// 005cd841: MOV ESI,EAX
// 005cd843: SHL EAX,0x3
// 005cd846: FXCH
// 005cd848: FSTP double ptr [ESP + 0x198]
//   XREF to: Stack[-0x158] (WRITE)
// 005cd84f: SUB EAX,ESI
// 005cd851: FXCH
// 005cd853: FSTP double ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x150] (WRITE)
// 005cd85a: ADD ECX,EAX
// 005cd85c: LEA ESI,[ESP + 0x198]
//   XREF to: Stack[-0x158] (DATA)
// 005cd863: MOV dword ptr [ESP + 0x2d8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005cd86a: MOV ECX,0x6
// 005cd86f: FSTP double ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x148] (WRITE)
// 005cd876: MOVSD.REP ES:EDI,ESI
// 005cd878: FLD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x240] (READ)
// 005cd87f: FMUL ST0
// 005cd881: FLD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x248] (READ)
// 005cd888: FMUL ST0
// 005cd88a: FADDP
// 005cd88c: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x238] (READ)
// 005cd893: FMUL ST0
// 005cd895: FADDP
// 005cd897: FSQRT
// 005cd899: FLD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x248] (READ)
// 005cd8a0: FLD1
// 005cd8a2: FDIVRP ST2,ST0
// 005cd8a4: FMUL ST1
// 005cd8a6: FLD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x240] (READ)
// 005cd8ad: FMUL ST2
// 005cd8af: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x238] (READ)
// 005cd8b6: FMULP ST3
// 005cd8b8: MOV ECX,0x6
// 005cd8bd: LEA EDI,[ESP + 0x168]
//   XREF to: Stack[-0x188] (DATA)
// 005cd8c4: LEA ESI,[ESP + 0x78]
//   XREF to: Stack[-0x278] (DATA)
// 005cd8c8: MOV EAX,dword ptr [ESP + 0x2d8]
//   XREF to: Stack[-0x18] (READ)
// 005cd8cf: FXCH
// 005cd8d1: FSTP double ptr [ESP + 0x150]
//   XREF to: Stack[-0x1a0] (WRITE)
// 005cd8d8: FSTP double ptr [ESP + 0x158]
//   XREF to: Stack[-0x198] (WRITE)
// 005cd8df: FSTP double ptr [ESP + 0x160]
//   XREF to: Stack[-0x190] (WRITE)
// 005cd8e6: FLD double ptr [EAX]
// 005cd8e8: FLD double ptr [EAX + 0x8]
// 005cd8eb: FLD double ptr [EAX + 0x10]
// 005cd8ee: FXCH ST2
// 005cd8f0: FSUB double ptr [EDX]
// 005cd8f2: FXCH
// 005cd8f4: FSUB double ptr [EDX + 0x8]
// 005cd8f7: FXCH ST2
// 005cd8f9: FSUB double ptr [EDX + 0x10]
// 005cd8fc: FXCH
// 005cd8fe: FSTP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x278] (WRITE)
// 005cd902: FXCH
// 005cd904: FSTP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x270] (WRITE)
// 005cd90b: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x268] (WRITE)
// 005cd912: MOVSD.REP ES:EDI,ESI
// 005cd914: FLD double ptr [ESP + 0x170]
//   XREF to: Stack[-0x180] (READ)
// 005cd91b: FMUL ST0
// 005cd91d: FLD double ptr [ESP + 0x168]
//   XREF to: Stack[-0x188] (READ)
// 005cd924: FMUL ST0
// 005cd926: FADDP
// 005cd928: FLD double ptr [ESP + 0x178]
//   XREF to: Stack[-0x178] (READ)
// 005cd92f: FMUL ST0
// 005cd931: FADDP
// 005cd933: FSQRT
// 005cd935: FLD double ptr [ESP + 0x168]
//   XREF to: Stack[-0x188] (READ)
// 005cd93c: FLD1
// 005cd93e: FDIVRP ST2,ST0
// 005cd940: FMUL ST1
// 005cd942: FLD double ptr [ESP + 0x170]
//   XREF to: Stack[-0x180] (READ)
// 005cd949: FMUL ST2
// 005cd94b: FLD double ptr [ESP + 0x178]
//   XREF to: Stack[-0x178] (READ)
// 005cd952: FMULP ST3
// 005cd954: FLD double ptr [ESP + 0x158]
//   XREF to: Stack[-0x198] (READ)
// 005cd95b: FXCH
// 005cd95d: FSTP double ptr [ESP + 0x98]
//   XREF to: Stack[-0x258] (WRITE)
// 005cd964: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x258] (READ)
// 005cd96b: FLD double ptr [ESP + 0x160]
//   XREF to: Stack[-0x190] (READ)
// 005cd972: FXCH ST3
// 005cd974: FSTP double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x250] (WRITE)
// 005cd97b: FXCH ST2
// 005cd97d: FMUL double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x250] (READ)
// 005cd984: FLD double ptr [ESP + 0x150]
//   XREF to: Stack[-0x1a0] (READ)
// 005cd98b: FXCH ST2
// 005cd98d: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x260] (WRITE)
// 005cd994: FXCH
// 005cd996: FMUL double ptr [ESP + 0x90]
//   XREF to: Stack[-0x260] (READ)
// 005cd99d: FXCH
// 005cd99f: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c8] (WRITE)
// 005cd9a3: FADDP
// 005cd9a5: FADD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c8] (READ)
// 005cd9a9: FLDZ
// 005cd9ab: FXCH
// 005cd9ad: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x2a0] (WRITE)
// 005cd9b1: FCOMP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x2a0] (READ)
// 005cd9b5: FNSTSW AX
// 005cd9b7: SAHF
// 005cd9b8: JBE 0x005cdef9
//   XREF to: 005cdef9 (CONDITIONAL_JUMP)
// 005cd9be: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x2a0] (READ)
// 005cd9c2: FCHS
// 005cd9c4: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x2d8] (WRITE)
// 005cd9c8: FLD double ptr [ESP + 0x18]
//   Label: LAB_005cd9c8
//   XREF to: Stack[-0x2d8] (READ)
// 005cd9cc: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x2f0] (DATA)
// 005cd9cf: FNSTSW AX
// 005cd9d1: SAHF
// 005cd9d2: JNC 0x005cda99
//   XREF to: 005cda99 (CONDITIONAL_JUMP)
// 005cd9d8: FLD double ptr [ESP + 0x158]
//   XREF to: Stack[-0x198] (READ)
// 005cd9df: FMUL double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x250] (READ)
// 005cd9e6: FLD double ptr [ESP + 0x160]
//   XREF to: Stack[-0x190] (READ)
// 005cd9ed: FMUL double ptr [ESP + 0x90]
//   XREF to: Stack[-0x260] (READ)
// 005cd9f4: FLD double ptr [ESP + 0x150]
//   XREF to: Stack[-0x1a0] (READ)
// 005cd9fb: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x258] (READ)
// 005cda02: FLD double ptr [ESP + 0x160]
//   XREF to: Stack[-0x190] (READ)
// 005cda09: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x258] (READ)
// 005cda10: FLD double ptr [ESP + 0x150]
//   XREF to: Stack[-0x1a0] (READ)
// 005cda17: FMUL double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x250] (READ)
// 005cda1e: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x2d8] (READ)
// 005cda22: FLD double ptr [ESP + 0x158]
//   XREF to: Stack[-0x198] (READ)
// 005cda29: FMUL double ptr [ESP + 0x90]
//   XREF to: Stack[-0x260] (READ)
// 005cda30: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2f0] (DATA)
// 005cda33: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2d4] (READ)
// 005cda37: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cda3a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2ec] (WRITE)
// 005cda3e: FXCH ST2
// 005cda40: FSUBP ST5,ST0
// 005cda42: FSUBP ST3,ST0
// 005cda44: FSUBP
// 005cda46: FXCH ST2
// 005cda48: FSTP double ptr [ESP + 0x108]
//   XREF to: Stack[-0x1e8] (WRITE)
// 005cda4f: FSTP double ptr [ESP + 0x110]
//   XREF to: Stack[-0x1e0] (WRITE)
// 005cda56: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x1e8] (READ)
// 005cda5d: FSTP double ptr [ESP + 0x118]
//   XREF to: Stack[-0x1d8] (WRITE)
// 005cda64: MOV dword ptr [ECX + 0x40],EAX
// 005cda67: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1e4] (READ)
// 005cda6e: MOV dword ptr [ECX + 0x44],EAX
// 005cda71: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x1e0] (READ)
// 005cda78: MOV dword ptr [ECX + 0x48],EAX
// 005cda7b: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x1dc] (READ)
// 005cda82: MOV dword ptr [ECX + 0x4c],EAX
// 005cda85: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x1d8] (READ)
// 005cda8c: MOV dword ptr [ECX + 0x50],EAX
// 005cda8f: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1d4] (READ)
// 005cda96: MOV dword ptr [ECX + 0x54],EAX
// 005cda99: MOV EAX,dword ptr [ESP + 0x2d8]
//   Label: LAB_005cda99
//   XREF to: Stack[-0x18] (READ)
// 005cdaa0: MOV ECX,0x6
// 005cdaa5: LEA EDI,[ESP + 0x180]
//   XREF to: Stack[-0x170] (DATA)
// 005cdaac: LEA ESI,[ESP + 0x1e0]
//   XREF to: Stack[-0x110] (DATA)
// 005cdab3: FLD double ptr [EAX]
// 005cdab5: FLD double ptr [EAX + 0x8]
// 005cdab8: FLD double ptr [EAX + 0x10]
// 005cdabb: FXCH ST2
// 005cdabd: FSUB double ptr [EDX]
// 005cdabf: FXCH
// 005cdac1: FSUB double ptr [EDX + 0x8]
// 005cdac4: FXCH ST2
// 005cdac6: FSUB double ptr [EDX + 0x10]
// 005cdac9: FXCH
// 005cdacb: FSTP double ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x110] (WRITE)
// 005cdad2: FXCH
// 005cdad4: FSTP double ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x108] (WRITE)
// 005cdadb: FSTP double ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x100] (WRITE)
// 005cdae2: MOVSD.REP ES:EDI,ESI
// 005cdae4: FLD double ptr [ESP + 0x188]
//   XREF to: Stack[-0x168] (READ)
// 005cdaeb: FMUL ST0
// 005cdaed: FLD double ptr [ESP + 0x180]
//   XREF to: Stack[-0x170] (READ)
// 005cdaf4: FMUL ST0
// 005cdaf6: FADDP
// 005cdaf8: FLD double ptr [ESP + 0x190]
//   XREF to: Stack[-0x160] (READ)
// 005cdaff: FMUL ST0
// 005cdb01: FADDP
// 005cdb03: FSQRT
// 005cdb05: FLD double ptr [ESP + 0x180]
//   XREF to: Stack[-0x170] (READ)
// 005cdb0c: FLD1
// 005cdb0e: FDIVRP ST2,ST0
// 005cdb10: FMUL ST1
// 005cdb12: FLD double ptr [ESP + 0x188]
//   XREF to: Stack[-0x168] (READ)
// 005cdb19: FMUL ST2
// 005cdb1b: FLD double ptr [ESP + 0x190]
//   XREF to: Stack[-0x160] (READ)
// 005cdb22: FMULP ST3
// 005cdb24: MOV ECX,0x6
// 005cdb29: LEA EDI,[ESP + 0xf0]
//   XREF to: Stack[-0x200] (DATA)
// 005cdb30: LEA ESI,[ESP + 0x120]
//   XREF to: Stack[-0x1d0] (DATA)
// 005cdb37: MOV EAX,dword ptr [ESP + 0x2d8]
//   XREF to: Stack[-0x18] (READ)
// 005cdb3e: FXCH
// 005cdb40: FSTP double ptr [ESP + 0x1f8]
//   XREF to: Stack[-0xf8] (WRITE)
// 005cdb47: FSTP double ptr [ESP + 0x200]
//   XREF to: Stack[-0xf0] (WRITE)
// 005cdb4e: FSTP double ptr [ESP + 0x208]
//   XREF to: Stack[-0xe8] (WRITE)
// 005cdb55: FLD double ptr [EBX]
// 005cdb57: FLD double ptr [EBX + 0x8]
// 005cdb5a: FLD double ptr [EBX + 0x10]
// 005cdb5d: FXCH ST2
// 005cdb5f: FSUB double ptr [EAX]
// 005cdb61: FXCH
// 005cdb63: FSUB double ptr [EAX + 0x8]
// 005cdb66: FXCH ST2
// 005cdb68: FSUB double ptr [EAX + 0x10]
// 005cdb6b: FXCH
// 005cdb6d: FSTP double ptr [ESP + 0x120]
//   XREF to: Stack[-0x1d0] (WRITE)
// 005cdb74: FXCH
// 005cdb76: FSTP double ptr [ESP + 0x128]
//   XREF to: Stack[-0x1c8] (WRITE)
// 005cdb7d: FSTP double ptr [ESP + 0x130]
//   XREF to: Stack[-0x1c0] (WRITE)
// 005cdb84: MOVSD.REP ES:EDI,ESI
// 005cdb86: FLD double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x1f8] (READ)
// 005cdb8d: FMUL ST0
// 005cdb8f: FLD double ptr [ESP + 0xf0]
//   XREF to: Stack[-0x200] (READ)
// 005cdb96: FMUL ST0
// 005cdb98: FADDP
// 005cdb9a: FLD double ptr [ESP + 0x100]
//   XREF to: Stack[-0x1f0] (READ)
// 005cdba1: FMUL ST0
// 005cdba3: FADDP
// 005cdba5: FSQRT
// 005cdba7: FLD1
// 005cdba9: FLD double ptr [ESP + 0xf0]
//   XREF to: Stack[-0x200] (READ)
// 005cdbb0: FXCH ST2
// 005cdbb2: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x2d0] (WRITE)
// 005cdbb6: FDIV double ptr [ESP + 0x20]
//   XREF to: Stack[-0x2d0] (READ)
// 005cdbba: FXCH
// 005cdbbc: FMUL ST1
// 005cdbbe: FLD double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x1f8] (READ)
// 005cdbc5: FMUL ST2
// 005cdbc7: FLD double ptr [ESP + 0x100]
//   XREF to: Stack[-0x1f0] (READ)
// 005cdbce: FMULP ST3
// 005cdbd0: FLD double ptr [ESP + 0x200]
//   XREF to: Stack[-0xf0] (READ)
// 005cdbd7: FXCH
// 005cdbd9: FSTP double ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x120] (WRITE)
// 005cdbe0: FMUL double ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x120] (READ)
// 005cdbe7: FLD double ptr [ESP + 0x208]
//   XREF to: Stack[-0xe8] (READ)
// 005cdbee: FXCH ST3
// 005cdbf0: FSTP double ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x118] (WRITE)
// 005cdbf7: FXCH ST2
// 005cdbf9: FMUL double ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x118] (READ)
// 005cdc00: FLD double ptr [ESP + 0x1f8]
//   XREF to: Stack[-0xf8] (READ)
// 005cdc07: FXCH ST2
// 005cdc09: FSTP double ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x128] (WRITE)
// 005cdc10: FXCH
// 005cdc12: FMUL double ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x128] (READ)
// 005cdc19: FXCH
// 005cdc1b: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c0] (WRITE)
// 005cdc1f: FADDP
// 005cdc21: FADD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c0] (READ)
// 005cdc25: FLDZ
// 005cdc27: FXCH
// 005cdc29: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2e0] (WRITE)
// 005cdc2d: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2e0] (READ)
// 005cdc31: FNSTSW AX
// 005cdc33: SAHF
// 005cdc34: JA 0x005cdf0e
//   XREF to: 005cdf0e (CONDITIONAL_JUMP)
// 005cdc3a: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2e0] (READ)
// 005cdc3e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2e8] (WRITE)
// 005cdc42: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2dc] (READ)
// 005cdc46: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2e4] (WRITE)
// 005cdc4a: FLD double ptr [ESP + 0x8]
//   Label: LAB_005cdc4a
//   XREF to: Stack[-0x2e8] (READ)
// 005cdc4e: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x2f0] (DATA)
// 005cdc51: FNSTSW AX
// 005cdc53: SAHF
// 005cdc54: JNC 0x005cdd1b
//   XREF to: 005cdd1b (CONDITIONAL_JUMP)
// 005cdc5a: FLD double ptr [ESP + 0x200]
//   XREF to: Stack[-0xf0] (READ)
// 005cdc61: FMUL double ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x118] (READ)
// 005cdc68: FLD double ptr [ESP + 0x208]
//   XREF to: Stack[-0xe8] (READ)
// 005cdc6f: FMUL double ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x128] (READ)
// 005cdc76: FLD double ptr [ESP + 0x1f8]
//   XREF to: Stack[-0xf8] (READ)
// 005cdc7d: FMUL double ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x120] (READ)
// 005cdc84: FLD double ptr [ESP + 0x208]
//   XREF to: Stack[-0xe8] (READ)
// 005cdc8b: FMUL double ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x120] (READ)
// 005cdc92: FLD double ptr [ESP + 0x1f8]
//   XREF to: Stack[-0xf8] (READ)
// 005cdc99: FMUL double ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x118] (READ)
// 005cdca0: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x2e8] (READ)
// 005cdca4: FLD double ptr [ESP + 0x200]
//   XREF to: Stack[-0xf0] (READ)
// 005cdcab: FMUL double ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x128] (READ)
// 005cdcb2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2f0] (DATA)
// 005cdcb5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2e4] (READ)
// 005cdcb9: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cdcbc: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2ec] (WRITE)
// 005cdcc0: FXCH ST2
// 005cdcc2: FSUBP ST5,ST0
// 005cdcc4: FSUBP ST3,ST0
// 005cdcc6: FSUBP
// 005cdcc8: FXCH ST2
// 005cdcca: FSTP double ptr [ESP + 0x240]
//   XREF to: Stack[-0xb0] (WRITE)
// 005cdcd1: FSTP double ptr [ESP + 0x248]
//   XREF to: Stack[-0xa8] (WRITE)
// 005cdcd8: MOV EAX,dword ptr [ESP + 0x240]
//   XREF to: Stack[-0xb0] (READ)
// 005cdcdf: FSTP double ptr [ESP + 0x250]
//   XREF to: Stack[-0xa0] (WRITE)
// 005cdce6: MOV dword ptr [ECX + 0x40],EAX
// 005cdce9: MOV EAX,dword ptr [ESP + 0x244]
//   XREF to: Stack[-0xac] (READ)
// 005cdcf0: MOV dword ptr [ECX + 0x44],EAX
// 005cdcf3: MOV EAX,dword ptr [ESP + 0x248]
//   XREF to: Stack[-0xa8] (READ)
// 005cdcfa: MOV dword ptr [ECX + 0x48],EAX
// 005cdcfd: MOV EAX,dword ptr [ESP + 0x24c]
//   XREF to: Stack[-0xa4] (READ)
// 005cdd04: MOV dword ptr [ECX + 0x4c],EAX
// 005cdd07: MOV EAX,dword ptr [ESP + 0x250]
//   XREF to: Stack[-0xa0] (READ)
// 005cdd0e: MOV dword ptr [ECX + 0x50],EAX
// 005cdd11: MOV EAX,dword ptr [ESP + 0x254]
//   XREF to: Stack[-0x9c] (READ)
// 005cdd18: MOV dword ptr [ECX + 0x54],EAX
// 005cdd1b: FLD double ptr [EBX]
//   Label: LAB_005cdd1b
// 005cdd1d: FLD double ptr [EBX + 0x8]
// 005cdd20: FLD double ptr [EBX + 0x10]
// 005cdd23: MOV EAX,dword ptr [ESP + 0x2d8]
//   XREF to: Stack[-0x18] (READ)
// 005cdd2a: MOV ECX,0x6
// 005cdd2f: LEA EDI,[ESP + 0xc0]
//   XREF to: Stack[-0x230] (DATA)
// 005cdd36: LEA ESI,[ESP + 0x1b0]
//   XREF to: Stack[-0x140] (DATA)
// 005cdd3d: FXCH ST2
// 005cdd3f: FSUB double ptr [EAX]
// 005cdd41: FXCH
// 005cdd43: FSUB double ptr [EAX + 0x8]
// 005cdd46: FXCH ST2
// 005cdd48: FSUB double ptr [EAX + 0x10]
// 005cdd4b: FXCH
// 005cdd4d: FSTP double ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x140] (WRITE)
// 005cdd54: FXCH
// 005cdd56: FSTP double ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x138] (WRITE)
// 005cdd5d: FSTP double ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x130] (WRITE)
// 005cdd64: MOVSD.REP ES:EDI,ESI
// 005cdd66: FLD double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x228] (READ)
// 005cdd6d: FMUL ST0
// 005cdd6f: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x230] (READ)
// 005cdd76: FMUL ST0
// 005cdd78: FADDP
// 005cdd7a: FLD double ptr [ESP + 0xd0]
//   XREF to: Stack[-0x220] (READ)
// 005cdd81: FMUL ST0
// 005cdd83: FADDP
// 005cdd85: FSQRT
// 005cdd87: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x230] (READ)
// 005cdd8e: FLD1
// 005cdd90: FDIVRP ST2,ST0
// 005cdd92: FMUL ST1
// 005cdd94: FLD double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x228] (READ)
// 005cdd9b: FMUL ST2
// 005cdd9d: FLD double ptr [ESP + 0xd0]
//   XREF to: Stack[-0x220] (READ)
// 005cdda4: FMULP ST3
// 005cdda6: MOV ECX,0x6
// 005cddab: LEA EDI,[ESP + 0x60]
//   XREF to: Stack[-0x290] (DATA)
// 005cddaf: LEA ESI,[ESP + 0x210]
//   XREF to: Stack[-0xe0] (DATA)
// 005cddb6: FXCH
// 005cddb8: FSTP double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x218] (WRITE)
// 005cddbf: FSTP double ptr [ESP + 0xe0]
//   XREF to: Stack[-0x210] (WRITE)
// 005cddc6: FSTP double ptr [ESP + 0xe8]
//   XREF to: Stack[-0x208] (WRITE)
// 005cddcd: FLD double ptr [EDX]
// 005cddcf: FLD double ptr [EDX + 0x8]
// 005cddd2: FLD double ptr [EDX + 0x10]
// 005cddd5: FXCH ST2
// 005cddd7: FSUB double ptr [EBX]
// 005cddd9: FXCH
// 005cdddb: FSUB double ptr [EBX + 0x8]
// 005cddde: FXCH ST2
// 005cdde0: FSUB double ptr [EBX + 0x10]
// 005cdde3: FXCH
// 005cdde5: FSTP double ptr [ESP + 0x210]
//   XREF to: Stack[-0xe0] (WRITE)
// 005cddec: FXCH
// 005cddee: FSTP double ptr [ESP + 0x218]
//   XREF to: Stack[-0xd8] (WRITE)
// 005cddf5: FSTP double ptr [ESP + 0x220]
//   XREF to: Stack[-0xd0] (WRITE)
// 005cddfc: MOVSD.REP ES:EDI,ESI
// 005cddfe: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x288] (READ)
// 005cde02: FMUL ST0
// 005cde04: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x290] (READ)
// 005cde08: FMUL ST0
// 005cde0a: FADDP
// 005cde0c: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x280] (READ)
// 005cde10: FMUL ST0
// 005cde12: FADDP
// 005cde14: FSQRT
// 005cde16: FLD1
// 005cde18: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x290] (READ)
// 005cde1c: FXCH ST2
// 005cde1e: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x2b8] (WRITE)
// 005cde22: FDIV double ptr [ESP + 0x38]
//   XREF to: Stack[-0x2b8] (READ)
// 005cde26: FXCH
// 005cde28: FMUL ST1
// 005cde2a: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x288] (READ)
// 005cde2e: FMUL ST2
// 005cde30: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x280] (READ)
// 005cde34: FMULP ST3
// 005cde36: FLD double ptr [ESP + 0xe0]
//   XREF to: Stack[-0x210] (READ)
// 005cde3d: FXCH
// 005cde3f: FSTP double ptr [ESP + 0x230]
//   XREF to: Stack[-0xc0] (WRITE)
// 005cde46: FMUL double ptr [ESP + 0x230]
//   XREF to: Stack[-0xc0] (READ)
// 005cde4d: FLD double ptr [ESP + 0xe8]
//   XREF to: Stack[-0x208] (READ)
// 005cde54: FXCH ST3
// 005cde56: FSTP double ptr [ESP + 0x238]
//   XREF to: Stack[-0xb8] (WRITE)
// 005cde5d: FXCH ST2
// 005cde5f: FMUL double ptr [ESP + 0x238]
//   XREF to: Stack[-0xb8] (READ)
// 005cde66: FLD double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x218] (READ)
// 005cde6d: FXCH ST2
// 005cde6f: FSTP double ptr [ESP + 0x228]
//   XREF to: Stack[-0xc8] (WRITE)
// 005cde76: FXCH
// 005cde78: FMUL double ptr [ESP + 0x228]
//   XREF to: Stack[-0xc8] (READ)
// 005cde7f: FXCH
// 005cde81: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x2b0] (WRITE)
// 005cde85: FADDP
// 005cde87: FADD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x2b0] (READ)
// 005cde8b: FLDZ
// 005cde8d: FXCH
// 005cde8f: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x298] (WRITE)
// 005cde93: FCOMP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x298] (READ)
// 005cde97: FNSTSW AX
// 005cde99: SAHF
// 005cde9a: JA 0x005cdf1d
//   XREF to: 005cdf1d (CONDITIONAL_JUMP)
// 005cdea0: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x298] (READ)
// 005cdea4: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x2a8] (WRITE)
// 005cdea8: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x294] (READ)
// 005cdeac: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x2a4] (WRITE)
// 005cdeb0: FLD double ptr [ESP + 0x48]
//   Label: LAB_005cdeb0
//   XREF to: Stack[-0x2a8] (READ)
// 005cdeb4: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x2f0] (DATA)
// 005cdeb7: FNSTSW AX
// 005cdeb9: SAHF
// 005cdeba: JC 0x005cdf29
//   XREF to: 005cdf29 (CONDITIONAL_JUMP)
// 005cdebc: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_005cdebc
//   XREF to: Stack[0x4] (READ)
// 005cdebf: FLD double ptr [EDX + 0x48]
// 005cdec2: FMUL ST0
// 005cdec4: FLD double ptr [EDX + 0x40]
// 005cdec7: FMUL ST0
// 005cdec9: FADDP
// 005cdecb: FLD double ptr [EDX + 0x50]
// 005cdece: FMUL ST0
// 005cded0: FADDP
// 005cded2: FSQRT
// 005cded4: FLD double ptr [EDX + 0x40]
// 005cded7: FLD1
// 005cded9: FDIVRP ST2,ST0
// 005cdedb: FMUL ST1
// 005cdedd: FLD double ptr [EDX + 0x48]
// 005cdee0: FMUL ST2
// 005cdee2: FLD double ptr [EDX + 0x50]
// 005cdee5: FMULP ST3
// 005cdee7: FXCH
// 005cdee9: FSTP double ptr [EDX + 0x40]
// 005cdeec: FSTP double ptr [EDX + 0x48]
// 005cdeef: FSTP double ptr [EDX + 0x50]
// 005cdef2: MOV ESP,EBP
// 005cdef4: POP EBP
// 005cdef5: POP EDI
// 005cdef6: POP ESI
// 005cdef7: POP EBX
// 005cdef8: RET
// 005cdef9: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_005cdef9
//   XREF to: Stack[-0x2a0] (READ)
// 005cdefd: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x2d8] (WRITE)
// 005cdf01: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x29c] (READ)
// 005cdf05: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x2d4] (WRITE)
// 005cdf09: JMP 0x005cd9c8
//   XREF to: 005cd9c8 (UNCONDITIONAL_JUMP)
// 005cdf0e: FLD double ptr [ESP + 0x10]
//   Label: LAB_005cdf0e
//   XREF to: Stack[-0x2e0] (READ)
// 005cdf12: FCHS
// 005cdf14: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x2e8] (WRITE)
// 005cdf18: JMP 0x005cdc4a
//   XREF to: 005cdc4a (UNCONDITIONAL_JUMP)
// 005cdf1d: FLD double ptr [ESP + 0x58]
//   Label: LAB_005cdf1d
//   XREF to: Stack[-0x298] (READ)
// 005cdf21: FCHS
// 005cdf23: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x2a8] (WRITE)
// 005cdf27: JMP 0x005cdeb0
//   XREF to: 005cdeb0 (UNCONDITIONAL_JUMP)
// 005cdf29: FLD double ptr [ESP + 0xe0]
//   Label: LAB_005cdf29
//   XREF to: Stack[-0x210] (READ)
// 005cdf30: FMUL double ptr [ESP + 0x238]
//   XREF to: Stack[-0xb8] (READ)
// 005cdf37: FLD double ptr [ESP + 0xe8]
//   XREF to: Stack[-0x208] (READ)
// 005cdf3e: FMUL double ptr [ESP + 0x228]
//   XREF to: Stack[-0xc8] (READ)
// 005cdf45: FLD double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x218] (READ)
// 005cdf4c: FMUL double ptr [ESP + 0x230]
//   XREF to: Stack[-0xc0] (READ)
// 005cdf53: FLD double ptr [ESP + 0xe8]
//   XREF to: Stack[-0x208] (READ)
// 005cdf5a: FMUL double ptr [ESP + 0x230]
//   XREF to: Stack[-0xc0] (READ)
// 005cdf61: FLD double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x218] (READ)
// 005cdf68: FMUL double ptr [ESP + 0x238]
//   XREF to: Stack[-0xb8] (READ)
// 005cdf6f: FLD double ptr [ESP + 0xe0]
//   XREF to: Stack[-0x210] (READ)
// 005cdf76: FMUL double ptr [ESP + 0x228]
//   XREF to: Stack[-0xc8] (READ)
// 005cdf7d: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cdf80: FXCH ST2
// 005cdf82: FSUBP ST5,ST0
// 005cdf84: FSUBP ST3,ST0
// 005cdf86: FSUBP
// 005cdf88: FXCH ST2
// 005cdf8a: FSTP double ptr [ESP + 0x138]
//   XREF to: Stack[-0x1b8] (WRITE)
// 005cdf91: FSTP double ptr [ESP + 0x140]
//   XREF to: Stack[-0x1b0] (WRITE)
// 005cdf98: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x1b8] (READ)
// 005cdf9f: FSTP double ptr [ESP + 0x148]
//   XREF to: Stack[-0x1a8] (WRITE)
// 005cdfa6: MOV dword ptr [EDX + 0x40],EAX
// 005cdfa9: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x1b4] (READ)
// 005cdfb0: MOV dword ptr [EDX + 0x44],EAX
// 005cdfb3: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x1b0] (READ)
// 005cdfba: MOV dword ptr [EDX + 0x48],EAX
// 005cdfbd: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x1ac] (READ)
// 005cdfc4: MOV dword ptr [EDX + 0x4c],EAX
// 005cdfc7: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x1a8] (READ)
// 005cdfce: MOV dword ptr [EDX + 0x50],EAX
// 005cdfd1: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x1a4] (READ)
// 005cdfd8: MOV dword ptr [EDX + 0x54],EAX
// 005cdfdb: JMP 0x005cdebc
//   XREF to: 005cdebc (UNCONDITIONAL_JUMP)

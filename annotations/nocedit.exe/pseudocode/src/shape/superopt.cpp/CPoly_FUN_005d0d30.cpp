// Name: shape_superopt.cpp_CPoly_FUN_005d0d30
// Address: 005d0d30
// Address Range: [[005d0d30, 005d0e1e]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005d0d30(CPoly * this_ptr)
// Globals:
//   double DOUBLE_0065430a = 0.333333333333333

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005d0d30(CPoly *this_ptr)

{
  CVert *pCVar1;
  CVert *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  double *pdVar4;
  double *pdVar5;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  CVert *local_10;
  
  pCVar2 = this_ptr->parent_obj->vertex_data;
  local_10 = pCVar2 + this_ptr->vertex_idx_2;
  pCVar1 = pCVar2 + this_ptr->vertex_idx_1;
  iVar3 = this_ptr->vertex_idx_0;
  local_40 = pCVar2[iVar3].position.impl.x + (pCVar1->position).impl.x;
  local_38 = pCVar2[iVar3].position.impl.y + (pCVar1->position).impl.y;
  local_30 = pCVar2[iVar3].position.impl.z + (pCVar1->position).impl.z;
  pdVar4 = &local_40;
  pdVar5 = &local_58;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pdVar5 = *(undefined4 *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  local_88 = local_58 + (local_10->position).impl.x;
  local_80 = local_50 + (local_10->position).impl.y;
  local_78 = local_48 + (local_10->position).impl.z;
  pdVar4 = &local_88;
  pdVar5 = &local_28;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pdVar5 = *(undefined4 *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  local_70 = local_28 * DOUBLE_0065430a;
  local_68 = local_20 * DOUBLE_0065430a;
  local_60 = local_18 * DOUBLE_0065430a;
  pdVar4 = &local_70;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *(undefined4 *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005d0d30: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005d0d30
// 005d0d31: PUSH EDI
// 005d0d32: PUSH EBP
// 005d0d33: MOV EBP,ESP
// 005d0d35: SUB ESP,0x7c
// 005d0d38: AND ESP,0xfffffff8
// 005d0d3b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d0d3e: MOV EDX,ESI
// 005d0d40: MOV EAX,dword ptr [EBX + 0xc]
// 005d0d43: SHL EAX,0x3
// 005d0d46: MOV ESI,dword ptr [EBX]
// 005d0d48: MOV ECX,EAX
// 005d0d4a: SHL EAX,0x3
// 005d0d4d: MOV ESI,dword ptr [ESI + 0x4]
// 005d0d50: SUB EAX,ECX
// 005d0d52: LEA ECX,[ESI + EAX*0x1]
// 005d0d55: MOV EAX,dword ptr [EBX + 0x8]
// 005d0d58: SHL EAX,0x3
// 005d0d5b: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005d0d5f: MOV ECX,EAX
// 005d0d61: SHL EAX,0x3
// 005d0d64: SUB EAX,ECX
// 005d0d66: LEA ECX,[ESI + EAX*0x1]
// 005d0d69: MOV EAX,dword ptr [EBX + 0x4]
// 005d0d6c: SHL EAX,0x3
// 005d0d6f: MOV EBX,EAX
// 005d0d71: SHL EAX,0x3
// 005d0d74: SUB EAX,EBX
// 005d0d76: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x58] (DATA)
// 005d0d7a: FLD double ptr [ESI + EAX*0x1 + 0x8]
// 005d0d7e: FLD double ptr [ESI + EAX*0x1 + 0x10]
// 005d0d82: FLD double ptr [ESI + EAX*0x1]
// 005d0d85: LEA ESI,[ESP + 0x48]
//   XREF to: Stack[-0x40] (DATA)
// 005d0d89: FADD double ptr [ECX]
// 005d0d8b: FXCH ST2
// 005d0d8d: FADD double ptr [ECX + 0x8]
// 005d0d90: FXCH
// 005d0d92: FADD double ptr [ECX + 0x10]
// 005d0d95: FXCH ST2
// 005d0d97: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (WRITE)
// 005d0d9b: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (WRITE)
// 005d0d9f: MOV ECX,0x6
// 005d0da4: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (WRITE)
// 005d0da8: MOVSD.REP ES:EDI,ESI
// 005d0daa: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x10] (READ)
// 005d0dae: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 005d0db2: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 005d0db6: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 005d0dba: MOV ECX,0x6
// 005d0dbf: LEA EDI,[ESP + 0x60]
//   XREF to: Stack[-0x28] (DATA)
// 005d0dc3: MOV ESI,ESP
// 005d0dc5: FXCH ST2
// 005d0dc7: FADD double ptr [EAX]
// 005d0dc9: FXCH
// 005d0dcb: FADD double ptr [EAX + 0x8]
// 005d0dce: FXCH ST2
// 005d0dd0: FADD double ptr [EAX + 0x10]
// 005d0dd3: FXCH
// 005d0dd5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 005d0dd8: FXCH
// 005d0dda: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (WRITE)
// 005d0dde: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (WRITE)
// 005d0de2: MOVSD.REP ES:EDI,ESI
// 005d0de4: FLD double ptr [0x0065430a]
//   XREF to: 0065430a (READ)
// 005d0dea: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 005d0dee: FMUL ST1
// 005d0df0: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 005d0df4: FMUL ST2
// 005d0df6: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 005d0dfa: FMULP ST3
// 005d0dfc: MOV ECX,0x6
// 005d0e01: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x70] (DATA)
// 005d0e05: MOV EDI,EDX
// 005d0e07: FXCH
// 005d0e09: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (WRITE)
// 005d0e0d: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (WRITE)
// 005d0e11: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (WRITE)
// 005d0e15: MOVSD.REP ES:EDI,ESI
// 005d0e17: MOV EAX,EDX
// 005d0e19: MOV ESP,EBP
// 005d0e1b: POP EBP
// 005d0e1c: POP EDI
// 005d0e1d: POP EBX
// 005d0e1e: RET

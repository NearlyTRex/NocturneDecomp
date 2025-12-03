// Name: shape_superopt.cpp_CPoly_FUN_005d1ff0
// Address: 005d1ff0
// Address Range: [[005d1ff0, 005d2224]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_FUN_005d1ff0(CPoly * this_ptr)
// Globals:
//   double DOUBLE_0065431a = 0.999999990000000
//   double DOUBLE_00654322 = 1.00000001000000

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_FUN_005d1ff0(CPoly *this_ptr)

{
  CVert *pCVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  CVert *pCVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  double *pdVar8;
  double *pdVar9;
  double local_e0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
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
  
  iVar7 = this_ptr->vertex_idx_0;
  if (((iVar7 != this_ptr->vertex_idx_1) && (iVar5 = this_ptr->vertex_idx_2, iVar7 != iVar5)) &&
     (this_ptr->vertex_idx_1 != iVar5)) {
    pCVar6 = this_ptr->parent_obj->vertex_data;
    local_68 = pCVar6[iVar5].position.impl.x - pCVar6[iVar7].position.impl.x;
    local_60 = pCVar6[iVar5].position.impl.y - pCVar6[iVar7].position.impl.y;
    local_58 = pCVar6[iVar5].position.impl.z - pCVar6[iVar7].position.impl.z;
    pdVar8 = &local_68;
    pdVar9 = &local_50;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pdVar9 = *(undefined4 *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      pdVar9 = (double *)((int)pdVar9 + 4);
    }
    dVar2 = 1.0 / SQRT(local_40 * local_40 + local_50 * local_50 + local_48 * local_48);
    local_b0 = local_50 * dVar2;
    local_a8 = local_48 * dVar2;
    local_a0 = local_40 * dVar2;
    pCVar1 = pCVar6 + this_ptr->vertex_idx_0;
    iVar7 = this_ptr->vertex_idx_1;
    local_c8 = pCVar6[iVar7].position.impl.x - (pCVar1->position).impl.x;
    local_c0 = pCVar6[iVar7].position.impl.y - (pCVar1->position).impl.y;
    local_b8 = pCVar6[iVar7].position.impl.z - (pCVar1->position).impl.z;
    pdVar8 = &local_c8;
    pdVar9 = &local_80;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pdVar9 = *(undefined4 *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      pdVar9 = (double *)((int)pdVar9 + 4);
    }
    local_88 = 1.0 / SQRT(local_70 * local_70 + local_80 * local_80 + local_78 * local_78);
    local_98 = local_80 * local_88;
    local_90 = local_78 * local_88;
    local_88 = local_70 * local_88;
    local_e0 = local_50 * dVar2 * local_98 + local_48 * dVar2 * local_90 +
               local_40 * dVar2 * local_88;
    if (local_e0 < 0.0) {
      local_e0 = -local_e0;
    }
    if (local_e0 <= DOUBLE_0065431a) {
      (*(code *)this_ptr->vtable->computeNormalMaybe1)();
      dVar2 = (this_ptr->normal).y;
      dVar3 = (this_ptr->normal).x;
      dVar4 = (this_ptr->normal).z;
      dVar2 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2);
      if ((DOUBLE_0065431a <= dVar2) && (dVar2 <= DOUBLE_00654322)) {
        return 1;
      }
    }
  }
  return 0;
}


// Assembly code:
// 005d1ff0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005d1ff0
// 005d1ff1: PUSH ESI
// 005d1ff2: PUSH EDI
// 005d1ff3: PUSH EBP
// 005d1ff4: MOV EBP,ESP
// 005d1ff6: SUB ESP,0xd8
// 005d1ffc: AND ESP,0xfffffff8
// 005d1fff: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2002: MOV EDX,dword ptr [EBX + 0x8]
// 005d2005: MOV EAX,dword ptr [EBX + 0x4]
// 005d2008: CMP EAX,EDX
// 005d200a: JZ 0x005d21c1
//   XREF to: 005d21c1 (CONDITIONAL_JUMP)
// 005d2010: MOV ECX,dword ptr [EBX + 0xc]
// 005d2013: CMP EAX,ECX
// 005d2015: JZ 0x005d21c1
//   XREF to: 005d21c1 (CONDITIONAL_JUMP)
// 005d201b: CMP EDX,ECX
// 005d201d: JZ 0x005d21c1
//   XREF to: 005d21c1 (CONDITIONAL_JUMP)
// 005d2023: LEA ESI,[EAX*0x8 + 0x0]
// 005d202a: MOV EAX,ESI
// 005d202c: SHL ESI,0x3
// 005d202f: SUB ESI,EAX
// 005d2031: LEA EAX,[ECX*0x8 + 0x0]
// 005d2038: MOV EDX,dword ptr [EBX]
// 005d203a: MOV ECX,EAX
// 005d203c: SHL EAX,0x3
// 005d203f: MOV EDX,dword ptr [EDX + 0x4]
// 005d2042: SUB EAX,ECX
// 005d2044: LEA EDI,[ESP + 0x98]
//   XREF to: Stack[-0x50] (DATA)
// 005d204b: FLD double ptr [EDX + EAX*0x1]
// 005d204e: FLD double ptr [EDX + EAX*0x1 + 0x8]
// 005d2052: FLD double ptr [EDX + EAX*0x1 + 0x10]
// 005d2056: MOV ECX,0x6
// 005d205b: FXCH ST2
// 005d205d: FSUB double ptr [EDX + ESI*0x1]
// 005d2060: FXCH
// 005d2062: FSUB double ptr [EDX + ESI*0x1 + 0x8]
// 005d2066: FXCH ST2
// 005d2068: FSUB double ptr [EDX + ESI*0x1 + 0x10]
// 005d206c: FXCH
// 005d206e: FSTP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x68] (WRITE)
// 005d2075: FXCH
// 005d2077: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x60] (WRITE)
// 005d207e: LEA ESI,[ESP + 0x80]
//   XREF to: Stack[-0x68] (DATA)
// 005d2085: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x58] (WRITE)
// 005d208c: MOVSD.REP ES:EDI,ESI
// 005d208e: FLD double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x48] (READ)
// 005d2095: FMUL ST0
// 005d2097: FLD double ptr [ESP + 0x98]
//   XREF to: Stack[-0x50] (READ)
// 005d209e: FMUL ST0
// 005d20a0: FADDP
// 005d20a2: FLD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x40] (READ)
// 005d20a9: FMUL ST0
// 005d20ab: FADDP
// 005d20ad: FSQRT
// 005d20af: FLD double ptr [ESP + 0x98]
//   XREF to: Stack[-0x50] (READ)
// 005d20b6: FLD1
// 005d20b8: FDIVRP ST2,ST0
// 005d20ba: FMUL ST1
// 005d20bc: FLD double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x48] (READ)
// 005d20c3: FMUL ST2
// 005d20c5: FLD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x40] (READ)
// 005d20cc: FMULP ST3
// 005d20ce: FXCH
// 005d20d0: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb0] (WRITE)
// 005d20d4: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0xa8] (WRITE)
// 005d20d8: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0xa0] (WRITE)
// 005d20dc: MOV EAX,dword ptr [EBX + 0x4]
// 005d20df: SHL EAX,0x3
// 005d20e2: MOV ECX,EAX
// 005d20e4: SHL EAX,0x3
// 005d20e7: SUB EAX,ECX
// 005d20e9: LEA ECX,[EDX + EAX*0x1]
// 005d20ec: MOV EAX,dword ptr [EBX + 0x8]
// 005d20ef: SHL EAX,0x3
// 005d20f2: MOV ESI,EAX
// 005d20f4: SHL EAX,0x3
// 005d20f7: SUB EAX,ESI
// 005d20f9: LEA EDI,[ESP + 0x68]
//   XREF to: Stack[-0x80] (DATA)
// 005d20fd: FLD double ptr [EDX + EAX*0x1]
// 005d2100: FLD double ptr [EDX + EAX*0x1 + 0x8]
// 005d2104: FLD double ptr [EDX + EAX*0x1 + 0x10]
// 005d2108: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0xc8] (DATA)
// 005d210c: FXCH ST2
// 005d210e: FSUB double ptr [ECX]
// 005d2110: FXCH
// 005d2112: FSUB double ptr [ECX + 0x8]
// 005d2115: FXCH ST2
// 005d2117: FSUB double ptr [ECX + 0x10]
// 005d211a: FXCH
// 005d211c: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xc8] (WRITE)
// 005d2120: FXCH
// 005d2122: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc0] (WRITE)
// 005d2126: MOV ECX,0x6
// 005d212b: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xb8] (WRITE)
// 005d212f: MOVSD.REP ES:EDI,ESI
// 005d2131: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x78] (READ)
// 005d2135: FMUL ST0
// 005d2137: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x80] (READ)
// 005d213b: FMUL ST0
// 005d213d: FADDP
// 005d213f: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x70] (READ)
// 005d2143: FMUL ST0
// 005d2145: FADDP
// 005d2147: FSQRT
// 005d2149: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x80] (READ)
// 005d214d: FLD1
// 005d214f: FDIVRP ST2,ST0
// 005d2151: FMUL ST1
// 005d2153: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x78] (READ)
// 005d2157: FMUL ST2
// 005d2159: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x70] (READ)
// 005d215d: FMULP ST3
// 005d215f: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0xa8] (READ)
// 005d2163: FXCH
// 005d2165: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x90] (WRITE)
// 005d2169: FMUL double ptr [ESP + 0x58]
//   XREF to: Stack[-0x90] (READ)
// 005d216d: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0xa0] (READ)
// 005d2171: FXCH ST3
// 005d2173: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x88] (WRITE)
// 005d2177: FXCH ST2
// 005d2179: FMUL double ptr [ESP + 0x60]
//   XREF to: Stack[-0x88] (READ)
// 005d217d: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb0] (READ)
// 005d2181: FXCH ST2
// 005d2183: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x98] (WRITE)
// 005d2187: FXCH
// 005d2189: FMUL double ptr [ESP + 0x50]
//   XREF to: Stack[-0x98] (READ)
// 005d218d: FXCH
// 005d218f: FSTP double ptr [ESP]
//   XREF to: Stack[-0xe8] (DATA)
// 005d2192: FADDP
// 005d2194: FADD double ptr [ESP]
//   XREF to: Stack[-0xe8] (DATA)
// 005d2197: FLDZ
// 005d2199: FXCH
// 005d219b: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xd8] (WRITE)
// 005d219f: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xd8] (READ)
// 005d21a3: FNSTSW AX
// 005d21a5: SAHF
// 005d21a6: JBE 0x005d21ca
//   XREF to: 005d21ca (CONDITIONAL_JUMP)
// 005d21a8: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xd8] (READ)
// 005d21ac: FCHS
// 005d21ae: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe0] (WRITE)
// 005d21b2: FLD double ptr [ESP + 0x8]
//   Label: LAB_005d21b2
//   XREF to: Stack[-0xe0] (READ)
// 005d21b6: FCOMP double ptr [0x0065431a]
//   XREF to: 0065431a (READ)
// 005d21bc: FNSTSW AX
// 005d21be: SAHF
// 005d21bf: JBE 0x005d21dc
//   XREF to: 005d21dc (CONDITIONAL_JUMP)
// 005d21c1: XOR EAX,EAX
//   Label: LAB_005d21c1
// 005d21c3: MOV ESP,EBP
// 005d21c5: POP EBP
// 005d21c6: POP EDI
// 005d21c7: POP ESI
// 005d21c8: POP EBX
// 005d21c9: RET
// 005d21ca: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005d21ca
//   XREF to: Stack[-0xd8] (READ)
// 005d21ce: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005d21d2: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xd4] (READ)
// 005d21d6: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005d21da: JMP 0x005d21b2
//   XREF to: 005d21b2 (UNCONDITIONAL_JUMP)
// 005d21dc: PUSH EBX
//   Label: LAB_005d21dc
// 005d21dd: MOV EAX,dword ptr [EBX + 0x64]
// 005d21e0: CALL dword ptr [EAX + 0x44]
// 005d21e3: FLD double ptr [EBX + 0x48]
// 005d21e6: FMUL ST0
// 005d21e8: FLD double ptr [EBX + 0x40]
// 005d21eb: FMUL ST0
// 005d21ed: FADDP
// 005d21ef: FLD double ptr [EBX + 0x50]
// 005d21f2: FMUL ST0
// 005d21f4: FADDP
// 005d21f6: FSQRT
// 005d21f8: ADD ESP,0x4
// 005d21fb: FST double ptr [ESP + 0x18]
// 005d21ff: FCOMP double ptr [0x0065431a]
//   XREF to: 0065431a (READ)
// 005d2205: FNSTSW AX
// 005d2207: SAHF
// 005d2208: JC 0x005d21c1
//   XREF to: 005d21c1 (CONDITIONAL_JUMP)
// 005d220a: FLD double ptr [ESP + 0x18]
// 005d220e: FCOMP double ptr [0x00654322]
//   XREF to: 00654322 (READ)
// 005d2214: FNSTSW AX
// 005d2216: SAHF
// 005d2217: JA 0x005d21c1
//   XREF to: 005d21c1 (CONDITIONAL_JUMP)
// 005d2219: MOV EAX,0x1
// 005d221e: MOV ESP,EBP
// 005d2220: POP EBP
// 005d2221: POP EDI
// 005d2222: POP ESI
// 005d2223: POP EBX
// 005d2224: RET

// Name: shape_superopt.cpp_CObj_scale_FUN_005d2940
// Address: 005d2940
// Address Range: [[005d2940, 005d2ab6]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_scale_FUN_005d2940(CObj * this_ptr, CVec * scale, CVec * pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_scale_FUN_005d2940(CObj *this_ptr,CVec *scale,CVec *pivot)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  CVert *pCVar5;
  BADSPACEBASE *in_ESP;
  double *pdVar6;
  double *pdVar7;
  undefined4 *puVar8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  
  local_18 = 0;
  pCVar5 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      local_90 = *(undefined4 *)&(scale->impl).x;
      dVar1 = (scale->impl).x;
      uStack_8c = *(undefined4 *)((int)&(scale->impl).x + 4);
      pdVar6 = &(scale->impl).y;
      local_88 = *(undefined4 *)pdVar6;
      dVar2 = *pdVar6;
      uStack_84 = *(undefined4 *)((int)&(scale->impl).y + 4);
      local_78 = (pCVar5->position).impl.x - (pivot->impl).x;
      pdVar6 = &(scale->impl).z;
      local_70 = (pCVar5->position).impl.y - (pivot->impl).y;
      local_80 = *(undefined4 *)pdVar6;
      local_68 = (pCVar5->position).impl.z - (pivot->impl).z;
      uStack_7c = *(undefined4 *)((int)&(scale->impl).z + 4);
      dVar3 = *pdVar6;
      pdVar6 = &local_78;
      pdVar7 = &local_60;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 4);
        pdVar7 = (double *)((int)pdVar7 + 4);
      }
      local_48 = local_60 * dVar1;
      local_40 = local_58 * dVar2;
      local_38 = local_50 * dVar3;
      pdVar6 = &local_48;
      pdVar7 = &local_c0;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 4);
        pdVar7 = (double *)((int)pdVar7 + 4);
      }
      local_a8 = local_c0 + (pivot->impl).x;
      local_a0 = local_b8 + (pivot->impl).y;
      local_98 = local_b0 + (pivot->impl).z;
      pdVar6 = &local_a8;
      puVar8 = local_30;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *(undefined4 *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 4);
        puVar8 = puVar8 + 1;
      }
      *(undefined4 *)&(pCVar5->position).impl.x = local_30[0];
      *(undefined4 *)((int)&(pCVar5->position).impl.x + 4) = local_30[1];
      *(undefined4 *)&(pCVar5->position).impl.y = local_30[2];
      *(undefined4 *)((int)&(pCVar5->position).impl.y + 4) = local_30[3];
      *(undefined4 *)&(pCVar5->position).impl.z = local_20;
      *(undefined4 *)((int)&(pCVar5->position).impl.z + 4) = local_1c;
      local_18 = local_18 + 1;
      pCVar5 = pCVar5 + 1;
    } while (local_18 < (uint)this_ptr->vertex_count);
  }
  return;
}


// Assembly code:
// 005d2940: PUSH EBX
//   Label: shape_superopt.cpp_CObj_scale_FUN_005d2940
// 005d2941: PUSH ESI
// 005d2942: PUSH EDI
// 005d2943: PUSH EBP
// 005d2944: MOV EBP,ESP
// 005d2946: SUB ESP,0xac
// 005d294c: AND ESP,0xfffffff8
// 005d294f: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d2952: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2955: XOR ECX,ECX
// 005d2957: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d295a: MOV dword ptr [ESP + 0xa8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005d2961: MOV ESI,dword ptr [EAX]
// 005d2963: MOV EDX,dword ptr [EDX + 0x4]
// 005d2966: TEST ESI,ESI
// 005d2968: JBE 0x005d2ab0
//   XREF to: 005d2ab0 (CONDITIONAL_JUMP)
// 005d296e: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_005d296e
//   XREF to: Stack[0x8] (READ)
// 005d2971: FLD double ptr [EDX]
// 005d2973: MOV EAX,dword ptr [EAX]
// 005d2975: FLD double ptr [EDX + 0x8]
// 005d2978: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005d297c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d297f: FLD double ptr [EDX + 0x10]
// 005d2982: MOV EAX,dword ptr [EAX + 0x4]
// 005d2985: MOV ECX,0x6
// 005d298a: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005d298e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d2991: LEA EDI,[ESP + 0x60]
//   XREF to: Stack[-0x60] (DATA)
// 005d2995: LEA ESI,[ESP + 0x48]
//   XREF to: Stack[-0x78] (DATA)
// 005d2999: MOV EAX,dword ptr [EAX + 0x8]
// 005d299c: FXCH ST2
// 005d299e: FSUB double ptr [EBX]
// 005d29a0: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005d29a4: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d29a7: FXCH
// 005d29a9: FSUB double ptr [EBX + 0x8]
// 005d29ac: MOV EAX,dword ptr [EAX + 0xc]
// 005d29af: FXCH ST2
// 005d29b1: FSUB double ptr [EBX + 0x10]
// 005d29b4: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005d29b8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d29bb: FXCH
// 005d29bd: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x78] (WRITE)
// 005d29c1: MOV EAX,dword ptr [EAX + 0x10]
// 005d29c4: FXCH
// 005d29c6: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x70] (WRITE)
// 005d29ca: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005d29ce: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d29d1: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x68] (WRITE)
// 005d29d5: MOV EAX,dword ptr [EAX + 0x14]
// 005d29d8: MOVSD.REP ES:EDI,ESI
// 005d29da: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x60] (READ)
// 005d29de: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0x90] (READ)
// 005d29e2: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x58] (READ)
// 005d29e6: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0x88] (READ)
// 005d29ea: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005d29ee: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x50] (READ)
// 005d29f2: FMUL double ptr [ESP + 0x40]
//   XREF to: Stack[-0x80] (READ)
// 005d29f6: MOV ECX,0x6
// 005d29fb: MOV EDI,ESP
// 005d29fd: LEA ESI,[ESP + 0x78]
//   XREF to: Stack[-0x48] (DATA)
// 005d2a01: FXCH ST2
// 005d2a03: FSTP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x48] (WRITE)
// 005d2a07: FSTP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x40] (WRITE)
// 005d2a0e: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x38] (WRITE)
// 005d2a15: MOVSD.REP ES:EDI,ESI
// 005d2a17: FLD double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005d2a1a: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005d2a1e: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (READ)
// 005d2a22: MOV ECX,0x6
// 005d2a27: LEA EDI,[ESP + 0x90]
//   XREF to: Stack[-0x30] (DATA)
// 005d2a2e: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0xa8] (DATA)
// 005d2a32: FXCH ST2
// 005d2a34: FADD double ptr [EBX]
// 005d2a36: FXCH
// 005d2a38: FADD double ptr [EBX + 0x8]
// 005d2a3b: FXCH ST2
// 005d2a3d: FADD double ptr [EBX + 0x10]
// 005d2a40: FXCH
// 005d2a42: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xa8] (WRITE)
// 005d2a46: FXCH
// 005d2a48: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xa0] (WRITE)
// 005d2a4c: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x98] (WRITE)
// 005d2a50: MOVSD.REP ES:EDI,ESI
// 005d2a52: ADD EDX,0x38
// 005d2a55: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x30] (READ)
// 005d2a5c: MOV dword ptr [EDX + -0x38],EAX
// 005d2a5f: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x2c] (READ)
// 005d2a66: MOV dword ptr [EDX + -0x34],EAX
// 005d2a69: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (READ)
// 005d2a70: MOV dword ptr [EDX + -0x30],EAX
// 005d2a73: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x24] (READ)
// 005d2a7a: MOV dword ptr [EDX + -0x2c],EAX
// 005d2a7d: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (READ)
// 005d2a84: MOV EDI,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 005d2a8b: MOV dword ptr [EDX + -0x28],EAX
// 005d2a8e: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x1c] (READ)
// 005d2a95: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2a98: MOV dword ptr [EDX + -0x24],EAX
// 005d2a9b: INC EDI
// 005d2a9c: MOV ESI,dword ptr [ECX]
// 005d2a9e: MOV dword ptr [ESP + 0xa8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005d2aa5: CMP EDI,ESI
// 005d2aa7: JC 0x005d296e
//   XREF to: 005d296e (CONDITIONAL_JUMP)
// 005d2aad: LEA EAX,[EAX]
// 005d2ab0: MOV ESP,EBP
//   Label: LAB_005d2ab0
// 005d2ab2: POP EBP
// 005d2ab3: POP EDI
// 005d2ab4: POP ESI
// 005d2ab5: POP EBX
// 005d2ab6: RET

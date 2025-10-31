// Name: shape_superopt.cpp_FUN_005c8b50
// Address: 005c8b50
// Address Range: [[005c8b50, 005c8e6a]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c8b50()
// Cross-references:
//   shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 (005c84c0) at 005c8554 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   shape_superopt.cpp_FUN_005c9100
//   shape_superopt.cpp_FUN_005c9aa0
//   shape_superopt.cpp_FUN_005cb3a0

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005c8b50(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

int shape_superopt_cpp_FUN_005c8b50(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined4 *puVar5;
  byte bVar6;
  double dVar7;
  int in_stack_00000004;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  double local_74;
  undefined4 local_6c [6];
  undefined8 local_54;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  double *local_14;
  
  dVar7 = (double)CONCAT44(local_3c._4_4_,(undefined4)local_3c);
  bVar6 = 0;
  local_1c = 0;
  local_20 = 0;
  local_44._0_4_ = 0;
  local_44._4_4_ = 0;
  local_44 = 0.0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    local_24 = 0;
    local_14 = (double *)(in_stack_00000004 + 0x14);
    do {
      iVar2 = local_24 + *(int *)(in_stack_00000004 + 0x30);
      local_18 = iVar2;
      puVar3 = (undefined4 *)(iVar2 + 0x10);
      puVar5 = local_6c;
      local_3c = dVar7;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      local_84 = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
      local_7c = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
      local_74 = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
      pdVar4 = &local_84;
      puVar3 = &local_cc;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(undefined4 *)pdVar4;
        pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      }
      local_9c = (double)CONCAT44(uStack_c0,local_c4) * local_14[2] -
                 (double)CONCAT44(uStack_b8,local_bc) * local_14[1];
      local_94 = (double)CONCAT44(uStack_b8,local_bc) * *local_14 -
                 (double)CONCAT44(uStack_c8,local_cc) * local_14[2];
      local_8c = (double)CONCAT44(uStack_c8,local_cc) * local_14[1] -
                 (double)CONCAT44(uStack_c0,local_c4) * *local_14;
      dVar7 = 1.0 / SQRT(local_8c * local_8c + local_9c * local_9c + local_94 * local_94);
      local_9c = local_9c * dVar7;
      local_94 = local_94 * dVar7;
      local_2c = 0;
      local_28 = 0;
      local_8c = local_8c * dVar7;
      local_b4 = local_9c;
      local_ac = local_94;
      local_a4 = local_8c;
      shape_superopt_cpp_FUN_005c9aa0();
      dVar7 = local_3c;
      if ((local_2c != 0) && (local_28 != 0)) {
        iVar1 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        iVar2 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if ((iVar1 == 0) && (iVar2 == 0)) {
          return 0;
        }
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = shape_superopt_cpp_FUN_005cb3a0();
        }
        if (iVar2 == 0) {
          iVar2 = 0;
          dVar7 = local_3c;
        }
        else {
          iVar2 = shape_superopt_cpp_FUN_005cb3a0();
          dVar7 = local_3c;
        }
        if ((iVar1 != 0) || (iVar2 != 0)) {
          if ((iVar1 != 0) && (iVar2 != 0)) {
            return local_18;
          }
          local_3c = dVar7;
          if (iVar1 == 0) {
            dVar7 = (double)shape_superopt_cpp_FUN_005c9100();
            local_3c = dVar7;
            local_54 = dVar7;
            if (local_44 < dVar7) {
              local_44 = dVar7;
              local_1c = local_18;
            }
          }
          else {
            dVar7 = (double)shape_superopt_cpp_FUN_005c9100();
            local_3c = dVar7;
            local_34 = dVar7;
            if (local_44 < dVar7) {
              local_44 = dVar7;
              local_1c = local_18;
            }
          }
        }
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + 0x60;
    } while (local_20 < *(uint *)(in_stack_00000004 + 0x2c));
  }
  return local_1c;
}


// Assembly code:
// 005c8b50: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c8b50
// 005c8b51: PUSH ESI
// 005c8b52: PUSH EDI
// 005c8b53: PUSH EBP
// 005c8b54: MOV EBP,ESP
// 005c8b56: SUB ESP,0xd4
// 005c8b5c: SUB EBP,0x76
// 005c8b5f: MOV EBX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 005c8b65: XOR EDX,EDX
// 005c8b67: MOV EAX,dword ptr [EBX + 0x2c]
// 005c8b6a: MOV dword ptr [EBP + 0x6a],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c8b6d: MOV dword ptr [EBP + 0x66],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005c8b70: MOV dword ptr [EBP + 0x42],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 005c8b73: MOV dword ptr [EBP + 0x46],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 005c8b76: TEST EAX,EAX
// 005c8b78: JBE 0x005c8ce0
//   XREF to: 005c8ce0 (CONDITIONAL_JUMP)
// 005c8b7e: LEA EAX,[EBX + 0x14]
// 005c8b81: MOV dword ptr [EBP + 0x62],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005c8b84: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c8b87: MOV ESI,dword ptr [EBP + 0x62]
//   Label: LAB_005c8b87
//   XREF to: Stack[-0x24] (READ)
// 005c8b8a: MOV EAX,dword ptr [EBX + 0x30]
// 005c8b8d: MOV ECX,0x6
// 005c8b92: ADD ESI,EAX
// 005c8b94: LEA EDI,[EBP + 0x1a]
//   XREF to: Stack[-0x6c] (DATA)
// 005c8b97: MOV dword ptr [EBP + 0x6e],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005c8b9a: LEA ESI,[ESI + 0x10]
// 005c8b9d: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x18] (READ)
// 005c8ba0: MOVSD.REP ES:EDI,ESI
// 005c8ba2: FLD double ptr [EAX + 0x28]
// 005c8ba5: FLD double ptr [EAX + 0x30]
// 005c8ba8: FLD double ptr [EAX + 0x38]
// 005c8bab: MOV ECX,0x6
// 005c8bb0: LEA EDI,[EBP + -0x46]
//   XREF to: Stack[-0xcc] (DATA)
// 005c8bb3: LEA ESI,[EBP + 0x2]
//   XREF to: Stack[-0x84] (DATA)
// 005c8bb6: FXCH ST2
// 005c8bb8: FSUB double ptr [EAX + 0x10]
// 005c8bbb: FXCH
// 005c8bbd: FSUB double ptr [EAX + 0x18]
// 005c8bc0: FXCH ST2
// 005c8bc2: FSUB double ptr [EAX + 0x20]
// 005c8bc5: FXCH
// 005c8bc7: FSTP double ptr [EBP + 0x2]
//   XREF to: Stack[-0x84] (WRITE)
// 005c8bca: FXCH
// 005c8bcc: FSTP double ptr [EBP + 0xa]
//   XREF to: Stack[-0x7c] (WRITE)
// 005c8bcf: FSTP double ptr [EBP + 0x12]
//   XREF to: Stack[-0x74] (WRITE)
// 005c8bd2: MOVSD.REP ES:EDI,ESI
// 005c8bd4: MOV EAX,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (READ)
// 005c8bd7: MOV dword ptr [EBP + -0x5e],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005c8bda: MOV EAX,dword ptr [EBP + -0x42]
//   XREF to: Stack[-0xc8] (READ)
// 005c8bdd: MOV dword ptr [EBP + -0x5a],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005c8be0: MOV EAX,dword ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (READ)
// 005c8be3: MOV dword ptr [EBP + -0x56],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005c8be6: MOV EAX,dword ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc0] (READ)
// 005c8be9: MOV dword ptr [EBP + -0x52],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005c8bec: MOV EAX,dword ptr [EBP + -0x36]
//   XREF to: Stack[-0xbc] (READ)
// 005c8bef: MOV dword ptr [EBP + -0x4e],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005c8bf2: MOV EAX,dword ptr [EBP + -0x32]
//   XREF to: Stack[-0xb8] (READ)
// 005c8bf5: MOV dword ptr [EBP + -0x4a],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 005c8bf8: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x14] (READ)
// 005c8bfb: FLD double ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (READ)
// 005c8bfe: FMUL double ptr [EAX + 0x10]
// 005c8c01: FLD double ptr [EBP + -0x36]
//   XREF to: Stack[-0xbc] (READ)
// 005c8c04: FMUL double ptr [EAX + 0x8]
// 005c8c07: FSUBP
// 005c8c09: FLD double ptr [EBP + -0x36]
//   XREF to: Stack[-0xbc] (READ)
// 005c8c0c: FXCH
// 005c8c0e: FSTP double ptr [EBP + -0x16]
//   XREF to: Stack[-0x9c] (WRITE)
// 005c8c11: FMUL double ptr [EAX]
// 005c8c13: FLD double ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (READ)
// 005c8c16: FMUL double ptr [EAX + 0x10]
// 005c8c19: FSUBP
// 005c8c1b: FLD double ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (READ)
// 005c8c1e: FXCH
// 005c8c20: FSTP double ptr [EBP + -0xe]
//   XREF to: Stack[-0x94] (WRITE)
// 005c8c23: FMUL double ptr [EAX + 0x8]
// 005c8c26: FLD double ptr [EBP + -0xe]
//   XREF to: Stack[-0x94] (READ)
// 005c8c29: FMUL ST0
// 005c8c2b: FLD double ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (READ)
// 005c8c2e: FMUL double ptr [EAX]
// 005c8c30: FLD double ptr [EBP + -0x16]
//   XREF to: Stack[-0x9c] (READ)
// 005c8c33: FMUL ST0
// 005c8c35: FXCH
// 005c8c37: FSUBP ST3,ST0
// 005c8c39: FADDP
// 005c8c3b: FXCH
// 005c8c3d: FST double ptr [EBP + -0x6]
//   XREF to: Stack[-0x8c] (WRITE)
// 005c8c40: FMUL double ptr [EBP + -0x6]
//   XREF to: Stack[-0x8c] (READ)
// 005c8c43: FADDP
// 005c8c45: FSQRT
// 005c8c47: FLD double ptr [EBP + -0x16]
//   XREF to: Stack[-0x9c] (READ)
// 005c8c4a: FLD1
// 005c8c4c: FDIVRP ST2,ST0
// 005c8c4e: FMUL ST1
// 005c8c50: FLD double ptr [EBP + -0xe]
//   XREF to: Stack[-0x94] (READ)
// 005c8c53: XOR EAX,EAX
// 005c8c55: FMUL ST2
// 005c8c57: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c8c5a: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005c8c5d: LEA EAX,[EBP + 0x5e]
//   XREF to: Stack[-0x28] (DATA)
// 005c8c60: FLD double ptr [EBP + -0x6]
//   XREF to: Stack[-0x8c] (READ)
// 005c8c63: PUSH EAX
// 005c8c64: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x2c] (DATA)
// 005c8c67: FMULP ST3
// 005c8c69: PUSH EAX
// 005c8c6a: FXCH
// 005c8c6c: FSTP double ptr [EBP + -0x16]
//   XREF to: Stack[-0x9c] (WRITE)
// 005c8c6f: MOV EAX,dword ptr [EBP + -0x16]
//   XREF to: Stack[-0x9c] (READ)
// 005c8c72: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 005c8c78: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005c8c7b: MOV EAX,dword ptr [EBP + -0x12]
//   XREF to: Stack[-0x98] (READ)
// 005c8c7e: FSTP double ptr [EBP + -0xe]
//   XREF to: Stack[-0x94] (WRITE)
// 005c8c81: MOV dword ptr [EBP + -0x2a],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005c8c84: MOV EAX,dword ptr [EBP + -0xe]
//   XREF to: Stack[-0x94] (READ)
// 005c8c87: MOV ESI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c8c8d: MOV dword ptr [EBP + -0x26],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005c8c90: MOV EAX,dword ptr [EBP + -0xa]
//   XREF to: Stack[-0x90] (READ)
// 005c8c93: FSTP double ptr [EBP + -0x6]
//   XREF to: Stack[-0x8c] (WRITE)
// 005c8c96: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005c8c99: MOV EAX,dword ptr [EBP + -0x6]
//   XREF to: Stack[-0x8c] (READ)
// 005c8c9c: PUSH ECX
// 005c8c9d: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005c8ca0: MOV EAX,dword ptr [EBP + -0x2]
//   XREF to: Stack[-0x88] (READ)
// 005c8ca3: PUSH ESI
// 005c8ca4: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005c8ca7: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb4] (DATA)
// 005c8caa: PUSH EAX
// 005c8cab: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x6c] (DATA)
// 005c8cae: PUSH EAX
// 005c8caf: PUSH EBX
// 005c8cb0: CALL shape_superopt.cpp_FUN_005c9aa0
//   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)
// 005c8cb5: MOV EDI,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x2c] (READ)
// 005c8cb8: ADD ESP,0x1c
// 005c8cbb: TEST EDI,EDI
// 005c8cbd: JZ 0x005c8cc5
//   XREF to: 005c8cc5 (CONDITIONAL_JUMP)
// 005c8cbf: CMP dword ptr [EBP + 0x5e],0x0
//   XREF to: Stack[-0x28] (READ)
// 005c8cc3: JNZ 0x005c8ceb
//   XREF to: 005c8ceb (CONDITIONAL_JUMP)
// 005c8cc5: MOV EDX,dword ptr [EBP + 0x62]
//   Label: LAB_005c8cc5
//   XREF to: Stack[-0x24] (READ)
// 005c8cc8: MOV ECX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x20] (READ)
// 005c8ccb: MOV ESI,dword ptr [EBX + 0x2c]
// 005c8cce: ADD EDX,0x60
// 005c8cd1: INC ECX
// 005c8cd2: MOV dword ptr [EBP + 0x62],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005c8cd5: MOV dword ptr [EBP + 0x66],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005c8cd8: CMP ECX,ESI
// 005c8cda: JC 0x005c8b87
//   XREF to: 005c8b87 (CONDITIONAL_JUMP)
// 005c8ce0: MOV EAX,dword ptr [EBP + 0x6a]
//   Label: LAB_005c8ce0
//   XREF to: Stack[-0x1c] (READ)
// 005c8ce3: LEA ESP,[EBP + 0x76]
//   XREF to: Stack[-0x10] (DATA)
// 005c8ce6: POP EBP
// 005c8ce7: POP EDI
// 005c8ce8: POP ESI
// 005c8ce9: POP EBX
// 005c8cea: RET
// 005c8ceb: MOV ESI,0x1
//   Label: LAB_005c8ceb
// 005c8cf0: PUSH ESI
// 005c8cf1: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x2c] (DATA)
// 005c8cf4: PUSH EAX
// 005c8cf5: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c8cfb: PUSH EDX
// 005c8cfc: PUSH EBX
// 005c8cfd: MOV EDI,ESI
// 005c8cff: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c8d04: ADD ESP,0x10
// 005c8d07: TEST EAX,EAX
// 005c8d09: JZ 0x005c8dd9
//   XREF to: 005c8dd9 (CONDITIONAL_JUMP)
// 005c8d0f: PUSH 0x1
//   Label: LAB_005c8d0f
// 005c8d11: LEA EAX,[EBP + 0x5e]
//   XREF to: Stack[-0x28] (DATA)
// 005c8d14: PUSH EAX
// 005c8d15: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 005c8d1b: PUSH ECX
// 005c8d1c: PUSH EBX
// 005c8d1d: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c8d22: ADD ESP,0x10
// 005c8d25: TEST EAX,EAX
// 005c8d27: JZ 0x005c8de0
//   XREF to: 005c8de0 (CONDITIONAL_JUMP)
// 005c8d2d: TEST ESI,ESI
//   Label: LAB_005c8d2d
// 005c8d2f: JZ 0x005c8de7
//   XREF to: 005c8de7 (CONDITIONAL_JUMP)
// 005c8d35: TEST ESI,ESI
//   Label: LAB_005c8d35
// 005c8d37: JZ 0x005c8df9
//   XREF to: 005c8df9 (CONDITIONAL_JUMP)
// 005c8d3d: MOV ESI,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x2c] (READ)
// 005c8d40: PUSH ESI
// 005c8d41: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c8d47: PUSH EAX
// 005c8d48: PUSH EBX
// 005c8d49: CALL shape_superopt.cpp_FUN_005cb3a0
//   XREF to: 005cb3a0 (UNCONDITIONAL_CALL)
// 005c8d4e: ADD ESP,0xc
// 005c8d51: MOV ESI,EAX
//   Label: LAB_005c8d51
// 005c8d53: TEST EDI,EDI
// 005c8d55: JZ 0x005c8e00
//   XREF to: 005c8e00 (CONDITIONAL_JUMP)
// 005c8d5b: MOV EDX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x28] (READ)
// 005c8d5e: PUSH EDX
// 005c8d5f: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 005c8d65: PUSH ECX
// 005c8d66: PUSH EBX
// 005c8d67: CALL shape_superopt.cpp_FUN_005cb3a0
//   XREF to: 005cb3a0 (UNCONDITIONAL_CALL)
// 005c8d6c: ADD ESP,0xc
// 005c8d6f: MOV EDI,EAX
//   Label: LAB_005c8d6f
// 005c8d71: TEST ESI,ESI
// 005c8d73: JZ 0x005c8e07
//   XREF to: 005c8e07 (CONDITIONAL_JUMP)
// 005c8d79: TEST ESI,ESI
//   Label: LAB_005c8d79
// 005c8d7b: JZ 0x005c8d85
//   XREF to: 005c8d85 (CONDITIONAL_JUMP)
// 005c8d7d: TEST EDI,EDI
// 005c8d7f: JNZ 0x005c8e14
//   XREF to: 005c8e14 (CONDITIONAL_JUMP)
// 005c8d85: TEST ESI,ESI
//   Label: LAB_005c8d85
// 005c8d87: JZ 0x005c8e1f
//   XREF to: 005c8e1f (CONDITIONAL_JUMP)
// 005c8d8d: MOV EAX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x2c] (READ)
// 005c8d90: PUSH EAX
// 005c8d91: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c8d97: PUSH EDX
// 005c8d98: PUSH EBX
// 005c8d99: CALL shape_superopt.cpp_FUN_005c9100
//   XREF to: 005c9100 (UNCONDITIONAL_CALL)
// 005c8d9e: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005c8da1: MOV dword ptr [EBP + 0x4e],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 005c8da4: ADD ESP,0xc
// 005c8da7: MOV EAX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x3c] (READ)
// 005c8daa: MOV dword ptr [EBP + 0x52],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005c8dad: MOV EAX,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x38] (READ)
// 005c8db0: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005c8db3: FLD double ptr [EBP + 0x52]
//   XREF to: Stack[-0x34] (READ)
// 005c8db6: FCOMP double ptr [EBP + 0x42]
//   XREF to: Stack[-0x44] (READ)
// 005c8db9: FNSTSW AX
// 005c8dbb: SAHF
// 005c8dbc: JBE 0x005c8cc5
//   XREF to: 005c8cc5 (CONDITIONAL_JUMP)
// 005c8dc2: MOV EAX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x34] (READ)
// 005c8dc5: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005c8dc8: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x30] (READ)
// 005c8dcb: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005c8dce: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x18] (READ)
// 005c8dd1: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c8dd4: JMP 0x005c8cc5
//   XREF to: 005c8cc5 (UNCONDITIONAL_JUMP)
// 005c8dd9: XOR ESI,ESI
//   Label: LAB_005c8dd9
// 005c8ddb: JMP 0x005c8d0f
//   XREF to: 005c8d0f (UNCONDITIONAL_JUMP)
// 005c8de0: XOR EDI,EDI
//   Label: LAB_005c8de0
// 005c8de2: JMP 0x005c8d2d
//   XREF to: 005c8d2d (UNCONDITIONAL_JUMP)
// 005c8de7: TEST EDI,EDI
//   Label: LAB_005c8de7
// 005c8de9: JNZ 0x005c8d35
//   XREF to: 005c8d35 (CONDITIONAL_JUMP)
// 005c8def: XOR EAX,EAX
// 005c8df1: LEA ESP,[EBP + 0x76]
//   XREF to: Stack[-0x10] (DATA)
// 005c8df4: POP EBP
// 005c8df5: POP EDI
// 005c8df6: POP ESI
// 005c8df7: POP EBX
// 005c8df8: RET
// 005c8df9: XOR EAX,EAX
//   Label: LAB_005c8df9
// 005c8dfb: JMP 0x005c8d51
//   XREF to: 005c8d51 (UNCONDITIONAL_JUMP)
// 005c8e00: XOR EAX,EAX
//   Label: LAB_005c8e00
// 005c8e02: JMP 0x005c8d6f
//   XREF to: 005c8d6f (UNCONDITIONAL_JUMP)
// 005c8e07: TEST EAX,EAX
//   Label: LAB_005c8e07
// 005c8e09: JNZ 0x005c8d79
//   XREF to: 005c8d79 (CONDITIONAL_JUMP)
// 005c8e0f: JMP 0x005c8cc5
//   XREF to: 005c8cc5 (UNCONDITIONAL_JUMP)
// 005c8e14: MOV EAX,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8e14
//   XREF to: Stack[-0x18] (READ)
// 005c8e17: LEA ESP,[EBP + 0x76]
//   XREF to: Stack[-0x10] (DATA)
// 005c8e1a: POP EBP
// 005c8e1b: POP EDI
// 005c8e1c: POP ESI
// 005c8e1d: POP EBX
// 005c8e1e: RET
// 005c8e1f: MOV ESI,dword ptr [EBP + 0x5e]
//   Label: LAB_005c8e1f
//   XREF to: Stack[-0x28] (READ)
// 005c8e22: PUSH ESI
// 005c8e23: MOV EDI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 005c8e29: PUSH EDI
// 005c8e2a: PUSH EBX
// 005c8e2b: CALL shape_superopt.cpp_FUN_005c9100
//   XREF to: 005c9100 (UNCONDITIONAL_CALL)
// 005c8e30: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005c8e33: MOV dword ptr [EBP + 0x4e],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 005c8e36: ADD ESP,0xc
// 005c8e39: MOV EAX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x3c] (READ)
// 005c8e3c: MOV dword ptr [EBP + 0x32],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005c8e3f: MOV EAX,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x38] (READ)
// 005c8e42: MOV dword ptr [EBP + 0x36],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005c8e45: FLD double ptr [EBP + 0x32]
//   XREF to: Stack[-0x54] (READ)
// 005c8e48: FCOMP double ptr [EBP + 0x42]
//   XREF to: Stack[-0x44] (READ)
// 005c8e4b: FNSTSW AX
// 005c8e4d: SAHF
// 005c8e4e: JBE 0x005c8cc5
//   XREF to: 005c8cc5 (CONDITIONAL_JUMP)
// 005c8e54: MOV EAX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x54] (READ)
// 005c8e57: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005c8e5a: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x50] (READ)
// 005c8e5d: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005c8e60: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x18] (READ)
// 005c8e63: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c8e66: JMP 0x005c8cc5
//   XREF to: 005c8cc5 (UNCONDITIONAL_JUMP)

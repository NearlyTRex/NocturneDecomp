// Name: shape_superopt.cpp_FUN_005c8e70
// Address: 005c8e70
// Address Range: [[005c8e70, 005c90fe]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c8e70()
// Cross-references:
//   shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 (005c84c0) at 005c879b [UNCONDITIONAL_CALL]
// Function calls:
//   shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   shape_superopt.cpp_FUN_005c9100
//   shape_superopt.cpp_FUN_005c9aa0

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005c8e70(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

int shape_superopt_cpp_FUN_005c8e70(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  double *pdVar4;
  undefined4 *puVar5;
  byte bVar6;
  double dVar7;
  int in_stack_00000004;
  double local_9c;
  double local_94;
  double local_8c;
  undefined4 local_84 [6];
  undefined4 local_6c [6];
  undefined8 local_54;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  dVar7 = (double)CONCAT44(local_34._4_4_,(undefined4)local_34);
  bVar6 = 0;
  local_18 = 0;
  local_24 = 0;
  local_3c._0_4_ = 0;
  local_3c._4_4_ = 0;
  local_3c = 0.0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    local_28 = 0;
    local_1c = in_stack_00000004 + 0x14;
    do {
      iVar2 = local_28 + *(int *)(in_stack_00000004 + 0x30);
      puVar3 = (undefined4 *)(iVar2 + 0x10);
      puVar5 = local_6c;
      local_34 = dVar7;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      local_9c = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
      local_94 = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
      local_8c = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
      pdVar4 = &local_9c;
      puVar3 = local_84;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(undefined4 *)pdVar4;
        pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      }
      local_2c = 0;
      local_14 = 0;
      local_20 = iVar2;
      shape_superopt_cpp_FUN_005c9aa0();
      dVar7 = local_34;
      if ((local_2c != 0) && (local_14 != 0)) {
        iVar1 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        iVar2 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if ((iVar1 == 0) && (iVar2 == 0)) {
          return 0;
        }
        dVar7 = (double)shape_superopt_cpp_FUN_005c9100();
        if (local_3c < dVar7) {
          local_18 = local_20;
          local_3c = dVar7;
        }
        local_44 = dVar7;
        local_34 = dVar7;
        dVar7 = (double)shape_superopt_cpp_FUN_005c9100();
        local_34 = dVar7;
        local_54 = dVar7;
        if (local_3c < dVar7) {
          local_3c = dVar7;
          local_18 = local_20;
        }
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + 0x60;
    } while (local_24 < *(uint *)(in_stack_00000004 + 0x2c));
  }
  return local_18;
}


// Assembly code:
// 005c8e70: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c8e70
// 005c8e71: PUSH ESI
// 005c8e72: PUSH EDI
// 005c8e73: PUSH EBP
// 005c8e74: MOV EBP,ESP
// 005c8e76: SUB ESP,0xd4
// 005c8e7c: SUB EBP,0x76
// 005c8e7f: MOV EBX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 005c8e85: XOR EDX,EDX
// 005c8e87: MOV EAX,dword ptr [EBX + 0x2c]
// 005c8e8a: MOV dword ptr [EBP + 0x6e],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005c8e8d: MOV dword ptr [EBP + 0x62],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005c8e90: MOV dword ptr [EBP + 0x4a],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 005c8e93: MOV dword ptr [EBP + 0x4e],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 005c8e96: TEST EAX,EAX
// 005c8e98: JBE 0x005c8fff
//   XREF to: 005c8fff (CONDITIONAL_JUMP)
// 005c8e9e: LEA EAX,[EBX + 0x14]
// 005c8ea1: MOV dword ptr [EBP + 0x5e],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005c8ea4: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c8ea7: MOV EDX,dword ptr [EBP + 0x5e]
//   Label: LAB_005c8ea7
//   XREF to: Stack[-0x28] (READ)
// 005c8eaa: MOV EAX,dword ptr [EBX + 0x30]
// 005c8ead: ADD EDX,EAX
// 005c8eaf: MOV ESI,EDX
// 005c8eb1: MOV ECX,0x6
// 005c8eb6: LEA EDI,[EBP + 0x1a]
//   XREF to: Stack[-0x6c] (DATA)
// 005c8eb9: LEA ESI,[ESI + 0x10]
// 005c8ebc: MOVSD.REP ES:EDI,ESI
// 005c8ebe: FLD double ptr [EDX + 0x28]
// 005c8ec1: FLD double ptr [EDX + 0x30]
// 005c8ec4: FLD double ptr [EDX + 0x38]
// 005c8ec7: MOV ECX,0x6
// 005c8ecc: LEA EDI,[EBP + 0x2]
//   XREF to: Stack[-0x84] (DATA)
// 005c8ecf: LEA ESI,[EBP + -0x16]
//   XREF to: Stack[-0x9c] (DATA)
// 005c8ed2: FXCH ST2
// 005c8ed4: FSUB double ptr [EDX + 0x10]
// 005c8ed7: FXCH
// 005c8ed9: FSUB double ptr [EDX + 0x18]
// 005c8edc: FXCH ST2
// 005c8ede: FSUB double ptr [EDX + 0x20]
// 005c8ee1: FXCH
// 005c8ee3: FSTP double ptr [EBP + -0x16]
//   XREF to: Stack[-0x9c] (WRITE)
// 005c8ee6: FXCH
// 005c8ee8: FSTP double ptr [EBP + -0xe]
//   XREF to: Stack[-0x94] (WRITE)
// 005c8eeb: FSTP double ptr [EBP + -0x6]
//   XREF to: Stack[-0x8c] (WRITE)
// 005c8eee: MOVSD.REP ES:EDI,ESI
// 005c8ef0: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x84] (READ)
// 005c8ef3: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005c8ef6: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x80] (READ)
// 005c8ef9: MOV dword ptr [EBP + -0x2a],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005c8efc: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x7c] (READ)
// 005c8eff: MOV dword ptr [EBP + -0x26],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005c8f02: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x78] (READ)
// 005c8f05: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005c8f08: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x74] (READ)
// 005c8f0b: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005c8f0e: MOV EAX,dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x70] (READ)
// 005c8f11: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005c8f14: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x1c] (READ)
// 005c8f17: FLD double ptr [EBP + 0xa]
//   XREF to: Stack[-0x7c] (READ)
// 005c8f1a: FMUL double ptr [EAX + 0x10]
// 005c8f1d: FLD double ptr [EBP + 0x12]
//   XREF to: Stack[-0x74] (READ)
// 005c8f20: FMUL double ptr [EAX + 0x8]
// 005c8f23: FSUBP
// 005c8f25: FLD double ptr [EBP + 0x12]
//   XREF to: Stack[-0x74] (READ)
// 005c8f28: FXCH
// 005c8f2a: FSTP double ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (WRITE)
// 005c8f2d: FMUL double ptr [EAX]
// 005c8f2f: FLD double ptr [EBP + 0x2]
//   XREF to: Stack[-0x84] (READ)
// 005c8f32: FMUL double ptr [EAX + 0x10]
// 005c8f35: FSUBP
// 005c8f37: FLD double ptr [EBP + 0x2]
//   XREF to: Stack[-0x84] (READ)
// 005c8f3a: FXCH
// 005c8f3c: FSTP double ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (WRITE)
// 005c8f3f: FMUL double ptr [EAX + 0x8]
// 005c8f42: FLD double ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (READ)
// 005c8f45: FMUL ST0
// 005c8f47: FLD double ptr [EBP + 0xa]
//   XREF to: Stack[-0x7c] (READ)
// 005c8f4a: FMUL double ptr [EAX]
// 005c8f4c: FLD double ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (READ)
// 005c8f4f: FMUL ST0
// 005c8f51: FXCH
// 005c8f53: FSUBP ST3,ST0
// 005c8f55: FADDP
// 005c8f57: FXCH
// 005c8f59: FST double ptr [EBP + -0x36]
//   XREF to: Stack[-0xbc] (WRITE)
// 005c8f5c: FMUL double ptr [EBP + -0x36]
//   XREF to: Stack[-0xbc] (READ)
// 005c8f5f: FADDP
// 005c8f61: FSQRT
// 005c8f63: FLD double ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (READ)
// 005c8f66: FLD1
// 005c8f68: FDIVRP ST2,ST0
// 005c8f6a: FMUL ST1
// 005c8f6c: FLD double ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (READ)
// 005c8f6f: XOR EAX,EAX
// 005c8f71: FMUL ST2
// 005c8f73: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c8f76: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c8f79: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x14] (DATA)
// 005c8f7c: FLD double ptr [EBP + -0x36]
//   XREF to: Stack[-0xbc] (READ)
// 005c8f7f: PUSH EAX
// 005c8f80: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x2c] (DATA)
// 005c8f83: FMULP ST3
// 005c8f85: PUSH EAX
// 005c8f86: FXCH
// 005c8f88: FSTP double ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (WRITE)
// 005c8f8b: MOV EAX,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (READ)
// 005c8f8e: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 005c8f94: MOV dword ptr [EBP + -0x5e],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005c8f97: MOV EAX,dword ptr [EBP + -0x42]
//   XREF to: Stack[-0xc8] (READ)
// 005c8f9a: FSTP double ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (WRITE)
// 005c8f9d: MOV dword ptr [EBP + -0x5a],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005c8fa0: MOV EAX,dword ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (READ)
// 005c8fa3: MOV ESI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c8fa9: MOV dword ptr [EBP + -0x56],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005c8fac: MOV EAX,dword ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc0] (READ)
// 005c8faf: FSTP double ptr [EBP + -0x36]
//   XREF to: Stack[-0xbc] (WRITE)
// 005c8fb2: MOV dword ptr [EBP + -0x52],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005c8fb5: MOV EAX,dword ptr [EBP + -0x36]
//   XREF to: Stack[-0xbc] (READ)
// 005c8fb8: PUSH ECX
// 005c8fb9: MOV dword ptr [EBP + -0x4e],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005c8fbc: MOV EAX,dword ptr [EBP + -0x32]
//   XREF to: Stack[-0xb8] (READ)
// 005c8fbf: PUSH ESI
// 005c8fc0: MOV dword ptr [EBP + -0x4a],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 005c8fc3: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe4] (DATA)
// 005c8fc6: PUSH EAX
// 005c8fc7: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x6c] (DATA)
// 005c8fca: PUSH EAX
// 005c8fcb: PUSH EBX
// 005c8fcc: MOV dword ptr [EBP + 0x66],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005c8fcf: CALL shape_superopt.cpp_FUN_005c9aa0
//   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)
// 005c8fd4: MOV EDI,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x2c] (READ)
// 005c8fd7: ADD ESP,0x1c
// 005c8fda: TEST EDI,EDI
// 005c8fdc: JZ 0x005c8fe4
//   XREF to: 005c8fe4 (CONDITIONAL_JUMP)
// 005c8fde: CMP dword ptr [EBP + 0x72],0x0
//   XREF to: Stack[-0x14] (READ)
// 005c8fe2: JNZ 0x005c900a
//   XREF to: 005c900a (CONDITIONAL_JUMP)
// 005c8fe4: MOV EDX,dword ptr [EBP + 0x5e]
//   Label: LAB_005c8fe4
//   XREF to: Stack[-0x28] (READ)
// 005c8fe7: MOV ECX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x24] (READ)
// 005c8fea: MOV ESI,dword ptr [EBX + 0x2c]
// 005c8fed: ADD EDX,0x60
// 005c8ff0: INC ECX
// 005c8ff1: MOV dword ptr [EBP + 0x5e],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005c8ff4: MOV dword ptr [EBP + 0x62],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005c8ff7: CMP ECX,ESI
// 005c8ff9: JC 0x005c8ea7
//   XREF to: 005c8ea7 (CONDITIONAL_JUMP)
// 005c8fff: MOV EAX,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8fff
//   XREF to: Stack[-0x18] (READ)
// 005c9002: LEA ESP,[EBP + 0x76]
//   XREF to: Stack[-0x10] (DATA)
// 005c9005: POP EBP
// 005c9006: POP EDI
// 005c9007: POP ESI
// 005c9008: POP EBX
// 005c9009: RET
// 005c900a: MOV EDI,0x1
//   Label: LAB_005c900a
// 005c900f: PUSH EDI
// 005c9010: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x2c] (DATA)
// 005c9013: PUSH EAX
// 005c9014: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c901a: PUSH EDX
// 005c901b: PUSH EBX
// 005c901c: MOV ESI,EDI
// 005c901e: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c9023: ADD ESP,0x10
// 005c9026: TEST EAX,EAX
// 005c9028: JZ 0x005c90e7
//   XREF to: 005c90e7 (CONDITIONAL_JUMP)
// 005c902e: PUSH 0x1
//   Label: LAB_005c902e
// 005c9030: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x14] (DATA)
// 005c9033: PUSH EAX
// 005c9034: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 005c903a: PUSH ECX
// 005c903b: PUSH EBX
// 005c903c: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c9041: ADD ESP,0x10
// 005c9044: TEST EAX,EAX
// 005c9046: JZ 0x005c90ee
//   XREF to: 005c90ee (CONDITIONAL_JUMP)
// 005c904c: TEST EDI,EDI
//   Label: LAB_005c904c
// 005c904e: JNZ 0x005c9058
//   XREF to: 005c9058 (CONDITIONAL_JUMP)
// 005c9050: TEST ESI,ESI
// 005c9052: JZ 0x005c90f5
//   XREF to: 005c90f5 (CONDITIONAL_JUMP)
// 005c9058: MOV ESI,dword ptr [EBP + 0x5a]
//   Label: LAB_005c9058
//   XREF to: Stack[-0x2c] (READ)
// 005c905b: PUSH ESI
// 005c905c: MOV EDI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c9062: PUSH EDI
// 005c9063: PUSH EBX
// 005c9064: CALL shape_superopt.cpp_FUN_005c9100
//   XREF to: 005c9100 (UNCONDITIONAL_CALL)
// 005c9069: MOV dword ptr [EBP + 0x52],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005c906c: MOV dword ptr [EBP + 0x56],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005c906f: ADD ESP,0xc
// 005c9072: MOV EAX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x34] (READ)
// 005c9075: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005c9078: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x30] (READ)
// 005c907b: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005c907e: FLD double ptr [EBP + 0x42]
//   XREF to: Stack[-0x44] (READ)
// 005c9081: FCOMP double ptr [EBP + 0x4a]
//   XREF to: Stack[-0x3c] (READ)
// 005c9084: FNSTSW AX
// 005c9086: SAHF
// 005c9087: JBE 0x005c909b
//   XREF to: 005c909b (CONDITIONAL_JUMP)
// 005c9089: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x44] (READ)
// 005c908c: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005c908f: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x40] (READ)
// 005c9092: MOV dword ptr [EBP + 0x4e],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005c9095: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x20] (READ)
// 005c9098: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c909b: MOV EAX,dword ptr [EBP + 0x72]
//   Label: LAB_005c909b
//   XREF to: Stack[-0x14] (READ)
// 005c909e: PUSH EAX
// 005c909f: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 005c90a5: PUSH EDX
// 005c90a6: PUSH EBX
// 005c90a7: CALL shape_superopt.cpp_FUN_005c9100
//   XREF to: 005c9100 (UNCONDITIONAL_CALL)
// 005c90ac: MOV dword ptr [EBP + 0x52],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005c90af: MOV dword ptr [EBP + 0x56],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005c90b2: ADD ESP,0xc
// 005c90b5: MOV EAX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x34] (READ)
// 005c90b8: MOV dword ptr [EBP + 0x32],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005c90bb: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x30] (READ)
// 005c90be: MOV dword ptr [EBP + 0x36],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005c90c1: FLD double ptr [EBP + 0x32]
//   XREF to: Stack[-0x54] (READ)
// 005c90c4: FCOMP double ptr [EBP + 0x4a]
//   XREF to: Stack[-0x3c] (READ)
// 005c90c7: FNSTSW AX
// 005c90c9: SAHF
// 005c90ca: JBE 0x005c8fe4
//   XREF to: 005c8fe4 (CONDITIONAL_JUMP)
// 005c90d0: MOV EAX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x54] (READ)
// 005c90d3: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005c90d6: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x50] (READ)
// 005c90d9: MOV dword ptr [EBP + 0x4e],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005c90dc: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x20] (READ)
// 005c90df: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c90e2: JMP 0x005c8fe4
//   XREF to: 005c8fe4 (UNCONDITIONAL_JUMP)
// 005c90e7: XOR EDI,EDI
//   Label: LAB_005c90e7
// 005c90e9: JMP 0x005c902e
//   XREF to: 005c902e (UNCONDITIONAL_JUMP)
// 005c90ee: XOR ESI,ESI
//   Label: LAB_005c90ee
// 005c90f0: JMP 0x005c904c
//   XREF to: 005c904c (UNCONDITIONAL_JUMP)
// 005c90f5: XOR EAX,EAX
//   Label: LAB_005c90f5
// 005c90f7: LEA ESP,[EBP + 0x76]
//   XREF to: Stack[-0x10] (DATA)
// 005c90fa: POP EBP
// 005c90fb: POP EDI
// 005c90fc: POP ESI
// 005c90fd: POP EBX
// 005c90fe: RET

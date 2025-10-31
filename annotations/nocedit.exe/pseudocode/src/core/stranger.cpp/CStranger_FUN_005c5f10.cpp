// Name: core_stranger.cpp_CStranger_FUN_005c5f10
// Address: 005c5f10
// Address Range: [[005c5f10, 005c6215]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c5f10()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc4ff [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005c5ee4 = 005c6004
//   undefined4 DAT_00653e7c
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_stranger.cpp_CStranger_FUN_005c06b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c5f10(undefined4 param_1) */

void core_stranger_cpp_CStranger_FUN_005c5f10(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x1fc34) = 0;
  if (*(int *)(in_stack_00000004 + 0xbe38) == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x2598) != 0) {
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x1fc38) != 0) {
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x1fbd4) == 0) {
    return;
  }
  iVar4 = *(int *)(in_stack_00000004 + 0x1fc2c);
  if (iVar4 == 0) {
    iVar4 = *(int *)(in_stack_00000004 + 0x24f8);
LAB_005c5f6e:
    if ((iVar4 != 0) && (uVar2 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x6c))(), uVar2 != 0)) {
      iVar4 = 0;
      while( true ) {
        iVar6 = *(int *)(in_stack_00000004 + 0x1fc3c) + 1;
        *(int *)(in_stack_00000004 + 0x1fc3c) = iVar6;
        if ((iVar6 < 0) || (1 < iVar6)) {
          *(undefined4 *)(in_stack_00000004 + 0x1fc3c) = 0;
        }
        uVar5 = *(int *)(in_stack_00000004 + 0x1fc3c) + 0xc;
        uVar3 = 0;
        if (0xb < uVar5) {
          if (uVar5 < 0xd) {
            uVar3 = 1;
          }
          else if (uVar5 == 0xd) {
            uVar3 = 2;
          }
        }
        if ((uVar3 & uVar2) != 0) break;
        iVar4 = iVar4 + 1;
        if (0x13 < iVar4) {
          return;
        }
      }
      *(undefined4 *)(in_stack_00000004 + 0x2a90) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x1fc38) = 7;
      *(int *)(in_stack_00000004 + 0x2a8c) = *(int *)(in_stack_00000004 + 0x1fc3c) + 0xc;
      return;
    }
  }
  else if (*(int *)(iVar4 + 0x2e0) == 7) goto LAB_005c5f6e;
  if (*(int *)(in_stack_00000004 + 0x1fc2c) == 0) {
    return;
  }
  iVar4 = *(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0);
  if (iVar4 == 3) {
    return;
  }
  if ((*(int *)(in_stack_00000004 + 0x1f734) == 0) && (iVar4 == 0)) {
    iVar4 = in_stack_00000004 + 0x1fbe8;
    iVar6 = in_stack_00000004 + 0x1fc08;
    if (*(int *)(in_stack_00000004 + 0x1fc30) != 0) {
      iVar6 = iVar4;
      iVar4 = in_stack_00000004 + 0x1fc08;
    }
    if ((*(int *)(iVar6 + 0x1c) == 2) && (*(int *)(iVar4 + 0x1c) != 2)) {
      *(uint *)(in_stack_00000004 + 0x1fc30) = (uint)(*(int *)(in_stack_00000004 + 0x1fc30) == 0);
    }
  }
  if (*(int *)(in_stack_00000004 + 0x1fc2c) == 0) {
switchD_005c5ffd_caseD_8:
  }
  else {
    switch(*(undefined4 *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0)) {
    case 0:
    case 5:
      break;
    case 1:
      break;
    case 2:
      break;
    default:
      goto switchD_005c5ffd_caseD_8;
    case 4:
      break;
    case 7:
    }
  }
  fVar1 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((float)_DAT_00653e7c <= fVar1) {
    iVar4 = in_stack_00000004 + 0x1fbe8;
    if ((*(int *)(in_stack_00000004 + 0x1fc30) != 0) &&
       (*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0) == 0)) {
      iVar4 = in_stack_00000004 + 0x1fc08;
    }
    if (((1.0 <= *(float *)(iVar4 + 0x14)) && (*(float *)(iVar4 + 0x10) <= 0.0)) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x154) + 0xfc))(),
       iVar4 != 0)) {
      if (*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0) == 0) {
        core_stranger_cpp_CStranger_FUN_005c06b0();
        *(uint *)(in_stack_00000004 + 0x1fc30) = (uint)(*(int *)(in_stack_00000004 + 0x1fc30) == 0);
      }
      *(undefined4 *)(in_stack_00000004 + 0x1fc34) = 0;
      iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x154) + 0xf8))();
      if (iVar4 != 0) {
        *(undefined4 *)(in_stack_00000004 + 0x1fc34) = 1;
      }
      core_stranger_cpp_CStranger_FUN_005c06b0();
      if (*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2dc) == 2) {
        *(undefined4 *)(in_stack_00000004 + 0x2a90) = 0;
        *(undefined4 *)(in_stack_00000004 + 0x2a8c) = 8;
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 005c5f10: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c5f10
// 005c5f11: PUSH ESI
// 005c5f12: PUSH EDI
// 005c5f13: PUSH EBP
// 005c5f14: SUB ESP,0x4
// 005c5f17: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005c5f1b: MOV EDX,dword ptr [EBX + 0xbe38]
// 005c5f21: MOV dword ptr [EBX + 0x1fc34],0x0
// 005c5f2b: TEST EDX,EDX
// 005c5f2d: JZ 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c5f33: CMP dword ptr [EBX + 0x2598],0x0
// 005c5f3a: JNZ 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c5f40: CMP dword ptr [EBX + 0x1fc38],0x0
// 005c5f47: JNZ 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c5f4d: CMP dword ptr [EBX + 0x1fbd4],0x0
// 005c5f54: JZ 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c5f5a: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c5f60: TEST EAX,EAX
// 005c5f62: JNZ 0x005c606f
//   XREF to: 005c606f (CONDITIONAL_JUMP)
// 005c5f68: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c5f6e: TEST EAX,EAX
//   Label: LAB_005c5f6e
// 005c5f70: JNZ 0x005c6081
//   XREF to: 005c6081 (CONDITIONAL_JUMP)
// 005c5f76: MOV EAX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c5f76
// 005c5f7c: TEST EAX,EAX
// 005c5f7e: JZ 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c5f84: MOV EDX,dword ptr [EAX + 0x2e0]
// 005c5f8a: CMP EDX,0x3
// 005c5f8d: JZ 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c5f93: CMP dword ptr [EBX + 0x1f734],0x0
// 005c5f9a: JNZ 0x005c5fe0
//   XREF to: 005c5fe0 (CONDITIONAL_JUMP)
// 005c5f9c: TEST EDX,EDX
// 005c5f9e: JNZ 0x005c5fe0
//   XREF to: 005c5fe0 (CONDITIONAL_JUMP)
// 005c5fa0: LEA ECX,[EBX + 0x1fbe8]
// 005c5fa6: MOV EDI,dword ptr [EBX + 0x1fc30]
// 005c5fac: LEA EAX,[EBX + 0x1fc08]
// 005c5fb2: TEST EDI,EDI
// 005c5fb4: JZ 0x005c611e
//   XREF to: 005c611e (CONDITIONAL_JUMP)
// 005c5fba: MOV EDX,EAX
// 005c5fbc: MOV EAX,ECX
// 005c5fbe: MOV EBP,dword ptr [EAX + 0x1c]
//   Label: LAB_005c5fbe
// 005c5fc1: CMP EBP,0x2
// 005c5fc4: JNZ 0x005c5fe0
//   XREF to: 005c5fe0 (CONDITIONAL_JUMP)
// 005c5fc6: CMP EBP,dword ptr [EDX + 0x1c]
// 005c5fc9: JZ 0x005c5fe0
//   XREF to: 005c5fe0 (CONDITIONAL_JUMP)
// 005c5fcb: CMP dword ptr [EBX + 0x1fc30],0x0
// 005c5fd2: SETZ AL
// 005c5fd5: AND EAX,0xff
// 005c5fda: MOV dword ptr [EBX + 0x1fc30],EAX
// 005c5fe0: MOV EAX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c5fe0
// 005c5fe6: TEST EAX,EAX
// 005c5fe8: JZ 0x005c614d
//   XREF to: 005c614d (CONDITIONAL_JUMP)
// 005c5fee: MOV EAX,dword ptr [EAX + 0x2e0]
// 005c5ff4: CMP EAX,0x8
// 005c5ff7: JA 0x005c614d
//   XREF to: 005c614d (CONDITIONAL_JUMP)
// 005c5ffd: JMP dword ptr [EAX*0x4 + 0x5c5ee4]
//   Label: switchD
//   XREF to: 005c6004 (COMPUTED_JUMP)
//   XREF to: 005c6125 (COMPUTED_JUMP)
//   XREF to: 005c612f (COMPUTED_JUMP)
//   XREF to: 005c6139 (COMPUTED_JUMP)
//   XREF to: 005c6143 (COMPUTED_JUMP)
//   XREF to: 005c614d (COMPUTED_JUMP)
//   XREF to: 005c5ee4 (DATA)
// 005c6004: MOV EAX,0x2
//   Label: caseD_5
// 005c6009: PUSH EAX
//   Label: LAB_005c6009
// 005c600a: PUSH EBX
// 005c600b: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c6010: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c6014: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005c6018: ADD ESP,0x8
// 005c601b: FCOMP double ptr [0x00653e7c]
//   XREF to: 00653e7c (READ)
// 005c6021: FNSTSW AX
// 005c6023: SAHF
// 005c6024: JC 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c6026: MOV ECX,dword ptr [EBX + 0x1fc30]
// 005c602c: LEA EDX,[EBX + 0x1fbe8]
// 005c6032: TEST ECX,ECX
// 005c6034: JZ 0x005c604b
//   XREF to: 005c604b (CONDITIONAL_JUMP)
// 005c6036: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c603c: CMP dword ptr [EAX + 0x2e0],0x0
// 005c6043: JNZ 0x005c604b
//   XREF to: 005c604b (CONDITIONAL_JUMP)
// 005c6045: LEA EDX,[EBX + 0x1fc08]
// 005c604b: FLD float ptr [EDX + 0x14]
//   Label: LAB_005c604b
// 005c604e: FLD1
// 005c6050: FCOMPP
// 005c6052: FNSTSW AX
// 005c6054: SAHF
// 005c6055: JA 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c6057: FLD float ptr [EDX + 0x10]
// 005c605a: FLDZ
// 005c605c: FCOMPP
// 005c605e: FNSTSW AX
// 005c6060: SAHF
// 005c6061: JNC 0x005c6154
//   XREF to: 005c6154 (CONDITIONAL_JUMP)
// 005c6067: ADD ESP,0x4
//   Label: LAB_005c6067
// 005c606a: POP EBP
// 005c606b: POP EDI
// 005c606c: POP ESI
// 005c606d: POP EBX
// 005c606e: RET
// 005c606f: CMP dword ptr [EAX + 0x2e0],0x7
//   Label: LAB_005c606f
// 005c6076: JZ 0x005c5f6e
//   XREF to: 005c5f6e (CONDITIONAL_JUMP)
// 005c607c: JMP 0x005c5f76
//   XREF to: 005c5f76 (UNCONDITIONAL_JUMP)
// 005c6081: PUSH EAX
//   Label: LAB_005c6081
// 005c6082: MOV EDX,dword ptr [EAX + 0x154]
// 005c6088: CALL dword ptr [EDX + 0x6c]
// 005c608b: ADD ESP,0x4
// 005c608e: MOV ESI,EAX
// 005c6090: TEST EAX,EAX
// 005c6092: JZ 0x005c5f76
//   XREF to: 005c5f76 (CONDITIONAL_JUMP)
// 005c6098: XOR ECX,ECX
// 005c609a: XOR EDI,EDI
// 005c609c: MOV EBP,dword ptr [EBX + 0x1fc3c]
//   Label: LAB_005c609c
// 005c60a2: INC EBP
// 005c60a3: MOV dword ptr [EBX + 0x1fc3c],EBP
// 005c60a9: CMP EDI,EBP
// 005c60ab: JLE 0x005c60d5
//   XREF to: 005c60d5 (CONDITIONAL_JUMP)
// 005c60ad: MOV dword ptr [EBX + 0x1fc3c],EDI
//   Label: LAB_005c60ad
// 005c60b3: MOV EDX,dword ptr [EBX + 0x1fc3c]
//   Label: LAB_005c60b3
// 005c60b9: ADD EDX,0xc
// 005c60bc: MOV EAX,EDI
// 005c60be: CMP EDX,0xc
// 005c60c1: JNC 0x005c60ea
//   XREF to: 005c60ea (CONDITIONAL_JUMP)
// 005c60c3: TEST EAX,ESI
//   Label: LAB_005c60c3
// 005c60c5: JNZ 0x005c60f3
//   XREF to: 005c60f3 (CONDITIONAL_JUMP)
// 005c60c7: INC ECX
// 005c60c8: CMP ECX,0x14
// 005c60cb: JL 0x005c609c
//   XREF to: 005c609c (CONDITIONAL_JUMP)
// 005c60cd: ADD ESP,0x4
// 005c60d0: POP EBP
// 005c60d1: POP EDI
// 005c60d2: POP ESI
// 005c60d3: POP EBX
// 005c60d4: RET
// 005c60d5: CMP EBP,0x2
//   Label: LAB_005c60d5
// 005c60d8: JL 0x005c60b3
//   XREF to: 005c60b3 (CONDITIONAL_JUMP)
// 005c60da: JMP 0x005c60ad
//   XREF to: 005c60ad (UNCONDITIONAL_JUMP)
// 005c60dc: MOV EAX,0x1
//   Label: LAB_005c60dc
// 005c60e1: JMP 0x005c60c3
//   XREF to: 005c60c3 (UNCONDITIONAL_JUMP)
// 005c60e3: MOV EAX,0x2
//   Label: LAB_005c60e3
// 005c60e8: JMP 0x005c60c3
//   XREF to: 005c60c3 (UNCONDITIONAL_JUMP)
// 005c60ea: JBE 0x005c60dc
//   Label: LAB_005c60ea
//   XREF to: 005c60dc (CONDITIONAL_JUMP)
// 005c60ec: CMP EDX,0xd
// 005c60ef: JZ 0x005c60e3
//   XREF to: 005c60e3 (CONDITIONAL_JUMP)
// 005c60f1: JMP 0x005c60c3
//   XREF to: 005c60c3 (UNCONDITIONAL_JUMP)
// 005c60f3: MOV dword ptr [EBX + 0x2a90],0x0
//   Label: LAB_005c60f3
// 005c60fd: MOV EAX,dword ptr [EBX + 0x1fc3c]
// 005c6103: MOV dword ptr [EBX + 0x1fc38],0x7
// 005c610d: ADD EAX,0xc
// 005c6110: MOV dword ptr [EBX + 0x2a8c],EAX
// 005c6116: ADD ESP,0x4
// 005c6119: POP EBP
// 005c611a: POP EDI
// 005c611b: POP ESI
// 005c611c: POP EBX
// 005c611d: RET
// 005c611e: MOV EDX,ECX
//   Label: LAB_005c611e
// 005c6120: JMP 0x005c5fbe
//   XREF to: 005c5fbe (UNCONDITIONAL_JUMP)
// 005c6125: MOV EAX,0x4
//   Label: caseD_1
// 005c612a: JMP 0x005c6009
//   XREF to: 005c6009 (UNCONDITIONAL_JUMP)
// 005c612f: MOV EAX,0x7
//   Label: caseD_4
// 005c6134: JMP 0x005c6009
//   XREF to: 005c6009 (UNCONDITIONAL_JUMP)
// 005c6139: MOV EAX,0x5
//   Label: caseD_2
// 005c613e: JMP 0x005c6009
//   XREF to: 005c6009 (UNCONDITIONAL_JUMP)
// 005c6143: MOV EAX,0x8
//   Label: caseD_7
// 005c6148: JMP 0x005c6009
//   XREF to: 005c6009 (UNCONDITIONAL_JUMP)
// 005c614d: XOR EAX,EAX
//   Label: caseD_8
// 005c614f: JMP 0x005c6009
//   XREF to: 005c6009 (UNCONDITIONAL_JUMP)
// 005c6154: MOV EAX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c6154
// 005c615a: PUSH EAX
// 005c615b: MOV EDX,dword ptr [EAX + 0x154]
// 005c6161: CALL dword ptr [EDX + 0xfc]
// 005c6167: ADD ESP,0x4
// 005c616a: TEST EAX,EAX
// 005c616c: JZ 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c6172: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c6178: CMP dword ptr [EAX + 0x2e0],0x0
// 005c617f: JZ 0x005c61eb
//   XREF to: 005c61eb (CONDITIONAL_JUMP)
// 005c6181: MOV EAX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c6181
// 005c6187: MOV dword ptr [EBX + 0x1fc34],0x0
// 005c6191: PUSH EAX
// 005c6192: MOV EDX,dword ptr [EAX + 0x154]
// 005c6198: CALL dword ptr [EDX + 0xf8]
// 005c619e: ADD ESP,0x4
// 005c61a1: TEST EAX,EAX
// 005c61a3: JZ 0x005c61af
//   XREF to: 005c61af (CONDITIONAL_JUMP)
// 005c61a5: MOV dword ptr [EBX + 0x1fc34],0x1
// 005c61af: PUSH 0x0
//   Label: LAB_005c61af
// 005c61b1: PUSH EBX
// 005c61b2: CALL core_stranger.cpp_CStranger_FUN_005c06b0
//   XREF to: 005c06b0 (UNCONDITIONAL_CALL)
// 005c61b7: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c61bd: MOV ECX,dword ptr [EAX + 0x2dc]
// 005c61c3: ADD ESP,0x8
// 005c61c6: CMP ECX,0x2
// 005c61c9: JNZ 0x005c6067
//   XREF to: 005c6067 (CONDITIONAL_JUMP)
// 005c61cf: MOV dword ptr [EBX + 0x2a90],0x0
// 005c61d9: MOV dword ptr [EBX + 0x2a8c],0x8
// 005c61e3: ADD ESP,0x4
// 005c61e6: POP EBP
// 005c61e7: POP EDI
// 005c61e8: POP ESI
// 005c61e9: POP EBX
// 005c61ea: RET
// 005c61eb: MOV EBP,dword ptr [EBX + 0x1fc30]
//   Label: LAB_005c61eb
// 005c61f1: PUSH EBP
// 005c61f2: PUSH EBX
// 005c61f3: CALL core_stranger.cpp_CStranger_FUN_005c06b0
//   XREF to: 005c06b0 (UNCONDITIONAL_CALL)
// 005c61f8: MOV EDX,dword ptr [EBX + 0x1fc30]
// 005c61fe: ADD ESP,0x8
// 005c6201: TEST EDX,EDX
// 005c6203: SETZ AL
// 005c6206: AND EAX,0xff
// 005c620b: MOV dword ptr [EBX + 0x1fc30],EAX
// 005c6211: JMP 0x005c6181
//   XREF to: 005c6181 (UNCONDITIONAL_JUMP)

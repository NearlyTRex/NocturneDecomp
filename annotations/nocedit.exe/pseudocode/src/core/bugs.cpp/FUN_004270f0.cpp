// Name: core_bugs.cpp_FUN_004270f0
// Address: 004270f0
// Address Range: [[004270f0, 004272ec]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004270f0()
// Cross-references:
//   core_bugs.cpp_FUN_004268e0 (004268e0) at 0042704a [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00616e53 = 0.00390625
// Function calls:
//   core_actor.cpp_FUN_0040cc70

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_004270f0(undefined4 param_1, undefined4 param_2)
    */

void core_bugs_cpp_FUN_004270f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int *piVar7;
  byte bVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int aiStack_102c [1025];
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  bVar8 = 0;
  aiStack_102c[0x400] = *(int *)(in_stack_00000008 + 0x2c);
  *(undefined4 *)(in_stack_00000008 + 0x34) = 0;
  *(undefined4 *)(in_stack_00000008 + 0x2c) = *(undefined4 *)(in_stack_00000008 + 0x30);
  aiStack_102c[0x3ff] = in_stack_00000004 + 0x12b38;
  local_20 = 0;
  do {
    piVar4 = (int *)(aiStack_102c[0x3ff] + *(int *)(in_stack_00000008 + 0x2c) * 0x28);
    local_28 = *(int *)(*(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234) + 4 +
                       *(int *)(in_stack_00000008 + 0x2c) * 0xc);
    iVar6 = 0;
    iVar5 = 0;
    local_24 = piVar4;
    if (0 < *piVar4) {
      iVar2 = 0;
      do {
        iVar1 = piVar4[2];
        local_1c = *(int *)(*(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234) + iVar1 * 0xc +
                           4);
        local_18 = 1;
        if ((local_20 != 0) ||
           ((iVar3 = iVar2, iVar1 != aiStack_102c[0x400] &&
            ((*(int *)(in_stack_00000008 + 0x3c) < 1 || (local_28 <= local_1c)))))) {
          iVar3 = iVar2 + 4;
          iVar6 = iVar6 + 1;
          *(int *)((int)aiStack_102c + iVar2 + 0xfc4) = iVar1;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        iVar2 = iVar3;
      } while (iVar5 < *local_24);
    }
  } while ((iVar6 < 1) && (local_20 = local_20 + 1, local_20 < 2));
  if (0 < *(int *)(in_stack_00000008 + 0x3c)) {
    *(int *)(in_stack_00000008 + 0x3c) = *(int *)(in_stack_00000008 + 0x3c) + -1;
  }
  if (iVar6 < 1) {
    *(int *)(in_stack_00000008 + 0x30) = aiStack_102c[0x400];
    if (aiStack_102c[0x400] < 0) {
      *(undefined4 *)(in_stack_00000008 + 0x30) = *(undefined4 *)(in_stack_00000008 + 0x2c);
    }
  }
  else {
    iVar5 = core_actor_cpp_FUN_0040cc70();
    *(int *)(in_stack_0000000c + 0x30) = aiStack_102c[iVar5 + 0x3f2];
  }
  iVar5 = *(int *)(*(int *)(in_stack_00000008 + 0x12afc) + 0x2234);
  piVar4 = (int *)(iVar5 + *(int *)(in_stack_0000000c + 0x2c) * 0xc);
  piVar7 = piVar4 + (uint)bVar8 * -2 + 1;
  aiStack_102c[0x3fd] = *piVar4;
  aiStack_102c[(uint)bVar8 * -2 + 0x3fe] = *piVar7;
  aiStack_102c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3ff] = piVar7[(uint)bVar8 * -2 + 1];
  piVar4 = (int *)(iVar5 + *(int *)(in_stack_0000000c + 0x30) * 0xc);
  piVar7 = piVar4 + (uint)bVar8 * -2 + 1;
  aiStack_102c[0x3fa] = *piVar4;
  aiStack_102c[(uint)bVar8 * -2 + 0x3fb] = *piVar7;
  aiStack_102c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3fc] = piVar7[(uint)bVar8 * -2 + 1];
  *(float *)(in_stack_0000000c + 0x38) =
       SQRT((float)((aiStack_102c[0x3ff] - aiStack_102c[0x3fc]) *
                    (aiStack_102c[0x3ff] - aiStack_102c[0x3fc]) +
                   (aiStack_102c[0x3fd] - aiStack_102c[0x3fa]) *
                   (aiStack_102c[0x3fd] - aiStack_102c[0x3fa]) +
                   (aiStack_102c[0x3fe] - aiStack_102c[0x3fb]) *
                   (aiStack_102c[0x3fe] - aiStack_102c[0x3fb]))) * (float)DOUBLE_00616e53;
  return;
}


// Assembly code:
// 004270f0: PUSH EBX
//   Label: core_bugs.cpp_FUN_004270f0
// 004270f1: PUSH ESI
// 004270f2: PUSH EDI
// 004270f3: PUSH EBP
// 004270f4: SUB ESP,0x58
// 004270f7: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 004270fb: MOV EAX,dword ptr [EAX + 0x2c]
// 004270fe: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00427102: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00427106: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0042710a: MOV EAX,dword ptr [EAX + 0x30]
// 0042710d: MOV dword ptr [EDX + 0x34],0x0
// 00427114: MOV dword ptr [EDX + 0x2c],EAX
// 00427117: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 0042711b: XOR EDX,EDX
// 0042711d: ADD EAX,0x12b38
// 00427122: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00427126: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0042712a: MOV EAX,dword ptr [ESP + 0x70]
//   Label: LAB_0042712a
//   XREF to: Stack[0x8] (READ)
// 0042712e: IMUL EAX,dword ptr [EAX + 0x2c],0x28
// 00427132: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 00427136: ADD EDX,EAX
// 00427138: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0042713c: IMUL EAX,dword ptr [EAX + 0x2c],0xc
// 00427140: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00427144: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00427148: MOV EDX,dword ptr [EDX + 0x12afc]
// 0042714e: MOV EDX,dword ptr [EDX + 0x2234]
// 00427154: MOV EAX,dword ptr [EDX + EAX*0x1 + 0x4]
// 00427158: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0042715c: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 00427160: XOR ESI,ESI
// 00427162: MOV EDI,dword ptr [EAX]
// 00427164: XOR EDX,EDX
// 00427166: TEST EDI,EDI
// 00427168: JLE 0x004271ba
//   XREF to: 004271ba (CONDITIONAL_JUMP)
// 0042716a: MOV EBX,EAX
// 0042716c: XOR ECX,ECX
// 0042716e: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_0042716e
// 00427171: IMUL EBP,EAX,0xc
// 00427174: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00427178: MOV EDI,dword ptr [EDI + 0x12afc]
// 0042717e: MOV EDI,dword ptr [EDI + 0x2234]
// 00427184: ADD EDI,EBP
// 00427186: MOV EDI,dword ptr [EDI + 0x4]
// 00427189: MOV dword ptr [ESP + 0x4c],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0042718d: MOV EDI,0x1
// 00427192: MOV EBP,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 00427196: MOV dword ptr [ESP + 0x50],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0042719a: TEST EBP,EBP
// 0042719c: JNZ 0x004272af
//   XREF to: 004272af (CONDITIONAL_JUMP)
// 004271a2: CMP EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 004271a6: JNZ 0x00427297
//   XREF to: 00427297 (CONDITIONAL_JUMP)
// 004271ac: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_004271ac
//   XREF to: Stack[-0x24] (READ)
// 004271b0: INC EDX
// 004271b1: MOV EBP,dword ptr [EAX]
// 004271b3: ADD EBX,0x4
// 004271b6: CMP EDX,EBP
// 004271b8: JL 0x0042716e
//   XREF to: 0042716e (CONDITIONAL_JUMP)
// 004271ba: TEST ESI,ESI
//   Label: LAB_004271ba
// 004271bc: JLE 0x00427280
//   XREF to: 00427280 (CONDITIONAL_JUMP)
// 004271c2: MOV EAX,dword ptr [ESP + 0x70]
//   Label: LAB_004271c2
//   XREF to: Stack[0x8] (READ)
// 004271c6: MOV ECX,dword ptr [EAX + 0x3c]
// 004271c9: TEST ECX,ECX
// 004271cb: JLE 0x004271d3
//   XREF to: 004271d3 (CONDITIONAL_JUMP)
// 004271cd: LEA EBX,[ECX + -0x1]
// 004271d0: MOV dword ptr [EAX + 0x3c],EBX
// 004271d3: TEST ESI,ESI
//   Label: LAB_004271d3
// 004271d5: JG 0x004272c7
//   XREF to: 004272c7 (CONDITIONAL_JUMP)
// 004271db: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 004271df: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 004271e3: MOV dword ptr [EDX + 0x30],EAX
// 004271e6: TEST EAX,EAX
// 004271e8: JL 0x004272e2
//   XREF to: 004272e2 (CONDITIONAL_JUMP)
// 004271ee: MOV EDX,dword ptr [ESP + 0x70]
//   Label: LAB_004271ee
//   XREF to: Stack[0x8] (READ)
// 004271f2: MOV EDX,dword ptr [EDX + 0x2c]
// 004271f5: LEA EAX,[EDX*0x4 + 0x0]
// 004271fc: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00427200: SUB EAX,EDX
// 00427202: MOV ECX,dword ptr [ECX + 0x12afc]
// 00427208: SHL EAX,0x2
// 0042720b: MOV EDX,dword ptr [ECX + 0x2234]
// 00427211: LEA EDI,[ESP + 0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 00427215: LEA ESI,[EDX + EAX*0x1]
// 00427218: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0042721c: MOVSD ES:EDI,ESI
// 0042721d: MOVSD ES:EDI,ESI
// 0042721e: MOVSD ES:EDI,ESI
// 0042721f: MOV ECX,dword ptr [ECX + 0x30]
// 00427222: LEA EAX,[ECX*0x4 + 0x0]
// 00427229: SUB EAX,ECX
// 0042722b: SHL EAX,0x2
// 0042722e: LEA EDI,[ESP + 0x20]
//   XREF to: Stack[-0x48] (DATA)
// 00427232: LEA ESI,[EDX + EAX*0x1]
// 00427235: MOVSD ES:EDI,ESI
// 00427236: MOVSD ES:EDI,ESI
// 00427237: MOVSD ES:EDI,ESI
// 00427238: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0042723c: SUB EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00427240: IMUL EDX,EDX
// 00427243: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 00427247: SUB EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 0042724b: IMUL EAX,EAX
// 0042724e: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00427252: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 00427256: SUB ECX,EBX
// 00427258: ADD EDX,EAX
// 0042725a: MOV EAX,ECX
// 0042725c: IMUL EAX,ECX
// 0042725f: ADD EAX,EDX
// 00427261: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00427265: FILD dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00427269: FSQRT
// 0042726b: FMUL double ptr [0x00616e53]
//   XREF to: 00616e53 (READ)
// 00427271: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00427275: FSTP float ptr [EAX + 0x38]
// 00427278: ADD ESP,0x58
// 0042727b: POP EBP
// 0042727c: POP EDI
// 0042727d: POP ESI
// 0042727e: POP EBX
// 0042727f: RET
// 00427280: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_00427280
//   XREF to: Stack[-0x20] (READ)
// 00427284: INC EAX
// 00427285: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00427289: CMP EAX,0x2
// 0042728c: JL 0x0042712a
//   XREF to: 0042712a (CONDITIONAL_JUMP)
// 00427292: JMP 0x004271c2
//   XREF to: 004271c2 (UNCONDITIONAL_JUMP)
// 00427297: MOV EDI,dword ptr [ESP + 0x70]
//   Label: LAB_00427297
//   XREF to: Stack[0x8] (READ)
// 0042729b: CMP dword ptr [EDI + 0x3c],0x0
// 0042729f: JLE 0x004272af
//   XREF to: 004272af (CONDITIONAL_JUMP)
// 004272a1: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 004272a5: CMP EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 004272a9: JL 0x004271ac
//   XREF to: 004271ac (CONDITIONAL_JUMP)
// 004272af: CMP dword ptr [ESP + 0x50],0x0
//   Label: LAB_004272af
//   XREF to: Stack[-0x18] (READ)
// 004272b4: JZ 0x004271ac
//   XREF to: 004271ac (CONDITIONAL_JUMP)
// 004272ba: ADD ECX,0x4
// 004272bd: INC ESI
// 004272be: MOV dword ptr [ESP + ECX*0x1 + -0x4],EAX
//   XREF to: Stack[-0x68] (DATA)
// 004272c2: JMP 0x004271ac
//   XREF to: 004271ac (UNCONDITIONAL_JUMP)
// 004272c7: DEC ESI
//   Label: LAB_004272c7
// 004272c8: PUSH ESI
// 004272c9: PUSH 0x0
// 004272cb: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004272d0: ADD ESP,0x8
// 004272d3: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 004272d7: MOV EAX,dword ptr [ESP + EAX*0x4]
// 004272da: MOV dword ptr [EDX + 0x30],EAX
// 004272dd: JMP 0x004271ee
//   XREF to: 004271ee (UNCONDITIONAL_JUMP)
// 004272e2: MOV EAX,dword ptr [EDX + 0x2c]
//   Label: LAB_004272e2
// 004272e5: MOV dword ptr [EDX + 0x30],EAX
// 004272e8: JMP 0x004271ee
//   XREF to: 004271ee (UNCONDITIONAL_JUMP)

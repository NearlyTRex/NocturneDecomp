// Name: core_charactr.cpp_CCharacter_FUN_0042e670
// Address: 0042e670
// Address Range: [[0042e670, 0042e831]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_CCharacter_FUN_0042e670()
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460

#include "nocturne.h"

void core_charactr_cpp_CCharacter_FUN_0042e670(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_1c;
  int local_14;
  
  if (*(char *)(in_stack_00000004 + 0x23b8) != '\0') {
    iVar5 = 0;
    iVar2 = in_stack_00000004;
    do {
      iVar2 = iVar2 + 0x50;
      iVar3 = iVar5 * 0x50 + in_stack_00000004;
      do {
        iVar4 = iVar3 + 4;
        *(undefined4 *)(iVar3 + 0xb7e4) = 0x501502f9;
        iVar3 = iVar4;
      } while (iVar4 != iVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x14);
    iVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
    iVar5 = 0;
    if (0 < *(int *)(in_stack_00000008 + 0x2628)) {
      do {
        piVar6 = (int *)(iVar5 * 0x38 + in_stack_00000008 + 0x262c);
        iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
        piVar6[0xb] = iVar3;
        piVar6[0xc] = *(int *)(iVar2 + 0x9cc + iVar3 * 0x54c);
        piVar6[0xd] = (int)((float)piVar6[0xc] / *(float *)(iVar2 + 0x988 + piVar6[0xb] * 0x54c));
        if (-1 < piVar6[10]) {
          *(int *)(in_stack_00000008 + *piVar6 * 0x50 + 0xb7e4 + piVar6[1] * 4) = piVar6[0xd];
        }
        if (piVar6[10] < 1) {
          *(int *)(in_stack_00000008 + piVar6[1] * 0x50 + 0xb7e4 + *piVar6 * 4) = piVar6[0xd];
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(in_stack_00000008 + 0x2628));
    }
    iVar5 = 0;
    iVar2 = in_stack_00000008;
    do {
      iVar3 = iVar2 + iVar5;
      iVar5 = iVar5 + 4;
      iVar2 = iVar2 + 0x50;
      *(undefined4 *)(iVar3 + 0xb7e4) = 0;
    } while (iVar5 != 0x50);
    local_1c = in_stack_00000008;
    do {
      iVar5 = 0;
      local_14 = local_1c;
      iVar2 = in_stack_00000008;
      do {
        iVar2 = iVar2 + 0x50;
        iVar4 = iVar5 * 0x50 + in_stack_00000008;
        iVar3 = local_1c;
        do {
          fVar1 = *(float *)(local_14 + 0xb7e4) + *(float *)(iVar4 + 0xb7e4);
          if (fVar1 < *(float *)(iVar3 + 0xb7e4)) {
            *(float *)(iVar3 + 0xb7e4) = fVar1;
          }
          iVar4 = iVar4 + 4;
          iVar3 = iVar3 + 4;
        } while (iVar4 != iVar2);
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 4;
      } while (iVar5 < 0x14);
      local_1c = local_1c + 0x50;
    } while (local_1c != in_stack_00000008 + 0x640);
  }
  return;
}


// Assembly code:
// 0042e670: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042e670
// 0042e671: PUSH ESI
// 0042e672: PUSH EDI
// 0042e673: PUSH EBP
// 0042e674: SUB ESP,0x18
// 0042e677: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e67b: CMP byte ptr [EAX + 0x23b8],0x0
// 0042e682: JZ 0x0042e803
//   XREF to: 0042e803 (CONDITIONAL_JUMP)
// 0042e688: ADD EAX,0x50
// 0042e68b: XOR EBX,EBX
// 0042e68d: IMUL EDX,EBX,0x50
//   Label: LAB_0042e68d
// 0042e690: ADD EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e694: MOV ECX,EAX
// 0042e696: ADD EDX,0x4
//   Label: LAB_0042e696
// 0042e699: MOV dword ptr [EDX + 0xb7e0],0x501502f9
// 0042e6a3: CMP EDX,ECX
// 0042e6a5: JNZ 0x0042e696
//   XREF to: 0042e696 (CONDITIONAL_JUMP)
// 0042e6a7: INC EBX
// 0042e6a8: ADD EAX,0x50
// 0042e6ab: CMP EBX,0x14
// 0042e6ae: JL 0x0042e68d
//   XREF to: 0042e68d (CONDITIONAL_JUMP)
// 0042e6b0: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e6b4: ADD EAX,0x158
// 0042e6b9: PUSH EAX
// 0042e6ba: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0042e6bf: ADD ESP,0x4
// 0042e6c2: MOV EDI,EAX
// 0042e6c4: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e6c8: MOV EBX,dword ptr [EAX + 0x2628]
// 0042e6ce: XOR ESI,ESI
// 0042e6d0: TEST EBX,EBX
// 0042e6d2: JLE 0x0042e762
//   XREF to: 0042e762 (CONDITIONAL_JUMP)
// 0042e6d8: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e6dc: ADD EAX,0x262c
// 0042e6e1: ADD EBP,0x2634
// 0042e6e7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0042e6eb: IMUL EBX,ESI,0x38
//   Label: LAB_0042e6eb
// 0042e6ee: PUSH 0x1
// 0042e6f0: PUSH EBP
// 0042e6f1: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0042e6f5: PUSH EDI
// 0042e6f6: ADD EBX,ECX
// 0042e6f8: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 0042e6fd: MOV dword ptr [EBX + 0x2c],EAX
// 0042e700: IMUL EAX,EAX,0x54c
// 0042e706: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x9cc]
// 0042e70d: MOV ECX,dword ptr [EBX + 0x2c]
// 0042e710: MOV dword ptr [EBX + 0x30],EAX
// 0042e713: IMUL EAX,ECX,0x54c
// 0042e719: FILD dword ptr [EBX + 0x30]
// 0042e71c: FDIV float ptr [EDI + EAX*0x1 + 0x988]
// 0042e723: ADD ESP,0xc
// 0042e726: MOV EAX,dword ptr [EBX + 0x28]
// 0042e729: FSTP float ptr [EBX + 0x34]
// 0042e72c: TEST EAX,EAX
// 0042e72e: JL 0x0042e746
//   XREF to: 0042e746 (CONDITIONAL_JUMP)
// 0042e730: IMUL EAX,dword ptr [EBX],0x50
// 0042e733: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e737: ADD EDX,EAX
// 0042e739: MOV EAX,dword ptr [EBX + 0x4]
// 0042e73c: MOV ECX,dword ptr [EBX + 0x34]
// 0042e73f: MOV dword ptr [EDX + EAX*0x4 + 0xb7e4],ECX
// 0042e746: CMP dword ptr [EBX + 0x28],0x0
//   Label: LAB_0042e746
// 0042e74a: JLE 0x0042e80b
//   XREF to: 0042e80b (CONDITIONAL_JUMP)
// 0042e750: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0042e750
//   XREF to: Stack[0x4] (READ)
// 0042e754: INC ESI
// 0042e755: MOV EDX,dword ptr [EAX + 0x2628]
// 0042e75b: ADD EBP,0x38
// 0042e75e: CMP ESI,EDX
// 0042e760: JL 0x0042e6eb
//   XREF to: 0042e6eb (CONDITIONAL_JUMP)
// 0042e762: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_0042e762
//   XREF to: Stack[0x4] (READ)
// 0042e766: XOR EAX,EAX
// 0042e768: LEA ECX,[EDX + EAX*0x1]
//   Label: LAB_0042e768
// 0042e76b: ADD EAX,0x4
// 0042e76e: ADD EDX,0x50
// 0042e771: MOV dword ptr [ECX + 0xb7e4],0x0
// 0042e77b: CMP EAX,0x50
// 0042e77e: JNZ 0x0042e768
//   XREF to: 0042e768 (CONDITIONAL_JUMP)
// 0042e780: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e784: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0042e788: ADD EAX,0x640
// 0042e78d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0042e790: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0042e790
//   XREF to: Stack[-0x20] (READ)
// 0042e794: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e798: XOR EDI,EDI
// 0042e79a: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0042e79e: ADD EBP,0x50
// 0042e7a1: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042e7a5: IMUL ECX,EDI,0x50
//   Label: LAB_0042e7a5
// 0042e7a8: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e7ac: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0042e7b0: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0042e7b4: ADD ECX,EBX
// 0042e7b6: MOV EBX,EBP
// 0042e7b8: FLD float ptr [ESI + 0xb7e4]
//   Label: LAB_0042e7b8
// 0042e7be: FADD float ptr [ECX + 0xb7e4]
// 0042e7c4: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (WRITE)
// 0042e7c8: FCOMP float ptr [EDX + 0xb7e4]
// 0042e7ce: FNSTSW AX
// 0042e7d0: SAHF
// 0042e7d1: JC 0x0042e826
//   XREF to: 0042e826 (CONDITIONAL_JUMP)
// 0042e7d3: ADD ECX,0x4
//   Label: LAB_0042e7d3
// 0042e7d6: ADD EDX,0x4
// 0042e7d9: CMP ECX,EBX
// 0042e7db: JNZ 0x0042e7b8
//   XREF to: 0042e7b8 (CONDITIONAL_JUMP)
// 0042e7dd: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0042e7e1: INC EDI
// 0042e7e2: ADD ESI,0x4
// 0042e7e5: ADD EBP,0x50
// 0042e7e8: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0042e7ec: CMP EDI,0x14
// 0042e7ef: JL 0x0042e7a5
//   XREF to: 0042e7a5 (CONDITIONAL_JUMP)
// 0042e7f1: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0042e7f5: ADD EDI,0x50
// 0042e7f8: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0042e7fb: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0042e7ff: CMP EDI,EBP
// 0042e801: JNZ 0x0042e790
//   XREF to: 0042e790 (CONDITIONAL_JUMP)
// 0042e803: ADD ESP,0x18
//   Label: LAB_0042e803
// 0042e806: POP EBP
// 0042e807: POP EDI
// 0042e808: POP ESI
// 0042e809: POP EBX
// 0042e80a: RET
// 0042e80b: IMUL EAX,dword ptr [EBX + 0x4],0x50
//   Label: LAB_0042e80b
// 0042e80f: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042e813: ADD EDX,EAX
// 0042e815: MOV EAX,dword ptr [EBX]
// 0042e817: MOV ECX,dword ptr [EBX + 0x34]
// 0042e81a: MOV dword ptr [EDX + EAX*0x4 + 0xb7e4],ECX
// 0042e821: JMP 0x0042e750
//   XREF to: 0042e750 (UNCONDITIONAL_JUMP)
// 0042e826: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0042e826
//   XREF to: Stack[-0x14] (READ)
// 0042e82a: MOV dword ptr [EDX + 0xb7e4],EAX
// 0042e830: JMP 0x0042e7d3
//   XREF to: 0042e7d3 (UNCONDITIONAL_JUMP)

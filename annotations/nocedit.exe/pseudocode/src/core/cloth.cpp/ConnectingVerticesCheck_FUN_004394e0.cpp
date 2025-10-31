// Name: core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0
// Address: 004394e0
// Address Range: [[004394e0, 00439705]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0()
// Cross-references:
//   core_cloth.cpp_CCloth_load_FUN_00438cf0 (00438cf0) at 00438fa1 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_00439710 (00439710) at 004399bb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_cloth_cpp_00618430
//   TerminatedCString s_Too_many_connecting_vert_00618442
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_ConnectingVerticesCheck(undefined4 param_1) */

void core_cloth_cpp_ConnectingVerticesCheck_FUN_004394e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int in_stack_00000004;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  
  local_14 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    iVar1 = in_stack_00000004 + 0x56d8;
    local_28 = in_stack_00000004;
    local_2c = iVar1;
    do {
      *(undefined4 *)(local_28 + 0x5708) = 0;
      *(undefined4 *)(local_28 + 0x574c) = 0;
      local_24 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x110)) {
        pfVar6 = (float *)(iVar1 + local_14 * 0x11c);
        local_20 = 0;
        do {
          iVar9 = *(int *)(in_stack_00000004 + 0x114) + local_20;
          iVar2 = 0;
          iVar8 = iVar9;
          if (0 < *(int *)(iVar9 + 4)) {
            do {
              if (local_14 == *(int *)(iVar8 + 0x18)) break;
              iVar2 = iVar2 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar2 < *(int *)(iVar9 + 4));
          }
          if ((iVar2 != *(int *)(iVar9 + 4)) && (iVar2 = 0, iVar8 = iVar9, 0 < *(int *)(iVar9 + 4)))
          {
LAB_004395fb:
            do {
              iVar5 = *(int *)(iVar9 + ((iVar2 + 1) % *(int *)(iVar9 + 4)) * 0xc + 0x18);
              if ((*(int *)(iVar8 + 0x18) == local_14) ||
                 (bVar10 = iVar5 == local_14, iVar5 = *(int *)(iVar8 + 0x18), bVar10)) {
                iVar3 = 0;
                iVar7 = local_2c;
                if (0 < *(int *)(local_2c + 0x30)) {
                  do {
                    if (iVar5 == *(int *)(iVar7 + 0x34)) break;
                    iVar3 = iVar3 + 1;
                    iVar7 = iVar7 + 4;
                  } while (iVar3 < *(int *)(local_2c + 0x30));
                }
                if ((iVar3 == *(int *)(local_2c + 0x30)) &&
                   (*(float *)(local_2c + 0xc4) <=
                    *(float *)(iVar5 * 0x11c + 0x579c + in_stack_00000004))) {
                  *(int *)(local_2c + 0x34 + *(int *)(local_2c + 0x30) * 4) = iVar5;
                  pfVar4 = (float *)(iVar1 + iVar5 * 0x11c);
                  *(float *)(local_2c + 0x78 + *(int *)(local_2c + 0x30) * 4) =
                       SQRT((pfVar6[2] - pfVar4[2]) * (pfVar6[2] - pfVar4[2]) +
                            (*pfVar6 - *pfVar4) * (*pfVar6 - *pfVar4) +
                            (pfVar6[1] - pfVar4[1]) * (pfVar6[1] - pfVar4[1]));
                  iVar5 = *(int *)(local_2c + 0x30) + 1;
                  *(int *)(local_2c + 0x30) = iVar5;
                  if (0xf < iVar5) {
                    g_CurrentFilename = "..\\core\\cloth.cpp";
                    g_CurrentLineNumber = 0x1c3;
                    core_main_c_displayErrorAndQuit_FUN_00506f10
                              ("Too many connecting verticies");
                    iVar2 = iVar2 + 1;
                    iVar8 = iVar8 + 0xc;
                    if (*(int *)(iVar9 + 4) <= iVar2) break;
                    goto LAB_004395fb;
                  }
                }
              }
              iVar2 = iVar2 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar2 < *(int *)(iVar9 + 4));
          }
          local_20 = local_20 + 0x48;
          local_24 = local_24 + 1;
        } while (local_24 < *(int *)(in_stack_00000004 + 0x110));
      }
      local_2c = local_2c + 0x11c;
      local_28 = local_28 + 0x11c;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(in_stack_00000004 + 0x104));
  }
  return;
}


// Assembly code:
// 004394e0: PUSH EBX
//   Label: core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0
// 004394e1: PUSH ESI
// 004394e2: PUSH EDI
// 004394e3: PUSH EBP
// 004394e4: SUB ESP,0x2c
// 004394e7: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 004394eb: XOR EDX,EDX
// 004394ed: MOV ECX,dword ptr [EAX + 0x104]
// 004394f3: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004394f7: TEST ECX,ECX
// 004394f9: JLE 0x004395de
//   XREF to: 004395de (CONDITIONAL_JUMP)
// 004394ff: ADD EAX,0x56d8
// 00439504: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00439508: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043950c: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00439510: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00439514: IMUL EAX,dword ptr [ESP + 0x28],0x11c
//   Label: LAB_00439514
//   XREF to: Stack[-0x14] (READ)
// 0043951c: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 00439520: MOV dword ptr [EDX + 0x5708],0x0
// 0043952a: MOV dword ptr [EDX + 0x574c],0x0
// 00439534: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00439538: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 0043953c: XOR ECX,ECX
// 0043953e: MOV ESI,dword ptr [EDX + 0x110]
// 00439544: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00439548: TEST ESI,ESI
// 0043954a: JLE 0x004395a7
//   XREF to: 004395a7 (CONDITIONAL_JUMP)
// 0043954c: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 00439550: ADD EDX,EAX
// 00439552: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00439556: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0043955a: MOV ESI,dword ptr [ESP + 0x40]
//   Label: LAB_0043955a
//   XREF to: Stack[0x4] (READ)
// 0043955e: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 00439562: MOV ESI,dword ptr [ESI + 0x114]
// 00439568: ADD ESI,EDI
// 0043956a: MOV EBP,dword ptr [ESI + 0x4]
// 0043956d: XOR EAX,EAX
// 0043956f: TEST EBP,EBP
// 00439571: JLE 0x0043957e
//   XREF to: 0043957e (CONDITIONAL_JUMP)
// 00439573: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 00439577: MOV EDX,ESI
// 00439579: CMP EDI,dword ptr [EDX + 0x18]
//   Label: LAB_00439579
// 0043957c: JNZ 0x004395e6
//   XREF to: 004395e6 (CONDITIONAL_JUMP)
// 0043957e: MOV EBP,dword ptr [ESI + 0x4]
//   Label: LAB_0043957e
// 00439581: CMP EAX,EBP
// 00439583: JNZ 0x004395f3
//   XREF to: 004395f3 (CONDITIONAL_JUMP)
// 00439585: MOV EDI,dword ptr [ESP + 0x1c]
//   Label: LAB_00439585
//   XREF to: Stack[-0x20] (READ)
// 00439589: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 0043958d: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00439591: ADD EDI,0x48
// 00439594: INC EBP
// 00439595: MOV ECX,dword ptr [EDX + 0x110]
// 0043959b: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0043959f: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 004395a3: CMP EBP,ECX
// 004395a5: JL 0x0043955a
//   XREF to: 0043955a (CONDITIONAL_JUMP)
// 004395a7: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_004395a7
//   XREF to: Stack[-0x2c] (READ)
// 004395ab: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 004395af: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 004395b3: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 004395b7: ADD EBX,0x11c
// 004395bd: ADD ESI,0x11c
// 004395c3: INC EDI
// 004395c4: MOV EBP,dword ptr [EDX + 0x104]
// 004395ca: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 004395ce: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 004395d2: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 004395d6: CMP EDI,EBP
// 004395d8: JL 0x00439514
//   XREF to: 00439514 (CONDITIONAL_JUMP)
// 004395de: ADD ESP,0x2c
//   Label: LAB_004395de
// 004395e1: POP EBP
// 004395e2: POP EDI
// 004395e3: POP ESI
// 004395e4: POP EBX
// 004395e5: RET
// 004395e6: INC EAX
//   Label: LAB_004395e6
// 004395e7: MOV ECX,dword ptr [ESI + 0x4]
// 004395ea: ADD EDX,0xc
// 004395ed: CMP EAX,ECX
// 004395ef: JL 0x00439579
//   XREF to: 00439579 (CONDITIONAL_JUMP)
// 004395f1: JMP 0x0043957e
//   XREF to: 0043957e (UNCONDITIONAL_JUMP)
// 004395f3: XOR EDI,EDI
//   Label: LAB_004395f3
// 004395f5: TEST EBP,EBP
// 004395f7: JLE 0x00439585
//   XREF to: 00439585 (CONDITIONAL_JUMP)
// 004395f9: MOV EBP,ESI
// 004395fb: LEA EDX,[EDI + 0x1]
//   Label: LAB_004395fb
// 004395fe: MOV EAX,EDX
// 00439600: SAR EDX,0x1f
// 00439603: IDIV dword ptr [ESI + 0x4]
// 00439606: IMUL EDX,EDX,0xc
// 00439609: LEA EAX,[ESI + EDX*0x1]
// 0043960c: MOV ECX,dword ptr [EBP + 0x18]
// 0043960f: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 00439613: MOV EAX,dword ptr [EAX + 0x18]
// 00439616: CMP ECX,EDX
// 00439618: JNZ 0x00439642
//   XREF to: 00439642 (CONDITIONAL_JUMP)
// 0043961a: MOV ECX,EAX
// 0043961c: MOV EDX,dword ptr [EBX + 0x30]
//   Label: LAB_0043961c
// 0043961f: XOR EAX,EAX
// 00439621: TEST EDX,EDX
// 00439623: JLE 0x0043962c
//   XREF to: 0043962c (CONDITIONAL_JUMP)
// 00439625: MOV EDX,EBX
// 00439627: CMP ECX,dword ptr [EDX + 0x34]
//   Label: LAB_00439627
// 0043962a: JNZ 0x00439648
//   XREF to: 00439648 (CONDITIONAL_JUMP)
// 0043962c: CMP EAX,dword ptr [EBX + 0x30]
//   Label: LAB_0043962c
// 0043962f: JZ 0x00439653
//   XREF to: 00439653 (CONDITIONAL_JUMP)
// 00439631: INC EDI
//   Label: LAB_00439631
// 00439632: MOV EDX,dword ptr [ESI + 0x4]
// 00439635: ADD EBP,0xc
// 00439638: CMP EDI,EDX
// 0043963a: JGE 0x00439585
//   XREF to: 00439585 (CONDITIONAL_JUMP)
// 00439640: JMP 0x004395fb
//   XREF to: 004395fb (UNCONDITIONAL_JUMP)
// 00439642: CMP EAX,EDX
//   Label: LAB_00439642
// 00439644: JNZ 0x00439631
//   XREF to: 00439631 (CONDITIONAL_JUMP)
// 00439646: JMP 0x0043961c
//   XREF to: 0043961c (UNCONDITIONAL_JUMP)
// 00439648: INC EAX
//   Label: LAB_00439648
// 00439649: ADD EDX,0x4
// 0043964c: CMP EAX,dword ptr [EBX + 0x30]
// 0043964f: JL 0x00439627
//   XREF to: 00439627 (CONDITIONAL_JUMP)
// 00439651: JMP 0x0043962c
//   XREF to: 0043962c (UNCONDITIONAL_JUMP)
// 00439653: IMUL EDX,ECX,0x11c
//   Label: LAB_00439653
// 00439659: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0043965d: FLD float ptr [EBX + 0xc4]
// 00439663: FCOMP float ptr [EDX + EAX*0x1 + 0x579c]
// 0043966a: FNSTSW AX
// 0043966c: SAHF
// 0043966d: JA 0x00439631
//   XREF to: 00439631 (CONDITIONAL_JUMP)
// 0043966f: MOV EAX,dword ptr [EBX + 0x30]
// 00439672: MOV dword ptr [EBX + EAX*0x4 + 0x34],ECX
// 00439676: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 0043967a: ADD EAX,EDX
// 0043967c: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 00439680: FLD float ptr [EDX]
// 00439682: FSUB float ptr [EAX]
// 00439684: FSTP float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 00439687: FLD float ptr [EDX + 0x4]
// 0043968a: FSUB float ptr [EAX + 0x4]
// 0043968d: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 00439691: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 00439695: FLD float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 00439698: FMUL ST0
// 0043969a: FLD float ptr [EDX + 0x8]
// 0043969d: FSUB float ptr [EAX + 0x8]
// 004396a0: FXCH
// 004396a2: FADDP ST2,ST0
// 004396a4: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 004396a8: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 004396ac: FADDP
// 004396ae: FSQRT
// 004396b0: MOV EAX,dword ptr [EBX + 0x30]
// 004396b3: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (WRITE)
// 004396b7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (READ)
// 004396bb: MOV dword ptr [EBX + EAX*0x4 + 0x78],EDX
// 004396bf: MOV ECX,dword ptr [EBX + 0x30]
// 004396c2: INC ECX
// 004396c3: MOV dword ptr [EBX + 0x30],ECX
// 004396c6: CMP ECX,0xf
// 004396c9: JLE 0x00439631
//   XREF to: 00439631 (CONDITIONAL_JUMP)
// 004396cf: MOV EDX,0x618430
//   XREF to: 00618430 (PARAM)
// 004396d4: MOV ECX,0x1c3
// 004396d9: PUSH 0x618442
//   XREF to: 00618442 (DATA)
// 004396de: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004396e4: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004396ea: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004396ef: ADD ESP,0x4
// 004396f2: INC EDI
// 004396f3: MOV EDX,dword ptr [ESI + 0x4]
// 004396f6: ADD EBP,0xc
// 004396f9: CMP EDI,EDX
// 004396fb: JGE 0x00439585
//   XREF to: 00439585 (CONDITIONAL_JUMP)
// 00439701: JMP 0x004395fb
//   XREF to: 004395fb (UNCONDITIONAL_JUMP)

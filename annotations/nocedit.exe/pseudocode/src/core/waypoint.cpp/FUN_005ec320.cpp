// Name: core_waypoint.cpp_FUN_005ec320
// Address: 005ec320
// Address Range: [[005ec320, 005ec4c1]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ec320()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042ca70 (0042ca70) at 0042cce5 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042e050 (0042e050) at 0042e1cb [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5644 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032690dc
//   undefined4 DAT_032690e0
//   undefined4 DAT_032690e4
//   undefined4 DAT_03f939a4
//   undefined4 DAT_03f939a8
// Function calls:
//   core_waypoint.cpp_FUN_005ebd40
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 actors_other_waypoint.cpp_FUN_005ec320(undefined4 param_1, undefined4
   param_2) */

int core_waypoint_cpp_FUN_005ec320(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SIZE_T n;
  SIZE_T SVar6;
  int iVar7;
  int in_stack_00000008;
  float local_14;
  int local_c;
  int iVar8;
  
  if (in_stack_00000008 != 0) {
    iVar3 = core_waypoint_cpp_FUN_005ebd40();
    if (iVar3 != 0) {
      return in_stack_00000008;
    }
    if (0 < *(int *)(in_stack_00000008 + 0x370)) {
      iVar3 = 0;
      for (iVar7 = 0; iVar7 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4); iVar7 = iVar7 + 1
          ) {
        iVar8 = iVar3 + 0x5dc8;
        iVar3 = iVar3 + 4;
        *(undefined4 *)(*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar8) + 0x554) = 0x7149f2ca;
      }
      iVar3 = 1;
      DAT_03f939a4 = in_stack_00000008;
      *(undefined4 *)(in_stack_00000008 + 0x554) = 0;
      do {
        iVar3 = iVar3 + -1;
        n = iVar3 * 4;
        crt_string_c_memmove_FUN_005fe5e0(&DAT_03f939a4,&DAT_03f939a8,n);
        iVar8 = 0;
        iVar7 = local_c;
        if (0 < *(int *)(local_c + 0x370)) {
          do {
            fVar2 = *(float *)(local_c + 0x554) + *(float *)(iVar7 + 0x378);
            iVar1 = *(int *)(iVar7 + 0x374);
            SVar6 = n;
            if (fVar2 < *(float *)(iVar1 + 0x554)) {
              iVar5 = 0;
              *(float *)(iVar1 + 0x554) = fVar2;
              if (0 < iVar3) {
                iVar4 = 0;
                do {
                  if (iVar1 == *(int *)((int)&DAT_03f939a4 + iVar4)) break;
                  iVar4 = iVar4 + 4;
                  iVar5 = iVar5 + 1;
                } while (SBORROW4(iVar4,iVar3 * 4) != iVar4 + iVar3 * -4 < 0);
              }
              if (iVar5 == iVar3) {
                SVar6 = n + 4;
                iVar3 = iVar3 + 1;
                *(int *)((int)&DAT_03f939a4 + n) = iVar1;
              }
            }
            iVar8 = iVar8 + 1;
            n = SVar6;
            iVar7 = iVar7 + 8;
          } while (iVar8 < *(int *)(local_c + 0x370));
        }
        if (iVar3 < 1) {
          iVar3 = 0;
          iVar7 = 0;
          for (iVar8 = 0; iVar8 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4);
              iVar8 = iVar8 + 1) {
            iVar1 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar7 + 0x5dc8);
            if ((*(float *)(iVar1 + 0x554) < local_14) &&
               (iVar5 = core_waypoint_cpp_FUN_005ebd40(), iVar5 != 0)) {
              iVar3 = iVar1;
            }
            iVar7 = iVar7 + 4;
          }
          return iVar3;
        }
      } while( true );
    }
  }
  return 0;
}


// Assembly code:
// 005ec320: PUSH EBX
//   Label: core_waypoint.cpp_FUN_005ec320
// 005ec321: PUSH EBP
// 005ec322: SUB ESP,0x10
// 005ec325: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005ec329: TEST EBX,EBX
// 005ec32b: JNZ 0x005ec335
//   XREF to: 005ec335 (CONDITIONAL_JUMP)
// 005ec32d: XOR EAX,EAX
// 005ec32f: ADD ESP,0x10
//   Label: LAB_005ec32f
// 005ec332: POP EBP
// 005ec333: POP EBX
// 005ec334: RET
// 005ec335: PUSH 0x0
//   Label: LAB_005ec335
// 005ec337: LEA EAX,[EBX + 0x20]
// 005ec33a: PUSH EAX
// 005ec33b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005ec33f: PUSH EDX
// 005ec340: CALL core_waypoint.cpp_FUN_005ebd40
//   XREF to: 005ebd40 (UNCONDITIONAL_CALL)
// 005ec345: ADD ESP,0xc
// 005ec348: TEST EAX,EAX
// 005ec34a: JNZ 0x005ec37e
//   XREF to: 005ec37e (CONDITIONAL_JUMP)
// 005ec34c: CMP dword ptr [EBX + 0x370],0x1
// 005ec353: JL 0x005ec32f
//   XREF to: 005ec32f (CONDITIONAL_JUMP)
// 005ec355: PUSH EDI
// 005ec356: PUSH ESI
// 005ec357: XOR ESI,ESI
// 005ec359: MOV EDX,dword ptr [0x006810c8]
//   Label: LAB_005ec359
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005ec35f: CMP ESI,dword ptr [EDX + 0x154e64]
//   XREF to: 032690dc (READ)
// 005ec365: JGE 0x005ec386
//   XREF to: 005ec386 (CONDITIONAL_JUMP)
// 005ec367: MOV EDX,dword ptr [EDX + EAX*0x1 + 0x154e68]
//   XREF to: 032690e0 (DATA)
// 005ec36e: ADD EAX,0x4
// 005ec371: INC ESI
// 005ec372: MOV dword ptr [EDX + 0x554],0x7149f2ca
// 005ec37c: JMP 0x005ec359
//   XREF to: 005ec359 (UNCONDITIONAL_JUMP)
// 005ec37e: MOV EAX,EBX
//   Label: LAB_005ec37e
// 005ec380: ADD ESP,0x10
// 005ec383: POP EBP
// 005ec384: POP EBX
// 005ec385: RET
// 005ec386: MOV ESI,0x1
//   Label: LAB_005ec386
// 005ec38b: MOV dword ptr [0x03f939a4],EBX
//   XREF to: 03f939a4 (WRITE)
// 005ec391: MOV dword ptr [EBX + 0x554],0x0
// 005ec39b: DEC ESI
//   Label: LAB_005ec39b
// 005ec39c: LEA EBX,[ESI*0x4 + 0x0]
// 005ec3a3: PUSH EBX
// 005ec3a4: PUSH 0x3f939a8
//   XREF to: 03f939a8 (DATA)
// 005ec3a9: MOV EAX,[0x03f939a4]
//   XREF to: 03f939a4 (READ)
// 005ec3ae: PUSH 0x3f939a4
//   XREF to: 03f939a4 (DATA)
// 005ec3b3: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ec3b7: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005ec3bc: ADD ESP,0xc
// 005ec3bf: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005ec3c3: XOR EBP,EBP
// 005ec3c5: MOV EDX,dword ptr [EAX + 0x370]
// 005ec3cb: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0xc] (WRITE)
// 005ec3cf: TEST EDX,EDX
// 005ec3d1: JLE 0x005ec449
//   XREF to: 005ec449 (CONDITIONAL_JUMP)
// 005ec3d7: MOV EBP,EBX
// 005ec3d9: MOV EDI,EAX
// 005ec3db: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005ec3db
//   XREF to: Stack[-0x14] (READ)
// 005ec3df: FLD float ptr [EAX + 0x554]
// 005ec3e5: FADD float ptr [EDI + 0x378]
// 005ec3eb: MOV ECX,dword ptr [EDI + 0x374]
// 005ec3f1: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 005ec3f5: FCOMP float ptr [ECX + 0x554]
// 005ec3fb: FNSTSW AX
// 005ec3fd: SAHF
// 005ec3fe: JNC 0x005ec42f
//   XREF to: 005ec42f (CONDITIONAL_JUMP)
// 005ec400: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005ec404: XOR EDX,EDX
// 005ec406: MOV dword ptr [ECX + 0x554],EAX
// 005ec40c: TEST ESI,ESI
// 005ec40e: JLE 0x005ec421
//   XREF to: 005ec421 (CONDITIONAL_JUMP)
// 005ec410: LEA EBX,[ESI*0x4 + 0x0]
// 005ec417: XOR EAX,EAX
// 005ec419: CMP ECX,dword ptr [EAX + 0x3f939a4]
//   Label: LAB_005ec419
//   XREF to: 03f939a4 (READ)
//   XREF to: 03f939a8 (READ)
// 005ec41f: JNZ 0x005ec489
//   XREF to: 005ec489 (CONDITIONAL_JUMP)
// 005ec421: CMP EDX,ESI
//   Label: LAB_005ec421
// 005ec423: JNZ 0x005ec42f
//   XREF to: 005ec42f (CONDITIONAL_JUMP)
// 005ec425: ADD EBP,0x4
// 005ec428: INC ESI
// 005ec429: MOV dword ptr [EBP + 0x3f939a0],ECX
//   XREF to: 03f939a4 (WRITE)
//   XREF to: 03f939a8 (WRITE)
// 005ec42f: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_005ec42f
//   XREF to: Stack[-0xc] (READ)
// 005ec433: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005ec437: ADD EDI,0x8
// 005ec43a: INC ECX
// 005ec43b: MOV EBX,dword ptr [EDX + 0x370]
// 005ec441: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 005ec445: CMP ECX,EBX
// 005ec447: JL 0x005ec3db
//   XREF to: 005ec3db (CONDITIONAL_JUMP)
// 005ec449: TEST ESI,ESI
//   Label: LAB_005ec449
// 005ec44b: JG 0x005ec39b
//   XREF to: 005ec39b (CONDITIONAL_JUMP)
// 005ec451: MOV ESI,0x6fa18f08
// 005ec456: XOR EBP,EBP
// 005ec458: XOR EDI,EDI
// 005ec45a: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005ec45e: XOR ESI,ESI
// 005ec460: MOV EAX,[0x006810c8]
//   Label: LAB_005ec460
//   XREF to: 006810c8 (READ)
// 005ec465: CMP EDI,dword ptr [EAX + 0x154e64]
//   XREF to: 032690dc (READ)
// 005ec46b: JGE 0x005ec4b8
//   XREF to: 005ec4b8 (CONDITIONAL_JUMP)
// 005ec46d: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x154e68]
//   XREF to: 032690e0 (READ)
//   XREF to: 032690e4 (READ)
// 005ec474: FLD float ptr [EBX + 0x554]
// 005ec47a: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005ec47e: FNSTSW AX
// 005ec480: SAHF
// 005ec481: JC 0x005ec493
//   XREF to: 005ec493 (CONDITIONAL_JUMP)
// 005ec483: INC EDI
//   Label: LAB_005ec483
// 005ec484: ADD ESI,0x4
// 005ec487: JMP 0x005ec460
//   XREF to: 005ec460 (UNCONDITIONAL_JUMP)
// 005ec489: ADD EAX,0x4
//   Label: LAB_005ec489
// 005ec48c: INC EDX
// 005ec48d: CMP EAX,EBX
// 005ec48f: JL 0x005ec419
//   XREF to: 005ec419 (CONDITIONAL_JUMP)
// 005ec491: JMP 0x005ec421
//   XREF to: 005ec421 (UNCONDITIONAL_JUMP)
// 005ec493: PUSH 0x0
//   Label: LAB_005ec493
// 005ec495: LEA EAX,[EBX + 0x20]
// 005ec498: PUSH EAX
// 005ec499: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005ec49d: PUSH ECX
// 005ec49e: CALL core_waypoint.cpp_FUN_005ebd40
//   XREF to: 005ebd40 (UNCONDITIONAL_CALL)
// 005ec4a3: ADD ESP,0xc
// 005ec4a6: TEST EAX,EAX
// 005ec4a8: JZ 0x005ec483
//   XREF to: 005ec483 (CONDITIONAL_JUMP)
// 005ec4aa: MOV EAX,dword ptr [EBX + 0x554]
// 005ec4b0: MOV EBP,EBX
// 005ec4b2: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ec4b6: JMP 0x005ec483
//   XREF to: 005ec483 (UNCONDITIONAL_JUMP)
// 005ec4b8: MOV EAX,EBP
//   Label: LAB_005ec4b8
// 005ec4ba: POP ESI
// 005ec4bb: POP EDI
// 005ec4bc: ADD ESP,0x10
// 005ec4bf: POP EBP
// 005ec4c0: POP EBX
// 005ec4c1: RET

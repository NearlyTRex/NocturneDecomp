// Name: core_bugs.cpp_FUN_00427400
// Address: 00427400
// Address Range: [[00427400, 004276bc]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427400()
// Cross-references:
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425d6f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_swarming_on_s_at_LOD_d_00616e63
//   CConsole* g_CConsolePtr = 0083b1a4
//   undefined4 DAT_00822f48
//   undefined4 DAT_00822f4c
//   undefined4 DAT_00822f50
//   CConsole g_ConsolePtr
//   undefined4 g_CEnemyClassInfo.name_hash
//   undefined4 g_CHeroClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_FUN_0040cc70
//   core_bugs.cpp_FUN_00425660
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00427400(undefined4 param_1, undefined4 param_2)
    */

void core_bugs_cpp_FUN_00427400(void)

{
  int iVar1;
  longlong lVar2;
  uint class_name_hash;
  CDemonActor *pCVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000020;
  int in_stack_00000024;
  
  class_name_hash = g_CHeroClassInfo.name_hash;
  *(undefined4 *)(in_stack_00000004 + 0x12afc) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x12af8) = 0;
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000008,class_name_hash);
  if (pCVar3 != (CDemonActor *)0x0) {
    *(CDemonActor **)(in_stack_00000008[0xde].create_event + 0x34) = pCVar3 + 1;
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  if ((pCVar3 != (CDemonActor *)0x0) && (pCVar3[0x1a].create_event[0x50] != '\0')) {
    *(CDemonActor **)(in_stack_0000000c + 0x12afc) = pCVar3 + 1;
  }
  if (*(int *)(in_stack_0000000c + 0x12afc) != 0) {
    *(undefined4 *)(in_stack_0000000c + 0xbebc) = 1;
    *(CDemonActor **)(in_stack_0000000c + 0x12af8) = in_stack_00000008;
    iVar1 = *(int *)(*(int *)(in_stack_0000000c + 0x12af8) + 100);
    *(undefined4 *)(in_stack_0000000c + 0x12b30) = 0;
    *(int *)(in_stack_0000000c + 100) = iVar1 + 1;
    do {
      iVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
      iVar1 = *(int *)(in_stack_00000010 + 0x12b30);
      if (*(int *)(iVar4 + 0x2c + iVar1 * 4) < 0x2bd) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s swarming on %s at LOD %d\n",in_stack_00000010,
                   in_stack_00000008,iVar1);
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
        core_bugs_cpp_FUN_00425660();
        core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0();
        iVar4 = 0;
        iVar1 = *(int *)(*(int *)(in_stack_00000010 + 0x12afc) + 0x2234);
        if (0 < *(int *)(in_stack_00000010 + 0x12b34)) {
          iVar7 = 0;
          do {
            *(int *)((int)&DAT_00822f48 + iVar7) = iVar4;
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar4 < *(int *)(in_stack_00000020 + 0x12b34));
        }
        for (iVar4 = *(int *)(in_stack_00000020 + 0x12b34) + -2; -1 < iVar4; iVar4 = iVar4 + -1) {
          if (-1 < iVar4) {
            iVar7 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_00822f4c + iVar7) * 0xc + 4 + iVar1) <
                  *(int *)(*(int *)((int)&DAT_00822f48 + iVar7) * 0xc + 4 + iVar1)) {
                uVar5 = *(undefined4 *)((int)&DAT_00822f48 + iVar7);
                *(undefined4 *)((int)&DAT_00822f48 + iVar7) =
                     *(undefined4 *)((int)&DAT_00822f4c + iVar7);
                *(undefined4 *)((int)&DAT_00822f4c + iVar7) = uVar5;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 <= iVar4 * 4);
          }
        }
        iVar4 = *(int *)(iVar1 + 4 + DAT_00822f48 * 0xc);
        iVar9 = 0;
        iVar8 = 0;
        iVar7 = in_stack_00000020;
        if (*(int *)(in_stack_00000020 + 0xbec0) < 1) {
          return;
        }
        do {
          *(undefined4 *)(iVar7 + 0xbef0) = 0xffffffff;
          *(int *)(iVar7 + 0xbef4) = (&DAT_00822f48)[iVar9];
          lVar2 = CONCAT44(*(int *)(in_stack_00000020 + 0x12b34) >> 0x1f,
                           *(undefined4 *)(in_stack_00000020 + 0x12b34));
          uVar5 = core_actor_cpp_FUN_0040cc70((int)(lVar2 / 0xf),(int)(lVar2 % 0xf),iVar1,0xf,0);
          *(undefined4 *)(iVar7 + 0xbf00) = uVar5;
          iVar9 = iVar9 + 1;
          if ((*(int *)(in_stack_00000024 + 0x12b34) <= iVar9) ||
             (iVar4 + 0x2a < *(int *)(iVar1 + 4 + (&DAT_00822f48)[iVar9] * 0xc))) {
            iVar9 = 0;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x40;
        } while (iVar8 < *(int *)(in_stack_00000024 + 0xbec0));
        return;
      }
      *(int *)(in_stack_00000010 + 0x12b30) = iVar1 + 1;
      piVar6 = (int *)core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
    } while (*(int *)(in_stack_00000014 + 0x12b30) < *piVar6);
    *(undefined4 *)(in_stack_00000014 + 0x12afc) = 0;
  }
  return;
}


// Assembly code:
// 00427400: PUSH EBX
//   Label: core_bugs.cpp_FUN_00427400
// 00427401: PUSH ESI
// 00427402: PUSH EDI
// 00427403: PUSH EBP
// 00427404: SUB ESP,0x8
// 00427407: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0042740b: MOV EDX,dword ptr [0x02db880c]
//   XREF to: 02db880c (READ)
// 00427411: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00427415: PUSH EDX
// 00427416: MOV dword ptr [EAX + 0x12afc],0x0
// 00427420: PUSH EBX
// 00427421: MOV dword ptr [EAX + 0x12af8],0x0
// 0042742b: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00427430: ADD ESP,0x8
// 00427433: TEST EAX,EAX
// 00427435: JZ 0x00427446
//   XREF to: 00427446 (CONDITIONAL_JUMP)
// 00427437: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0042743b: ADD EAX,0x158
// 00427440: MOV dword ptr [EDX + 0x12afc],EAX
// 00427446: MOV ECX,dword ptr [0x02cf2bf0]
//   Label: LAB_00427446
//   XREF to: 02cf2bf0 (READ)
// 0042744c: PUSH ECX
// 0042744d: PUSH EBX
// 0042744e: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00427453: ADD ESP,0x8
// 00427456: TEST EAX,EAX
// 00427458: JZ 0x00427474
//   XREF to: 00427474 (CONDITIONAL_JUMP)
// 0042745a: MOV CL,byte ptr [EAX + 0x23b8]
// 00427460: LEA EDX,[EAX + 0x158]
// 00427466: TEST CL,CL
// 00427468: JZ 0x00427474
//   XREF to: 00427474 (CONDITIONAL_JUMP)
// 0042746a: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0042746e: MOV dword ptr [EAX + 0x12afc],EDX
// 00427474: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00427474
//   XREF to: Stack[0x4] (READ)
// 00427478: CMP dword ptr [EAX + 0x12afc],0x0
// 0042747f: JZ 0x0042766a
//   XREF to: 0042766a (CONDITIONAL_JUMP)
// 00427485: MOV dword ptr [EAX + 0xbebc],0x1
// 0042748f: MOV dword ptr [EAX + 0x12af8],EBX
// 00427495: MOV EAX,dword ptr [EAX + 0x12af8]
// 0042749b: MOV EAX,dword ptr [EAX + 0x64]
// 0042749e: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004274a2: INC EAX
// 004274a3: MOV dword ptr [EDX + 0x12b30],0x0
// 004274ad: MOV dword ptr [EDX + 0x64],EAX
// 004274b0: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_004274b0
//   XREF to: Stack[0x4] (READ)
// 004274b4: MOV EDI,dword ptr [EAX + 0x12afc]
// 004274ba: PUSH EDI
// 004274bb: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004274c0: ADD ESP,0x4
// 004274c3: MOV EDX,EAX
// 004274c5: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004274c9: MOV EAX,dword ptr [EAX + 0x12b30]
// 004274cf: MOV EDX,dword ptr [EDX + EAX*0x4 + 0x2c]
// 004274d3: CMP EDX,0x2bc
// 004274d9: JG 0x00427672
//   XREF to: 00427672 (CONDITIONAL_JUMP)
// 004274df: PUSH EAX
// 004274e0: PUSH EBX
// 004274e1: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004274e5: PUSH EBP
// 004274e6: PUSH 0x616e63
//   XREF to: 00616e63 (DATA)
// 004274eb: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004274f0: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004274f1: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004274f6: ADD ESP,0x14
// 004274f9: MOV EDX,dword ptr [EBP + 0x12afc]
// 004274ff: PUSH EDX
// 00427500: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00427505: MOV EDX,dword ptr [EBP + 0x12b30]
// 0042750b: ADD ESP,0x4
// 0042750e: MOV ECX,dword ptr [EAX + EDX*0x4 + 0x7c]
// 00427512: PUSH ECX
// 00427513: MOV EBX,dword ptr [EAX + EDX*0x4 + 0x54]
// 00427517: PUSH EBX
// 00427518: PUSH EBP
// 00427519: CALL core_bugs.cpp_FUN_00425660
//   XREF to: 00425660 (UNCONDITIONAL_CALL)
// 0042751e: ADD ESP,0xc
// 00427521: MOV EDI,dword ptr [EBP + 0x12b30]
// 00427527: PUSH EDI
// 00427528: MOV ESI,EBP
// 0042752a: MOV EBP,dword ptr [EBP + 0x12afc]
// 00427530: PUSH EBP
// 00427531: MOV EBX,ESI
// 00427533: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 00427538: ADD ESP,0x8
// 0042753b: MOV EDX,ESI
// 0042753d: MOV EBX,dword ptr [EBX + 0x12afc]
// 00427543: XOR EAX,EAX
// 00427545: MOV ECX,dword ptr [EDX + 0x12b34]
// 0042754b: MOV EBX,dword ptr [EBX + 0x2234]
// 00427551: TEST ECX,ECX
// 00427553: JLE 0x00427570
//   XREF to: 00427570 (CONDITIONAL_JUMP)
// 00427555: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00427559: XOR EDX,EDX
// 0042755b: MOV dword ptr [EDX + 0x822f48],EAX
//   Label: LAB_0042755b
//   XREF to: 00822f48 (WRITE)
//   XREF to: 00822f4c (WRITE)
// 00427561: INC EAX
// 00427562: MOV EBP,dword ptr [ECX + 0x12b34]
// 00427568: ADD EDX,0x4
// 0042756b: CMP EAX,EBP
// 0042756d: JL 0x0042755b
//   XREF to: 0042755b (CONDITIONAL_JUMP)
// 0042756f: NOP
// 00427570: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00427570
//   XREF to: Stack[0x4] (READ)
// 00427574: MOV EAX,dword ptr [EAX + 0x12b34]
// 0042757a: SUB EAX,0x2
// 0042757d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00427581: TEST EAX,EAX
// 00427583: JL 0x004275d6
//   XREF to: 004275d6 (CONDITIONAL_JUMP)
// 00427585: MOV EBP,dword ptr [ESP + 0x4]
//   Label: LAB_00427585
//   XREF to: Stack[-0x14] (READ)
// 00427589: TEST EBP,EBP
// 0042758b: JL 0x004275c9
//   XREF to: 004275c9 (CONDITIONAL_JUMP)
// 0042758d: SHL EBP,0x2
// 00427590: XOR EAX,EAX
// 00427592: IMUL EDX,dword ptr [EAX + 0x822f48],0xc
//   Label: LAB_00427592
//   XREF to: 00822f48 (READ)
//   XREF to: 00822f4c (READ)
// 00427599: IMUL ECX,dword ptr [EAX + 0x822f4c],0xc
//   XREF to: 00822f4c (READ)
//   XREF to: 00822f50 (READ)
// 004275a0: MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4]
// 004275a4: CMP EDX,dword ptr [ECX + EBX*0x1 + 0x4]
// 004275a8: JLE 0x004275c2
//   XREF to: 004275c2 (CONDITIONAL_JUMP)
// 004275aa: LEA ECX,[EAX + 0x4]
// 004275ad: ADD ECX,0x822f48
//   XREF to: 00822f48 (DATA)
// 004275b3: MOV EDX,0x822f48
//   XREF to: 00822f48 (DATA)
// 004275b8: MOV ESI,dword ptr [ECX]
//   XREF to: 00822f4c (READ)
// 004275ba: MOV EDI,dword ptr [EDX + EAX*0x1]
//   XREF to: 00822f48 (READ)
// 004275bd: MOV dword ptr [EDX + EAX*0x1],ESI
//   XREF to: 00822f48 (WRITE)
// 004275c0: MOV dword ptr [ECX],EDI
//   XREF to: 00822f4c (WRITE)
// 004275c2: ADD EAX,0x4
//   Label: LAB_004275c2
// 004275c5: CMP EAX,EBP
// 004275c7: JLE 0x00427592
//   XREF to: 00427592 (CONDITIONAL_JUMP)
// 004275c9: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_004275c9
//   XREF to: Stack[-0x14] (READ)
// 004275cd: DEC EDX
// 004275ce: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004275d2: TEST EDX,EDX
// 004275d4: JGE 0x00427585
//   XREF to: 00427585 (CONDITIONAL_JUMP)
// 004275d6: MOV EDX,dword ptr [0x00822f48]
//   Label: LAB_004275d6
//   XREF to: 00822f48 (READ)
// 004275dc: LEA EAX,[EDX*0x4 + 0x0]
// 004275e3: SUB EAX,EDX
// 004275e5: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x4]
// 004275e9: ADD EAX,0x2a
// 004275ec: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004275ef: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004275f3: XOR ESI,ESI
// 004275f5: MOV EDI,dword ptr [EAX + 0xbec0]
// 004275fb: XOR EBP,EBP
// 004275fd: TEST EDI,EDI
// 004275ff: JLE 0x0042766a
//   XREF to: 0042766a (CONDITIONAL_JUMP)
// 00427601: MOV EDI,EAX
// 00427603: MOV dword ptr [EDI + 0xbef0],0xffffffff
//   Label: LAB_00427603
// 0042760d: MOV EAX,dword ptr [ESI*0x4 + 0x822f48]
//   XREF to: 00822f48 (READ)
// 00427614: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00427618: MOV dword ptr [EDI + 0xbef4],EAX
// 0042761e: MOV ECX,0xf
// 00427623: MOV EDX,dword ptr [EDX + 0x12b34]
// 00427629: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0042762d: SAR EDX,0x1f
// 00427630: MOV EAX,dword ptr [EAX + 0x12b34]
// 00427636: IDIV ECX
// 00427638: PUSH EAX
// 00427639: PUSH 0x0
// 0042763b: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 00427640: ADD ESP,0x8
// 00427643: MOV dword ptr [EDI + 0xbf00],EAX
// 00427649: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0042764d: INC ESI
// 0042764e: CMP ESI,dword ptr [EAX + 0x12b34]
// 00427654: JL 0x004276aa
//   XREF to: 004276aa (CONDITIONAL_JUMP)
// 00427656: XOR ESI,ESI
//   Label: LAB_00427656
// 00427658: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00427658
//   XREF to: Stack[0x4] (READ)
// 0042765c: INC EBP
// 0042765d: MOV EDX,dword ptr [EAX + 0xbec0]
// 00427663: ADD EDI,0x40
// 00427666: CMP EBP,EDX
// 00427668: JL 0x00427603
//   XREF to: 00427603 (CONDITIONAL_JUMP)
// 0042766a: ADD ESP,0x8
//   Label: LAB_0042766a
// 0042766d: POP EBP
// 0042766e: POP EDI
// 0042766f: POP ESI
// 00427670: POP EBX
// 00427671: RET
// 00427672: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_00427672
//   XREF to: Stack[0x4] (READ)
// 00427676: MOV ESI,dword ptr [EDX + 0x12afc]
// 0042767c: INC EAX
// 0042767d: PUSH ESI
// 0042767e: MOV dword ptr [EDX + 0x12b30],EAX
// 00427684: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00427689: ADD ESP,0x4
// 0042768c: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00427690: MOV EAX,dword ptr [EAX]
// 00427692: CMP EAX,dword ptr [EDX + 0x12b30]
// 00427698: JG 0x004274b0
//   XREF to: 004274b0 (CONDITIONAL_JUMP)
// 0042769e: MOV dword ptr [EDX + 0x12afc],0x0
// 004276a8: JMP 0x0042766a
//   XREF to: 0042766a (UNCONDITIONAL_JUMP)
// 004276aa: IMUL EAX,dword ptr [ESI*0x4 + 0x822f48],0xc
//   Label: LAB_004276aa
//   XREF to: 00822f4c (READ)
// 004276b2: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004276b5: CMP ECX,dword ptr [EBX + EAX*0x1 + 0x4]
// 004276b9: JL 0x00427656
//   XREF to: 00427656 (CONDITIONAL_JUMP)
// 004276bb: JMP 0x00427658
//   XREF to: 00427658 (UNCONDITIONAL_JUMP)

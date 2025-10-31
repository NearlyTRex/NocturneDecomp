// Name: core_cloth.cpp_FUN_0043c430
// Address: 0043c430
// Address Range: [[0043c430, 0043c6a3]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c430()
// Globals:
//   TerminatedCString s_Select_bone_to_add_00618656
//   TerminatedCString s_Enter_in_X_radius_00618669
//   TerminatedCString s_Enter_in_Y_radius_0061867e
//   undefined4 DAT_00838e40
//   undefined4 DAT_00838e4c
//   CDeformableModelInstance g_CDeformableModelInstanceInstance
// Function calls:
//   core_cloth.cpp_FUN_00439710
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void core_cloth_cpp_FUN_0043c430(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  char *pcVar7;
  double dVar8;
  int unaff_retaddr;
  int in_stack_00000018;
  int in_stack_00000028;
  CStrList_vtable *in_stack_fffffb4c;
  char *in_stack_fffffb54;
  uint in_stack_fffffb5c;
  uint in_stack_fffffb60;
  char **in_stack_fffffb64;
  CStrList_vtable *in_stack_fffffb68;
  uint in_stack_fffffb6c;
  char acStack_110 [8];
  char acStack_108 [244];
  undefined4 local_14;
  
  local_14 = 0;
  iVar2 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar6 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb3c);
  if (0 < *(int *)(iVar2 + 0x28558)) {
    pcVar5 = (char *)(iVar2 + 0x2855c);
    do {
      iVar4 = 0;
      iVar3 = iVar2;
      if (0 < *(int *)(iVar2 + 0x28558)) {
        do {
          if (iVar6 == *(int *)(iVar3 + 0x2857c)) {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffb40,pcVar5);
            break;
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x24;
        } while (iVar4 < *(int *)(iVar2 + 0x28558));
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x24;
    } while (iVar6 < *(int *)(iVar2 + 0x28558));
  }
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffb40,"Select bone to add",-1,0);
  if (-1 < iVar2) {
    pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xfffffb44,iVar2);
    pcVar7 = (char *)(*(int *)(in_stack_00000018 + 0x3ce8c) * 0xac + in_stack_00000018 + 0x3ce90);
    do {
      cVar1 = *pcVar5;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (acStack_110,10,0,unaff_retaddr,"Enter in X radius : ");
    crt_string_c_strtod_FUN_005ff0f3((char *)in_stack_fffffb4c);
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (acStack_108,10,0,unaff_retaddr + 0xb,"Enter in Y radius : ");
    dVar8 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffb54);
    *(int *)(*(int *)(in_stack_00000028 + 0x3ce8c) * 0xac + in_stack_00000028 + 0x3cea4) =
         unaff_retaddr + 0xb;
    *(float *)(*(int *)(in_stack_00000028 + 0x3ce8c) * 0xac + in_stack_00000028 + 0x3cea8) =
         (float)dVar8;
    iVar2 = *(int *)(in_stack_00000028 + 0x3ce8c) * 0xac;
    *(undefined4 *)(in_stack_00000018 + 0x3ceb4 + iVar2) = 0;
    *(undefined4 *)(in_stack_00000018 + 0x3ceb0 + iVar2) =
         *(undefined4 *)(in_stack_00000018 + 0x3ceb4 + iVar2);
    *(undefined4 *)(in_stack_00000018 + 0x3ceac + iVar2) =
         *(undefined4 *)(in_stack_00000018 + 0x3ceb0 + iVar2);
    iVar2 = *(int *)(in_stack_00000028 + 0x3ce8c) * 0xac;
    *(undefined4 *)(in_stack_00000018 + 0x3cec0 + iVar2) = 0;
    *(undefined4 *)(in_stack_00000018 + 0x3cebc + iVar2) =
         *(undefined4 *)(in_stack_00000018 + 0x3cec0 + iVar2);
    *(undefined4 *)(in_stack_00000018 + 0x3ceb8 + iVar2) =
         *(undefined4 *)(in_stack_00000018 + 0x3cebc + iVar2);
    *(undefined4 *)(*(int *)(in_stack_00000028 + 0x3ce8c) * 0xac + in_stack_00000028 + 0x3cec4) = 0;
    *(int *)(in_stack_00000028 + 0x3ce8c) = *(int *)(in_stack_00000028 + 0x3ce8c) + 1;
  }
  core_cloth_cpp_FUN_00439710();
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb5c,0,in_stack_fffffb5c,in_stack_fffffb60,
             (uint)in_stack_fffffb64,(uint)in_stack_fffffb68,in_stack_fffffb6c);
  return;
}


// Assembly code:
// 0043c430: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043c430
// 0043c431: PUSH ESI
// 0043c432: PUSH EDI
// 0043c433: PUSH EBP
// 0043c434: SUB ESP,0x4bc
// 0043c43a: XOR EDX,EDX
// 0043c43c: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043c441: MOV dword ptr [ESP + 0x4bc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0043c448: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0043c44d: ADD ESP,0x4
// 0043c450: MOV EBP,EAX
// 0043c452: MOV ESI,EAX
// 0043c454: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0043c459: MOV EAX,ESP
// 0043c45b: PUSH EAX
// 0043c45c: XOR EDI,EDI
// 0043c45e: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0043c463: MOV ECX,dword ptr [EBP + 0x28558]
// 0043c469: ADD ESP,0x4
// 0043c46c: TEST ECX,ECX
// 0043c46e: JLE 0x0043c4ae
//   XREF to: 0043c4ae (CONDITIONAL_JUMP)
// 0043c470: LEA EBX,[EBP + 0x2855c]
// 0043c476: MOV EBP,dword ptr [ESI + 0x28558]
//   Label: LAB_0043c476
// 0043c47c: XOR EDX,EDX
// 0043c47e: XOR ECX,ECX
// 0043c480: TEST EBP,EBP
// 0043c482: JLE 0x0043c513
//   XREF to: 0043c513 (CONDITIONAL_JUMP)
// 0043c488: MOV EAX,ESI
// 0043c48a: CMP EDI,dword ptr [EAX + 0x2857c]
//   Label: LAB_0043c48a
// 0043c490: JNZ 0x0043c501
//   XREF to: 0043c501 (CONDITIONAL_JUMP)
// 0043c492: PUSH EBX
//   Label: LAB_0043c492
// 0043c493: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4cc] (DATA)
// 0043c497: PUSH EAX
// 0043c498: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0043c49d: ADD ESP,0x8
// 0043c4a0: INC EDI
//   Label: LAB_0043c4a0
// 0043c4a1: MOV EBP,dword ptr [ESI + 0x28558]
// 0043c4a7: ADD EBX,0x24
// 0043c4aa: CMP EDI,EBP
// 0043c4ac: JL 0x0043c476
//   XREF to: 0043c476 (CONDITIONAL_JUMP)
// 0043c4ae: PUSH 0x0
//   Label: LAB_0043c4ae
// 0043c4b0: PUSH -0x1
// 0043c4b2: PUSH 0x618656
//   XREF to: 00618656 (DATA)
// 0043c4b7: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x4cc] (DATA)
// 0043c4bb: PUSH EAX
// 0043c4bc: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0043c4c1: ADD ESP,0x10
// 0043c4c4: TEST EAX,EAX
// 0043c4c6: JGE 0x0043c51d
//   XREF to: 0043c51d (CONDITIONAL_JUMP)
// 0043c4c8: PUSH 0x838e58
//   Label: LAB_0043c4c8
//   XREF to: 00838e58 (DATA)
// 0043c4cd: PUSH 0x838e4c
//   XREF to: 00838e4c (DATA)
// 0043c4d2: PUSH 0x838e40
//   XREF to: 00838e40 (DATA)
// 0043c4d7: MOV EAX,dword ptr [ESP + 0x4dc]
//   XREF to: Stack[0x4] (READ)
// 0043c4de: PUSH EAX
// 0043c4df: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 0043c4e4: ADD ESP,0x10
// 0043c4e7: PUSH 0x0
// 0043c4e9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4cc] (DATA)
// 0043c4ed: PUSH EAX
// 0043c4ee: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0043c4f3: ADD ESP,0x8
// 0043c4f6: ADD ESP,0x4bc
// 0043c4fc: POP EBP
// 0043c4fd: POP EDI
// 0043c4fe: POP ESI
// 0043c4ff: POP EBX
// 0043c500: RET
// 0043c501: INC EDX
//   Label: LAB_0043c501
// 0043c502: MOV EBP,dword ptr [ESI + 0x28558]
// 0043c508: ADD EAX,0x24
// 0043c50b: CMP EDX,EBP
// 0043c50d: JL 0x0043c48a
//   XREF to: 0043c48a (CONDITIONAL_JUMP)
// 0043c513: TEST ECX,ECX
//   Label: LAB_0043c513
// 0043c515: JNZ 0x0043c492
//   XREF to: 0043c492 (CONDITIONAL_JUMP)
// 0043c51b: JMP 0x0043c4a0
//   XREF to: 0043c4a0 (UNCONDITIONAL_JUMP)
// 0043c51d: PUSH EAX
//   Label: LAB_0043c51d
// 0043c51e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4cc] (DATA)
// 0043c522: PUSH EAX
// 0043c523: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0043c528: ADD ESP,0x8
// 0043c52b: MOV EDX,dword ptr [ESP + 0x4d0]
//   XREF to: Stack[0x4] (READ)
// 0043c532: IMUL EDI,dword ptr [EDX + 0x3ce8c],0xac
// 0043c53c: LEA EBX,[EDX + 0x3ce90]
// 0043c542: MOV ESI,EAX
// 0043c544: ADD EDI,EBX
// 0043c546: PUSH EDI
// 0043c547: MOV AL,byte ptr [ESI]
//   Label: LAB_0043c547
// 0043c549: MOV byte ptr [EDI],AL
// 0043c54b: CMP AL,0x0
// 0043c54d: JZ 0x0043c55f
//   XREF to: 0043c55f (CONDITIONAL_JUMP)
// 0043c54f: MOV AL,byte ptr [ESI + 0x1]
// 0043c552: ADD ESI,0x2
// 0043c555: MOV byte ptr [EDI + 0x1],AL
// 0043c558: ADD EDI,0x2
// 0043c55b: CMP AL,0x0
// 0043c55d: JNZ 0x0043c547
//   XREF to: 0043c547 (CONDITIONAL_JUMP)
// 0043c55f: POP EDI
//   Label: LAB_0043c55f
// 0043c560: PUSH 0x618669
//   XREF to: 00618669 (DATA)
// 0043c565: MOV ESI,dword ptr [ESP + 0x4bc]
//   XREF to: Stack[-0x14] (READ)
// 0043c56c: PUSH ESI
// 0043c56d: PUSH 0x0
// 0043c56f: PUSH 0xa
// 0043c571: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x124] (DATA)
// 0043c578: PUSH EAX
// 0043c579: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0043c57e: ADD ESP,0x14
// 0043c581: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x124] (DATA)
// 0043c588: PUSH EAX
// 0043c589: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 0043c58e: MOV dword ptr [ESP + 0x4ac],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043c595: MOV dword ptr [ESP + 0x4b0],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0043c59c: FLD double ptr [ESP + 0x4ac]
//   XREF to: Stack[-0x24] (READ)
// 0043c5a3: ADD ESP,0x4
// 0043c5a6: PUSH 0x61867e
//   XREF to: 0061867e (DATA)
// 0043c5ab: LEA EDI,[ESI + 0xb]
// 0043c5ae: PUSH EDI
// 0043c5af: PUSH 0x0
// 0043c5b1: PUSH 0xa
// 0043c5b3: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x124] (DATA)
// 0043c5ba: PUSH EAX
// 0043c5bb: FSTP float ptr [ESP + 0x4c4]
//   XREF to: Stack[-0x1c] (WRITE)
// 0043c5c2: MOV dword ptr [ESP + 0x4cc],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0043c5c9: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0043c5ce: ADD ESP,0x14
// 0043c5d1: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x124] (DATA)
// 0043c5d8: PUSH EAX
// 0043c5d9: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 0043c5de: MOV dword ptr [ESP + 0x4ac],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043c5e5: MOV dword ptr [ESP + 0x4b0],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0043c5ec: FLD double ptr [ESP + 0x4ac]
//   XREF to: Stack[-0x24] (READ)
// 0043c5f3: ADD ESP,0x4
// 0043c5f6: MOV EAX,dword ptr [ESP + 0x4d0]
//   XREF to: Stack[0x4] (READ)
// 0043c5fd: IMUL EAX,dword ptr [EAX + 0x3ce8c],0xac
// 0043c607: MOV ECX,dword ptr [ESP + 0x4d0]
//   XREF to: Stack[0x4] (READ)
// 0043c60e: ADD EAX,ECX
// 0043c610: MOV EDX,dword ptr [ESP + 0x4b0]
//   XREF to: Stack[-0x1c] (READ)
// 0043c617: MOV dword ptr [EAX + 0x3cea4],EDX
// 0043c61d: IMUL EAX,dword ptr [ECX + 0x3ce8c],0xac
// 0043c627: ADD EAX,ECX
// 0043c629: FSTP float ptr [ESP + 0x4b4]
//   XREF to: Stack[-0x18] (WRITE)
// 0043c630: MOV EDX,dword ptr [ESP + 0x4b4]
//   XREF to: Stack[-0x18] (READ)
// 0043c637: MOV dword ptr [EAX + 0x3cea8],EDX
// 0043c63d: IMUL EAX,dword ptr [ECX + 0x3ce8c],0xac
// 0043c647: MOV dword ptr [EBX + EAX*0x1 + 0x24],0x0
// 0043c64f: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x24]
// 0043c653: MOV dword ptr [EBX + EAX*0x1 + 0x20],EDX
// 0043c657: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x20]
// 0043c65b: MOV dword ptr [EBX + EAX*0x1 + 0x1c],EDX
// 0043c65f: IMUL EAX,dword ptr [ECX + 0x3ce8c],0xac
// 0043c669: MOV dword ptr [EBX + EAX*0x1 + 0x30],0x0
// 0043c671: MOV EDI,ECX
// 0043c673: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x30]
// 0043c677: MOV dword ptr [EBX + EAX*0x1 + 0x2c],EDX
// 0043c67b: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x2c]
// 0043c67f: MOV dword ptr [EBX + EAX*0x1 + 0x28],EDX
// 0043c683: IMUL EAX,dword ptr [ECX + 0x3ce8c],0xac
// 0043c68d: ADD EAX,EDI
// 0043c68f: MOV dword ptr [EAX + 0x3cec4],0x0
// 0043c699: INC dword ptr [EDI + 0x3ce8c]
// 0043c69f: JMP 0x0043c4c8
//   XREF to: 0043c4c8 (UNCONDITIONAL_JUMP)

// Name: core_bride.cpp_FUN_00424600
// Address: 00424600
// Address Range: [[00424600, 004247ff] [00424814, 0042482a]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00424600()
// Cross-references:
//   core_bride.cpp_FUN_00424830 (00424830) at 004248a3 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004245e8 = 00424640
//   TerminatedCString s_limb_wav_00616c69
//   double DOUBLE_00616c75 = 0.333000000000000
//   double DOUBLE_00616c7d = 7
//   double DOUBLE_00616c85 = 0.5
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.blood_flag
//   undefined4 g_CGameInstance.field57_0x1e0
// Function calls:
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_charactr.cpp_CCharacter_FUN_0042bd30
//   core_charactr.cpp_CCharacter_FUN_0042f300
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bride.cpp_FUN_00424600(undefined4 param_1, undefined4 param_2)
    */

void core_bride_cpp_FUN_00424600(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  float probability_threshold;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 5) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20);
      break;
    case 1:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
      break;
    case 2:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28);
      break;
    case 3:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
      break;
    case 4:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x40);
      break;
    default:
      goto switchD_00424639_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_00424639_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20)) ||
       (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24))) ||
      (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28))) ||
     ((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c) ||
      (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x40))))) {
    probability_threshold = (float)in_stack_00000008[0xb];
    if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x40) == *in_stack_00000008) {
      probability_threshold = probability_threshold * (float)DOUBLE_00616c75;
    }
    if (g_CGamePtr->field57_0x1e0 != 0) {
      probability_threshold = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      probability_threshold = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(probability_threshold);
    if (iVar1 != 0) {
      core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20)) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x28) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      if ((in_stack_00000004->model).part_visibility_flags
          [*(int *)(in_stack_00000004[1].base_actor.create_event + 0x40)] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)DOUBLE_00616c7d);
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x40)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)DOUBLE_00616c8d);
    return;
  }
  if ((iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x3c)) &&
     (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x38))) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)DOUBLE_00616c85);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}


// Assembly code:
// 00424600: PUSH EBX
//   Label: core_bride.cpp_FUN_00424600
// 00424601: PUSH ESI
// 00424602: PUSH EDI
// 00424603: PUSH EBP
// 00424604: MOV EBP,ESP
// 00424606: SUB ESP,0x10
// 00424609: AND ESP,0xfffffff8
// 0042460c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042460f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00424612: FLD float ptr [EBX + 0x2c]
// 00424615: FLDZ
// 00424617: FCOMPP
// 00424619: FNSTSW AX
// 0042461b: SAHF
// 0042461c: JNC 0x00424648
//   XREF to: 00424648 (CONDITIONAL_JUMP)
// 0042461e: CMP dword ptr [EBX],-0x1
// 00424621: JNZ 0x00424648
//   XREF to: 00424648 (CONDITIONAL_JUMP)
// 00424623: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00424628: MOV EDX,EAX
// 0042462a: MOV EDI,0x5
// 0042462f: SAR EDX,0x1f
// 00424632: IDIV EDI
// 00424634: CMP EDX,0x4
// 00424637: JA 0x00424648
//   XREF to: 00424648 (CONDITIONAL_JUMP)
// 00424639: JMP dword ptr [EDX*0x4 + 0x4245e8]
//   Label: switchD
//   XREF to: 00424640 (COMPUTED_JUMP)
//   XREF to: 00424790 (COMPUTED_JUMP)
//   XREF to: 0042479b (COMPUTED_JUMP)
//   XREF to: 004247a6 (COMPUTED_JUMP)
//   XREF to: 004247b1 (COMPUTED_JUMP)
//   XREF to: 004245e8 (DATA)
// 00424640: MOV EAX,dword ptr [ESI + 0xbebc]
//   Label: caseD_0
// 00424646: MOV dword ptr [EBX],EAX
//   Label: LAB_00424646
// 00424648: MOV ECX,dword ptr [ESI + 0xbebc]
//   Label: default
// 0042464e: MOV EAX,dword ptr [EBX]
// 00424650: CMP EAX,ECX
// 00424652: JNZ 0x004247bc
//   XREF to: 004247bc (CONDITIONAL_JUMP)
// 00424658: MOV EAX,dword ptr [EBX + 0x2c]
//   Label: LAB_00424658
// 0042465b: MOV EDX,dword ptr [ESI + 0xbedc]
// 00424661: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 00424664: CMP EDX,dword ptr [EBX]
// 00424666: JNZ 0x00424678
//   XREF to: 00424678 (CONDITIONAL_JUMP)
// 00424668: FLD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0042466b: FLD ST0
// 0042466d: FMUL double ptr [0x00616c75]
//   XREF to: 00616c75 (READ)
// 00424673: FSTP ST1
// 00424675: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00424678: MOV EAX,[0x0067b654]
//   Label: LAB_00424678
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0042467d: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 00424684: JZ 0x0042468d
//   XREF to: 0042468d (CONDITIONAL_JUMP)
// 00424686: MOV dword ptr [ESP],0x3f800000
//   XREF to: Stack[-0x20] (DATA)
// 0042468d: MOV EAX,[0x0067b654]
//   Label: LAB_0042468d
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00424692: MOV EDX,dword ptr [EAX + 0x14]
//   XREF to: 02d81ab0 (READ)
// 00424695: TEST EDX,EDX
// 00424697: JNZ 0x0042469c
//   XREF to: 0042469c (CONDITIONAL_JUMP)
// 00424699: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x20] (DATA)
// 0042469c: PUSH dword ptr [ESP]
//   Label: LAB_0042469c
//   XREF to: Stack[-0x20] (DATA)
// 0042469f: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004246a4: ADD ESP,0x4
// 004246a7: TEST EAX,EAX
// 004246a9: JZ 0x0042475f
//   XREF to: 0042475f (CONDITIONAL_JUMP)
// 004246af: PUSH 0x0
// 004246b1: PUSH 0x0
// 004246b3: PUSH 0x0
// 004246b5: PUSH ESI
// 004246b6: LEA EAX,[EBX + 0xc]
// 004246b9: PUSH EAX
// 004246ba: LEA EAX,[ESI + 0x30]
// 004246bd: PUSH EAX
// 004246be: LEA EAX,[ESI + 0x20]
// 004246c1: PUSH EAX
// 004246c2: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 004246c7: ADD ESP,0x1c
// 004246ca: MOV EDI,EAX
// 004246cc: PUSH 0x0
// 004246ce: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004246d2: MOV EAX,dword ptr [EBX]
// 004246d4: PUSH EAX
// 004246d5: PUSH EDI
// 004246d6: PUSH ESI
// 004246d7: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004246dc: MOV EAX,dword ptr [EBX]
// 004246de: MOV EDX,dword ptr [ESI + 0xbebc]
// 004246e4: ADD ESP,0x10
// 004246e7: CMP EAX,EDX
// 004246e9: JNZ 0x004246fe
//   XREF to: 004246fe (CONDITIONAL_JUMP)
// 004246eb: PUSH 0x0
// 004246ed: MOV ECX,dword ptr [ESI + 0xbec0]
// 004246f3: PUSH ECX
// 004246f4: PUSH EDI
// 004246f5: PUSH ESI
// 004246f6: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004246fb: ADD ESP,0x10
// 004246fe: MOV EDI,dword ptr [ESI + 0xbec4]
//   Label: LAB_004246fe
// 00424704: CMP EDI,dword ptr [EBX]
// 00424706: JNZ 0x0042471f
//   XREF to: 0042471f (CONDITIONAL_JUMP)
// 00424708: PUSH 0x0
// 0042470a: MOV EAX,dword ptr [ESI + 0xbec8]
// 00424710: PUSH EAX
// 00424711: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00424715: PUSH EDX
// 00424716: PUSH ESI
// 00424717: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 0042471c: ADD ESP,0x10
// 0042471f: PUSH 0x616c69
//   Label: LAB_0042471f
//   XREF to: 00616c69 (DATA)
// 00424724: PUSH ESI
// 00424725: CALL core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: 0042f300 (UNCONDITIONAL_CALL)
// 0042472a: ADD ESP,0x8
// 0042472d: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00424731: PUSH ECX
// 00424732: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 00424737: MOV EAX,dword ptr [ESI + 0xbedc]
// 0042473d: MOV EDI,dword ptr [ESI + EAX*0x4 + 0x2298]
// 00424744: ADD ESP,0x4
// 00424747: TEST EDI,EDI
// 00424749: JZ 0x004247f1
//   XREF to: 004247f1 (CONDITIONAL_JUMP)
// 0042474f: FLD float ptr [EBX + 0x8]
//   Label: LAB_0042474f
// 00424752: FLD ST0
// 00424754: FMUL double ptr [0x00616c7d]
//   XREF to: 00616c7d (READ)
// 0042475a: FSTP ST1
// 0042475c: FSTP float ptr [EBX + 0x8]
// 0042475f: MOV EDX,dword ptr [ESI + 0xbedc]
//   Label: LAB_0042475f
// 00424765: MOV EAX,dword ptr [EBX]
// 00424767: CMP EAX,EDX
// 00424769: JZ 0x004247fd
//   XREF to: 004247fd (CONDITIONAL_JUMP)
// 0042476f: CMP EAX,dword ptr [ESI + 0xbed8]
// 00424775: JZ 0x00424783
//   XREF to: 00424783 (CONDITIONAL_JUMP)
// 00424777: CMP EAX,dword ptr [ESI + 0xbed4]
// 0042477d: JNZ 0x00424814
//   XREF to: 00424814 (CONDITIONAL_JUMP)
// 00424783: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00424783
// 00424786: MOV dword ptr [EBX + 0x4],EAX
// 00424789: MOV ESP,EBP
// 0042478b: POP EBP
// 0042478c: POP EDI
// 0042478d: POP ESI
// 0042478e: POP EBX
// 0042478f: RET
// 00424790: MOV EAX,dword ptr [ESI + 0xbec0]
//   Label: caseD_1
// 00424796: JMP 0x00424646
//   XREF to: 00424646 (UNCONDITIONAL_JUMP)
// 0042479b: MOV EAX,dword ptr [ESI + 0xbec4]
//   Label: caseD_2
// 004247a1: JMP 0x00424646
//   XREF to: 00424646 (UNCONDITIONAL_JUMP)
// 004247a6: MOV EAX,dword ptr [ESI + 0xbec8]
//   Label: caseD_3
// 004247ac: JMP 0x00424646
//   XREF to: 00424646 (UNCONDITIONAL_JUMP)
// 004247b1: MOV EAX,dword ptr [ESI + 0xbedc]
//   Label: caseD_4
// 004247b7: JMP 0x00424646
//   XREF to: 00424646 (UNCONDITIONAL_JUMP)
// 004247bc: CMP EAX,dword ptr [ESI + 0xbec0]
//   Label: LAB_004247bc
// 004247c2: JZ 0x00424658
//   XREF to: 00424658 (CONDITIONAL_JUMP)
// 004247c8: CMP EAX,dword ptr [ESI + 0xbec4]
// 004247ce: JZ 0x00424658
//   XREF to: 00424658 (CONDITIONAL_JUMP)
// 004247d4: CMP EAX,dword ptr [ESI + 0xbec8]
// 004247da: JZ 0x00424658
//   XREF to: 00424658 (CONDITIONAL_JUMP)
// 004247e0: CMP EAX,dword ptr [ESI + 0xbedc]
// 004247e6: JZ 0x00424658
//   XREF to: 00424658 (CONDITIONAL_JUMP)
// 004247ec: JMP 0x0042475f
//   XREF to: 0042475f (UNCONDITIONAL_JUMP)
// 004247f1: MOV dword ptr [EBX + 0x4],0x461c3c00
//   Label: LAB_004247f1
// 004247f8: JMP 0x0042474f
//   XREF to: 0042474f (UNCONDITIONAL_JUMP)
// 004247fd: FLD float ptr [EBX + 0x4]
//   Label: LAB_004247fd
// 00424814: FLD float ptr [EBX + 0x4]
//   Label: LAB_00424814
// 00424817: FLD ST0
// 00424819: FMUL double ptr [0x00616c85]
//   XREF to: 00616c85 (READ)
// 0042481f: FSTP ST1
// 00424821: FSTP float ptr [EBX + 0x4]
// 00424824: MOV ESP,EBP
// 00424826: POP EBP
// 00424827: POP EDI
// 00424828: POP ESI
// 00424829: POP EBX
// 0042482a: RET

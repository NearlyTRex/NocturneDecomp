// Name: core_batman.cpp_FUN_00417660
// Address: 00417660
// Address Range: [[00417660, 00417997]]
// Convention: unknown
// Signature: undefined core_batman.cpp_FUN_00417660()
// Cross-references:
//   core_batman.cpp_FUN_004179a0 (004179a0) at 00417a26 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0041763c = 0041769d
//   TerminatedCString s_limb_wav_00615939
//   TerminatedCString s_Shot_thru_the_heart_00615943
//   undefined4 DAT_0061595d
//   undefined4 DAT_00615965
//   undefined4 DAT_0061596d
//   undefined4 DAT_00615975
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGame* g_CGamePtr = 02d81a9c
//   CConsole g_ConsolePtr
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.blood_flag
//   undefined4 g_CGameInstance.field57_0x1e0
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_FUN_0040cd10
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_charactr.cpp_CCharacter_FUN_0042b9e0
//   core_charactr.cpp_CCharacter_FUN_0042bcc0
//   core_charactr.cpp_CCharacter_FUN_0042bd30
//   core_charactr.cpp_CCharacter_FUN_0042f300
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_batman.cpp_FUN_00417660(undefined4 param_1, undefined4
   param_2) */

void core_batman_cpp_FUN_00417660(void)

{
  float fVar1;
  CConsole *this_ptr;
  int iVar2;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = in_stack_00000004[1].base_actor.field17_0x104;
      break;
    case 1:
      iVar2 = in_stack_00000004[1].base_actor.scale.x;
      break;
    case 2:
      iVar2 = in_stack_00000004[1].base_actor.scale.y;
      break;
    case 3:
      iVar2 = in_stack_00000004[1].base_actor.scale.z;
      break;
    case 4:
      iVar2 = in_stack_00000004[1].base_actor.is_transparent;
      break;
    case 5:
      iVar2 = in_stack_00000004[1].base_actor.field16_0x100;
      break;
    default:
      goto switchD_00417696_default;
    }
    *in_stack_00000008 = iVar2;
  }
switchD_00417696_default:
  iVar2 = *in_stack_00000008;
  if ((((((iVar2 == in_stack_00000004[1].base_actor.field17_0x104) ||
         (iVar2 == in_stack_00000004[1].base_actor.scale.x)) ||
        (iVar2 == in_stack_00000004[1].base_actor.scale.y)) ||
       ((iVar2 == in_stack_00000004[1].base_actor.scale.z ||
        (iVar2 == in_stack_00000004[1].base_actor.field16_0x100)))) ||
      (iVar2 == in_stack_00000004[1].base_actor.is_transparent)) &&
     (iVar2 = core_actor_cpp_FUN_0040cd10(), iVar2 != 0)) {
    core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    if (*in_stack_00000008 == in_stack_00000004[1].base_actor.field17_0x104) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (in_stack_00000004[1].base_actor.scale.y == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (in_stack_00000004[1].base_actor.field16_0x100 == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
    }
    core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
    core_bodypart_cpp_FUN_0041a050();
    if (*(int *)((in_stack_00000004->model).padding_0x0 +
                in_stack_00000004[1].base_actor.is_transparent * 4 + 0x2140) == 0) {
      in_stack_00000008[1] = 0x461c3c00;
    }
    in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)_DAT_0061595d);
  }
  iVar2 = *in_stack_00000008;
  if (iVar2 == in_stack_00000004[1].base_actor.is_transparent) {
    fVar1 = (float)in_stack_00000008[1] * (float)_DAT_0061596d;
  }
  else {
    if ((iVar2 == in_stack_00000004[1].base_actor.field19_0x114) ||
       (iVar2 == in_stack_00000004[1].base_actor.field16_0x100)) {
      in_stack_00000008[1] = in_stack_00000008[1];
      goto LAB_00417851;
    }
    fVar1 = (float)in_stack_00000008[1] * (float)_DAT_00615965;
  }
  in_stack_00000008[1] = (int)fVar1;
LAB_00417851:
  this_ptr = g_CConsolePtr;
  if ((in_stack_00000004[1].base_actor.field16_0x100 == *in_stack_00000008) &&
     (in_stack_00000008[0xc] == 0x68)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)_DAT_00615975);
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr,"Shot thru the heart\n");
    iVar2 = core_actor_cpp_FUN_0040cd10();
    if (iVar2 != 0) {
      core_actor_cpp_CDemonActor_FUN_00408e80(&in_stack_00000004->base_actor);
      core_charactr_cpp_CCharacter_FUN_0042b9e0(in_stack_00000004);
      return;
    }
  }
  return;
}


// Assembly code:
// 00417660: PUSH EBX
//   Label: core_batman.cpp_FUN_00417660
// 00417661: PUSH ESI
// 00417662: PUSH EDI
// 00417663: PUSH EBP
// 00417664: SUB ESP,0x24
// 00417667: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0041766b: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0041766f: FLD float ptr [ESI + 0x2c]
// 00417672: FLDZ
// 00417674: FCOMPP
// 00417676: FNSTSW AX
// 00417678: SAHF
// 00417679: JNC 0x004176a5
//   XREF to: 004176a5 (CONDITIONAL_JUMP)
// 0041767b: CMP dword ptr [ESI],-0x1
// 0041767e: JNZ 0x004176a5
//   XREF to: 004176a5 (CONDITIONAL_JUMP)
// 00417680: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00417685: MOV EDX,EAX
// 00417687: MOV EDI,0x6
// 0041768c: SAR EDX,0x1f
// 0041768f: IDIV EDI
// 00417691: CMP EDX,0x5
// 00417694: JA 0x004176a5
//   XREF to: 004176a5 (CONDITIONAL_JUMP)
// 00417696: JMP dword ptr [EDX*0x4 + 0x41763c]
//   Label: switchD
//   XREF to: 0041769d (COMPUTED_JUMP)
//   XREF to: 0041786d (COMPUTED_JUMP)
//   XREF to: 00417878 (COMPUTED_JUMP)
//   XREF to: 00417883 (COMPUTED_JUMP)
//   XREF to: 0041788e (COMPUTED_JUMP)
//   XREF to: 00417899 (COMPUTED_JUMP)
//   XREF to: 0041763c (DATA)
// 0041769d: MOV EAX,dword ptr [EBX + 0xbf28]
//   Label: caseD_0
// 004176a3: MOV dword ptr [ESI],EAX
//   Label: LAB_004176a3
// 004176a5: MOV ECX,dword ptr [EBX + 0xbf28]
//   Label: default
// 004176ab: MOV EAX,dword ptr [ESI]
// 004176ad: CMP EAX,ECX
// 004176af: JNZ 0x004178a4
//   XREF to: 004178a4 (CONDITIONAL_JUMP)
// 004176b5: MOV EAX,dword ptr [ESI + 0x2c]
//   Label: LAB_004176b5
// 004176b8: MOV EBP,dword ptr [EBX + 0xbf20]
// 004176be: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004176c2: CMP EBP,dword ptr [ESI]
// 004176c4: JNZ 0x004176ce
//   XREF to: 004176ce (CONDITIONAL_JUMP)
// 004176c6: MOV dword ptr [ESP + 0x20],0x3d4ccccd
//   XREF to: Stack[-0x14] (WRITE)
// 004176ce: MOV EDX,dword ptr [EBX + 0xbf24]
//   Label: LAB_004176ce
// 004176d4: CMP EDX,dword ptr [ESI]
// 004176d6: JNZ 0x004176e0
//   XREF to: 004176e0 (CONDITIONAL_JUMP)
// 004176d8: MOV dword ptr [ESP + 0x20],0x3ca3d70a
//   XREF to: Stack[-0x14] (WRITE)
// 004176e0: MOV EAX,[0x0067b654]
//   Label: LAB_004176e0
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004176e5: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 004176ec: JZ 0x004176f6
//   XREF to: 004176f6 (CONDITIONAL_JUMP)
// 004176ee: MOV dword ptr [ESP + 0x20],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 004176f6: MOV EAX,[0x0067b654]
//   Label: LAB_004176f6
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004176fb: MOV EDX,dword ptr [EAX + 0x14]
//   XREF to: 02d81ab0 (READ)
// 004176fe: TEST EDX,EDX
// 00417700: JNZ 0x00417706
//   XREF to: 00417706 (CONDITIONAL_JUMP)
// 00417702: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00417706: PUSH dword ptr [ESP + 0x20]
//   Label: LAB_00417706
//   XREF to: Stack[-0x14] (READ)
// 0041770a: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0041770f: ADD ESP,0x4
// 00417712: TEST EAX,EAX
// 00417714: JZ 0x00417831
//   XREF to: 00417831 (CONDITIONAL_JUMP)
// 0041771a: MOV EDI,dword ptr [EBX + 0x2610]
// 00417720: PUSH EDI
// 00417721: PUSH 0x0
// 00417723: PUSH 0x0
// 00417725: PUSH EBX
// 00417726: LEA EAX,[ESI + 0xc]
// 00417729: PUSH EAX
// 0041772a: LEA EAX,[EBX + 0x30]
// 0041772d: PUSH EAX
// 0041772e: LEA EAX,[EBX + 0x20]
// 00417731: PUSH EAX
// 00417732: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 00417737: ADD ESP,0x1c
// 0041773a: MOV EDI,EAX
// 0041773c: PUSH 0x0
// 0041773e: MOV EBP,EAX
// 00417740: MOV EAX,dword ptr [ESI]
// 00417742: PUSH EAX
// 00417743: PUSH EDI
// 00417744: PUSH EBX
// 00417745: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 0041774a: MOV EAX,dword ptr [ESI]
// 0041774c: MOV EDX,dword ptr [EBX + 0xbf28]
// 00417752: ADD ESP,0x10
// 00417755: CMP EAX,EDX
// 00417757: JNZ 0x0041776c
//   XREF to: 0041776c (CONDITIONAL_JUMP)
// 00417759: PUSH 0x0
// 0041775b: MOV ECX,dword ptr [EBX + 0xbf2c]
// 00417761: PUSH ECX
// 00417762: PUSH EDI
// 00417763: PUSH EBX
// 00417764: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 00417769: ADD ESP,0x10
// 0041776c: MOV EDI,dword ptr [EBX + 0xbf30]
//   Label: LAB_0041776c
// 00417772: CMP EDI,dword ptr [ESI]
// 00417774: JNZ 0x00417789
//   XREF to: 00417789 (CONDITIONAL_JUMP)
// 00417776: PUSH 0x0
// 00417778: MOV EAX,dword ptr [EBX + 0xbf34]
// 0041777e: PUSH EAX
// 0041777f: PUSH EBP
// 00417780: PUSH EBX
// 00417781: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 00417786: ADD ESP,0x10
// 00417789: MOV EDX,dword ptr [EBX + 0xbf24]
//   Label: LAB_00417789
// 0041778f: CMP EDX,dword ptr [ESI]
// 00417791: JNZ 0x004177f5
//   XREF to: 004177f5 (CONDITIONAL_JUMP)
// 00417793: PUSH 0x0
// 00417795: LEA EDI,[ESI + 0xc]
// 00417798: PUSH EDI
// 00417799: MOV ECX,dword ptr [EBX + 0xbf30]
// 0041779f: PUSH ECX
// 004177a0: PUSH EBX
// 004177a1: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004177a6: ADD ESP,0x10
// 004177a9: PUSH 0x0
// 004177ab: PUSH EDI
// 004177ac: MOV EAX,dword ptr [EBX + 0xbf34]
// 004177b2: PUSH EAX
// 004177b3: PUSH EBX
// 004177b4: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004177b9: ADD ESP,0x10
// 004177bc: PUSH 0x0
// 004177be: PUSH EDI
// 004177bf: MOV EDX,dword ptr [EBX + 0xbf28]
// 004177c5: PUSH EDX
// 004177c6: PUSH EBX
// 004177c7: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004177cc: ADD ESP,0x10
// 004177cf: PUSH 0x0
// 004177d1: PUSH EDI
// 004177d2: MOV ECX,dword ptr [EBX + 0xbf2c]
// 004177d8: PUSH ECX
// 004177d9: PUSH EBX
// 004177da: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004177df: ADD ESP,0x10
// 004177e2: PUSH 0x0
// 004177e4: PUSH EDI
// 004177e5: MOV EDI,dword ptr [EBX + 0xbf20]
// 004177eb: PUSH EDI
// 004177ec: PUSH EBX
// 004177ed: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004177f2: ADD ESP,0x10
// 004177f5: PUSH 0x615939
//   Label: LAB_004177f5
//   XREF to: 00615939 (DATA)
// 004177fa: PUSH EBX
// 004177fb: CALL core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: 0042f300 (UNCONDITIONAL_CALL)
// 00417800: ADD ESP,0x8
// 00417803: PUSH EBP
// 00417804: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 00417809: MOV EAX,dword ptr [EBX + 0xbf20]
// 0041780f: MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298]
// 00417816: ADD ESP,0x4
// 00417819: TEST EBP,EBP
// 0041781b: JZ 0x004178e5
//   XREF to: 004178e5 (CONDITIONAL_JUMP)
// 00417821: FLD float ptr [ESI + 0x8]
//   Label: LAB_00417821
// 00417824: FLD ST0
// 00417826: FMUL double ptr [0x0061595d]
//   XREF to: 0061595d (READ)
// 0041782c: FSTP ST1
// 0041782e: FSTP float ptr [ESI + 0x8]
// 00417831: MOV EDX,dword ptr [EBX + 0xbf20]
//   Label: LAB_00417831
// 00417837: MOV EAX,dword ptr [ESI]
// 00417839: CMP EAX,EDX
// 0041783b: JNZ 0x004178f1
//   XREF to: 004178f1 (CONDITIONAL_JUMP)
// 00417841: FLD float ptr [ESI + 0x4]
// 00417844: FLD ST0
// 00417846: FMUL double ptr [0x0061596d]
//   XREF to: 0061596d (READ)
// 0041784c: FSTP ST1
//   Label: LAB_0041784c
// 0041784e: FSTP float ptr [ESI + 0x4]
// 00417851: MOV EBP,dword ptr [EBX + 0xbf24]
//   Label: LAB_00417851
// 00417857: CMP EBP,dword ptr [ESI]
// 00417859: JNZ 0x00417865
//   XREF to: 00417865 (CONDITIONAL_JUMP)
// 0041785b: CMP dword ptr [ESI + 0x30],0x68
// 0041785f: JZ 0x0041791c
//   XREF to: 0041791c (CONDITIONAL_JUMP)
// 00417865: ADD ESP,0x24
//   Label: LAB_00417865
// 00417868: POP EBP
// 00417869: POP EDI
// 0041786a: POP ESI
// 0041786b: POP EBX
// 0041786c: RET
// 0041786d: MOV EAX,dword ptr [EBX + 0xbf2c]
//   Label: caseD_1
// 00417873: JMP 0x004176a3
//   XREF to: 004176a3 (UNCONDITIONAL_JUMP)
// 00417878: MOV EAX,dword ptr [EBX + 0xbf30]
//   Label: caseD_2
// 0041787e: JMP 0x004176a3
//   XREF to: 004176a3 (UNCONDITIONAL_JUMP)
// 00417883: MOV EAX,dword ptr [EBX + 0xbf34]
//   Label: caseD_3
// 00417889: JMP 0x004176a3
//   XREF to: 004176a3 (UNCONDITIONAL_JUMP)
// 0041788e: MOV EAX,dword ptr [EBX + 0xbf20]
//   Label: caseD_4
// 00417894: JMP 0x004176a3
//   XREF to: 004176a3 (UNCONDITIONAL_JUMP)
// 00417899: MOV EAX,dword ptr [EBX + 0xbf24]
//   Label: caseD_5
// 0041789f: JMP 0x004176a3
//   XREF to: 004176a3 (UNCONDITIONAL_JUMP)
// 004178a4: CMP EAX,dword ptr [EBX + 0xbf2c]
//   Label: LAB_004178a4
// 004178aa: JZ 0x004176b5
//   XREF to: 004176b5 (CONDITIONAL_JUMP)
// 004178b0: CMP EAX,dword ptr [EBX + 0xbf30]
// 004178b6: JZ 0x004176b5
//   XREF to: 004176b5 (CONDITIONAL_JUMP)
// 004178bc: CMP EAX,dword ptr [EBX + 0xbf34]
// 004178c2: JZ 0x004176b5
//   XREF to: 004176b5 (CONDITIONAL_JUMP)
// 004178c8: CMP EAX,dword ptr [EBX + 0xbf24]
// 004178ce: JZ 0x004176b5
//   XREF to: 004176b5 (CONDITIONAL_JUMP)
// 004178d4: CMP EAX,dword ptr [EBX + 0xbf20]
// 004178da: JZ 0x004176b5
//   XREF to: 004176b5 (CONDITIONAL_JUMP)
// 004178e0: JMP 0x00417831
//   XREF to: 00417831 (UNCONDITIONAL_JUMP)
// 004178e5: MOV dword ptr [ESI + 0x4],0x461c3c00
//   Label: LAB_004178e5
// 004178ec: JMP 0x00417821
//   XREF to: 00417821 (UNCONDITIONAL_JUMP)
// 004178f1: CMP EAX,dword ptr [EBX + 0xbf38]
//   Label: LAB_004178f1
// 004178f7: JNZ 0x00417904
//   XREF to: 00417904 (CONDITIONAL_JUMP)
// 004178f9: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_004178f9
// 004178fc: MOV dword ptr [ESI + 0x4],EAX
// 004178ff: JMP 0x00417851
//   XREF to: 00417851 (UNCONDITIONAL_JUMP)
// 00417904: CMP EAX,dword ptr [EBX + 0xbf24]
//   Label: LAB_00417904
// 0041790a: JZ 0x004178f9
//   XREF to: 004178f9 (CONDITIONAL_JUMP)
// 0041790c: FLD float ptr [ESI + 0x4]
// 0041790f: FLD ST0
// 00417911: FMUL double ptr [0x00615965]
//   XREF to: 00615965 (READ)
// 00417917: JMP 0x0041784c
//   XREF to: 0041784c (UNCONDITIONAL_JUMP)
// 0041791c: FLD float ptr [ESI + 0x4]
//   Label: LAB_0041791c
// 0041791f: PUSH 0x615943
//   XREF to: 00615943 (DATA)
// 00417924: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0041792a: FLD ST0
// 0041792c: FMUL double ptr [0x00615975]
//   XREF to: 00615975 (READ)
// 00417932: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 00417933: FSTP ST1
// 00417935: FSTP float ptr [ESI + 0x4]
// 00417938: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0041793d: ADD ESP,0x8
// 00417940: PUSH 0x3f000000
// 00417945: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0041794a: ADD ESP,0x4
// 0041794d: TEST EAX,EAX
// 0041794f: JZ 0x00417865
//   XREF to: 00417865 (CONDITIONAL_JUMP)
// 00417955: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x28] (DATA)
// 00417959: PUSH EAX
// 0041795a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 0041795e: XOR ECX,ECX
// 00417960: PUSH EAX
// 00417961: MOV ESI,0x41a00000
// 00417966: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0041796a: PUSH EBX
// 0041796b: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0041796f: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00417973: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00417978: ADD ESP,0xc
// 0041797b: PUSH 0x1
// 0041797d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 00417981: PUSH 0xbf800000
// 00417986: PUSH EAX
// 00417987: PUSH EBX
// 00417988: CALL core_charactr.cpp_CCharacter_FUN_0042b9e0
//   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
// 0041798d: ADD ESP,0x10
// 00417990: ADD ESP,0x24
// 00417993: POP EBP
// 00417994: POP EDI
// 00417995: POP ESI
// 00417996: POP EBX
// 00417997: RET

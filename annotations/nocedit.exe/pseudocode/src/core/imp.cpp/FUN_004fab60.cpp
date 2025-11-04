// Name: core_imp.cpp_FUN_004fab60
// Address: 004fab60
// Address Range: [[004fab60, 004fadf5]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004fab60()
// Cross-references:
//   core_imp.cpp_FUN_004fae00 (004fae00) at 004fae82 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004fab48 = 004fab9d
//   TerminatedCString s_limb_wav_0062fa4b
//   double DOUBLE_0062fa56 = 7
//   double DOUBLE_0062fa5e = 0.5
//   double DOUBLE_0062fa66 = 2.5
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.blood_flag
//   undefined4 g_CGameInstance.field57_0x1e0
// Function calls:
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_charactr.cpp_CCharacter_FUN_0042bcc0
//   core_charactr.cpp_CCharacter_FUN_0042bd30
//   core_charactr.cpp_CCharacter_FUN_0042f300
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_imp.cpp_FUN_004fab60(undefined4 param_1, undefined4 param_2)
    */

void core_imp_cpp_FUN_004fab60(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  float probability_threshold;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
      break;
    case 1:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30);
      break;
    case 2:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x34);
      break;
    case 3:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x38);
      break;
    case 4:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x54);
      break;
    case 5:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x50);
      break;
    default:
      goto switchD_004fab96_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_004fab96_default:
  iVar1 = *in_stack_00000008;
  if (((((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c)) ||
        (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30))) ||
       (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x34))) ||
      ((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x38) ||
       (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x50))))) ||
     (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x54))) {
    probability_threshold = (float)in_stack_00000008[0xb];
    if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x54) == *in_stack_00000008) {
      probability_threshold = 0.05;
    }
    if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x50) == *in_stack_00000008) {
      probability_threshold = 0.02;
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
      if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c)) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x34) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x50) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)DOUBLE_0062fa56);
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x54)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)DOUBLE_0062fa66);
    return;
  }
  if ((iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c)) &&
     (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x50))) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)DOUBLE_0062fa5e);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}


// Assembly code:
// 004fab60: PUSH EBX
//   Label: core_imp.cpp_FUN_004fab60
// 004fab61: PUSH ESI
// 004fab62: PUSH EDI
// 004fab63: PUSH EBP
// 004fab64: SUB ESP,0xc
// 004fab67: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004fab6b: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004fab6f: FLD float ptr [ESI + 0x2c]
// 004fab72: FLDZ
// 004fab74: FCOMPP
// 004fab76: FNSTSW AX
// 004fab78: SAHF
// 004fab79: JNC 0x004faba5
//   XREF to: 004faba5 (CONDITIONAL_JUMP)
// 004fab7b: CMP dword ptr [ESI],-0x1
// 004fab7e: JNZ 0x004faba5
//   XREF to: 004faba5 (CONDITIONAL_JUMP)
// 004fab80: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004fab85: MOV EDX,EAX
// 004fab87: MOV EDI,0x6
// 004fab8c: SAR EDX,0x1f
// 004fab8f: IDIV EDI
// 004fab91: CMP EDX,0x5
// 004fab94: JA 0x004faba5
//   XREF to: 004faba5 (CONDITIONAL_JUMP)
// 004fab96: JMP dword ptr [EDX*0x4 + 0x4fab48]
//   Label: switchD
//   XREF to: 004fab9d (COMPUTED_JUMP)
//   XREF to: 004fad4e (COMPUTED_JUMP)
//   XREF to: 004fad59 (COMPUTED_JUMP)
//   XREF to: 004fad64 (COMPUTED_JUMP)
//   XREF to: 004fad6f (COMPUTED_JUMP)
//   XREF to: 004fad7a (COMPUTED_JUMP)
//   XREF to: 004fab48 (DATA)
// 004fab9d: MOV EAX,dword ptr [EBX + 0xbec8]
//   Label: caseD_0
// 004faba3: MOV dword ptr [ESI],EAX
//   Label: LAB_004faba3
// 004faba5: MOV ECX,dword ptr [EBX + 0xbec8]
//   Label: default
// 004fabab: MOV EAX,dword ptr [ESI]
// 004fabad: CMP EAX,ECX
// 004fabaf: JNZ 0x004fad85
//   XREF to: 004fad85 (CONDITIONAL_JUMP)
// 004fabb5: MOV EAX,dword ptr [ESI + 0x2c]
//   Label: LAB_004fabb5
// 004fabb8: MOV EBP,dword ptr [EBX + 0xbef0]
// 004fabbe: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004fabc2: CMP EBP,dword ptr [ESI]
// 004fabc4: JNZ 0x004fabce
//   XREF to: 004fabce (CONDITIONAL_JUMP)
// 004fabc6: MOV dword ptr [ESP + 0x8],0x3d4ccccd
//   XREF to: Stack[-0x14] (WRITE)
// 004fabce: MOV EDX,dword ptr [EBX + 0xbeec]
//   Label: LAB_004fabce
// 004fabd4: CMP EDX,dword ptr [ESI]
// 004fabd6: JNZ 0x004fabe0
//   XREF to: 004fabe0 (CONDITIONAL_JUMP)
// 004fabd8: MOV dword ptr [ESP + 0x8],0x3ca3d70a
//   XREF to: Stack[-0x14] (WRITE)
// 004fabe0: MOV EAX,[0x0067b654]
//   Label: LAB_004fabe0
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fabe5: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 004fabec: JZ 0x004fabf6
//   XREF to: 004fabf6 (CONDITIONAL_JUMP)
// 004fabee: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 004fabf6: MOV EAX,[0x0067b654]
//   Label: LAB_004fabf6
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fabfb: MOV EDX,dword ptr [EAX + 0x14]
//   XREF to: 02d81ab0 (READ)
// 004fabfe: TEST EDX,EDX
// 004fac00: JNZ 0x004fac06
//   XREF to: 004fac06 (CONDITIONAL_JUMP)
// 004fac02: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004fac06: PUSH dword ptr [ESP + 0x8]
//   Label: LAB_004fac06
//   XREF to: Stack[-0x14] (READ)
// 004fac0a: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004fac0f: ADD ESP,0x4
// 004fac12: TEST EAX,EAX
// 004fac14: JZ 0x004fad1c
//   XREF to: 004fad1c (CONDITIONAL_JUMP)
// 004fac1a: MOV EDI,dword ptr [EBX + 0x2610]
// 004fac20: PUSH EDI
// 004fac21: PUSH 0x0
// 004fac23: PUSH 0x0
// 004fac25: PUSH EBX
// 004fac26: LEA EAX,[ESI + 0xc]
// 004fac29: PUSH EAX
// 004fac2a: LEA EAX,[EBX + 0x30]
// 004fac2d: PUSH EAX
// 004fac2e: LEA EAX,[EBX + 0x20]
// 004fac31: PUSH EAX
// 004fac32: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 004fac37: ADD ESP,0x1c
// 004fac3a: MOV EDI,EAX
// 004fac3c: PUSH 0x1
// 004fac3e: MOV EBP,EAX
// 004fac40: MOV EAX,dword ptr [ESI]
// 004fac42: PUSH EAX
// 004fac43: PUSH EDI
// 004fac44: PUSH EBX
// 004fac45: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004fac4a: MOV EAX,dword ptr [ESI]
// 004fac4c: MOV EDX,dword ptr [EBX + 0xbec8]
// 004fac52: ADD ESP,0x10
// 004fac55: CMP EAX,EDX
// 004fac57: JNZ 0x004fac6c
//   XREF to: 004fac6c (CONDITIONAL_JUMP)
// 004fac59: PUSH 0x0
// 004fac5b: MOV ECX,dword ptr [EBX + 0xbecc]
// 004fac61: PUSH ECX
// 004fac62: PUSH EDI
// 004fac63: PUSH EBX
// 004fac64: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004fac69: ADD ESP,0x10
// 004fac6c: MOV EDI,dword ptr [EBX + 0xbed0]
//   Label: LAB_004fac6c
// 004fac72: CMP EDI,dword ptr [ESI]
// 004fac74: JNZ 0x004fac89
//   XREF to: 004fac89 (CONDITIONAL_JUMP)
// 004fac76: PUSH 0x0
// 004fac78: MOV EAX,dword ptr [EBX + 0xbed4]
// 004fac7e: PUSH EAX
// 004fac7f: PUSH EBP
// 004fac80: PUSH EBX
// 004fac81: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004fac86: ADD ESP,0x10
// 004fac89: MOV EDX,dword ptr [EBX + 0xbeec]
//   Label: LAB_004fac89
// 004fac8f: CMP EDX,dword ptr [ESI]
// 004fac91: JNZ 0x004facf5
//   XREF to: 004facf5 (CONDITIONAL_JUMP)
// 004fac93: PUSH 0x1
// 004fac95: LEA EDI,[ESI + 0xc]
// 004fac98: PUSH EDI
// 004fac99: MOV ECX,dword ptr [EBX + 0xbed0]
// 004fac9f: PUSH ECX
// 004faca0: PUSH EBX
// 004faca1: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004faca6: ADD ESP,0x10
// 004faca9: PUSH 0x1
// 004facab: PUSH EDI
// 004facac: MOV EAX,dword ptr [EBX + 0xbed4]
// 004facb2: PUSH EAX
// 004facb3: PUSH EBX
// 004facb4: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004facb9: ADD ESP,0x10
// 004facbc: PUSH 0x1
// 004facbe: PUSH EDI
// 004facbf: MOV EDX,dword ptr [EBX + 0xbec8]
// 004facc5: PUSH EDX
// 004facc6: PUSH EBX
// 004facc7: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004faccc: ADD ESP,0x10
// 004faccf: PUSH 0x1
// 004facd1: PUSH EDI
// 004facd2: MOV ECX,dword ptr [EBX + 0xbecc]
// 004facd8: PUSH ECX
// 004facd9: PUSH EBX
// 004facda: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004facdf: ADD ESP,0x10
// 004face2: PUSH 0x1
// 004face4: PUSH EDI
// 004face5: MOV EDI,dword ptr [EBX + 0xbef0]
// 004faceb: PUSH EDI
// 004facec: PUSH EBX
// 004faced: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004facf2: ADD ESP,0x10
// 004facf5: PUSH 0x62fa4b
//   Label: LAB_004facf5
//   XREF to: 0062fa4b (DATA)
// 004facfa: PUSH EBX
// 004facfb: CALL core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: 0042f300 (UNCONDITIONAL_CALL)
// 004fad00: ADD ESP,0x8
// 004fad03: PUSH EBP
// 004fad04: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 004fad09: ADD ESP,0x4
// 004fad0c: FLD float ptr [ESI + 0x8]
// 004fad0f: FLD ST0
// 004fad11: FMUL double ptr [0x0062fa56]
//   XREF to: 0062fa56 (READ)
// 004fad17: FSTP ST1
// 004fad19: FSTP float ptr [ESI + 0x8]
// 004fad1c: MOV EBP,dword ptr [EBX + 0xbef0]
//   Label: LAB_004fad1c
// 004fad22: MOV EAX,dword ptr [ESI]
// 004fad24: CMP EAX,EBP
// 004fad26: JZ 0x004fadc6
//   XREF to: 004fadc6 (CONDITIONAL_JUMP)
// 004fad2c: CMP EAX,dword ptr [EBX + 0xbee8]
// 004fad32: JZ 0x004fad40
//   XREF to: 004fad40 (CONDITIONAL_JUMP)
// 004fad34: CMP EAX,dword ptr [EBX + 0xbeec]
// 004fad3a: JNZ 0x004fadde
//   XREF to: 004fadde (CONDITIONAL_JUMP)
// 004fad40: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_004fad40
// 004fad43: MOV dword ptr [ESI + 0x4],EAX
// 004fad46: ADD ESP,0xc
// 004fad49: POP EBP
// 004fad4a: POP EDI
// 004fad4b: POP ESI
// 004fad4c: POP EBX
// 004fad4d: RET
// 004fad4e: MOV EAX,dword ptr [EBX + 0xbecc]
//   Label: caseD_1
// 004fad54: JMP 0x004faba3
//   XREF to: 004faba3 (UNCONDITIONAL_JUMP)
// 004fad59: MOV EAX,dword ptr [EBX + 0xbed0]
//   Label: caseD_2
// 004fad5f: JMP 0x004faba3
//   XREF to: 004faba3 (UNCONDITIONAL_JUMP)
// 004fad64: MOV EAX,dword ptr [EBX + 0xbed4]
//   Label: caseD_3
// 004fad6a: JMP 0x004faba3
//   XREF to: 004faba3 (UNCONDITIONAL_JUMP)
// 004fad6f: MOV EAX,dword ptr [EBX + 0xbef0]
//   Label: caseD_4
// 004fad75: JMP 0x004faba3
//   XREF to: 004faba3 (UNCONDITIONAL_JUMP)
// 004fad7a: MOV EAX,dword ptr [EBX + 0xbeec]
//   Label: caseD_5
// 004fad80: JMP 0x004faba3
//   XREF to: 004faba3 (UNCONDITIONAL_JUMP)
// 004fad85: CMP EAX,dword ptr [EBX + 0xbecc]
//   Label: LAB_004fad85
// 004fad8b: JZ 0x004fabb5
//   XREF to: 004fabb5 (CONDITIONAL_JUMP)
// 004fad91: CMP EAX,dword ptr [EBX + 0xbed0]
// 004fad97: JZ 0x004fabb5
//   XREF to: 004fabb5 (CONDITIONAL_JUMP)
// 004fad9d: CMP EAX,dword ptr [EBX + 0xbed4]
// 004fada3: JZ 0x004fabb5
//   XREF to: 004fabb5 (CONDITIONAL_JUMP)
// 004fada9: CMP EAX,dword ptr [EBX + 0xbeec]
// 004fadaf: JZ 0x004fabb5
//   XREF to: 004fabb5 (CONDITIONAL_JUMP)
// 004fadb5: CMP EAX,dword ptr [EBX + 0xbef0]
// 004fadbb: JZ 0x004fabb5
//   XREF to: 004fabb5 (CONDITIONAL_JUMP)
// 004fadc1: JMP 0x004fad1c
//   XREF to: 004fad1c (UNCONDITIONAL_JUMP)
// 004fadc6: FLD float ptr [ESI + 0x4]
//   Label: LAB_004fadc6
// 004fadc9: FLD ST0
// 004fadcb: FMUL double ptr [0x0062fa66]
//   XREF to: 0062fa66 (READ)
// 004fadd1: FSTP ST1
// 004fadd3: FSTP float ptr [ESI + 0x4]
// 004fadd6: ADD ESP,0xc
// 004fadd9: POP EBP
// 004fadda: POP EDI
// 004faddb: POP ESI
// 004faddc: POP EBX
// 004faddd: RET
// 004fadde: FLD float ptr [ESI + 0x4]
//   Label: LAB_004fadde
// 004fade1: FLD ST0
// 004fade3: FMUL double ptr [0x0062fa5e]
//   XREF to: 0062fa5e (READ)
// 004fade9: FSTP ST1
// 004fadeb: FSTP float ptr [ESI + 0x4]
// 004fadee: ADD ESP,0xc
// 004fadf1: POP EBP
// 004fadf2: POP EDI
// 004fadf3: POP ESI
// 004fadf4: POP EBX
// 004fadf5: RET

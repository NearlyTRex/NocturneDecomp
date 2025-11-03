// Name: core_cow.cpp_FUN_004448c0
// Address: 004448c0
// Address Range: [[004448c0, 00444b35]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_004448c0()
// Cross-references:
//   core_cow.cpp_FUN_00444b40 (00444b40) at 00444b4d [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004448b0 = 004448fd
//   TerminatedCString s_limb_wav_00619588
//   undefined4 DAT_00619595
//   undefined4 DAT_0061959d
//   undefined4 DAT_006195a5
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_cow.cpp_FUN_004448c0(undefined4 param_1, undefined4 param_2)
    */

void core_cow_cpp_FUN_004448c0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  float probability_threshold;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 4) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
      break;
    case 1:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x48);
      break;
    case 2:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c);
      break;
    case 3:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x50);
      break;
    default:
      goto switchD_004448f6_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_004448f6_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x48)) ||
       (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c))) ||
      (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x50))) ||
     ((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c) ||
      (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x44))))) {
    probability_threshold = (float)in_stack_00000008[0xb];
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
      if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x44)) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      if ((in_stack_00000004->model).part_visibility_flags
          [*(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c)] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      if ((in_stack_00000004->model).part_visibility_flags
          [*(int *)(in_stack_00000004[1].base_actor.create_event + 0x48)] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)_DAT_00619595);
    }
  }
  if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c) != *in_stack_00000008) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)_DAT_0061959d);
    return;
  }
  in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)_DAT_006195a5);
  return;
}


// Assembly code:
// 004448c0: PUSH EBX
//   Label: core_cow.cpp_FUN_004448c0
// 004448c1: PUSH ESI
// 004448c2: PUSH EDI
// 004448c3: PUSH EBP
// 004448c4: SUB ESP,0xc
// 004448c7: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004448cb: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004448cf: FLD float ptr [ESI + 0x2c]
// 004448d2: FLDZ
// 004448d4: FCOMPP
// 004448d6: FNSTSW AX
// 004448d8: SAHF
// 004448d9: JNC 0x00444905
//   XREF to: 00444905 (CONDITIONAL_JUMP)
// 004448db: CMP dword ptr [ESI],-0x1
// 004448de: JNZ 0x00444905
//   XREF to: 00444905 (CONDITIONAL_JUMP)
// 004448e0: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004448e5: MOV EDX,EAX
// 004448e7: MOV EDI,0x4
// 004448ec: SAR EDX,0x1f
// 004448ef: IDIV EDI
// 004448f1: CMP EDX,0x3
// 004448f4: JA 0x00444905
//   XREF to: 00444905 (CONDITIONAL_JUMP)
// 004448f6: JMP dword ptr [EDX*0x4 + 0x4448b0]
//   Label: switchD
//   XREF to: 004448fd (COMPUTED_JUMP)
//   XREF to: 00444ab3 (COMPUTED_JUMP)
//   XREF to: 00444abe (COMPUTED_JUMP)
//   XREF to: 00444ac9 (COMPUTED_JUMP)
//   XREF to: 004448b0 (DATA)
// 004448fd: MOV EAX,dword ptr [EBX + 0xbec8]
//   Label: caseD_0
// 00444903: MOV dword ptr [ESI],EAX
//   Label: LAB_00444903
// 00444905: MOV ECX,dword ptr [EBX + 0xbee4]
//   Label: default
// 0044490b: MOV EAX,dword ptr [ESI]
// 0044490d: CMP EAX,ECX
// 0044490f: JNZ 0x00444ad4
//   XREF to: 00444ad4 (CONDITIONAL_JUMP)
// 00444915: MOV EAX,dword ptr [ESI + 0x2c]
//   Label: LAB_00444915
// 00444918: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044491c: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00444921: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 00444928: JZ 0x00444932
//   XREF to: 00444932 (CONDITIONAL_JUMP)
// 0044492a: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 00444932: MOV EAX,[0x0067b654]
//   Label: LAB_00444932
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00444937: MOV EDX,dword ptr [EAX + 0x14]
//   XREF to: 02d81ab0 (READ)
// 0044493a: TEST EDX,EDX
// 0044493c: JNZ 0x00444942
//   XREF to: 00444942 (CONDITIONAL_JUMP)
// 0044493e: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00444942: PUSH dword ptr [ESP + 0x8]
//   Label: LAB_00444942
//   XREF to: Stack[-0x14] (READ)
// 00444946: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0044494b: ADD ESP,0x4
// 0044494e: TEST EAX,EAX
// 00444950: JZ 0x00444a8d
//   XREF to: 00444a8d (CONDITIONAL_JUMP)
// 00444956: PUSH 0x0
// 00444958: PUSH 0x0
// 0044495a: PUSH 0x0
// 0044495c: PUSH EBX
// 0044495d: LEA EDI,[ESI + 0xc]
// 00444960: PUSH EDI
// 00444961: LEA EAX,[EBX + 0x30]
// 00444964: PUSH EAX
// 00444965: LEA EAX,[EBX + 0x20]
// 00444968: PUSH EAX
// 00444969: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 0044496e: ADD ESP,0x1c
// 00444971: PUSH 0x0
// 00444973: MOV EDX,dword ptr [ESI]
// 00444975: PUSH EDX
// 00444976: PUSH EAX
// 00444977: PUSH EBX
// 00444978: MOV EBP,EAX
// 0044497a: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 0044497f: MOV EAX,dword ptr [ESI]
// 00444981: MOV ECX,dword ptr [EBX + 0xbee0]
// 00444987: ADD ESP,0x10
// 0044498a: CMP EAX,ECX
// 0044498c: JNZ 0x00444a3d
//   XREF to: 00444a3d (CONDITIONAL_JUMP)
// 00444992: PUSH 0x0
// 00444994: PUSH EDI
// 00444995: MOV EAX,dword ptr [EBX + 0xbec8]
// 0044499b: PUSH EAX
// 0044499c: PUSH EBX
// 0044499d: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004449a2: ADD ESP,0x10
// 004449a5: PUSH 0x0
// 004449a7: PUSH EDI
// 004449a8: MOV EDX,dword ptr [EBX + 0xbecc]
// 004449ae: PUSH EDX
// 004449af: PUSH EBX
// 004449b0: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004449b5: ADD ESP,0x10
// 004449b8: PUSH 0x0
// 004449ba: PUSH EDI
// 004449bb: MOV ECX,dword ptr [EBX + 0xbed0]
// 004449c1: PUSH ECX
// 004449c2: PUSH EBX
// 004449c3: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004449c8: ADD ESP,0x10
// 004449cb: PUSH 0x0
// 004449cd: PUSH EDI
// 004449ce: MOV EAX,dword ptr [EBX + 0xbed4]
// 004449d4: PUSH EAX
// 004449d5: PUSH EBX
// 004449d6: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004449db: ADD ESP,0x10
// 004449de: PUSH 0x0
// 004449e0: PUSH EDI
// 004449e1: MOV EDX,dword ptr [EBX + 0xbed8]
// 004449e7: PUSH EDX
// 004449e8: PUSH EBX
// 004449e9: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004449ee: ADD ESP,0x10
// 004449f1: PUSH 0x0
// 004449f3: PUSH EDI
// 004449f4: MOV ECX,dword ptr [EBX + 0xbedc]
// 004449fa: PUSH ECX
// 004449fb: PUSH EBX
// 004449fc: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00444a01: ADD ESP,0x10
// 00444a04: PUSH 0x0
// 00444a06: PUSH EDI
// 00444a07: MOV EAX,dword ptr [EBX + 0xbee4]
// 00444a0d: PUSH EAX
// 00444a0e: PUSH EBX
// 00444a0f: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00444a14: ADD ESP,0x10
// 00444a17: PUSH 0x0
// 00444a19: PUSH EDI
// 00444a1a: MOV EDX,dword ptr [EBX + 0xbee8]
// 00444a20: PUSH EDX
// 00444a21: PUSH EBX
// 00444a22: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00444a27: ADD ESP,0x10
// 00444a2a: PUSH 0x0
// 00444a2c: PUSH EDI
// 00444a2d: MOV ECX,dword ptr [EBX + 0xbeec]
// 00444a33: PUSH ECX
// 00444a34: PUSH EBX
// 00444a35: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00444a3a: ADD ESP,0x10
// 00444a3d: PUSH 0x619588
//   Label: LAB_00444a3d
//   XREF to: 00619588 (DATA)
// 00444a42: PUSH EBX
// 00444a43: CALL core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: 0042f300 (UNCONDITIONAL_CALL)
// 00444a48: ADD ESP,0x8
// 00444a4b: PUSH EBP
// 00444a4c: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 00444a51: MOV EAX,dword ptr [EBX + 0xbec8]
// 00444a57: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 00444a5e: ADD ESP,0x4
// 00444a61: TEST EDI,EDI
// 00444a63: JZ 0x00444b06
//   XREF to: 00444b06 (CONDITIONAL_JUMP)
// 00444a69: MOV EAX,dword ptr [EBX + 0xbee4]
//   Label: LAB_00444a69
// 00444a6f: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 00444a77: JZ 0x00444b12
//   XREF to: 00444b12 (CONDITIONAL_JUMP)
// 00444a7d: FLD float ptr [ESI + 0x8]
//   Label: LAB_00444a7d
// 00444a80: FLD ST0
// 00444a82: FMUL double ptr [0x00619595]
//   XREF to: 00619595 (READ)
// 00444a88: FSTP ST1
// 00444a8a: FSTP float ptr [ESI + 0x8]
// 00444a8d: MOV EDX,dword ptr [EBX + 0xbec8]
//   Label: LAB_00444a8d
// 00444a93: CMP EDX,dword ptr [ESI]
// 00444a95: JNZ 0x00444b1e
//   XREF to: 00444b1e (CONDITIONAL_JUMP)
// 00444a9b: FLD float ptr [ESI + 0x4]
// 00444a9e: FLD ST0
// 00444aa0: FMUL double ptr [0x006195a5]
//   XREF to: 006195a5 (READ)
// 00444aa6: FSTP ST1
// 00444aa8: FSTP float ptr [ESI + 0x4]
// 00444aab: ADD ESP,0xc
// 00444aae: POP EBP
// 00444aaf: POP EDI
// 00444ab0: POP ESI
// 00444ab1: POP EBX
// 00444ab2: RET
// 00444ab3: MOV EAX,dword ptr [EBX + 0xbee4]
//   Label: caseD_1
// 00444ab9: JMP 0x00444903
//   XREF to: 00444903 (UNCONDITIONAL_JUMP)
// 00444abe: MOV EAX,dword ptr [EBX + 0xbee8]
//   Label: caseD_2
// 00444ac4: JMP 0x00444903
//   XREF to: 00444903 (UNCONDITIONAL_JUMP)
// 00444ac9: MOV EAX,dword ptr [EBX + 0xbeec]
//   Label: caseD_3
// 00444acf: JMP 0x00444903
//   XREF to: 00444903 (UNCONDITIONAL_JUMP)
// 00444ad4: CMP EAX,dword ptr [EBX + 0xbee8]
//   Label: LAB_00444ad4
// 00444ada: JZ 0x00444915
//   XREF to: 00444915 (CONDITIONAL_JUMP)
// 00444ae0: CMP EAX,dword ptr [EBX + 0xbeec]
// 00444ae6: JZ 0x00444915
//   XREF to: 00444915 (CONDITIONAL_JUMP)
// 00444aec: CMP EAX,dword ptr [EBX + 0xbec8]
// 00444af2: JZ 0x00444915
//   XREF to: 00444915 (CONDITIONAL_JUMP)
// 00444af8: CMP EAX,dword ptr [EBX + 0xbee0]
// 00444afe: JZ 0x00444915
//   XREF to: 00444915 (CONDITIONAL_JUMP)
// 00444b04: JMP 0x00444a8d
//   XREF to: 00444a8d (UNCONDITIONAL_JUMP)
// 00444b06: MOV dword ptr [ESI + 0x4],0x461c3c00
//   Label: LAB_00444b06
// 00444b0d: JMP 0x00444a69
//   XREF to: 00444a69 (UNCONDITIONAL_JUMP)
// 00444b12: MOV dword ptr [ESI + 0x4],0x461c3c00
//   Label: LAB_00444b12
// 00444b19: JMP 0x00444a7d
//   XREF to: 00444a7d (UNCONDITIONAL_JUMP)
// 00444b1e: FLD float ptr [ESI + 0x4]
//   Label: LAB_00444b1e
// 00444b21: FLD ST0
// 00444b23: FMUL double ptr [0x0061959d]
//   XREF to: 0061959d (READ)
// 00444b29: FSTP ST1
// 00444b2b: FSTP float ptr [ESI + 0x4]
// 00444b2e: ADD ESP,0xc
// 00444b31: POP EBP
// 00444b32: POP EDI
// 00444b33: POP ESI
// 00444b34: POP EBX
// 00444b35: RET

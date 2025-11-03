// Name: core_ghoul.cpp_FUN_004e8520
// Address: 004e8520
// Address Range: [[004e8520, 004e87d1]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e8520()
// Cross-references:
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e881e [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004e8504 = 004e855d
//   TerminatedCString s_limb_wav_0062de5e
//   double DOUBLE_0062de6a = 7
//   double DOUBLE_0062de72 = 0.5
//   double DOUBLE_0062de7a = 2.5
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

/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e8520(undefined4 param_1, undefined4 param_2)
    */

void core_ghoul_cpp_FUN_004e8520(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  float *in_stack_00000008;
  float fVar2;
  
  if ((0.0 < in_stack_00000008[0xb]) && (*in_stack_00000008 == -NAN)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 6) {
    case 0:
      fVar2 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x44);
      break;
    case 1:
      fVar2 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x48);
      break;
    case 2:
      fVar2 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x4c);
      break;
    case 3:
      fVar2 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x50);
      break;
    case 4:
      fVar2 = in_stack_00000004[1].base_actor.field12_0xe0.y;
      break;
    case 5:
      fVar2 = in_stack_00000004[1].base_actor.field12_0xe0.x;
      break;
    default:
      goto switchD_004e8556_default;
    }
    *in_stack_00000008 = fVar2;
  }
switchD_004e8556_default:
  fVar2 = *in_stack_00000008;
  if (((((fVar2 == *(float *)(in_stack_00000004[1].base_actor.create_event + 0x44)) ||
        (fVar2 == *(float *)(in_stack_00000004[1].base_actor.create_event + 0x48))) ||
       (fVar2 == *(float *)(in_stack_00000004[1].base_actor.create_event + 0x4c))) ||
      ((fVar2 == *(float *)(in_stack_00000004[1].base_actor.create_event + 0x50) ||
       (fVar2 == in_stack_00000004[1].base_actor.field12_0xe0.x)))) ||
     (fVar2 == in_stack_00000004[1].base_actor.field12_0xe0.y)) {
    fVar2 = in_stack_00000008[0xb];
    if (in_stack_00000004[1].base_actor.field12_0xe0.y == *in_stack_00000008) {
      fVar2 = 0.05;
    }
    if (in_stack_00000004[1].base_actor.field12_0xe0.x == *in_stack_00000008) {
      fVar2 = 0.02;
    }
    if (g_CGamePtr->field57_0x1e0 != 0) {
      fVar2 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      fVar2 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(fVar2);
    if (iVar1 != 0) {
      core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      if (*in_stack_00000008 == *(float *)(in_stack_00000004[1].base_actor.create_event + 0x44)) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (*(float *)(in_stack_00000004[1].base_actor.create_event + 0x4c) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (in_stack_00000004[1].base_actor.field12_0xe0.x == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      if ((in_stack_00000004->model).part_visibility_flags
          [(int)in_stack_00000004[1].base_actor.field12_0xe0.y] == 0) {
        in_stack_00000008[1] = 9999.0;
      }
      in_stack_00000008[2] = in_stack_00000008[2] * (float)DOUBLE_0062de6a;
    }
  }
  fVar2 = *in_stack_00000008;
  if (fVar2 == in_stack_00000004[1].base_actor.field12_0xe0.y) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)DOUBLE_0062de7a;
    return;
  }
  if ((fVar2 != (float)in_stack_00000004[1].base_actor.field11_0xdc) &&
     (fVar2 != in_stack_00000004[1].base_actor.field12_0xe0.x)) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)DOUBLE_0062de72;
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}


// Assembly code:
// 004e8520: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e8520
// 004e8521: PUSH ESI
// 004e8522: PUSH EDI
// 004e8523: PUSH EBP
// 004e8524: SUB ESP,0xc
// 004e8527: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004e852b: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004e852f: FLD float ptr [ESI + 0x2c]
// 004e8532: FLDZ
// 004e8534: FCOMPP
// 004e8536: FNSTSW AX
// 004e8538: SAHF
// 004e8539: JNC 0x004e8565
//   XREF to: 004e8565 (CONDITIONAL_JUMP)
// 004e853b: CMP dword ptr [ESI],-0x1
// 004e853e: JNZ 0x004e8565
//   XREF to: 004e8565 (CONDITIONAL_JUMP)
// 004e8540: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004e8545: MOV EDX,EAX
// 004e8547: MOV EDI,0x6
// 004e854c: SAR EDX,0x1f
// 004e854f: IDIV EDI
// 004e8551: CMP EDX,0x5
// 004e8554: JA 0x004e8565
//   XREF to: 004e8565 (CONDITIONAL_JUMP)
// 004e8556: JMP dword ptr [EDX*0x4 + 0x4e8504]
//   Label: switchD
//   XREF to: 004e855d (COMPUTED_JUMP)
//   XREF to: 004e871e (COMPUTED_JUMP)
//   XREF to: 004e8729 (COMPUTED_JUMP)
//   XREF to: 004e8734 (COMPUTED_JUMP)
//   XREF to: 004e873f (COMPUTED_JUMP)
//   XREF to: 004e874a (COMPUTED_JUMP)
//   XREF to: 004e8504 (DATA)
// 004e855d: MOV EAX,dword ptr [EBX + 0xbee0]
//   Label: caseD_0
// 004e8563: MOV dword ptr [ESI],EAX
//   Label: LAB_004e8563
// 004e8565: MOV ECX,dword ptr [EBX + 0xbee0]
//   Label: default
// 004e856b: MOV EAX,dword ptr [ESI]
// 004e856d: CMP EAX,ECX
// 004e856f: JNZ 0x004e8755
//   XREF to: 004e8755 (CONDITIONAL_JUMP)
// 004e8575: MOV EAX,dword ptr [ESI + 0x2c]
//   Label: LAB_004e8575
// 004e8578: MOV EBP,dword ptr [EBX + 0xbf08]
// 004e857e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e8582: CMP EBP,dword ptr [ESI]
// 004e8584: JNZ 0x004e858e
//   XREF to: 004e858e (CONDITIONAL_JUMP)
// 004e8586: MOV dword ptr [ESP + 0x8],0x3d4ccccd
//   XREF to: Stack[-0x14] (WRITE)
// 004e858e: MOV EDX,dword ptr [EBX + 0xbf04]
//   Label: LAB_004e858e
// 004e8594: CMP EDX,dword ptr [ESI]
// 004e8596: JNZ 0x004e85a0
//   XREF to: 004e85a0 (CONDITIONAL_JUMP)
// 004e8598: MOV dword ptr [ESP + 0x8],0x3ca3d70a
//   XREF to: Stack[-0x14] (WRITE)
// 004e85a0: MOV EAX,[0x0067b654]
//   Label: LAB_004e85a0
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e85a5: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 004e85ac: JZ 0x004e85b6
//   XREF to: 004e85b6 (CONDITIONAL_JUMP)
// 004e85ae: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 004e85b6: MOV EAX,[0x0067b654]
//   Label: LAB_004e85b6
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e85bb: MOV EDX,dword ptr [EAX + 0x14]
//   XREF to: 02d81ab0 (READ)
// 004e85be: TEST EDX,EDX
// 004e85c0: JNZ 0x004e85c6
//   XREF to: 004e85c6 (CONDITIONAL_JUMP)
// 004e85c2: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004e85c6: PUSH dword ptr [ESP + 0x8]
//   Label: LAB_004e85c6
//   XREF to: Stack[-0x14] (READ)
// 004e85ca: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004e85cf: ADD ESP,0x4
// 004e85d2: TEST EAX,EAX
// 004e85d4: JZ 0x004e86ec
//   XREF to: 004e86ec (CONDITIONAL_JUMP)
// 004e85da: PUSH 0x0
// 004e85dc: PUSH 0x0
// 004e85de: PUSH 0x0
// 004e85e0: PUSH EBX
// 004e85e1: LEA EAX,[ESI + 0xc]
// 004e85e4: PUSH EAX
// 004e85e5: LEA EAX,[EBX + 0x30]
// 004e85e8: PUSH EAX
// 004e85e9: LEA EAX,[EBX + 0x20]
// 004e85ec: PUSH EAX
// 004e85ed: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 004e85f2: ADD ESP,0x1c
// 004e85f5: MOV EDI,EAX
// 004e85f7: PUSH 0x0
// 004e85f9: MOV EBP,EAX
// 004e85fb: MOV EAX,dword ptr [ESI]
// 004e85fd: PUSH EAX
// 004e85fe: PUSH EDI
// 004e85ff: PUSH EBX
// 004e8600: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004e8605: MOV EAX,dword ptr [ESI]
// 004e8607: MOV EDX,dword ptr [EBX + 0xbee0]
// 004e860d: ADD ESP,0x10
// 004e8610: CMP EAX,EDX
// 004e8612: JNZ 0x004e8627
//   XREF to: 004e8627 (CONDITIONAL_JUMP)
// 004e8614: PUSH 0x0
// 004e8616: MOV ECX,dword ptr [EBX + 0xbee4]
// 004e861c: PUSH ECX
// 004e861d: PUSH EDI
// 004e861e: PUSH EBX
// 004e861f: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004e8624: ADD ESP,0x10
// 004e8627: MOV EDI,dword ptr [EBX + 0xbee8]
//   Label: LAB_004e8627
// 004e862d: CMP EDI,dword ptr [ESI]
// 004e862f: JNZ 0x004e8644
//   XREF to: 004e8644 (CONDITIONAL_JUMP)
// 004e8631: PUSH 0x0
// 004e8633: MOV EAX,dword ptr [EBX + 0xbeec]
// 004e8639: PUSH EAX
// 004e863a: PUSH EBP
// 004e863b: PUSH EBX
// 004e863c: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004e8641: ADD ESP,0x10
// 004e8644: MOV EDX,dword ptr [EBX + 0xbf04]
//   Label: LAB_004e8644
// 004e864a: CMP EDX,dword ptr [ESI]
// 004e864c: JNZ 0x004e86b0
//   XREF to: 004e86b0 (CONDITIONAL_JUMP)
// 004e864e: PUSH 0x0
// 004e8650: LEA EDI,[ESI + 0xc]
// 004e8653: PUSH EDI
// 004e8654: MOV ECX,dword ptr [EBX + 0xbee8]
// 004e865a: PUSH ECX
// 004e865b: PUSH EBX
// 004e865c: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e8661: ADD ESP,0x10
// 004e8664: PUSH 0x0
// 004e8666: PUSH EDI
// 004e8667: MOV EAX,dword ptr [EBX + 0xbeec]
// 004e866d: PUSH EAX
// 004e866e: PUSH EBX
// 004e866f: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e8674: ADD ESP,0x10
// 004e8677: PUSH 0x0
// 004e8679: PUSH EDI
// 004e867a: MOV EDX,dword ptr [EBX + 0xbee0]
// 004e8680: PUSH EDX
// 004e8681: PUSH EBX
// 004e8682: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e8687: ADD ESP,0x10
// 004e868a: PUSH 0x0
// 004e868c: PUSH EDI
// 004e868d: MOV ECX,dword ptr [EBX + 0xbee4]
// 004e8693: PUSH ECX
// 004e8694: PUSH EBX
// 004e8695: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e869a: ADD ESP,0x10
// 004e869d: PUSH 0x0
// 004e869f: PUSH EDI
// 004e86a0: MOV EDI,dword ptr [EBX + 0xbf08]
// 004e86a6: PUSH EDI
// 004e86a7: PUSH EBX
// 004e86a8: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e86ad: ADD ESP,0x10
// 004e86b0: PUSH 0x62de5e
//   Label: LAB_004e86b0
//   XREF to: 0062de5e (DATA)
// 004e86b5: PUSH EBX
// 004e86b6: CALL core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: 0042f300 (UNCONDITIONAL_CALL)
// 004e86bb: ADD ESP,0x8
// 004e86be: PUSH EBP
// 004e86bf: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 004e86c4: MOV EAX,dword ptr [EBX + 0xbf08]
// 004e86ca: MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e86d1: ADD ESP,0x4
// 004e86d4: TEST EBP,EBP
// 004e86d6: JZ 0x004e8796
//   XREF to: 004e8796 (CONDITIONAL_JUMP)
// 004e86dc: FLD float ptr [ESI + 0x8]
//   Label: LAB_004e86dc
// 004e86df: FLD ST0
// 004e86e1: FMUL double ptr [0x0062de6a]
//   XREF to: 0062de6a (READ)
// 004e86e7: FSTP ST1
// 004e86e9: FSTP float ptr [ESI + 0x8]
// 004e86ec: MOV EDX,dword ptr [EBX + 0xbf08]
//   Label: LAB_004e86ec
// 004e86f2: MOV EAX,dword ptr [ESI]
// 004e86f4: CMP EAX,EDX
// 004e86f6: JZ 0x004e87a2
//   XREF to: 004e87a2 (CONDITIONAL_JUMP)
// 004e86fc: CMP EAX,dword ptr [EBX + 0xbf00]
// 004e8702: JZ 0x004e8710
//   XREF to: 004e8710 (CONDITIONAL_JUMP)
// 004e8704: CMP EAX,dword ptr [EBX + 0xbf04]
// 004e870a: JNZ 0x004e87ba
//   XREF to: 004e87ba (CONDITIONAL_JUMP)
// 004e8710: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_004e8710
// 004e8713: MOV dword ptr [ESI + 0x4],EAX
// 004e8716: ADD ESP,0xc
// 004e8719: POP EBP
// 004e871a: POP EDI
// 004e871b: POP ESI
// 004e871c: POP EBX
// 004e871d: RET
// 004e871e: MOV EAX,dword ptr [EBX + 0xbee4]
//   Label: caseD_1
// 004e8724: JMP 0x004e8563
//   XREF to: 004e8563 (UNCONDITIONAL_JUMP)
// 004e8729: MOV EAX,dword ptr [EBX + 0xbee8]
//   Label: caseD_2
// 004e872f: JMP 0x004e8563
//   XREF to: 004e8563 (UNCONDITIONAL_JUMP)
// 004e8734: MOV EAX,dword ptr [EBX + 0xbeec]
//   Label: caseD_3
// 004e873a: JMP 0x004e8563
//   XREF to: 004e8563 (UNCONDITIONAL_JUMP)
// 004e873f: MOV EAX,dword ptr [EBX + 0xbf08]
//   Label: caseD_4
// 004e8745: JMP 0x004e8563
//   XREF to: 004e8563 (UNCONDITIONAL_JUMP)
// 004e874a: MOV EAX,dword ptr [EBX + 0xbf04]
//   Label: caseD_5
// 004e8750: JMP 0x004e8563
//   XREF to: 004e8563 (UNCONDITIONAL_JUMP)
// 004e8755: CMP EAX,dword ptr [EBX + 0xbee4]
//   Label: LAB_004e8755
// 004e875b: JZ 0x004e8575
//   XREF to: 004e8575 (CONDITIONAL_JUMP)
// 004e8761: CMP EAX,dword ptr [EBX + 0xbee8]
// 004e8767: JZ 0x004e8575
//   XREF to: 004e8575 (CONDITIONAL_JUMP)
// 004e876d: CMP EAX,dword ptr [EBX + 0xbeec]
// 004e8773: JZ 0x004e8575
//   XREF to: 004e8575 (CONDITIONAL_JUMP)
// 004e8779: CMP EAX,dword ptr [EBX + 0xbf04]
// 004e877f: JZ 0x004e8575
//   XREF to: 004e8575 (CONDITIONAL_JUMP)
// 004e8785: CMP EAX,dword ptr [EBX + 0xbf08]
// 004e878b: JZ 0x004e8575
//   XREF to: 004e8575 (CONDITIONAL_JUMP)
// 004e8791: JMP 0x004e86ec
//   XREF to: 004e86ec (UNCONDITIONAL_JUMP)
// 004e8796: MOV dword ptr [ESI + 0x4],0x461c3c00
//   Label: LAB_004e8796
// 004e879d: JMP 0x004e86dc
//   XREF to: 004e86dc (UNCONDITIONAL_JUMP)
// 004e87a2: FLD float ptr [ESI + 0x4]
//   Label: LAB_004e87a2
// 004e87a5: FLD ST0
// 004e87a7: FMUL double ptr [0x0062de7a]
//   XREF to: 0062de7a (READ)
// 004e87ad: FSTP ST1
// 004e87af: FSTP float ptr [ESI + 0x4]
// 004e87b2: ADD ESP,0xc
// 004e87b5: POP EBP
// 004e87b6: POP EDI
// 004e87b7: POP ESI
// 004e87b8: POP EBX
// 004e87b9: RET
// 004e87ba: FLD float ptr [ESI + 0x4]
//   Label: LAB_004e87ba
// 004e87bd: FLD ST0
// 004e87bf: FMUL double ptr [0x0062de72]
//   XREF to: 0062de72 (READ)
// 004e87c5: FSTP ST1
// 004e87c7: FSTP float ptr [ESI + 0x4]
// 004e87ca: ADD ESP,0xc
// 004e87cd: POP EBP
// 004e87ce: POP EDI
// 004e87cf: POP ESI
// 004e87d0: POP EBX
// 004e87d1: RET

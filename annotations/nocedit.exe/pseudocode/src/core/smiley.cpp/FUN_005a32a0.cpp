// Name: core_smiley.cpp_FUN_005a32a0
// Address: 005a32a0
// Address Range: [[005a32a0, 005a357f]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a32a0()
// Cross-references:
//   core_smiley.cpp_FUN_005a3580 (005a3580) at 005a35c2 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005a3284 = 005a3330
//   TerminatedCString s_limb_wav_0064f351
//   undefined4 DAT_0064f362
//   undefined4 DAT_0064f36a
//   undefined4 DAT_0064f372
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
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
/* Signature: undefined1 actors_enemy_smiley.cpp_FUN_005a32a0(undefined4 param_1, undefined4
   param_2) */

void core_smiley_cpp_FUN_005a32a0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  float probability_threshold;
  
  if (in_stack_00000008[0xc] < 0xc) {
    return;
  }
  if ((in_stack_00000008[0xc] == 0x6b) &&
     (*(float *)(in_stack_00000004[1].base_actor.create_event + 0x5c) <= 0.0)) {
    iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x58) + 1;
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x5c) =
         *(float *)(in_stack_00000004[1].base_actor.create_event + 0x5c) + 1.0;
    *(int *)(in_stack_00000004[1].base_actor.create_event + 0x58) = iVar1;
    if (2 < iVar1) {
      in_stack_00000008[0xb] = 0x3f800000;
      if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
        iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
        switch(iVar1 % 6) {
        case 0:
          iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28);
          break;
        case 1:
          iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
          break;
        case 2:
          iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30);
          break;
        case 3:
          iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x34);
          break;
        case 4:
          iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x50);
          break;
        case 5:
          iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c);
          break;
        default:
          goto switchD_005a3329_default;
        }
        *in_stack_00000008 = iVar1;
      }
switchD_005a3329_default:
      iVar1 = *in_stack_00000008;
      if (((((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28)) ||
            (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c))) ||
           (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30))) ||
          ((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x34) ||
           (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c))))) ||
         (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x50))) {
        probability_threshold = (float)in_stack_00000008[0xb];
        if (g_CGamePtr->field57_0x1e0 != 0) {
          probability_threshold = 1.0;
        }
        iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(probability_threshold);
        if (iVar1 != 0) {
          core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
          core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
          if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28)) {
            core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
          }
          if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x30) == *in_stack_00000008) {
            core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
          }
          if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c) == *in_stack_00000008) {
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
          }
          core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
          core_bodypart_cpp_FUN_0041a050();
          if ((in_stack_00000004->model).part_visibility_flags
              [*(int *)(in_stack_00000004[1].base_actor.create_event + 0x50)] == 0) {
            in_stack_00000008[1] = 0x461c3c00;
          }
          in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)_DAT_0064f362);
        }
      }
      iVar1 = *in_stack_00000008;
      if (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x50)) {
        if ((iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x48)) &&
           (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c))) {
          in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)_DAT_0064f36a);
          return;
        }
        in_stack_00000008[1] = in_stack_00000008[1];
        return;
      }
      in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)_DAT_0064f372);
      return;
    }
  }
  in_stack_00000008[1] = 0;
  return;
}


// Assembly code:
// 005a32a0: PUSH EBX
//   Label: core_smiley.cpp_FUN_005a32a0
// 005a32a1: PUSH ESI
// 005a32a2: PUSH EDI
// 005a32a3: PUSH EBP
// 005a32a4: SUB ESP,0xc
// 005a32a7: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005a32ab: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005a32af: MOV EDX,dword ptr [ESI + 0x30]
// 005a32b2: CMP EDX,0xb
// 005a32b5: JLE 0x005a34b5
//   XREF to: 005a34b5 (CONDITIONAL_JUMP)
// 005a32bb: CMP EDX,0x6b
// 005a32be: JNZ 0x005a34bd
//   XREF to: 005a34bd (CONDITIONAL_JUMP)
// 005a32c4: FLD float ptr [EBX + 0xbef8]
// 005a32ca: FLDZ
// 005a32cc: FCOMPP
// 005a32ce: FNSTSW AX
// 005a32d0: SAHF
// 005a32d1: JC 0x005a34bd
//   XREF to: 005a34bd (CONDITIONAL_JUMP)
// 005a32d7: FLD1
// 005a32d9: MOV EDI,dword ptr [EBX + 0xbef4]
// 005a32df: FADD float ptr [EBX + 0xbef8]
// 005a32e5: INC EDI
// 005a32e6: FSTP float ptr [EBX + 0xbef8]
// 005a32ec: MOV dword ptr [EBX + 0xbef4],EDI
// 005a32f2: CMP EDI,0x3
// 005a32f5: JL 0x005a34bd
//   XREF to: 005a34bd (CONDITIONAL_JUMP)
// 005a32fb: MOV dword ptr [ESI + 0x2c],0x3f800000
// 005a3302: FLD float ptr [ESI + 0x2c]
// 005a3305: FLDZ
// 005a3307: FCOMPP
// 005a3309: FNSTSW AX
// 005a330b: SAHF
// 005a330c: JNC 0x005a3338
//   XREF to: 005a3338 (CONDITIONAL_JUMP)
// 005a330e: CMP dword ptr [ESI],-0x1
// 005a3311: JNZ 0x005a3338
//   XREF to: 005a3338 (CONDITIONAL_JUMP)
// 005a3313: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005a3318: MOV EDX,EAX
// 005a331a: MOV EDI,0x6
// 005a331f: SAR EDX,0x1f
// 005a3322: IDIV EDI
// 005a3324: CMP EDX,0x5
// 005a3327: JA 0x005a3338
//   XREF to: 005a3338 (CONDITIONAL_JUMP)
// 005a3329: JMP dword ptr [EDX*0x4 + 0x5a3284]
//   Label: switchD
//   XREF to: 005a3330 (COMPUTED_JUMP)
//   XREF to: 005a34cc (COMPUTED_JUMP)
//   XREF to: 005a34d7 (COMPUTED_JUMP)
//   XREF to: 005a34e2 (COMPUTED_JUMP)
//   XREF to: 005a34ed (COMPUTED_JUMP)
//   XREF to: 005a34f8 (COMPUTED_JUMP)
//   XREF to: 005a3284 (DATA)
// 005a3330: MOV EAX,dword ptr [EBX + 0xbec4]
//   Label: caseD_0
// 005a3336: MOV dword ptr [ESI],EAX
//   Label: LAB_005a3336
// 005a3338: MOV EDX,dword ptr [EBX + 0xbec4]
//   Label: default
// 005a333e: MOV EAX,dword ptr [ESI]
// 005a3340: CMP EAX,EDX
// 005a3342: JNZ 0x005a3503
//   XREF to: 005a3503 (CONDITIONAL_JUMP)
// 005a3348: MOV EAX,dword ptr [ESI + 0x2c]
//   Label: LAB_005a3348
// 005a334b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a334f: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005a3354: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 005a335b: JZ 0x005a3365
//   XREF to: 005a3365 (CONDITIONAL_JUMP)
// 005a335d: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 005a3365: PUSH dword ptr [ESP + 0x8]
//   Label: LAB_005a3365
//   XREF to: Stack[-0x14] (READ)
// 005a3369: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005a336e: ADD ESP,0x4
// 005a3371: TEST EAX,EAX
// 005a3373: JZ 0x005a348b
//   XREF to: 005a348b (CONDITIONAL_JUMP)
// 005a3379: PUSH 0x0
// 005a337b: PUSH 0x0
// 005a337d: PUSH 0x0
// 005a337f: PUSH EBX
// 005a3380: LEA EAX,[ESI + 0xc]
// 005a3383: PUSH EAX
// 005a3384: LEA EAX,[EBX + 0x30]
// 005a3387: PUSH EAX
// 005a3388: LEA EAX,[EBX + 0x20]
// 005a338b: PUSH EAX
// 005a338c: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 005a3391: ADD ESP,0x1c
// 005a3394: MOV EDI,EAX
// 005a3396: PUSH 0x0
// 005a3398: MOV EBP,EAX
// 005a339a: MOV EAX,dword ptr [ESI]
// 005a339c: PUSH EAX
// 005a339d: PUSH EDI
// 005a339e: PUSH EBX
// 005a339f: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 005a33a4: MOV EAX,dword ptr [ESI]
// 005a33a6: MOV EDX,dword ptr [EBX + 0xbec4]
// 005a33ac: ADD ESP,0x10
// 005a33af: CMP EAX,EDX
// 005a33b1: JNZ 0x005a33c6
//   XREF to: 005a33c6 (CONDITIONAL_JUMP)
// 005a33b3: PUSH 0x0
// 005a33b5: MOV ECX,dword ptr [EBX + 0xbec8]
// 005a33bb: PUSH ECX
// 005a33bc: PUSH EDI
// 005a33bd: PUSH EBX
// 005a33be: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 005a33c3: ADD ESP,0x10
// 005a33c6: MOV EDI,dword ptr [EBX + 0xbecc]
//   Label: LAB_005a33c6
// 005a33cc: CMP EDI,dword ptr [ESI]
// 005a33ce: JNZ 0x005a33e3
//   XREF to: 005a33e3 (CONDITIONAL_JUMP)
// 005a33d0: PUSH 0x0
// 005a33d2: MOV EAX,dword ptr [EBX + 0xbed0]
// 005a33d8: PUSH EAX
// 005a33d9: PUSH EBP
// 005a33da: PUSH EBX
// 005a33db: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 005a33e0: ADD ESP,0x10
// 005a33e3: MOV EDX,dword ptr [EBX + 0xbee8]
//   Label: LAB_005a33e3
// 005a33e9: CMP EDX,dword ptr [ESI]
// 005a33eb: JNZ 0x005a344f
//   XREF to: 005a344f (CONDITIONAL_JUMP)
// 005a33ed: PUSH 0x0
// 005a33ef: LEA EDI,[ESI + 0xc]
// 005a33f2: PUSH EDI
// 005a33f3: MOV ECX,dword ptr [EBX + 0xbecc]
// 005a33f9: PUSH ECX
// 005a33fa: PUSH EBX
// 005a33fb: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005a3400: ADD ESP,0x10
// 005a3403: PUSH 0x0
// 005a3405: PUSH EDI
// 005a3406: MOV EAX,dword ptr [EBX + 0xbed0]
// 005a340c: PUSH EAX
// 005a340d: PUSH EBX
// 005a340e: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005a3413: ADD ESP,0x10
// 005a3416: PUSH 0x0
// 005a3418: PUSH EDI
// 005a3419: MOV EDX,dword ptr [EBX + 0xbec4]
// 005a341f: PUSH EDX
// 005a3420: PUSH EBX
// 005a3421: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005a3426: ADD ESP,0x10
// 005a3429: PUSH 0x0
// 005a342b: PUSH EDI
// 005a342c: MOV ECX,dword ptr [EBX + 0xbec8]
// 005a3432: PUSH ECX
// 005a3433: PUSH EBX
// 005a3434: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005a3439: ADD ESP,0x10
// 005a343c: PUSH 0x0
// 005a343e: PUSH EDI
// 005a343f: MOV EDI,dword ptr [EBX + 0xbeec]
// 005a3445: PUSH EDI
// 005a3446: PUSH EBX
// 005a3447: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005a344c: ADD ESP,0x10
// 005a344f: PUSH 0x64f351
//   Label: LAB_005a344f
//   XREF to: 0064f351 (DATA)
// 005a3454: PUSH EBX
// 005a3455: CALL core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: 0042f300 (UNCONDITIONAL_CALL)
// 005a345a: ADD ESP,0x8
// 005a345d: PUSH EBP
// 005a345e: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 005a3463: MOV EAX,dword ptr [EBX + 0xbeec]
// 005a3469: MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298]
// 005a3470: ADD ESP,0x4
// 005a3473: TEST EBP,EBP
// 005a3475: JZ 0x005a3544
//   XREF to: 005a3544 (CONDITIONAL_JUMP)
// 005a347b: FLD float ptr [ESI + 0x8]
//   Label: LAB_005a347b
// 005a347e: FLD ST0
// 005a3480: FMUL double ptr [0x0064f362]
//   XREF to: 0064f362 (READ)
// 005a3486: FSTP ST1
// 005a3488: FSTP float ptr [ESI + 0x8]
// 005a348b: MOV EDX,dword ptr [EBX + 0xbeec]
//   Label: LAB_005a348b
// 005a3491: MOV EAX,dword ptr [ESI]
// 005a3493: CMP EAX,EDX
// 005a3495: JZ 0x005a3550
//   XREF to: 005a3550 (CONDITIONAL_JUMP)
// 005a349b: CMP EAX,dword ptr [EBX + 0xbee4]
// 005a34a1: JZ 0x005a34af
//   XREF to: 005a34af (CONDITIONAL_JUMP)
// 005a34a3: CMP EAX,dword ptr [EBX + 0xbee8]
// 005a34a9: JNZ 0x005a3568
//   XREF to: 005a3568 (CONDITIONAL_JUMP)
// 005a34af: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_005a34af
// 005a34b2: MOV dword ptr [ESI + 0x4],EAX
// 005a34b5: ADD ESP,0xc
//   Label: LAB_005a34b5
// 005a34b8: POP EBP
// 005a34b9: POP EDI
// 005a34ba: POP ESI
// 005a34bb: POP EBX
// 005a34bc: RET
// 005a34bd: MOV dword ptr [ESI + 0x4],0x0
//   Label: LAB_005a34bd
// 005a34c4: ADD ESP,0xc
// 005a34c7: POP EBP
// 005a34c8: POP EDI
// 005a34c9: POP ESI
// 005a34ca: POP EBX
// 005a34cb: RET
// 005a34cc: MOV EAX,dword ptr [EBX + 0xbec8]
//   Label: caseD_1
// 005a34d2: JMP 0x005a3336
//   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
// 005a34d7: MOV EAX,dword ptr [EBX + 0xbecc]
//   Label: caseD_2
// 005a34dd: JMP 0x005a3336
//   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
// 005a34e2: MOV EAX,dword ptr [EBX + 0xbed0]
//   Label: caseD_3
// 005a34e8: JMP 0x005a3336
//   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
// 005a34ed: MOV EAX,dword ptr [EBX + 0xbeec]
//   Label: caseD_4
// 005a34f3: JMP 0x005a3336
//   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
// 005a34f8: MOV EAX,dword ptr [EBX + 0xbee8]
//   Label: caseD_5
// 005a34fe: JMP 0x005a3336
//   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
// 005a3503: CMP EAX,dword ptr [EBX + 0xbec8]
//   Label: LAB_005a3503
// 005a3509: JZ 0x005a3348
//   XREF to: 005a3348 (CONDITIONAL_JUMP)
// 005a350f: CMP EAX,dword ptr [EBX + 0xbecc]
// 005a3515: JZ 0x005a3348
//   XREF to: 005a3348 (CONDITIONAL_JUMP)
// 005a351b: CMP EAX,dword ptr [EBX + 0xbed0]
// 005a3521: JZ 0x005a3348
//   XREF to: 005a3348 (CONDITIONAL_JUMP)
// 005a3527: CMP EAX,dword ptr [EBX + 0xbee8]
// 005a352d: JZ 0x005a3348
//   XREF to: 005a3348 (CONDITIONAL_JUMP)
// 005a3533: CMP EAX,dword ptr [EBX + 0xbeec]
// 005a3539: JZ 0x005a3348
//   XREF to: 005a3348 (CONDITIONAL_JUMP)
// 005a353f: JMP 0x005a348b
//   XREF to: 005a348b (UNCONDITIONAL_JUMP)
// 005a3544: MOV dword ptr [ESI + 0x4],0x461c3c00
//   Label: LAB_005a3544
// 005a354b: JMP 0x005a347b
//   XREF to: 005a347b (UNCONDITIONAL_JUMP)
// 005a3550: FLD float ptr [ESI + 0x4]
//   Label: LAB_005a3550
// 005a3553: FLD ST0
// 005a3555: FMUL double ptr [0x0064f372]
//   XREF to: 0064f372 (READ)
// 005a355b: FSTP ST1
// 005a355d: FSTP float ptr [ESI + 0x4]
// 005a3560: ADD ESP,0xc
// 005a3563: POP EBP
// 005a3564: POP EDI
// 005a3565: POP ESI
// 005a3566: POP EBX
// 005a3567: RET
// 005a3568: FLD float ptr [ESI + 0x4]
//   Label: LAB_005a3568
// 005a356b: FLD ST0
// 005a356d: FMUL double ptr [0x0064f36a]
//   XREF to: 0064f36a (READ)
// 005a3573: FSTP ST1
// 005a3575: FSTP float ptr [ESI + 0x4]
// 005a3578: ADD ESP,0xc
// 005a357b: POP EBP
// 005a357c: POP EDI
// 005a357d: POP ESI
// 005a357e: POP EBX
// 005a357f: RET

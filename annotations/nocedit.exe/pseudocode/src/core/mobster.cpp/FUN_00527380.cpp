// Name: core_mobster.cpp_FUN_00527380
// Address: 00527380
// Address Range: [[00527380, 0052773b]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00527380()
// Cross-references:
//   core_mobster.cpp_FUN_00527740 (00527740) at 0052776c [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00527364 = 005273c0
//   TerminatedCString s_limb_wav_0063999e
//   undefined4 DAT_006399ae
//   undefined4 DAT_006399b6
//   undefined4 DAT_006399be
//   undefined4 DAT_006399c6
//   undefined4 DAT_006399ce
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.blood_flag
//   undefined4 g_CGameInstance.field57_0x1e0
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_charactr.cpp_CCharacter_FUN_0042bcc0
//   core_charactr.cpp_CCharacter_FUN_0042bd30
//   core_charactr.cpp_CCharacter_FUN_0042f300
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00527380(undefined4 param_1, undefined4
   param_2) */

void core_mobster_cpp_FUN_00527380(void)

{
  int iVar1;
  float fVar2;
  CCharacter *in_stack_00000004;
  float *in_stack_00000008;
  float local_18;
  
  if ((0.0 < in_stack_00000008[0xb]) && (*in_stack_00000008 == -NAN)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 6) {
    case 0:
      fVar2 = in_stack_00000004[1].base_actor.previous_transform_state.orientation.z;
      break;
    case 1:
      fVar2 = (float)in_stack_00000004[1].base_actor.previous_transform_state.dirty_flags;
      break;
    case 2:
      fVar2 = (float)in_stack_00000004[1].base_actor.field25_0x144;
      break;
    case 3:
      fVar2 = (float)in_stack_00000004[1].base_actor.field26_0x148;
      break;
    case 4:
      fVar2 = (float)in_stack_00000004[1].model.motion_controller.tween_type;
      break;
    case 5:
      fVar2 = in_stack_00000004[1].model.motion_controller.current_frame_number;
      break;
    default:
      goto switchD_005273b9_default;
    }
    *in_stack_00000008 = fVar2;
  }
switchD_005273b9_default:
  fVar2 = *in_stack_00000008;
  if (((((fVar2 != in_stack_00000004[1].base_actor.previous_transform_state.orientation.z) &&
        (fVar2 != (float)in_stack_00000004[1].base_actor.previous_transform_state.dirty_flags)) &&
       (fVar2 != (float)in_stack_00000004[1].base_actor.field25_0x144)) &&
      ((fVar2 != (float)in_stack_00000004[1].base_actor.field26_0x148 &&
       (fVar2 != in_stack_00000004[1].model.motion_controller.current_frame_number)))) &&
     (fVar2 != (float)in_stack_00000004[1].model.motion_controller.tween_type)) goto LAB_0052761a;
  if (in_stack_00000004[1].model.motion_controller.current_frame_number == *in_stack_00000008) {
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    if ((float)_DAT_006399ae <= fVar2) {
      if (_DAT_006399b6 <= (double)fVar2) goto LAB_00527413;
      fVar2 = (float)in_stack_00000004[1].base_actor.field25_0x144;
    }
    else {
      fVar2 = in_stack_00000004[1].base_actor.previous_transform_state.orientation.z;
    }
    *in_stack_00000008 = fVar2;
  }
LAB_00527413:
  local_18 = in_stack_00000008[0xb];
  if ((float)in_stack_00000004[1].model.motion_controller.tween_type == *in_stack_00000008) {
    local_18 = 0.05;
  }
  if (in_stack_00000004[1].model.motion_controller.current_frame_number == *in_stack_00000008) {
    local_18 = 0.06;
  }
  if (g_CGamePtr->field57_0x1e0 != 0) {
    local_18 = 1.0;
  }
  if (g_CGamePtr->blood_flag == 0) {
    local_18 = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_18);
  if (iVar1 != 0) {
    core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    if (*in_stack_00000008 == in_stack_00000004[1].base_actor.previous_transform_state.orientation.z
       ) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if ((float)in_stack_00000004[1].base_actor.field25_0x144 == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (in_stack_00000004[1].model.motion_controller.current_frame_number == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                (&in_stack_00000004->base_actor);
      (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                (&in_stack_00000004->base_actor);
    }
    core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
    core_bodypart_cpp_FUN_0041a050();
    if ((in_stack_00000004->model).part_visibility_flags
        [in_stack_00000004[1].model.motion_controller.tween_type] == 0) {
      in_stack_00000008[1] = 9999.0;
    }
    in_stack_00000008[2] = in_stack_00000008[2] * (float)_DAT_006399be;
    if ((*in_stack_00000008 == (float)in_stack_00000004[1].base_actor.field25_0x144) ||
       (*in_stack_00000008 == (float)in_stack_00000004[1].base_actor.field26_0x148)) {
      (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                (&in_stack_00000004->base_actor);
      (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                (&in_stack_00000004->base_actor);
    }
    if ((*in_stack_00000008 ==
         in_stack_00000004[1].base_actor.previous_transform_state.orientation.z) ||
       (*in_stack_00000008 ==
        (float)in_stack_00000004[1].base_actor.previous_transform_state.dirty_flags)) {
      (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                (&in_stack_00000004->base_actor);
    }
  }
LAB_0052761a:
  fVar2 = *in_stack_00000008;
  if (fVar2 == (float)in_stack_00000004[1].model.motion_controller.tween_type) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)_DAT_006399ce;
    return;
  }
  if ((fVar2 != (float)in_stack_00000004[1].model.motion_controller.current_motion_index) &&
     (fVar2 != in_stack_00000004[1].model.motion_controller.current_frame_number)) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)_DAT_006399c6;
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}


// Assembly code:
// 00527380: PUSH EBX
//   Label: core_mobster.cpp_FUN_00527380
// 00527381: PUSH ESI
// 00527382: PUSH EDI
// 00527383: PUSH EBP
// 00527384: MOV EBP,ESP
// 00527386: SUB ESP,0x1c
// 00527389: AND ESP,0xfffffff8
// 0052738c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052738f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00527392: FLD float ptr [ESI + 0x2c]
// 00527395: FLDZ
// 00527397: FCOMPP
// 00527399: FNSTSW AX
// 0052739b: SAHF
// 0052739c: JNC 0x005273c8
//   XREF to: 005273c8 (CONDITIONAL_JUMP)
// 0052739e: CMP dword ptr [ESI],-0x1
// 005273a1: JNZ 0x005273c8
//   XREF to: 005273c8 (CONDITIONAL_JUMP)
// 005273a3: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005273a8: MOV EDX,EAX
// 005273aa: MOV EDI,0x6
// 005273af: SAR EDX,0x1f
// 005273b2: IDIV EDI
// 005273b4: CMP EDX,0x5
// 005273b7: JA 0x005273c8
//   XREF to: 005273c8 (CONDITIONAL_JUMP)
// 005273b9: JMP dword ptr [EDX*0x4 + 0x527364]
//   Label: switchD
//   XREF to: 005273c0 (COMPUTED_JUMP)
//   XREF to: 0052764b (COMPUTED_JUMP)
//   XREF to: 00527656 (COMPUTED_JUMP)
//   XREF to: 00527661 (COMPUTED_JUMP)
//   XREF to: 0052766c (COMPUTED_JUMP)
//   XREF to: 00527677 (COMPUTED_JUMP)
//   XREF to: 00527364 (DATA)
// 005273c0: MOV EAX,dword ptr [EBX + 0xbf60]
//   Label: caseD_0
// 005273c6: MOV dword ptr [ESI],EAX
//   Label: LAB_005273c6
// 005273c8: MOV ECX,dword ptr [EBX + 0xbf60]
//   Label: default
// 005273ce: MOV EAX,dword ptr [ESI]
// 005273d0: CMP EAX,ECX
// 005273d2: JNZ 0x00527682
//   XREF to: 00527682 (CONDITIONAL_JUMP)
// 005273d8: MOV ECX,dword ptr [EBX + 0xbf84]
//   Label: LAB_005273d8
// 005273de: CMP ECX,dword ptr [ESI]
// 005273e0: JNZ 0x00527413
//   XREF to: 00527413 (CONDITIONAL_JUMP)
// 005273e2: PUSH 0x3f800000
// 005273e7: PUSH 0x0
// 005273e9: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005273ee: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005273f2: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 005273f6: ADD ESP,0x8
// 005273f9: FST double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005273fc: FCOMP double ptr [0x006399ae]
//   XREF to: 006399ae (READ)
// 00527402: FNSTSW AX
// 00527404: SAHF
// 00527405: JNC 0x005276c3
//   XREF to: 005276c3 (CONDITIONAL_JUMP)
// 0052740b: MOV EAX,dword ptr [EBX + 0xbf60]
// 00527411: MOV dword ptr [ESI],EAX
//   Label: LAB_00527411
// 00527413: MOV EAX,dword ptr [ESI + 0x2c]
//   Label: LAB_00527413
// 00527416: MOV EDI,dword ptr [EBX + 0xbf88]
// 0052741c: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00527420: CMP EDI,dword ptr [ESI]
// 00527422: JNZ 0x0052742c
//   XREF to: 0052742c (CONDITIONAL_JUMP)
// 00527424: MOV dword ptr [ESP + 0x14],0x3d4ccccd
//   XREF to: Stack[-0x1c] (WRITE)
// 0052742c: MOV EDX,dword ptr [EBX + 0xbf84]
//   Label: LAB_0052742c
// 00527432: CMP EDX,dword ptr [ESI]
// 00527434: JNZ 0x0052743e
//   XREF to: 0052743e (CONDITIONAL_JUMP)
// 00527436: MOV dword ptr [ESP + 0x14],0x3d75c28f
//   XREF to: Stack[-0x1c] (WRITE)
// 0052743e: MOV EAX,[0x0067b654]
//   Label: LAB_0052743e
//   XREF to: 0067b654 (READ)
// 00527443: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 0052744a: JZ 0x00527454
//   XREF to: 00527454 (CONDITIONAL_JUMP)
// 0052744c: MOV dword ptr [ESP + 0x14],0x3f800000
//   XREF to: Stack[-0x1c] (WRITE)
// 00527454: MOV EAX,[0x0067b654]
//   Label: LAB_00527454
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 00527459: MOV EDX,dword ptr [EAX + 0x14]
//   XREF to: 02d81ab0 (READ)
// 0052745c: TEST EDX,EDX
// 0052745e: JNZ 0x00527464
//   XREF to: 00527464 (CONDITIONAL_JUMP)
// 00527460: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00527464: PUSH dword ptr [ESP + 0x14]
//   Label: LAB_00527464
//   XREF to: Stack[-0x1c] (READ)
// 00527468: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0052746d: ADD ESP,0x4
// 00527470: TEST EAX,EAX
// 00527472: JZ 0x0052761a
//   XREF to: 0052761a (CONDITIONAL_JUMP)
// 00527478: PUSH 0x0
// 0052747a: PUSH 0x0
// 0052747c: PUSH 0x0
// 0052747e: PUSH EBX
// 0052747f: LEA EAX,[ESI + 0xc]
// 00527482: PUSH EAX
// 00527483: LEA EAX,[EBX + 0x30]
// 00527486: PUSH EAX
// 00527487: LEA EAX,[EBX + 0x20]
// 0052748a: PUSH EAX
// 0052748b: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 00527490: ADD ESP,0x1c
// 00527493: MOV EDI,EAX
// 00527495: PUSH 0x0
// 00527497: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052749b: MOV EAX,dword ptr [ESI]
// 0052749d: PUSH EAX
// 0052749e: PUSH EDI
// 0052749f: PUSH EBX
// 005274a0: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 005274a5: MOV EAX,dword ptr [ESI]
// 005274a7: MOV EDX,dword ptr [EBX + 0xbf60]
// 005274ad: ADD ESP,0x10
// 005274b0: CMP EAX,EDX
// 005274b2: JNZ 0x005274c7
//   XREF to: 005274c7 (CONDITIONAL_JUMP)
// 005274b4: PUSH 0x0
// 005274b6: MOV ECX,dword ptr [EBX + 0xbf64]
// 005274bc: PUSH ECX
// 005274bd: PUSH EDI
// 005274be: PUSH EBX
// 005274bf: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 005274c4: ADD ESP,0x10
// 005274c7: MOV EDI,dword ptr [EBX + 0xbf68]
//   Label: LAB_005274c7
// 005274cd: CMP EDI,dword ptr [ESI]
// 005274cf: JNZ 0x005274e8
//   XREF to: 005274e8 (CONDITIONAL_JUMP)
// 005274d1: PUSH 0x0
// 005274d3: MOV EAX,dword ptr [EBX + 0xbf6c]
// 005274d9: PUSH EAX
// 005274da: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 005274de: PUSH EDX
// 005274df: PUSH EBX
// 005274e0: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 005274e5: ADD ESP,0x10
// 005274e8: MOV ECX,dword ptr [EBX + 0xbf84]
//   Label: LAB_005274e8
// 005274ee: CMP ECX,dword ptr [ESI]
// 005274f0: JNZ 0x00527580
//   XREF to: 00527580 (CONDITIONAL_JUMP)
// 005274f6: PUSH 0x0
// 005274f8: LEA EDI,[ESI + 0xc]
// 005274fb: PUSH EDI
// 005274fc: MOV EAX,dword ptr [EBX + 0xbf68]
// 00527502: PUSH EAX
// 00527503: PUSH EBX
// 00527504: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00527509: ADD ESP,0x10
// 0052750c: PUSH 0x0
// 0052750e: PUSH EDI
// 0052750f: MOV EDX,dword ptr [EBX + 0xbf6c]
// 00527515: PUSH EDX
// 00527516: PUSH EBX
// 00527517: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 0052751c: ADD ESP,0x10
// 0052751f: PUSH 0x0
// 00527521: PUSH EDI
// 00527522: MOV ECX,dword ptr [EBX + 0xbf60]
// 00527528: PUSH ECX
// 00527529: PUSH EBX
// 0052752a: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 0052752f: ADD ESP,0x10
// 00527532: PUSH 0x0
// 00527534: PUSH EDI
// 00527535: MOV EAX,dword ptr [EBX + 0xbf64]
// 0052753b: PUSH EAX
// 0052753c: PUSH EBX
// 0052753d: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00527542: ADD ESP,0x10
// 00527545: PUSH 0x0
// 00527547: PUSH EDI
// 00527548: MOV EDX,dword ptr [EBX + 0xbf88]
// 0052754e: PUSH EDX
// 0052754f: PUSH EBX
// 00527550: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00527555: ADD ESP,0x10
// 00527558: PUSH 0x0
// 0052755a: PUSH 0x1
// 0052755c: MOV EAX,dword ptr [EBX + 0x154]
// 00527562: PUSH EBX
// 00527563: CALL dword ptr [EAX + 0x13c]
// 00527569: ADD ESP,0xc
// 0052756c: PUSH 0x0
// 0052756e: PUSH 0x0
// 00527570: MOV EAX,dword ptr [EBX + 0x154]
// 00527576: PUSH EBX
// 00527577: CALL dword ptr [EAX + 0x13c]
// 0052757d: ADD ESP,0xc
// 00527580: PUSH 0x63999e
//   Label: LAB_00527580
//   XREF to: 0063999e (DATA)
// 00527585: PUSH EBX
// 00527586: CALL core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: 0042f300 (UNCONDITIONAL_CALL)
// 0052758b: ADD ESP,0x8
// 0052758e: MOV ECX,dword ptr [ESP + 0x10]
// 00527592: PUSH ECX
// 00527593: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 00527598: MOV EAX,dword ptr [EBX + 0xbf88]
// 0052759e: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 005275a5: ADD ESP,0x4
// 005275a8: TEST EDI,EDI
// 005275aa: JZ 0x005276e0
//   XREF to: 005276e0 (CONDITIONAL_JUMP)
// 005275b0: FLD float ptr [ESI + 0x8]
//   Label: LAB_005275b0
// 005275b3: FLD ST0
// 005275b5: FMUL double ptr [0x006399be]
//   XREF to: 006399be (READ)
// 005275bb: MOV EAX,dword ptr [ESI]
// 005275bd: FSTP ST1
// 005275bf: FSTP float ptr [ESI + 0x8]
// 005275c2: CMP EAX,dword ptr [EBX + 0xbf68]
// 005275c8: JNZ 0x005276ec
//   XREF to: 005276ec (CONDITIONAL_JUMP)
// 005275ce: PUSH 0x0
//   Label: LAB_005275ce
// 005275d0: PUSH 0x1
// 005275d2: MOV EAX,dword ptr [EBX + 0x154]
// 005275d8: PUSH EBX
// 005275d9: CALL dword ptr [EAX + 0x13c]
// 005275df: ADD ESP,0xc
// 005275e2: PUSH 0x0
// 005275e4: PUSH 0x0
// 005275e6: MOV EAX,dword ptr [EBX + 0x154]
// 005275ec: PUSH EBX
// 005275ed: CALL dword ptr [EAX + 0x13c]
// 005275f3: ADD ESP,0xc
// 005275f6: MOV EDI,dword ptr [EBX + 0xbf60]
//   Label: LAB_005275f6
// 005275fc: MOV EAX,dword ptr [ESI]
// 005275fe: CMP EAX,EDI
// 00527600: JNZ 0x005276fd
//   XREF to: 005276fd (CONDITIONAL_JUMP)
// 00527606: PUSH 0x0
//   Label: LAB_00527606
// 00527608: PUSH 0x0
// 0052760a: MOV EAX,dword ptr [EBX + 0x154]
// 00527610: PUSH EBX
// 00527611: CALL dword ptr [EAX + 0x13c]
// 00527617: ADD ESP,0xc
// 0052761a: MOV ECX,dword ptr [EBX + 0xbf88]
//   Label: LAB_0052761a
// 00527620: MOV EAX,dword ptr [ESI]
// 00527622: CMP EAX,ECX
// 00527624: JZ 0x0052770e
//   XREF to: 0052770e (CONDITIONAL_JUMP)
// 0052762a: CMP EAX,dword ptr [EBX + 0xbf80]
// 00527630: JZ 0x0052763e
//   XREF to: 0052763e (CONDITIONAL_JUMP)
// 00527632: CMP EAX,dword ptr [EBX + 0xbf84]
// 00527638: JNZ 0x00527725
//   XREF to: 00527725 (CONDITIONAL_JUMP)
// 0052763e: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_0052763e
// 00527641: MOV dword ptr [ESI + 0x4],EAX
// 00527644: MOV ESP,EBP
// 00527646: POP EBP
// 00527647: POP EDI
// 00527648: POP ESI
// 00527649: POP EBX
// 0052764a: RET
// 0052764b: MOV EAX,dword ptr [EBX + 0xbf64]
//   Label: caseD_1
// 00527651: JMP 0x005273c6
//   XREF to: 005273c6 (UNCONDITIONAL_JUMP)
// 00527656: MOV EAX,dword ptr [EBX + 0xbf68]
//   Label: caseD_2
// 0052765c: JMP 0x005273c6
//   XREF to: 005273c6 (UNCONDITIONAL_JUMP)
// 00527661: MOV EAX,dword ptr [EBX + 0xbf6c]
//   Label: caseD_3
// 00527667: JMP 0x005273c6
//   XREF to: 005273c6 (UNCONDITIONAL_JUMP)
// 0052766c: MOV EAX,dword ptr [EBX + 0xbf88]
//   Label: caseD_4
// 00527672: JMP 0x005273c6
//   XREF to: 005273c6 (UNCONDITIONAL_JUMP)
// 00527677: MOV EAX,dword ptr [EBX + 0xbf84]
//   Label: caseD_5
// 0052767d: JMP 0x005273c6
//   XREF to: 005273c6 (UNCONDITIONAL_JUMP)
// 00527682: CMP EAX,dword ptr [EBX + 0xbf64]
//   Label: LAB_00527682
// 00527688: JZ 0x005273d8
//   XREF to: 005273d8 (CONDITIONAL_JUMP)
// 0052768e: CMP EAX,dword ptr [EBX + 0xbf68]
// 00527694: JZ 0x005273d8
//   XREF to: 005273d8 (CONDITIONAL_JUMP)
// 0052769a: CMP EAX,dword ptr [EBX + 0xbf6c]
// 005276a0: JZ 0x005273d8
//   XREF to: 005273d8 (CONDITIONAL_JUMP)
// 005276a6: CMP EAX,dword ptr [EBX + 0xbf84]
// 005276ac: JZ 0x005273d8
//   XREF to: 005273d8 (CONDITIONAL_JUMP)
// 005276b2: CMP EAX,dword ptr [EBX + 0xbf88]
// 005276b8: JZ 0x005273d8
//   XREF to: 005273d8 (CONDITIONAL_JUMP)
// 005276be: JMP 0x0052761a
//   XREF to: 0052761a (UNCONDITIONAL_JUMP)
// 005276c3: FLD double ptr [ESP]
//   Label: LAB_005276c3
//   XREF to: Stack[-0x30] (DATA)
// 005276c6: FCOMP double ptr [0x006399b6]
//   XREF to: 006399b6 (READ)
// 005276cc: FNSTSW AX
// 005276ce: SAHF
// 005276cf: JNC 0x00527413
//   XREF to: 00527413 (CONDITIONAL_JUMP)
// 005276d5: MOV EAX,dword ptr [EBX + 0xbf68]
// 005276db: JMP 0x00527411
//   XREF to: 00527411 (UNCONDITIONAL_JUMP)
// 005276e0: MOV dword ptr [ESI + 0x4],0x461c3c00
//   Label: LAB_005276e0
// 005276e7: JMP 0x005275b0
//   XREF to: 005275b0 (UNCONDITIONAL_JUMP)
// 005276ec: CMP EAX,dword ptr [EBX + 0xbf6c]
//   Label: LAB_005276ec
// 005276f2: JZ 0x005275ce
//   XREF to: 005275ce (CONDITIONAL_JUMP)
// 005276f8: JMP 0x005275f6
//   XREF to: 005275f6 (UNCONDITIONAL_JUMP)
// 005276fd: CMP EAX,dword ptr [EBX + 0xbf64]
//   Label: LAB_005276fd
// 00527703: JZ 0x00527606
//   XREF to: 00527606 (CONDITIONAL_JUMP)
// 00527709: JMP 0x0052761a
//   XREF to: 0052761a (UNCONDITIONAL_JUMP)
// 0052770e: FLD float ptr [ESI + 0x4]
//   Label: LAB_0052770e
// 00527711: FLD ST0
// 00527713: FMUL double ptr [0x006399ce]
//   XREF to: 006399ce (READ)
// 00527719: FSTP ST1
// 0052771b: FSTP float ptr [ESI + 0x4]
// 0052771e: MOV ESP,EBP
// 00527720: POP EBP
// 00527721: POP EDI
// 00527722: POP ESI
// 00527723: POP EBX
// 00527724: RET
// 00527725: FLD float ptr [ESI + 0x4]
//   Label: LAB_00527725
// 00527728: FLD ST0
// 0052772a: FMUL double ptr [0x006399c6]
//   XREF to: 006399c6 (READ)
// 00527730: FSTP ST1
// 00527732: FSTP float ptr [ESI + 0x4]
// 00527735: MOV ESP,EBP
// 00527737: POP EBP
// 00527738: POP EDI
// 00527739: POP ESI
// 0052773a: POP EBX
// 0052773b: RET

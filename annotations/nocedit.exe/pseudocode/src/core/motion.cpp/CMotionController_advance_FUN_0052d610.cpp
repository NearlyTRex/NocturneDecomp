// Name: core_motion.cpp_CMotionController_advance_FUN_0052d610
// Address: 0052d610
// Address Range: [[0052d610, 0052d936]]
// Convention: __cdecl
// Signature: int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_process_FUN_00412260 (00412260) at 00412351 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_00413a00 (00413a00) at 00413a16 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415689 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416ab7 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_004182a0 (004182a0) at 004182f8 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 0041894e [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c313 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423bc4 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_00440430 (00440430) at 00440446 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 0044455a [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f3a1 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484520 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048ef35 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d48ad [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4a66 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6f88 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1970 (004f1970) at 004f1987 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f45c5 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4c89 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f7132 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f93a0 (004f93a0) at 004f93b7 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9cae [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 005034bc [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 (00520ba0) at 00520bf6 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051fdee [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 005259e8 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 00528da2 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544916 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545ef0 (00545ef0) at 00545f8d [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557d20 (00557d20) at 00557d3a [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568415 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a28fb [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005bdd57 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c6f21 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970 (005d9970) at 005d9987 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db4c0 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6322 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e6ca0 (005e6ca0) at 005e6cc7 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005efe53 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f951c [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0052d5e4 = 0052d706
//   void* switchdataD_0052d5f4 = 0052d89e
//   TerminatedCString s_core_motion_cpp_0063a96c
//   TerminatedCString s_CMotionController_advanc_0063a97f
//   TerminatedCString s_core_motion_cpp_0063a9c5
//   TerminatedCString s_Invalid_transition_comma_0063a9d8
//   double DOUBLE_0063aa27 = 0.0000100000000000000
//   double DOUBLE_0063aa2f = 0.5
//   double DOUBLE_0063aa37 = 0.499900000000000
//   double DOUBLE_0063aa3f = 0.000100000000000000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
//   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dbc0
//   core_motion.cpp_CMotionController_FUN_0052de40
//   core_motion.cpp_CMotionController_FUN_0052de70
//   core_motion.cpp_CMotionController_FUN_0052e020
//   core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_advance_FUN_0052d610(CMotionController *this_ptr)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  float *in_stack_00000008;
  float local_44;
  float local_40;
  undefined4 local_34;
  int iStack_30;
  float local_2c;
  int local_14;
  
  local_14 = 0;
  do {
    if (*in_stack_00000008 <= (float)DOUBLE_0063aa27) break;
    iVar3 = core_motion_cpp_CMotionController_findAndStartTransition_FUN_0052d950(this_ptr);
    if (iVar3 != 0) goto LAB_0052d663;
    local_44 = *in_stack_00000008;
    iVar3 = 0;
    if (this_ptr->tween_progress < 0.0) {
      iVar3 = core_motion_cpp_CMotionController_FUN_0052e020(this_ptr);
      switch(local_34) {
      case 1:
      case 2:
        this_ptr->current_motion_index = iStack_30;
        this_ptr->current_frame_number = local_2c;
        if (this_ptr != (CMotionController *)0xffffffe4) {
          iVar4 = core_motion_cpp_CMotionController_FUN_0052dab0(this_ptr);
          this_ptr->state_index = *(int *)(iVar4 + 0x24);
        }
        break;
      case 3:
      case 4:
      case 5:
      case 6:
        core_motion_cpp_CMotionController_FUN_0052dbc0(this_ptr);
        break;
      default:
        g_CurrentFilename = "..\\core\\motion.cpp";
        g_CurrentLineNumber = 0x1b7;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid transition command returned by CMotionControler::advanceComplex: %d",local_34);
      }
      goto LAB_0052d782;
    }
    if (this_ptr->tween_direction == 0) {
      fVar1 = (float)DOUBLE_0063aa2f - this_ptr->tween_progress;
    }
    else {
      fVar1 = this_ptr->tween_progress;
    }
    local_40 = fVar1 / this_ptr->tween_speed;
    if (local_40 < 0.0) {
      local_40 = 0.0;
    }
    if (local_40 < local_44) {
      local_44 = local_40;
    }
    bVar2 = false;
    local_14 = 0;
    if (local_44 <= 0.0) goto switchD_0052d6ff_caseD_3;
    switch(this_ptr->tween_type) {
    case 3:
      break;
    case 4:
      bVar2 = true;
      core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(this_ptr);
      break;
    case 5:
      core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(this_ptr);
      goto LAB_0052d70d;
    case 6:
      core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(this_ptr);
      bVar2 = true;
      core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(this_ptr);
      goto LAB_0052d70d;
    default:
      g_CurrentFilename = "..\\core\\motion.cpp";
      g_CurrentLineNumber = 0x17e;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CMotionController::advance: Tweening active but invalid tweenType: %d",this_ptr->tween_type);
    }
switchD_0052d6ff_caseD_3:
    if (unaff_EBP != 0) {
LAB_0052d70d:
      iVar3 = core_motion_cpp_CMotionController_FUN_0052de70();
    }
    if ((bVar2) && (iVar4 = core_motion_cpp_CMotionController_FUN_0052de70(), iVar3 == 0)) {
      iVar3 = iVar4;
    }
    if (this_ptr->tween_direction == 0) {
      fVar1 = local_40 * this_ptr->tween_speed + this_ptr->tween_progress;
      this_ptr->tween_progress = fVar1;
      if (((float)DOUBLE_0063aa37 < fVar1) &&
         (core_motion_cpp_CMotionController_reverseTransition_FUN_0052da50(this_ptr),
         this_ptr->tween_set_new_state != 0)) {
        iVar4 = core_motion_cpp_CMotionController_FUN_0052dab0(this_ptr);
        this_ptr->state_index = *(int *)(iVar4 + 0x24);
      }
    }
    else {
      fVar1 = this_ptr->tween_progress - local_40 * this_ptr->tween_speed;
      this_ptr->tween_progress = fVar1;
      if (fVar1 < (float)DOUBLE_0063aa3f) {
        core_motion_cpp_CMotionController_FUN_0052de40(this_ptr);
      }
    }
LAB_0052d782:
    *in_stack_00000008 = *in_stack_00000008 - local_40;
    if ((this_ptr->in_transition != 0) &&
       (*(int *)(this_ptr->in_transition + 8) == this_ptr->current_motion_index)) {
      this_ptr->in_transition = 0;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
LAB_0052d663:
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  *in_stack_00000008 = 0.0;
  return 0;
}


// Assembly code:
// 0052d610: PUSH EBX
//   Label: core_motion.cpp_CMotionController_advance_FUN_0052d610
// 0052d611: PUSH ESI
// 0052d612: PUSH EDI
// 0052d613: PUSH EBP
// 0052d614: MOV EBP,ESP
// 0052d616: SUB ESP,0x40
// 0052d619: AND ESP,0xfffffff8
// 0052d61c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052d61f: LEA EAX,[EBX + 0x1c]
// 0052d622: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0052d626: LEA EAX,[EBX + 0x18]
// 0052d629: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052d62d: LEA EAX,[EBX + 0x8]
// 0052d630: XOR EDX,EDX
// 0052d632: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0052d636: LEA EAX,[EBX + 0x4]
// 0052d639: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0052d63d: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052d641: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0052d641
//   XREF to: Stack[0x8] (READ)
// 0052d644: FLD float ptr [EAX]
// 0052d646: FCOMP double ptr [0x0063aa27]
//   XREF to: 0063aa27 (READ)
// 0052d64c: FNSTSW AX
// 0052d64e: SAHF
// 0052d64f: JA 0x0052d673
//   XREF to: 0052d673 (CONDITIONAL_JUMP)
// 0052d651: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0052d651
//   XREF to: Stack[0x8] (READ)
// 0052d654: MOV dword ptr [EAX],0x0
// 0052d65a: XOR EAX,EAX
// 0052d65c: MOV ESP,EBP
// 0052d65e: POP EBP
// 0052d65f: POP EDI
// 0052d660: POP ESI
// 0052d661: POP EBX
// 0052d662: RET
// 0052d663: MOV ESI,dword ptr [ESP + 0x3c]
//   Label: LAB_0052d663
//   XREF to: Stack[-0x14] (READ)
// 0052d667: INC ESI
// 0052d668: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0052d66c: CMP ESI,0x5
// 0052d66f: JL 0x0052d641
//   XREF to: 0052d641 (CONDITIONAL_JUMP)
// 0052d671: JMP 0x0052d651
//   XREF to: 0052d651 (UNCONDITIONAL_JUMP)
// 0052d673: PUSH EBX
//   Label: LAB_0052d673
// 0052d674: CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950
//   XREF to: 0052d950 (UNCONDITIONAL_CALL)
// 0052d679: ADD ESP,0x4
// 0052d67c: TEST EAX,EAX
// 0052d67e: JNZ 0x0052d663
//   XREF to: 0052d663 (CONDITIONAL_JUMP)
// 0052d680: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052d683: MOV EAX,dword ptr [EAX]
// 0052d685: FLDZ
// 0052d687: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0052d68b: XOR ESI,ESI
// 0052d68d: FLD float ptr [EBX + 0x14]
// 0052d690: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0052d693: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0052d696: FNSTSW AX
// 0052d698: SAHF
// 0052d699: JA 0x0052d90a
//   XREF to: 0052d90a (CONDITIONAL_JUMP)
// 0052d69f: CMP dword ptr [EBX + 0x20],0x0
// 0052d6a3: JZ 0x0052d7b4
//   XREF to: 0052d7b4 (CONDITIONAL_JUMP)
// 0052d6a9: FLD float ptr [EBX + 0x14]
// 0052d6ac: FDIV float ptr [EBX + 0x10]
//   Label: LAB_0052d6ac
// 0052d6af: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (WRITE)
// 0052d6b3: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (READ)
// 0052d6b7: FLDZ
// 0052d6b9: FCOMPP
// 0052d6bb: FNSTSW AX
// 0052d6bd: SAHF
// 0052d6be: JBE 0x0052d6c6
//   XREF to: 0052d6c6 (CONDITIONAL_JUMP)
// 0052d6c0: XOR EAX,EAX
// 0052d6c2: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0052d6c6: FLD float ptr [ESP + 0xc]
//   Label: LAB_0052d6c6
//   XREF to: Stack[-0x44] (READ)
// 0052d6ca: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0052d6ce: FNSTSW AX
// 0052d6d0: SAHF
// 0052d6d1: JNC 0x0052d6db
//   XREF to: 0052d6db (CONDITIONAL_JUMP)
// 0052d6d3: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (READ)
// 0052d6d7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0052d6db: FLD float ptr [ESP + 0x8]
//   Label: LAB_0052d6db
//   XREF to: Stack[-0x48] (READ)
// 0052d6df: FLDZ
// 0052d6e1: XOR EDX,EDX
// 0052d6e3: XOR EDI,EDI
// 0052d6e5: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0052d6e9: FCOMPP
// 0052d6eb: FNSTSW AX
// 0052d6ed: SAHF
// 0052d6ee: JNC 0x0052d706
//   XREF to: 0052d706 (CONDITIONAL_JUMP)
// 0052d6f0: MOV EAX,dword ptr [EBX + 0xc]
// 0052d6f3: SUB EAX,0x3
// 0052d6f6: CMP EAX,0x3
// 0052d6f9: JA 0x0052d82f
//   XREF to: 0052d82f (CONDITIONAL_JUMP)
// 0052d6ff: JMP dword ptr [EAX*0x4 + 0x52d5e4]
//   Label: switchD
//   XREF to: 0052d706 (COMPUTED_JUMP)
//   XREF to: 0052d7c2 (COMPUTED_JUMP)
//   XREF to: 0052d7e1 (COMPUTED_JUMP)
//   XREF to: 0052d7fb (COMPUTED_JUMP)
//   XREF to: 0052d5e4 (DATA)
// 0052d706: CMP dword ptr [ESP + 0x38],0x0
//   Label: caseD_3
//   XREF to: Stack[-0x18] (READ)
// 0052d70b: JZ 0x0052d729
//   XREF to: 0052d729 (CONDITIONAL_JUMP)
// 0052d70d: PUSH dword ptr [EBX + 0x14]
//   Label: LAB_0052d70d
// 0052d710: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0052d714: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (READ)
// 0052d718: PUSH ESI
// 0052d719: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x20] (READ)
// 0052d71d: PUSH EAX
// 0052d71e: PUSH EBX
// 0052d71f: CALL core_motion.cpp_CMotionController_FUN_0052de70
//   XREF to: 0052de70 (UNCONDITIONAL_CALL)
// 0052d724: ADD ESP,0x14
// 0052d727: MOV ESI,EAX
// 0052d729: TEST EDI,EDI
//   Label: LAB_0052d729
// 0052d72b: JZ 0x0052d757
//   XREF to: 0052d757 (CONDITIONAL_JUMP)
// 0052d72d: SUB ESP,0x4
// 0052d730: FLD float ptr [EBX + 0x14]
// 0052d733: FLD1
// 0052d735: FSUBRP
// 0052d737: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0052d73b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x54] (DATA)
// 0052d73e: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (READ)
// 0052d742: PUSH EDX
// 0052d743: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (READ)
// 0052d747: PUSH ECX
// 0052d748: PUSH EBX
// 0052d749: CALL core_motion.cpp_CMotionController_FUN_0052de70
//   XREF to: 0052de70 (UNCONDITIONAL_CALL)
// 0052d74e: ADD ESP,0x14
// 0052d751: TEST ESI,ESI
// 0052d753: JNZ 0x0052d757
//   XREF to: 0052d757 (CONDITIONAL_JUMP)
// 0052d755: MOV ESI,EAX
// 0052d757: CMP dword ptr [EBX + 0x20],0x0
//   Label: LAB_0052d757
// 0052d75b: JZ 0x0052d85a
//   XREF to: 0052d85a (CONDITIONAL_JUMP)
// 0052d761: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0052d765: FMUL float ptr [EBX + 0x10]
// 0052d768: FSUBR float ptr [EBX + 0x14]
// 0052d76b: FST float ptr [EBX + 0x14]
// 0052d76e: FCOMP double ptr [0x0063aa3f]
//   XREF to: 0063aa3f (READ)
// 0052d774: FNSTSW AX
// 0052d776: SAHF
// 0052d777: JNC 0x0052d782
//   XREF to: 0052d782 (CONDITIONAL_JUMP)
// 0052d779: PUSH EBX
// 0052d77a: CALL core_motion.cpp_CMotionController_FUN_0052de40
//   XREF to: 0052de40 (UNCONDITIONAL_CALL)
// 0052d77f: ADD ESP,0x4
// 0052d782: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0052d782
//   XREF to: Stack[0x8] (READ)
// 0052d785: FLD float ptr [EAX]
// 0052d787: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0052d78b: FSTP float ptr [EAX]
// 0052d78d: MOV EDX,dword ptr [EBX + 0x2c]
// 0052d790: TEST EDX,EDX
// 0052d792: JZ 0x0052d7a3
//   XREF to: 0052d7a3 (CONDITIONAL_JUMP)
// 0052d794: MOV EAX,dword ptr [EDX + 0x8]
// 0052d797: CMP EAX,dword ptr [EBX + 0x4]
// 0052d79a: JNZ 0x0052d7a3
//   XREF to: 0052d7a3 (CONDITIONAL_JUMP)
// 0052d79c: MOV dword ptr [EBX + 0x2c],0x0
// 0052d7a3: TEST ESI,ESI
//   Label: LAB_0052d7a3
// 0052d7a5: JZ 0x0052d663
//   XREF to: 0052d663 (CONDITIONAL_JUMP)
// 0052d7ab: MOV EAX,ESI
// 0052d7ad: MOV ESP,EBP
// 0052d7af: POP EBP
// 0052d7b0: POP EDI
// 0052d7b1: POP ESI
// 0052d7b2: POP EBX
// 0052d7b3: RET
// 0052d7b4: FLD double ptr [0x0063aa2f]
//   Label: LAB_0052d7b4
//   XREF to: 0063aa2f (READ)
// 0052d7ba: FSUB double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0052d7bd: JMP 0x0052d6ac
//   XREF to: 0052d6ac (UNCONDITIONAL_JUMP)
// 0052d7c2: LEA EAX,[ESP + 0x8]
//   Label: caseD_4
//   XREF to: Stack[-0x48] (DATA)
// 0052d7c6: PUSH EAX
// 0052d7c7: MOV EDX,dword ptr [EBX + 0x18]
// 0052d7ca: PUSH dword ptr [EBX + 0x1c]
// 0052d7cd: PUSH EDX
// 0052d7ce: PUSH EBX
// 0052d7cf: MOV EDI,0x1
// 0052d7d4: CALL core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
//   XREF to: 0052e1d0 (UNCONDITIONAL_CALL)
// 0052d7d9: ADD ESP,0x10
// 0052d7dc: JMP 0x0052d706
//   XREF to: 0052d706 (UNCONDITIONAL_JUMP)
// 0052d7e1: LEA EAX,[ESP + 0x8]
//   Label: caseD_5
//   XREF to: Stack[-0x48] (DATA)
// 0052d7e5: PUSH EAX
// 0052d7e6: MOV EAX,dword ptr [EBX + 0x4]
// 0052d7e9: PUSH dword ptr [EBX + 0x8]
// 0052d7ec: PUSH EAX
// 0052d7ed: PUSH EBX
// 0052d7ee: CALL core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
//   XREF to: 0052e1d0 (UNCONDITIONAL_CALL)
// 0052d7f3: ADD ESP,0x10
// 0052d7f6: JMP 0x0052d70d
//   XREF to: 0052d70d (UNCONDITIONAL_JUMP)
// 0052d7fb: LEA EAX,[ESP + 0x8]
//   Label: caseD_6
//   XREF to: Stack[-0x48] (DATA)
// 0052d7ff: PUSH EAX
// 0052d800: MOV ECX,dword ptr [EBX + 0x4]
// 0052d803: PUSH dword ptr [EBX + 0x8]
// 0052d806: PUSH ECX
// 0052d807: PUSH EBX
// 0052d808: CALL core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
//   XREF to: 0052e1d0 (UNCONDITIONAL_CALL)
// 0052d80d: ADD ESP,0x10
// 0052d810: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 0052d814: PUSH EAX
// 0052d815: MOV ESI,dword ptr [EBX + 0x18]
// 0052d818: PUSH dword ptr [EBX + 0x1c]
// 0052d81b: PUSH ESI
// 0052d81c: PUSH EBX
// 0052d81d: MOV EDI,0x1
// 0052d822: CALL core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
//   XREF to: 0052e1d0 (UNCONDITIONAL_CALL)
// 0052d827: ADD ESP,0x10
// 0052d82a: JMP 0x0052d70d
//   XREF to: 0052d70d (UNCONDITIONAL_JUMP)
// 0052d82f: MOV EDX,dword ptr [EBX + 0xc]
//   Label: default
// 0052d832: PUSH EDX
// 0052d833: MOV ECX,0x63a96c
//   XREF to: 0063a96c (PARAM)
// 0052d838: MOV EAX,0x17e
// 0052d83d: PUSH 0x63a97f
//   XREF to: 0063a97f (DATA)
// 0052d842: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052d848: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052d84d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052d852: ADD ESP,0x8
// 0052d855: JMP 0x0052d706
//   XREF to: 0052d706 (UNCONDITIONAL_JUMP)
// 0052d85a: FLD float ptr [ESP + 0x8]
//   Label: LAB_0052d85a
//   XREF to: Stack[-0x48] (READ)
// 0052d85e: FMUL float ptr [EBX + 0x10]
// 0052d861: FADD float ptr [EBX + 0x14]
// 0052d864: FST float ptr [EBX + 0x14]
// 0052d867: FCOMP double ptr [0x0063aa37]
//   XREF to: 0063aa37 (READ)
// 0052d86d: FNSTSW AX
// 0052d86f: SAHF
// 0052d870: JBE 0x0052d782
//   XREF to: 0052d782 (CONDITIONAL_JUMP)
// 0052d876: PUSH EBX
// 0052d877: CALL core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50
//   XREF to: 0052da50 (UNCONDITIONAL_CALL)
// 0052d87c: MOV EAX,dword ptr [EBX + 0x24]
// 0052d87f: ADD ESP,0x4
// 0052d882: TEST EAX,EAX
// 0052d884: JZ 0x0052d782
//   XREF to: 0052d782 (CONDITIONAL_JUMP)
// 0052d88a: PUSH EBX
// 0052d88b: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052d890: MOV EAX,dword ptr [EAX + 0x24]
// 0052d893: ADD ESP,0x4
// 0052d896: MOV dword ptr [EBX + 0x28],EAX
// 0052d899: JMP 0x0052d782
//   XREF to: 0052d782 (UNCONDITIONAL_JUMP)
// 0052d89e: MOV EAX,dword ptr [ESP + 0x18]
//   Label: caseD_2
//   XREF to: Stack[-0x38] (READ)
// 0052d8a2: MOV dword ptr [EBX + 0x4],EAX
// 0052d8a5: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 0052d8a9: MOV dword ptr [EBX + 0x8],EAX
// 0052d8ac: CMP dword ptr [ESP + 0x24],0x0
//   XREF to: Stack[-0x2c] (READ)
// 0052d8b1: JZ 0x0052d782
//   XREF to: 0052d782 (CONDITIONAL_JUMP)
// 0052d8b7: PUSH EBX
// 0052d8b8: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052d8bd: MOV EAX,dword ptr [EAX + 0x24]
// 0052d8c0: ADD ESP,0x4
// 0052d8c3: MOV dword ptr [EBX + 0x28],EAX
// 0052d8c6: JMP 0x0052d782
//   XREF to: 0052d782 (UNCONDITIONAL_JUMP)
// 0052d8cb: LEA EAX,[ESP + 0x10]
//   Label: caseD_6
//   XREF to: Stack[-0x40] (DATA)
// 0052d8cf: PUSH EAX
// 0052d8d0: PUSH EBX
// 0052d8d1: CALL core_motion.cpp_CMotionController_FUN_0052dbc0
//   XREF to: 0052dbc0 (UNCONDITIONAL_CALL)
// 0052d8d6: ADD ESP,0x8
// 0052d8d9: JMP 0x0052d782
//   XREF to: 0052d782 (UNCONDITIONAL_JUMP)
// 0052d8de: MOV EDX,dword ptr [ESP + 0x14]
//   Label: default
//   XREF to: Stack[-0x3c] (READ)
// 0052d8e2: PUSH EDX
// 0052d8e3: MOV EDI,0x63a9c5
//   XREF to: 0063a9c5 (DATA)
// 0052d8e8: MOV EAX,0x1b7
// 0052d8ed: PUSH 0x63a9d8
//   XREF to: 0063a9d8 (DATA)
// 0052d8f2: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0052d8f8: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052d8fd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052d902: ADD ESP,0x8
// 0052d905: JMP 0x0052d782
//   XREF to: 0052d782 (UNCONDITIONAL_JUMP)
// 0052d90a: LEA EAX,[ESP + 0x10]
//   Label: LAB_0052d90a
//   XREF to: Stack[-0x40] (DATA)
// 0052d90e: PUSH EAX
// 0052d90f: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x48] (DATA)
// 0052d913: PUSH EAX
// 0052d914: MOV ECX,dword ptr [EBX + 0x4]
// 0052d917: PUSH dword ptr [EBX + 0x8]
// 0052d91a: PUSH ECX
// 0052d91b: PUSH EBX
// 0052d91c: CALL core_motion.cpp_CMotionController_FUN_0052e020
//   XREF to: 0052e020 (UNCONDITIONAL_CALL)
// 0052d921: ADD ESP,0x14
// 0052d924: MOV ESI,EAX
// 0052d926: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (READ)
// 0052d92a: DEC EAX
// 0052d92b: CMP EAX,0x5
// 0052d92e: JA 0x0052d8de
//   XREF to: 0052d8de (CONDITIONAL_JUMP)
// 0052d930: JMP dword ptr [EAX*0x4 + 0x52d5f4]
//   Label: switchD
//   XREF to: 0052d89e (COMPUTED_JUMP)
//   XREF to: 0052d8cb (COMPUTED_JUMP)
//   XREF to: 0052d5f4 (DATA)

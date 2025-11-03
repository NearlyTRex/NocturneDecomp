// Name: core_msnedit.cpp_FUN_00536e20
// Address: 00536e20
// Address Range: [[00536e20, 00537225]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00536e20()
// Cross-references:
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c6a7 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_%s_(%s)_0063b6f4
//   TerminatedCString s_X_0063b6fc
//   TerminatedCString s_s_6_2f_0063b700
//   TerminatedCString s_Enter_frame_number_0063b706
//   undefined4 DAT_0063b719
//   undefined4 DAT_0063b71e
//   undefined4 DAT_0063b722
//   undefined4 DAT_0063b727
//   undefined4 DAT_0063b72c
//   undefined4 DAT_0063b730
//   undefined4 DAT_0063b73c
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   undefined4 g_CGameInstance.delta_time_float
//   undefined4 DAT_02f33760
//   undefined4 DAT_02f33768
//   undefined4 DAT_02f7a028
//   undefined4 DAT_02f7a02c
//   undefined4 DAT_02f7a094
//   undefined4 DAT_02f7c52c
//   undefined4 DAT_02f7c530
//   undefined4 DAT_02f7c538
// Function calls:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dcf0
//   core_motion.cpp_FUN_0052ddb0
//   core_msnedit.cpp_FUN_00536cd0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   crt_math.c_ceil_FUN_006001b2
//   crt_math.c_floor_FUN_005feb90
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_fillRectWithBorder_FUN_00403200
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_msnedit.cpp_FUN_00536e20() */

void core_msnedit_cpp_FUN_00536e20(void)

{
  CMotionController *this_ptr;
  int iVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float10 extraout_ST0;
  float in_stack_00000014;
  float fStack_d4;
  float fStack_c8;
  
  DAT_02f7c538 = 0;
  if ((((*(int *)(g_CDemonMissionPtr->field2_0xc + 0x1c) != 0) && (-1 < DAT_02f7c52c)) &&
      (DAT_02f7c52c < _DAT_02f7a028)) &&
     ((*(int *)(&DAT_02f7a02c + DAT_02f7c52c * 0xec) == 0xd &&
      (this_ptr = *(CMotionController **)(&DAT_02f7a094 + DAT_02f7c52c * 0xec),
      this_ptr != (CMotionController *)0x0)))) {
    iVar2 = *(int *)(g_CDemonMissionPtr->field2_0xc + 0x14) + -0x38;
    iVar1 = *(int *)(g_CDemonMissionPtr->field2_0xc + 0x14) + -1;
    if (((0 < g_MouseX) && ((g_MouseX < 0x9c && (iVar2 <= g_MouseY)))) && (g_MouseY <= iVar1)) {
      DAT_02f7c538 = 1;
    }
    engine_2d_c_fillRectWithBorder_FUN_00403200(1,iVar2,0x9b,iVar1,0,0xff);
    iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0(this_ptr);
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dcf0(this_ptr);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff18,"?%s (%s)" + 1,iVar1,iVar2);
    iVar2 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar2 != 0) {
      core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                ((CActorProperty *)(&DAT_02f7a02c + DAT_02f7c52c * 0xec),
                 *(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c));
    }
    iVar2 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar2 != 0) {
      DAT_02f7c52c = -1;
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff28,"%6.2f");
    iVar2 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar2 != 0) {
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",&fStack_d4,true,0.0,
                 (float)(*(int *)(iVar1 + 100) + -1),true);
    }
    fStack_d4 = 0.0;
    iVar2 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar2 != 0) {
      DAT_02f7c530 = 0;
    }
    fStack_d4 = 0.0;
    iVar2 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar2 != 0) {
      fStack_d4 = 7.662741e-39;
      crt_math_c_ceil_FUN_006001b2((double)fStack_c8);
      if ((double)CONCAT44(extraout_EDX,extraout_EAX) + _DAT_0063b73c < 0.0) {
        in_stack_00000014 = (float)(*(int *)(iVar1 + 100) + -1);
      }
      DAT_02f7c530 = 0;
    }
    if (DAT_02f7c530 == 0) {
      fStack_d4 = 1.4013e-45;
      iVar1 = core_msnedit_cpp_FUN_00536cd0();
      if (iVar1 != 0) {
        DAT_02f7c530 = 1;
      }
    }
    else {
      fStack_d4 = 1.4013e-45;
      iVar1 = core_msnedit_cpp_FUN_00536cd0();
      if (iVar1 != 0) {
        DAT_02f7c530 = 0;
      }
    }
    fStack_d4 = in_stack_00000014;
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      crt_math_c_floor_FUN_005feb90((double)extraout_ST0);
      DAT_02f7c530 = 0;
    }
    fStack_d4 = in_stack_00000014;
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      DAT_02f7c530 = 0;
    }
    fStack_d4 = 7.663201e-39;
    core_motion_cpp_FUN_0052ddb0();
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059e000();
  }
  return;
}


// Assembly code:
// 00536e20: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00536e20
// 00536e21: PUSH ESI
// 00536e22: PUSH EDI
// 00536e23: PUSH EBP
// 00536e24: MOV EBP,ESP
// 00536e26: SUB ESP,0xe8
// 00536e2c: AND ESP,0xfffffff8
// 00536e2f: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00536e35: XOR EDX,EDX
// 00536e37: MOV ECX,dword ptr [EDI + 0x28]
//   XREF to: 02f33768 (READ)
// 00536e3a: MOV dword ptr [0x02f7c538],EDX
//   XREF to: 02f7c538 (WRITE)
// 00536e40: TEST ECX,ECX
// 00536e42: JZ 0x005371ef
//   XREF to: 005371ef (CONDITIONAL_JUMP)
// 00536e48: MOV EBX,dword ptr [0x02f7c52c]
//   XREF to: 02f7c52c (READ)
// 00536e4e: TEST EBX,EBX
// 00536e50: JL 0x005371ef
//   XREF to: 005371ef (CONDITIONAL_JUMP)
// 00536e56: CMP EBX,dword ptr [0x02f7a028]
//   XREF to: 02f7a028 (READ)
// 00536e5c: JGE 0x005371ef
//   XREF to: 005371ef (CONDITIONAL_JUMP)
// 00536e62: MOV EAX,EBX
// 00536e64: SHL EBX,0x4
// 00536e67: SUB EBX,EAX
// 00536e69: SHL EBX,0x2
// 00536e6c: SUB EBX,EAX
// 00536e6e: SHL EBX,0x2
// 00536e71: CMP dword ptr [EBX + 0x2f7a02c],0xd
//   XREF to: 02f7a02c (DATA)
// 00536e78: JNZ 0x005371ef
//   XREF to: 005371ef (CONDITIONAL_JUMP)
// 00536e7e: MOV ESI,dword ptr [EBX + 0x2f7a094]
//   XREF to: 02f7a094 (DATA)
// 00536e84: TEST ESI,ESI
// 00536e86: JZ 0x005371ef
//   XREF to: 005371ef (CONDITIONAL_JUMP)
// 00536e8c: MOV ECX,0x9b
// 00536e91: MOV EDX,0x1
// 00536e96: MOV EAX,dword ptr [EDI + 0x20]
//   XREF to: 02f33760 (READ)
// 00536e99: MOV EBX,dword ptr [EDI + 0x20]
//   XREF to: 02f33760 (READ)
// 00536e9c: MOV dword ptr [ESP + 0xe4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00536ea3: SUB EBX,0x38
// 00536ea6: MOV EDI,dword ptr [EDI + 0x20]
//   XREF to: 02f33760 (READ)
// 00536ea9: SUB EAX,EDX
// 00536eab: SUB EDI,0x33
// 00536eae: MOV ECX,0x4
// 00536eb3: MOV dword ptr [ESP + 0xd8],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00536eba: MOV EDI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 00536ec0: MOV dword ptr [ESP + 0xd4],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00536ec7: CMP EDI,EDX
// 00536ec9: JL 0x00536ee7
//   XREF to: 00536ee7 (CONDITIONAL_JUMP)
// 00536ecb: CMP EDI,0x9b
// 00536ed1: JG 0x00536ee7
//   XREF to: 00536ee7 (CONDITIONAL_JUMP)
// 00536ed3: MOV EDI,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00536ed9: CMP EBX,EDI
// 00536edb: JG 0x00536ee7
//   XREF to: 00536ee7 (CONDITIONAL_JUMP)
// 00536edd: CMP EAX,EDI
// 00536edf: JL 0x00536ee7
//   XREF to: 00536ee7 (CONDITIONAL_JUMP)
// 00536ee1: MOV dword ptr [0x02f7c538],EDX
//   XREF to: 02f7c538 (WRITE)
// 00536ee7: PUSH 0xff
//   Label: LAB_00536ee7
// 00536eec: PUSH 0x0
// 00536eee: PUSH EAX
// 00536eef: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x14] (READ)
// 00536ef6: PUSH EAX
// 00536ef7: PUSH EBX
// 00536ef8: PUSH EDX
// 00536ef9: CALL engine_2d.c_fillRectWithBorder_FUN_00403200
//   XREF to: 00403200 (UNCONDITIONAL_CALL)
// 00536efe: ADD ESP,0x18
// 00536f01: PUSH ESI
// 00536f02: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00536f07: FLD float ptr [ESI + 0x8]
// 00536f0a: ADD ESP,0x4
// 00536f0d: MOV EBX,EAX
// 00536f0f: MOV EDI,EAX
// 00536f11: PUSH ESI
// 00536f12: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xf8] (WRITE)
// 00536f16: CALL core_motion.cpp_CMotionController_FUN_0052dcf0
//   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)
// 00536f1b: ADD ESP,0x4
// 00536f1e: PUSH EAX
// 00536f1f: PUSH EBX
// 00536f20: PUSH 0x63b6f4
//   XREF to: 0063b6f4 (DATA)
// 00536f25: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xf4] (DATA)
// 00536f29: PUSH EAX
// 00536f2a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00536f2f: ADD ESP,0x10
// 00536f32: PUSH 0x0
// 00536f34: PUSH 0x1
// 00536f36: MOV EDX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x20] (READ)
// 00536f3d: PUSH EDX
// 00536f3e: MOV ECX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x24] (READ)
// 00536f45: PUSH ECX
// 00536f46: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xf4] (DATA)
// 00536f4a: PUSH EAX
// 00536f4b: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 00536f50: ADD ESP,0x14
// 00536f53: TEST EAX,EAX
// 00536f55: JZ 0x00536f83
//   XREF to: 00536f83 (CONDITIONAL_JUMP)
// 00536f57: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 00536f5c: MOV EBX,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 00536f5f: MOV EAX,[0x02f7c52c]
//   XREF to: 02f7c52c (READ)
// 00536f64: PUSH EBX
// 00536f65: MOV EBX,EAX
// 00536f67: SHL EBX,0x4
// 00536f6a: SUB EBX,EAX
// 00536f6c: SHL EBX,0x2
// 00536f6f: SUB EBX,EAX
// 00536f71: SHL EBX,0x2
// 00536f74: ADD EBX,0x2f7a02c
//   XREF to: 02f7a02c (DATA)
// 00536f7a: PUSH EBX
// 00536f7b: CALL core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
//   XREF to: 0040eed0 (UNCONDITIONAL_CALL)
// 00536f80: ADD ESP,0x8
// 00536f83: PUSH 0x0
//   Label: LAB_00536f83
// 00536f85: PUSH 0x1
// 00536f87: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x20] (READ)
// 00536f8e: PUSH EAX
// 00536f8f: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x14] (READ)
// 00536f96: SUB EAX,0x11
// 00536f99: PUSH EAX
// 00536f9a: PUSH 0x63b6fc
//   XREF to: 0063b6fc (DATA)
// 00536f9f: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 00536fa4: ADD ESP,0x14
// 00536fa7: TEST EAX,EAX
// 00536fa9: JZ 0x00536fb5
//   XREF to: 00536fb5 (CONDITIONAL_JUMP)
// 00536fab: MOV dword ptr [0x02f7c52c],0xffffffff
//   XREF to: 02f7c52c (WRITE)
// 00536fb5: FLD float ptr [ESP]
//   Label: LAB_00536fb5
//   XREF to: Stack[-0xf8] (DATA)
// 00536fb8: SUB ESP,0x8
// 00536fbb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 00536fbe: PUSH 0x63b700
//   XREF to: 0063b700 (DATA)
// 00536fc3: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xf4] (DATA)
// 00536fc7: PUSH EAX
// 00536fc8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00536fcd: ADD ESP,0x10
// 00536fd0: PUSH 0x0
// 00536fd2: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x20] (READ)
// 00536fd9: PUSH 0x1
// 00536fdb: ADD EAX,0x10
// 00536fde: PUSH EAX
// 00536fdf: MOV ECX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x24] (READ)
// 00536fe6: PUSH ECX
// 00536fe7: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xf4] (DATA)
// 00536feb: PUSH EAX
// 00536fec: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 00536ff1: ADD ESP,0x14
// 00536ff4: TEST EAX,EAX
// 00536ff6: JZ 0x0053702f
//   XREF to: 0053702f (CONDITIONAL_JUMP)
// 00536ff8: MOV EAX,dword ptr [EDI + 0x64]
// 00536ffb: DEC EAX
// 00536ffc: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00537003: PUSH 0x1
// 00537005: FILD dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x18] (READ)
// 0053700c: SUB ESP,0x4
// 0053700f: FSTP float ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 00537012: PUSH 0x0
// 00537014: PUSH 0x1
// 00537016: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xf8] (DATA)
// 0053701a: PUSH EAX
// 0053701b: PUSH 0x63b706
//   XREF to: 0063b706 (DATA)
// 00537020: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00537026: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00537027: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0053702c: ADD ESP,0x1c
// 0053702f: PUSH 0x0
//   Label: LAB_0053702f
// 00537031: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x20] (READ)
// 00537038: PUSH 0x1
// 0053703a: ADD EAX,0x21
// 0053703d: MOV EBX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x24] (READ)
// 00537044: PUSH EAX
// 00537045: ADD EBX,0x7
// 00537048: PUSH EBX
// 00537049: PUSH 0x63b719
//   XREF to: 0063b719 (DATA)
// 0053704e: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00537055: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 0053705a: ADD ESP,0x14
// 0053705d: TEST EAX,EAX
// 0053705f: JZ 0x0053706c
//   XREF to: 0053706c (CONDITIONAL_JUMP)
// 00537061: XOR EDX,EDX
// 00537063: MOV dword ptr [0x02f7c530],EDX
//   XREF to: 02f7c530 (WRITE)
// 00537069: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0xf8] (DATA)
// 0053706c: PUSH 0x0
//   Label: LAB_0053706c
// 0053706e: PUSH 0x0
// 00537070: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x1c] (READ)
// 00537077: PUSH EAX
// 00537078: ADD EBX,0x1c
// 0053707b: PUSH EBX
// 0053707c: PUSH 0x63b71e
//   XREF to: 0063b71e (DATA)
// 00537081: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 00537086: ADD ESP,0x14
// 00537089: TEST EAX,EAX
// 0053708b: JZ 0x005370e2
//   XREF to: 005370e2 (CONDITIONAL_JUMP)
// 0053708d: FLD float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 00537090: SUB ESP,0x8
// 00537093: FSTP double ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 00537096: CALL crt_math.c_ceil_FUN_006001b2
//   XREF to: 006001b2 (UNCONDITIONAL_CALL)
// 0053709b: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005370a2: MOV dword ptr [ESP + 0xd8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005370a9: FLD double ptr [ESP + 0xd4]
//   XREF to: Stack[-0x2c] (READ)
// 005370b0: FADD double ptr [0x0063b73c]
//   XREF to: 0063b73c (READ)
// 005370b6: ADD ESP,0x8
// 005370b9: FST float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005370bc: FLDZ
// 005370be: FCOMPP
// 005370c0: FNSTSW AX
// 005370c2: SAHF
// 005370c3: JBE 0x005370da
//   XREF to: 005370da (CONDITIONAL_JUMP)
// 005370c5: MOV EAX,dword ptr [EDI + 0x64]
// 005370c8: DEC EAX
// 005370c9: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005370d0: FILD dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 005370d7: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005370da: XOR EDX,EDX
//   Label: LAB_005370da
// 005370dc: MOV dword ptr [0x02f7c530],EDX
//   XREF to: 02f7c530 (WRITE)
// 005370e2: MOV ECX,dword ptr [0x02f7c530]
//   Label: LAB_005370e2
//   XREF to: 02f7c530 (READ)
// 005370e8: ADD EBX,0x15
// 005370eb: TEST ECX,ECX
// 005370ed: JZ 0x005371f6
//   XREF to: 005371f6 (CONDITIONAL_JUMP)
// 005370f3: PUSH 0x0
// 005370f5: PUSH 0x1
// 005370f7: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x1c] (READ)
// 005370fe: PUSH ECX
// 005370ff: PUSH EBX
// 00537100: PUSH 0x63b722
//   XREF to: 0063b722 (DATA)
// 00537105: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 0053710a: ADD ESP,0x14
// 0053710d: TEST EAX,EAX
// 0053710f: JZ 0x00537118
//   XREF to: 00537118 (CONDITIONAL_JUMP)
// 00537111: XOR EAX,EAX
// 00537113: MOV [0x02f7c530],EAX
//   XREF to: 02f7c530 (WRITE)
// 00537118: PUSH 0x0
//   Label: LAB_00537118
// 0053711a: PUSH 0x0
// 0053711c: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x1c] (READ)
// 00537123: PUSH EDX
// 00537124: ADD EBX,0x1c
// 00537127: PUSH EBX
// 00537128: PUSH 0x63b72c
//   XREF to: 0063b72c (DATA)
// 0053712d: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 00537132: ADD ESP,0x14
// 00537135: TEST EAX,EAX
// 00537137: JZ 0x0053716e
//   XREF to: 0053716e (CONDITIONAL_JUMP)
// 00537139: FLD float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 0053713c: SUB ESP,0x8
// 0053713f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 00537142: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00537147: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0053714e: MOV dword ptr [ESP + 0xd8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00537155: XOR ECX,ECX
// 00537157: FLD double ptr [ESP + 0xd4]
//   XREF to: Stack[-0x2c] (READ)
// 0053715e: FLD1
// 00537160: ADD ESP,0x8
// 00537163: FADDP
// 00537165: MOV dword ptr [0x02f7c530],ECX
//   XREF to: 02f7c530 (WRITE)
// 0053716b: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 0053716e: PUSH 0x0
//   Label: LAB_0053716e
// 00537170: PUSH 0x1
// 00537172: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x1c] (READ)
// 00537179: PUSH EAX
// 0053717a: ADD EBX,0x15
// 0053717d: PUSH EBX
// 0053717e: PUSH 0x63b730
//   XREF to: 0063b730 (DATA)
// 00537183: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 00537188: ADD ESP,0x14
// 0053718b: TEST EAX,EAX
// 0053718d: JZ 0x005371ac
//   XREF to: 005371ac (CONDITIONAL_JUMP)
// 0053718f: MOV EAX,dword ptr [EDI + 0x64]
// 00537192: DEC EAX
// 00537193: XOR EDX,EDX
// 00537195: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0053719c: MOV dword ptr [0x02f7c530],EDX
//   XREF to: 02f7c530 (WRITE)
// 005371a2: FILD dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 005371a9: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005371ac: CMP dword ptr [0x02f7c530],0x0
//   Label: LAB_005371ac
//   XREF to: 02f7c530 (READ)
// 005371b3: JZ 0x005371d9
//   XREF to: 005371d9 (CONDITIONAL_JUMP)
// 005371b5: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005371ba: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005371c0: FMUL float ptr [EDI + 0x20]
// 005371c3: FADD float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005371c6: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005371c9: FILD dword ptr [EDI + 0x64]
// 005371cc: FCOMP float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005371cf: FNSTSW AX
// 005371d1: SAHF
// 005371d2: JA 0x005371d9
//   XREF to: 005371d9 (CONDITIONAL_JUMP)
// 005371d4: XOR EBX,EBX
// 005371d6: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0xf8] (DATA)
// 005371d9: PUSH dword ptr [ESP]
//   Label: LAB_005371d9
//   XREF to: Stack[-0xf8] (DATA)
// 005371dc: PUSH EDI
// 005371dd: PUSH ESI
// 005371de: CALL core_motion.cpp_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 005371e3: ADD ESP,0xc
// 005371e6: PUSH ESI
// 005371e7: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005371ec: ADD ESP,0x4
// 005371ef: MOV ESP,EBP
//   Label: LAB_005371ef
// 005371f1: POP EBP
// 005371f2: POP EDI
// 005371f3: POP ESI
// 005371f4: POP EBX
// 005371f5: RET
// 005371f6: PUSH ECX
//   Label: LAB_005371f6
// 005371f7: PUSH 0x1
// 005371f9: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x1c] (READ)
// 00537200: PUSH EAX
// 00537201: PUSH EBX
// 00537202: PUSH 0x63b727
//   XREF to: 0063b727 (DATA)
// 00537207: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 0053720c: ADD ESP,0x14
// 0053720f: TEST EAX,EAX
// 00537211: JZ 0x00537118
//   XREF to: 00537118 (CONDITIONAL_JUMP)
// 00537217: MOV dword ptr [0x02f7c530],0x1
//   XREF to: 02f7c530 (WRITE)
// 00537221: JMP 0x00537118
//   XREF to: 00537118 (UNCONDITIONAL_JUMP)

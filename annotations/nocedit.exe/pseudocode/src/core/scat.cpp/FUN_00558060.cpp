// Name: core_scat.cpp_FUN_00558060
// Address: 00558060
// Address Range: [[00558060, 005582b5]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558060()
// Cross-references:
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557435 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00558038 = 00558106
// Function calls:
//   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
//   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00558060(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_00558060(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int local_14;
  
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0
                    (&(in_stack_00000004->model).motion_controller);
  if ((*(int *)(iVar1 + 0x24) != 0xc) &&
     (iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller),
     *(int *)(iVar1 + 0x24) != 0xd)) {
    iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x5388);
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
      iVar1 = 0;
    }
    iVar2 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
    if (((iVar2 != 0) && (iVar1 != iVar2)) && (*(int *)(iVar2 + 0x2e0) == 8)) {
      iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller);
      if (*(int *)(iVar2 + 0x24) == 0) {
        in_stack_00000004[2].cloth_data[0x5508] = '\0';
        in_stack_00000004[2].cloth_data[0x5509] = '\0';
        in_stack_00000004[2].cloth_data[0x550a] = '\0';
        in_stack_00000004[2].cloth_data[0x550b] = '\0';
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller);
      }
    }
    local_14 = 0;
    while (0.0 < in_stack_00000008) {
      iVar2 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
      if ((iVar1 == iVar2) && (iVar2 != 0)) {
        switch(*(undefined4 *)(iVar2 + 0x2e0)) {
        default:
          break;
        case 8:
        }
      }
      iVar2 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(in_stack_00000004);
      core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                (&(in_stack_00000004->model).motion_controller);
      if (-1 < iVar2) {
        iVar3 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
        if (iVar1 != iVar3) {
          if (iVar3 != 0) {
            if (iVar3 != 0) {
              if (*(int *)(iVar3 + 0x2e0) == 8) {
                iVar3 = 0;
              }
              else {
                iVar3 = 1;
              }
            }
            if (iVar3 == iVar2) {
              (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) +
                          0xf0))();
              in_stack_00000004[2].cloth_data[0x5508] = '\0';
              in_stack_00000004[2].cloth_data[0x5509] = '\0';
              in_stack_00000004[2].cloth_data[0x550a] = '\0';
              in_stack_00000004[2].cloth_data[0x550b] = '\0';
            }
          }
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
            if ((iVar1 == 0) || (*(int *)(iVar1 + 0x2e0) == 8)) {
              iVar3 = 0;
            }
            else {
              iVar3 = 1;
            }
            if (((iVar3 == iVar2) &&
                (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) = iVar1, iVar1 != 0)) &&
               ((**(code **)(*(int *)(iVar1 + 0x154) + 0xf0))(),
               *(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x2e0) == 8)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(in_stack_00000004);
      }
      local_14 = local_14 + 1;
      if (1 < local_14) {
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 00558060: PUSH EBX
//   Label: core_scat.cpp_FUN_00558060
// 00558061: PUSH ESI
// 00558062: PUSH EDI
// 00558063: PUSH EBP
// 00558064: MOV EBP,ESP
// 00558066: SUB ESP,0x10
// 00558069: AND ESP,0xfffffff8
// 0055806c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055806f: LEA ESI,[EBX + 0x158]
// 00558075: PUSH ESI
// 00558076: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0055807b: MOV EAX,dword ptr [EAX + 0x24]
// 0055807e: ADD ESP,0x4
// 00558081: CMP EAX,0xc
// 00558084: JNZ 0x0055808d
//   XREF to: 0055808d (CONDITIONAL_JUMP)
// 00558086: MOV ESP,EBP
//   Label: LAB_00558086
// 00558088: POP EBP
// 00558089: POP EDI
// 0055808a: POP ESI
// 0055808b: POP EBX
// 0055808c: RET
// 0055808d: PUSH ESI
//   Label: LAB_0055808d
// 0055808e: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00558093: MOV EAX,dword ptr [EAX + 0x24]
// 00558096: ADD ESP,0x4
// 00558099: CMP EAX,0xd
// 0055809c: JZ 0x00558086
//   XREF to: 00558086 (CONDITIONAL_JUMP)
// 0055809e: LEA EAX,[EBX + 0x1f738]
// 005580a4: MOV EDX,dword ptr [EBX + 0x1fbd4]
// 005580aa: MOV ESI,dword ptr [EAX + 0x330]
// 005580b0: TEST EDX,EDX
// 005580b2: JZ 0x005581f4
//   XREF to: 005581f4 (CONDITIONAL_JUMP)
// 005580b8: MOV ECX,dword ptr [EBX + 0x1fbe8]
//   Label: LAB_005580b8
// 005580be: TEST ECX,ECX
// 005580c0: JNZ 0x005581fb
//   XREF to: 005581fb (CONDITIONAL_JUMP)
// 005580c6: XOR ECX,ECX
//   Label: LAB_005580c6
// 005580c8: LEA EAX,[EBX + 0x158]
// 005580ce: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005580d2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005580d6: FLD float ptr [EBP + 0x18]
//   Label: LAB_005580d6
//   XREF to: Stack[0x8] (READ)
// 005580d9: FLDZ
// 005580db: FCOMPP
// 005580dd: FNSTSW AX
// 005580df: SAHF
// 005580e0: JNC 0x00558086
//   XREF to: 00558086 (CONDITIONAL_JUMP)
// 005580e2: MOV EDI,dword ptr [EBX + 0x1fbe8]
// 005580e8: CMP ESI,EDI
// 005580ea: JNZ 0x0055824a
//   XREF to: 0055824a (CONDITIONAL_JUMP)
// 005580f0: TEST EDI,EDI
// 005580f2: JZ 0x0055810b
//   XREF to: 0055810b (CONDITIONAL_JUMP)
// 005580f4: MOV EAX,dword ptr [EDI + 0x2e0]
// 005580fa: CMP EAX,0x8
// 005580fd: JA 0x00558106
//   XREF to: 00558106 (CONDITIONAL_JUMP)
// 005580ff: JMP dword ptr [EAX*0x4 + 0x558038]
//   Label: switchD
//   XREF to: 00558106 (COMPUTED_JUMP)
//   XREF to: 00558243 (COMPUTED_JUMP)
//   XREF to: 00558038 (DATA)
// 00558106: MOV EDI,0x2
//   Label: caseD_7
// 0055810b: PUSH EDI
//   Label: LAB_0055810b
// 0055810c: LEA EAX,[EBP + 0x18]
//   XREF to: Stack[0x8] (DATA)
// 0055810f: PUSH EAX
// 00558110: PUSH EBX
// 00558111: CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
//   XREF to: 0042e370 (UNCONDITIONAL_CALL)
// 00558116: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0055811a: ADD ESP,0xc
// 0055811d: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00558121: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00558125: PUSH EAX
// 00558126: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0055812b: ADD ESP,0x4
// 0055812e: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x20] (DATA)
// 00558132: JL 0x005581db
//   XREF to: 005581db (CONDITIONAL_JUMP)
// 00558138: MOV ECX,dword ptr [EBX + 0x1fbe8]
// 0055813e: CMP ESI,ECX
// 00558140: JZ 0x005581d1
//   XREF to: 005581d1 (CONDITIONAL_JUMP)
// 00558146: TEST ECX,ECX
// 00558148: JZ 0x0055817a
//   XREF to: 0055817a (CONDITIONAL_JUMP)
// 0055814a: MOV EAX,ECX
// 0055814c: JNZ 0x00558285
//   XREF to: 00558285 (CONDITIONAL_JUMP)
// 00558152: CMP EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00558152
//   XREF to: Stack[-0x18] (READ)
// 00558156: JNZ 0x0055817a
//   XREF to: 0055817a (CONDITIONAL_JUMP)
// 00558158: PUSH 0x1
// 0055815a: MOV EAX,dword ptr [EBX + 0x1fbe8]
// 00558160: PUSH EAX
// 00558161: MOV EDX,dword ptr [EAX + 0x154]
// 00558167: CALL dword ptr [EDX + 0xf0]
// 0055816d: ADD ESP,0x8
// 00558170: MOV dword ptr [EBX + 0x1fbe8],0x0
// 0055817a: CMP dword ptr [EBX + 0x1fbd4],0x0
//   Label: LAB_0055817a
// 00558181: JZ 0x005581d1
//   XREF to: 005581d1 (CONDITIONAL_JUMP)
// 00558183: TEST ESI,ESI
// 00558185: JNZ 0x0055829f
//   XREF to: 0055829f (CONDITIONAL_JUMP)
// 0055818b: XOR EAX,EAX
//   Label: LAB_0055818b
// 0055818d: CMP EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0055818d
//   XREF to: Stack[-0x18] (READ)
// 00558191: JNZ 0x005581d1
//   XREF to: 005581d1 (CONDITIONAL_JUMP)
// 00558193: MOV dword ptr [EBX + 0x1fbe8],ESI
// 00558199: TEST ESI,ESI
// 0055819b: JZ 0x005581d1
//   XREF to: 005581d1 (CONDITIONAL_JUMP)
// 0055819d: PUSH 0x2
// 0055819f: MOV EDX,dword ptr [ESI + 0x154]
// 005581a5: PUSH ESI
// 005581a6: CALL dword ptr [EDX + 0xf0]
// 005581ac: MOV EAX,dword ptr [EBX + 0x1fbe8]
// 005581b2: MOV EDX,dword ptr [EAX + 0x2e0]
// 005581b8: ADD ESP,0x8
// 005581bb: CMP EDX,0x8
// 005581be: JNZ 0x005581d1
//   XREF to: 005581d1 (CONDITIONAL_JUMP)
// 005581c0: PUSH 0x1
// 005581c2: PUSH 0x6
// 005581c4: MOV ECX,dword ptr [ESP + 0xc]
// 005581c8: PUSH ECX
// 005581c9: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005581ce: ADD ESP,0xc
// 005581d1: PUSH EDI
//   Label: LAB_005581d1
// 005581d2: PUSH EBX
// 005581d3: CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
//   XREF to: 0042e8c0 (UNCONDITIONAL_CALL)
// 005581d8: ADD ESP,0x8
// 005581db: MOV EDI,dword ptr [ESP + 0xc]
//   Label: LAB_005581db
//   XREF to: Stack[-0x14] (READ)
// 005581df: INC EDI
// 005581e0: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005581e4: CMP EDI,0x2
// 005581e7: JL 0x005580d6
//   XREF to: 005580d6 (CONDITIONAL_JUMP)
// 005581ed: MOV ESP,EBP
// 005581ef: POP EBP
// 005581f0: POP EDI
// 005581f1: POP ESI
// 005581f2: POP EBX
// 005581f3: RET
// 005581f4: XOR ESI,ESI
//   Label: LAB_005581f4
// 005581f6: JMP 0x005580b8
//   XREF to: 005580b8 (UNCONDITIONAL_JUMP)
// 005581fb: CMP ESI,ECX
//   Label: LAB_005581fb
// 005581fd: JZ 0x005580c6
//   XREF to: 005580c6 (CONDITIONAL_JUMP)
// 00558203: CMP dword ptr [ECX + 0x2e0],0x8
// 0055820a: JNZ 0x005580c6
//   XREF to: 005580c6 (CONDITIONAL_JUMP)
// 00558210: LEA EDI,[EBX + 0x158]
// 00558216: PUSH EDI
// 00558217: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0055821c: MOV EAX,dword ptr [EAX + 0x24]
// 0055821f: ADD ESP,0x4
// 00558222: TEST EAX,EAX
// 00558224: JNZ 0x00558231
//   XREF to: 00558231 (CONDITIONAL_JUMP)
// 00558226: MOV dword ptr [EBX + 0x1fbe8],EAX
// 0055822c: JMP 0x005580c6
//   XREF to: 005580c6 (UNCONDITIONAL_JUMP)
// 00558231: PUSH 0x1
//   Label: LAB_00558231
// 00558233: PUSH 0x0
// 00558235: PUSH EDI
// 00558236: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0055823b: ADD ESP,0xc
// 0055823e: JMP 0x005580c6
//   XREF to: 005580c6 (UNCONDITIONAL_JUMP)
// 00558243: XOR EDI,EDI
//   Label: caseD_8
// 00558245: JMP 0x0055810b
//   XREF to: 0055810b (UNCONDITIONAL_JUMP)
// 0055824a: TEST EDI,EDI
//   Label: LAB_0055824a
// 0055824c: JNZ 0x0055826d
//   XREF to: 0055826d (CONDITIONAL_JUMP)
// 0055824e: TEST ESI,ESI
// 00558250: JZ 0x0055810b
//   XREF to: 0055810b (CONDITIONAL_JUMP)
// 00558256: CMP dword ptr [ESI + 0x2e0],0x8
// 0055825d: JZ 0x0055810b
//   XREF to: 0055810b (CONDITIONAL_JUMP)
// 00558263: MOV EDI,0x1
//   Label: LAB_00558263
// 00558268: JMP 0x0055810b
//   XREF to: 0055810b (UNCONDITIONAL_JUMP)
// 0055826d: MOV EAX,EDI
//   Label: LAB_0055826d
// 0055826f: JZ 0x0055810b
//   XREF to: 0055810b (CONDITIONAL_JUMP)
// 00558275: CMP dword ptr [EDI + 0x2e0],0x8
// 0055827c: JNZ 0x00558263
//   XREF to: 00558263 (CONDITIONAL_JUMP)
// 0055827e: XOR EDI,EDI
// 00558280: JMP 0x0055810b
//   XREF to: 0055810b (UNCONDITIONAL_JUMP)
// 00558285: CMP dword ptr [ECX + 0x2e0],0x8
//   Label: LAB_00558285
// 0055828c: JNZ 0x00558295
//   XREF to: 00558295 (CONDITIONAL_JUMP)
// 0055828e: XOR EAX,ECX
// 00558290: JMP 0x00558152
//   XREF to: 00558152 (UNCONDITIONAL_JUMP)
// 00558295: MOV EAX,0x1
//   Label: LAB_00558295
// 0055829a: JMP 0x00558152
//   XREF to: 00558152 (UNCONDITIONAL_JUMP)
// 0055829f: CMP dword ptr [ESI + 0x2e0],0x8
//   Label: LAB_0055829f
// 005582a6: JZ 0x0055818b
//   XREF to: 0055818b (CONDITIONAL_JUMP)
// 005582ac: MOV EAX,0x1
// 005582b1: JMP 0x0055818d
//   XREF to: 0055818d (UNCONDITIONAL_JUMP)

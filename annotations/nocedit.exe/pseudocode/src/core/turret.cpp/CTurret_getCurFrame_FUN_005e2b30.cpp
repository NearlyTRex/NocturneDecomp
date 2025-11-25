// Name: core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
// Address: 005e2b30
// Address Range: [[005e2b30, 005e2c3f]]
// Convention: unknown
// Signature: undefined core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30()
// Cross-references:
//   core_turret.cpp_CTurret_FUN_005e2320 (005e2320) at 005e2357 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2910 (005e2910) at 005e2929 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005e2b14 = 005e2bcd
//   TerminatedCString s_core_turret_cpp_00656688
//   TerminatedCString s_CTurret_getCurFrame_inva_0065669b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_turret.cpp_CTurret_getCurFrame(CTurret* param_1, undefined4
   param_2) */

float core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(void)

{
  CKeyFramedModel *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  int in_stack_00000004;
  int in_stack_00000008;
  float local_14;
  float local_10;
  
  switch(*(undefined4 *)(in_stack_00000004 + 0x700)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
  case 3:
    break;
  case 4:
    break;
  default:
    g_CurrentFilename = "..\\core\\turret.cpp";
    g_CurrentLineNumber = 0x1c1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTurret::getCurFrame - invalid state");
  }
  if (local_14 < 0.0) {
    local_10 = 0.0;
  }
  else {
    if (1.0 < local_14) {
      local_14 = 1.0;
    }
    if (in_stack_00000008 == 0) {
      this_ptr = (CKeyFramedModelInstance *)(in_stack_00000004 + 0x158);
    }
    else {
      this_ptr = (CKeyFramedModelInstance *)(in_stack_00000004 + 0x584);
    }
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
    local_10 = (float)(pCVar1->frame_count + -1) * local_14;
  }
  return local_10;
}


// Assembly code:
// 005e2b30: PUSH EBX
//   Label: core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
// 005e2b31: PUSH ESI
// 005e2b32: PUSH EBP
// 005e2b33: MOV EBP,ESP
// 005e2b35: SUB ESP,0x14
// 005e2b38: AND ESP,0xfffffff8
// 005e2b3b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e2b3e: XOR EDX,EDX
// 005e2b40: MOV EAX,dword ptr [EBX + 0x700]
// 005e2b46: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005e2b4a: CMP EAX,0x4
// 005e2b4d: JA 0x005e2baa
//   XREF to: 005e2baa (CONDITIONAL_JUMP)
// 005e2b53: JMP dword ptr [EAX*0x4 + 0x5e2b14]
//   Label: switchD
//   XREF to: 005e2b5a (COMPUTED_JUMP)
//   XREF to: 005e2b7f (COMPUTED_JUMP)
//   XREF to: 005e2b89 (COMPUTED_JUMP)
//   XREF to: 005e2bcd (COMPUTED_JUMP)
//   XREF to: 005e2b14 (DATA)
// 005e2b5a: FLD float ptr [EBX + 0x768]
//   Label: caseD_1
// 005e2b60: FLDZ
// 005e2b62: FCOMPP
// 005e2b64: FNSTSW AX
// 005e2b66: SAHF
// 005e2b67: JNC 0x005e2bcd
//   XREF to: 005e2bcd (CONDITIONAL_JUMP)
// 005e2b69: FLD float ptr [EBX + 0x77c]
// 005e2b6f: FDIV float ptr [EBX + 0x768]
// 005e2b75: FLD1
// 005e2b77: FSUBRP
// 005e2b79: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005e2b7d: JMP 0x005e2bcd
//   XREF to: 005e2bcd (UNCONDITIONAL_JUMP)
// 005e2b7f: MOV dword ptr [ESP + 0x8],0x3f800000
//   Label: caseD_3
//   XREF to: Stack[-0x18] (WRITE)
// 005e2b87: JMP 0x005e2bcd
//   XREF to: 005e2bcd (UNCONDITIONAL_JUMP)
// 005e2b89: FLD float ptr [EBX + 0x770]
//   Label: caseD_4
// 005e2b8f: FLDZ
// 005e2b91: FCOMPP
// 005e2b93: FNSTSW AX
// 005e2b95: SAHF
// 005e2b96: JNC 0x005e2bcd
//   XREF to: 005e2bcd (CONDITIONAL_JUMP)
// 005e2b98: FLD float ptr [EBX + 0x77c]
// 005e2b9e: FDIV float ptr [EBX + 0x770]
// 005e2ba4: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005e2ba8: JMP 0x005e2bcd
//   XREF to: 005e2bcd (UNCONDITIONAL_JUMP)
// 005e2baa: MOV ECX,0x656688
//   Label: default
//   XREF to: 00656688 (PARAM)
// 005e2baf: MOV ESI,0x1c1
// 005e2bb4: PUSH 0x65669b
//   XREF to: 0065669b (DATA)
// 005e2bb9: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005e2bbf: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005e2bc5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e2bca: ADD ESP,0x4
// 005e2bcd: FLD float ptr [ESP + 0x8]
//   Label: caseD_0
//   XREF to: Stack[-0x18] (READ)
// 005e2bd1: FLDZ
// 005e2bd3: FXCH
// 005e2bd5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005e2bd8: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005e2bdb: FNSTSW AX
// 005e2bdd: SAHF
// 005e2bde: JA 0x005e2c30
//   XREF to: 005e2c30 (CONDITIONAL_JUMP)
// 005e2be0: FLD1
// 005e2be2: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005e2be5: FNSTSW AX
// 005e2be7: SAHF
// 005e2be8: JNC 0x005e2bf2
//   XREF to: 005e2bf2 (CONDITIONAL_JUMP)
// 005e2bea: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x18] (WRITE)
// 005e2bf2: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_005e2bf2
//   XREF to: Stack[0x8] (READ)
// 005e2bf6: JZ 0x005e2c38
//   XREF to: 005e2c38 (CONDITIONAL_JUMP)
// 005e2bf8: ADD EBX,0x584
// 005e2bfe: PUSH EBX
//   Label: LAB_005e2bfe
// 005e2bff: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e2c04: MOV EAX,dword ptr [EAX + 0x100]
// 005e2c0a: ADD ESP,0x4
// 005e2c0d: DEC EAX
// 005e2c0e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005e2c12: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005e2c16: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005e2c1a: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005e2c1e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005e2c22: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005e2c26: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005e2c26
//   XREF to: Stack[-0x14] (READ)
// 005e2c2a: MOV ESP,EBP
// 005e2c2c: POP EBP
// 005e2c2d: POP ESI
// 005e2c2e: POP EBX
// 005e2c2f: RET
// 005e2c30: XOR EBX,EBX
//   Label: LAB_005e2c30
// 005e2c32: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005e2c36: JMP 0x005e2c26
//   XREF to: 005e2c26 (UNCONDITIONAL_JUMP)
// 005e2c38: ADD EBX,0x158
//   Label: LAB_005e2c38
// 005e2c3e: JMP 0x005e2bfe
//   XREF to: 005e2bfe (UNCONDITIONAL_JUMP)

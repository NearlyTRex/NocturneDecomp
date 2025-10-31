// Name: core_wateract.cpp_CWaterActor_process_FUN_005eb100
// Address: 005eb100
// Address Range: [[005eb100, 005eb276]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_process_FUN_005eb100(CWaterActor * this_ptr)
// Globals:
//   void* PTR_caseD_1_005eb0f0 = 005eb1ce
//   void* PTR_caseD_3_005eb0f8 = 005eb203
//   TerminatedCString s_core_wateract_cpp_006572b7
//   TerminatedCString s_CWaterActor_process_Bad__006572cc
//   undefined4 DAT_006572ef
//   undefined4 DAT_006572f7
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_wateract_cpp_CWaterActor_process_FUN_005eb100(CWaterActor *this_ptr)

{
  float fVar1;
  CEventList *this_ptr_00;
  undefined4 in_EAX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000014;
  
  fVar4 = (float10)in_stack_00000008 * (float10)_DAT_006572ef * (float10)_DAT_006572f7;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(*(undefined4 *)(this_ptr->field21_0x298 + 0x2af94),in_EAX));
  iVar2 = (int)((ulonglong)dVar5 >> 0x20) + (int)ROUND(fVar4);
  *(int *)(this_ptr->field21_0x298 + 0x2af94) = iVar2;
  if (0x10000 < iVar2) {
    iVar3 = *(int *)(this_ptr->field21_0x298 + 0x2af90) + 1;
    *(int *)(this_ptr->field21_0x298 + 0x2af94) = iVar2 + -0x10000;
    *(int *)(this_ptr->field21_0x298 + 0x2af90) = iVar3;
    if (0xf < iVar3) {
      this_ptr->field21_0x298[0x2af90] = '\0';
      this_ptr->field21_0x298[0x2af91] = '\0';
      this_ptr->field21_0x298[0x2af92] = '\0';
      this_ptr->field21_0x298[0x2af93] = '\0';
    }
  }
  this_ptr_00 = g_CEventListPtr;
  *(float *)(this_ptr->field21_0x298 + 0x7d04) = 1.0 / in_stack_0000000c;
  iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                    (this_ptr_00,(char *)&this_ptr->move_event);
  if (iVar2 != 0) {
    this_ptr->state = 1;
  }
  iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                    (g_CEventListPtr,(char *)&this_ptr->move_down_event);
  if (iVar2 != 0) {
    this_ptr->state = 3;
  }
  switch(this_ptr->state) {
  case 1:
    fVar1 = in_stack_00000014 / this_ptr->time_to_move + this_ptr->param;
    this_ptr->param = fVar1;
    if (fVar1 <= 1.0) break;
    this_ptr->state = 2;
  case 2:
    this_ptr->param = 1.0;
    break;
  case 3:
    fVar1 = this_ptr->param - in_stack_00000014 / this_ptr->time_to_move_down;
    this_ptr->param = fVar1;
    if (0.0 <= fVar1) break;
    this_ptr->state = 0;
  case 0:
    this_ptr->param = 0.0;
    break;
  default:
    g_CurrentFilename = "..\\core\\wateract.cpp";
    g_CurrentLineNumber = 0x1a5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWaterActor::process - Bad state");
  }
  (this_ptr->base_actor).location.position.y =
       this_ptr->height_delta * this_ptr->param + *(float *)(this_ptr->field21_0x298 + 0x2af98);
  return;
}


// Assembly code:
// 005eb100: PUSH EBX
//   Label: core_wateract.cpp_CWaterActor_process_FUN_005eb100
// 005eb101: PUSH ESI
// 005eb102: PUSH EDI
// 005eb103: SUB ESP,0x4
// 005eb106: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005eb10a: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005eb10e: FMUL double ptr [0x006572ef]
//   XREF to: 006572ef (READ)
// 005eb114: FMUL double ptr [0x006572f7]
//   XREF to: 006572f7 (READ)
// 005eb11a: MOV EDX,dword ptr [EBX + 0x2b22c]
// 005eb120: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005eb125: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005eb128: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005eb12b: ADD EDX,EAX
// 005eb12d: MOV dword ptr [EBX + 0x2b22c],EDX
// 005eb133: CMP EDX,0x10000
// 005eb139: JLE 0x005eb163
//   XREF to: 005eb163 (CONDITIONAL_JUMP)
// 005eb13b: MOV EDI,dword ptr [EBX + 0x2b228]
// 005eb141: LEA ESI,[EDX + 0xffff0000]
// 005eb147: INC EDI
// 005eb148: MOV dword ptr [EBX + 0x2b22c],ESI
// 005eb14e: MOV dword ptr [EBX + 0x2b228],EDI
// 005eb154: CMP EDI,0x10
// 005eb157: JL 0x005eb163
//   XREF to: 005eb163 (CONDITIONAL_JUMP)
// 005eb159: MOV dword ptr [EBX + 0x2b228],0x0
// 005eb163: FLD float ptr [ESP + 0x18]
//   Label: LAB_005eb163
//   XREF to: Stack[0x8] (READ)
// 005eb167: FLD1
// 005eb169: FDIVRP
// 005eb16b: LEA EAX,[EBX + 0x1b4]
// 005eb171: PUSH EAX
// 005eb172: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005eb177: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 005eb178: FSTP float ptr [EBX + 0x7f9c]
// 005eb17e: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005eb183: ADD ESP,0x8
// 005eb186: TEST EAX,EAX
// 005eb188: JZ 0x005eb194
//   XREF to: 005eb194 (CONDITIONAL_JUMP)
// 005eb18a: MOV dword ptr [EBX + 0x280],0x1
// 005eb194: LEA EAX,[EBX + 0x218]
//   Label: LAB_005eb194
// 005eb19a: PUSH EAX
// 005eb19b: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005eb1a1: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 005eb1a2: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005eb1a7: ADD ESP,0x8
// 005eb1aa: TEST EAX,EAX
// 005eb1ac: JZ 0x005eb1b8
//   XREF to: 005eb1b8 (CONDITIONAL_JUMP)
// 005eb1ae: MOV dword ptr [EBX + 0x280],0x3
// 005eb1b8: MOV EAX,dword ptr [EBX + 0x280]
//   Label: LAB_005eb1b8
// 005eb1be: CMP EAX,0x3
// 005eb1c1: JA 0x005eb252
//   XREF to: 005eb252 (CONDITIONAL_JUMP)
// 005eb1c7: JMP dword ptr [EAX*0x4 + 0x5eb0ec]
//   Label: switchD
//   XREF to: 005eb1ce (COMPUTED_JUMP)
//   XREF to: 005eb1f7 (COMPUTED_JUMP)
//   XREF to: 005eb203 (COMPUTED_JUMP)
//   XREF to: 005eb22c (COMPUTED_JUMP)
//   XREF to: 005eb0f0 (READ)
//   XREF to: 005eb0f8 (READ)
// 005eb1ce: FLD float ptr [ESP + 0x18]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 005eb1d2: FDIV float ptr [EBX + 0x16c]
// 005eb1d8: FADD float ptr [EBX + 0x27c]
// 005eb1de: FST float ptr [EBX + 0x27c]
// 005eb1e4: FLD1
// 005eb1e6: FCOMPP
// 005eb1e8: FNSTSW AX
// 005eb1ea: SAHF
// 005eb1eb: JNC 0x005eb236
//   XREF to: 005eb236 (CONDITIONAL_JUMP)
// 005eb1ed: MOV dword ptr [EBX + 0x280],0x2
// 005eb1f7: MOV dword ptr [EBX + 0x27c],0x3f800000
//   Label: caseD_2
// 005eb201: JMP 0x005eb236
//   XREF to: 005eb236 (UNCONDITIONAL_JUMP)
// 005eb203: FLD float ptr [ESP + 0x18]
//   Label: caseD_3
//   XREF to: Stack[0x8] (READ)
// 005eb207: FDIV float ptr [EBX + 0x170]
// 005eb20d: FSUBR float ptr [EBX + 0x27c]
// 005eb213: FST float ptr [EBX + 0x27c]
// 005eb219: FLDZ
// 005eb21b: FCOMPP
// 005eb21d: FNSTSW AX
// 005eb21f: SAHF
// 005eb220: JBE 0x005eb236
//   XREF to: 005eb236 (CONDITIONAL_JUMP)
// 005eb222: MOV dword ptr [EBX + 0x280],0x0
// 005eb22c: MOV dword ptr [EBX + 0x27c],0x0
//   Label: caseD_0
// 005eb236: FLD float ptr [EBX + 0x168]
//   Label: LAB_005eb236
// 005eb23c: FMUL float ptr [EBX + 0x27c]
// 005eb242: FADD float ptr [EBX + 0x2b230]
// 005eb248: FSTP float ptr [EBX + 0x24]
// 005eb24b: ADD ESP,0x4
// 005eb24e: POP EDI
// 005eb24f: POP ESI
// 005eb250: POP EBX
// 005eb251: RET
// 005eb252: MOV ECX,0x6572b7
//   Label: default
//   XREF to: 006572b7 (PARAM)
// 005eb257: MOV ESI,0x1a5
// 005eb25c: PUSH 0x6572cc
//   XREF to: 006572cc (DATA)
// 005eb261: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005eb267: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005eb26d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005eb272: ADD ESP,0x4
// 005eb275: JMP 0x005eb236
//   XREF to: 005eb236 (UNCONDITIONAL_JUMP)

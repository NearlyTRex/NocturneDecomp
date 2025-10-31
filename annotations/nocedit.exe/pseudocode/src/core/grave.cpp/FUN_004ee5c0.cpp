// Name: core_grave.cpp_FUN_004ee5c0
// Address: 004ee5c0
// Address Range: [[004ee5c0, 004ee67c]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee5c0()
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_grave.cpp_FUN_004ee790

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004ee5c0(undefined4 param_1, undefined4 param_2)
    */

void core_grave_cpp_FUN_004ee5c0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  int in_stack_00000004;
  float in_stack_00000014;
  
  if (*(int *)(in_stack_00000004 + 0x2dc) == 0) {
    if (*(int *)(in_stack_00000004 + 0x2e0) == 0) {
      iVar3 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                        (g_CEventListPtr,(char *)(in_stack_00000004 + 0x2e8));
      if (iVar3 != 0) {
        core_grave_cpp_FUN_004ee790();
      }
    }
    if (*(int *)(in_stack_00000004 + 0x2e0) == 1) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                         ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
      fVar2 = (float)(pCVar4->frame_count + -1);
      fVar1 = *(float *)(in_stack_00000004 + 0x2d8) * in_stack_00000014 +
              *(float *)(in_stack_00000004 + 0x2d4);
      *(float *)(in_stack_00000004 + 0x2d4) = fVar1;
      if (fVar2 <= fVar1) {
        *(undefined4 *)(in_stack_00000004 + 0x2e0) = 2;
        *(float *)(in_stack_00000004 + 0x2d4) = fVar2;
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_stack_00000004 + 0x104) = 1;
  }
  return;
}


// Assembly code:
// 004ee5c0: PUSH EBX
//   Label: core_grave.cpp_FUN_004ee5c0
// 004ee5c1: PUSH ESI
// 004ee5c2: PUSH EDI
// 004ee5c3: SUB ESP,0x8
// 004ee5c6: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004ee5ca: CMP dword ptr [EBX + 0x2dc],0x0
// 004ee5d1: JNZ 0x004ee5ee
//   XREF to: 004ee5ee (CONDITIONAL_JUMP)
// 004ee5d3: CMP dword ptr [EBX + 0x2e0],0x0
// 004ee5da: JZ 0x004ee5fa
//   XREF to: 004ee5fa (CONDITIONAL_JUMP)
// 004ee5dc: MOV EDI,dword ptr [EBX + 0x2e0]
//   Label: LAB_004ee5dc
// 004ee5e2: CMP EDI,0x1
// 004ee5e5: JZ 0x004ee61f
//   XREF to: 004ee61f (CONDITIONAL_JUMP)
// 004ee5e7: ADD ESP,0x8
//   Label: LAB_004ee5e7
// 004ee5ea: POP EDI
// 004ee5eb: POP ESI
// 004ee5ec: POP EBX
// 004ee5ed: RET
// 004ee5ee: MOV dword ptr [EBX + 0x104],0x1
//   Label: LAB_004ee5ee
// 004ee5f8: JMP 0x004ee5e7
//   XREF to: 004ee5e7 (UNCONDITIONAL_JUMP)
// 004ee5fa: LEA EAX,[EBX + 0x2e8]
//   Label: LAB_004ee5fa
// 004ee600: PUSH EAX
// 004ee601: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004ee607: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 004ee608: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004ee60d: ADD ESP,0x8
// 004ee610: TEST EAX,EAX
// 004ee612: JZ 0x004ee5dc
//   XREF to: 004ee5dc (CONDITIONAL_JUMP)
// 004ee614: PUSH EBX
// 004ee615: CALL core_grave.cpp_FUN_004ee790
//   XREF to: 004ee790 (UNCONDITIONAL_CALL)
// 004ee61a: ADD ESP,0x4
// 004ee61d: JMP 0x004ee5dc
//   XREF to: 004ee5dc (UNCONDITIONAL_JUMP)
// 004ee61f: LEA EAX,[EBX + 0x158]
//   Label: LAB_004ee61f
// 004ee625: PUSH EAX
// 004ee626: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004ee62b: FLD float ptr [EBX + 0x2d8]
// 004ee631: MOV EAX,dword ptr [EAX + 0x100]
// 004ee637: ADD ESP,0x4
// 004ee63a: SUB EAX,EDI
// 004ee63c: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004ee640: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004ee644: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 004ee648: FXCH
// 004ee64a: FADD float ptr [EBX + 0x2d4]
// 004ee650: FXCH
// 004ee652: FSTP float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004ee655: FST float ptr [EBX + 0x2d4]
// 004ee65b: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004ee65e: FNSTSW AX
// 004ee660: SAHF
// 004ee661: JC 0x004ee5e7
//   XREF to: 004ee5e7 (CONDITIONAL_JUMP)
// 004ee663: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004ee666: MOV dword ptr [EBX + 0x2e0],0x2
// 004ee670: MOV dword ptr [EBX + 0x2d4],EAX
// 004ee676: ADD ESP,0x8
// 004ee679: POP EDI
// 004ee67a: POP ESI
// 004ee67b: POP EBX
// 004ee67c: RET

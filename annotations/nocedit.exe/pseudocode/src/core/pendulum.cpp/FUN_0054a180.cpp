// Name: core_pendulum.cpp_FUN_0054a180
// Address: 0054a180
// Address Range: [[0054a180, 0054a2e5]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a180()
// Globals:
//   double DOUBLE_0063ed01 = -1
//   double DOUBLE_0063ed09 = 0.100000000000000
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CEnemyClassInfo.name_hash
//   undefined4 DAT_02d05310
//   undefined4 g_CHeroClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
//   undefined4 DAT_0326331c
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_pendulum.cpp_FUN_005495c0
//   core_pendulum.cpp_FUN_00549b90

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_0054a180(undefined4 param_1, undefined4
   param_2) */

void core_pendulum_cpp_FUN_0054a180(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x39c) == 0) {
    iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListPtr,(char *)(in_stack_00000004 + 0x2d4));
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(in_stack_00000004 + 0x39c) = 1;
  }
  iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                    (g_CEventListPtr,(char *)(in_stack_00000004 + 0x338));
  if ((iVar1 != 0) && (*(int *)(in_stack_00000004 + 0x430) != 0x3f800000)) {
    *(undefined4 *)(in_stack_00000004 + 0x434) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x430) = 0x3f800000;
  }
  core_pendulum_cpp_FUN_00549b90();
  fVar7 = (float10)1;
  fVar5 = (float10)1.4426950408889634 *
          (float10)*(float *)(in_stack_00000004 + 0x430) * (float10)DOUBLE_0063ed01 *
          (float10)*(float *)(in_stack_00000004 + 0x434);
  fVar6 = (float10)f2xm1(fVar5 - (fVar5 / fVar7) * fVar7);
  fVar7 = (float10)fscale(fVar6 + fVar7,fVar5);
  if (fVar7 <= (float10)DOUBLE_0063ed09) {
    *(undefined4 *)(in_stack_00000004 + 0x440) = 1;
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x440) = 0;
  if ((*(int *)(in_stack_00000004 + 0x428) == 0) && (*(int *)(in_stack_00000004 + 0x42c) == 0)) {
    return;
  }
  iVar4 = 0;
  iVar1 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar1) {
        return;
      }
      pCVar3 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar4 + -4);
      if ((*(int *)(in_stack_00000004 + 0x428) == 0) ||
         (pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar3,g_CHeroClassInfo.name_hash),
         pCVar2 == (CDemonActor *)0x0)) break;
      core_pendulum_cpp_FUN_005495c0();
LAB_0054a24e:
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 4;
    }
    if ((*(int *)(in_stack_00000004 + 0x42c) == 0) ||
       (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar3,g_CEnemyClassInfo.name_hash),
       pCVar3 == (CDemonActor *)0x0)) goto LAB_0054a24e;
    core_pendulum_cpp_FUN_005495c0();
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}


// Assembly code:
// 0054a180: PUSH EBX
//   Label: core_pendulum.cpp_FUN_0054a180
// 0054a181: PUSH ESI
// 0054a182: PUSH EDI
// 0054a183: PUSH EBP
// 0054a184: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054a188: CMP dword ptr [ESI + 0x39c],0x0
// 0054a18f: JZ 0x0054a254
//   XREF to: 0054a254 (CONDITIONAL_JUMP)
// 0054a195: LEA EAX,[ESI + 0x338]
//   Label: LAB_0054a195
// 0054a19b: PUSH EAX
// 0054a19c: MOV EBX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0054a1a2: PUSH EBX
//   XREF to: 02d05310 (DATA)
// 0054a1a3: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054a1a8: ADD ESP,0x8
// 0054a1ab: TEST EAX,EAX
// 0054a1ad: JZ 0x0054a1cf
//   XREF to: 0054a1cf (CONDITIONAL_JUMP)
// 0054a1af: CMP dword ptr [ESI + 0x430],0x3f800000
// 0054a1b9: JZ 0x0054a1cf
//   XREF to: 0054a1cf (CONDITIONAL_JUMP)
// 0054a1bb: MOV dword ptr [ESI + 0x434],0x0
// 0054a1c5: MOV dword ptr [ESI + 0x430],0x3f800000
// 0054a1cf: PUSH dword ptr [ESP + 0x18]
//   Label: LAB_0054a1cf
//   XREF to: Stack[0x8] (READ)
// 0054a1d3: PUSH ESI
// 0054a1d4: CALL core_pendulum.cpp_FUN_00549b90
//   XREF to: 00549b90 (UNCONDITIONAL_CALL)
// 0054a1d9: FLD float ptr [ESI + 0x430]
// 0054a1df: FMUL double ptr [0x0063ed01]
//   XREF to: 0063ed01 (READ)
// 0054a1e5: FMUL float ptr [ESI + 0x434]
// 0054a1eb: FLD1
// 0054a1ed: FLDL2E
// 0054a1ef: FMUL ST2
// 0054a1f1: FST ST2
// 0054a1f3: FPREM
// 0054a1f5: F2XM1
// 0054a1f7: FADDP
// 0054a1f9: FSCALE
// 0054a1fb: FSTP ST1
// 0054a1fd: ADD ESP,0x8
// 0054a200: FCOMP double ptr [0x0063ed09]
//   XREF to: 0063ed09 (READ)
// 0054a206: FNSTSW AX
// 0054a208: SAHF
// 0054a209: JBE 0x0054a2d7
//   XREF to: 0054a2d7 (CONDITIONAL_JUMP)
// 0054a20f: MOV EBP,dword ptr [ESI + 0x428]
// 0054a215: MOV dword ptr [ESI + 0x440],0x0
// 0054a21f: TEST EBP,EBP
// 0054a221: JZ 0x0054a27d
//   XREF to: 0054a27d (CONDITIONAL_JUMP)
// 0054a223: XOR EDI,EDI
//   Label: LAB_0054a223
// 0054a225: XOR EBP,EBP
// 0054a227: MOV EAX,[0x006810c8]
//   Label: LAB_0054a227
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0054a22c: CMP EBP,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 0054a232: JGE 0x0054a286
//   XREF to: 0054a286 (CONDITIONAL_JUMP)
// 0054a234: MOV ECX,dword ptr [ESI + 0x428]
// 0054a23a: MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f09c]
//   XREF to: 03263314 (READ)
//   XREF to: 03263318 (READ)
//   XREF to: 0326331c (READ)
// 0054a241: TEST ECX,ECX
// 0054a243: JNZ 0x0054a28b
//   XREF to: 0054a28b (CONDITIONAL_JUMP)
// 0054a245: CMP dword ptr [ESI + 0x42c],0x0
//   Label: LAB_0054a245
// 0054a24c: JNZ 0x0054a2ad
//   XREF to: 0054a2ad (CONDITIONAL_JUMP)
// 0054a24e: INC EBP
//   Label: LAB_0054a24e
// 0054a24f: ADD EDI,0x4
// 0054a252: JMP 0x0054a227
//   XREF to: 0054a227 (UNCONDITIONAL_JUMP)
// 0054a254: LEA EAX,[ESI + 0x2d4]
//   Label: LAB_0054a254
// 0054a25a: PUSH EAX
// 0054a25b: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0054a261: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 0054a262: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054a267: ADD ESP,0x8
// 0054a26a: TEST EAX,EAX
// 0054a26c: JZ 0x0054a286
//   XREF to: 0054a286 (CONDITIONAL_JUMP)
// 0054a26e: MOV dword ptr [ESI + 0x39c],0x1
// 0054a278: JMP 0x0054a195
//   XREF to: 0054a195 (UNCONDITIONAL_JUMP)
// 0054a27d: CMP dword ptr [ESI + 0x42c],0x0
//   Label: LAB_0054a27d
// 0054a284: JNZ 0x0054a223
//   XREF to: 0054a223 (CONDITIONAL_JUMP)
// 0054a286: POP EBP
//   Label: LAB_0054a286
// 0054a287: POP EDI
// 0054a288: POP ESI
// 0054a289: POP EBX
// 0054a28a: RET
// 0054a28b: MOV EAX,[0x02db880c]
//   Label: LAB_0054a28b
//   XREF to: 02db880c (READ)
// 0054a290: PUSH EAX
// 0054a291: PUSH EBX
// 0054a292: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0054a297: ADD ESP,0x8
// 0054a29a: TEST EAX,EAX
// 0054a29c: JZ 0x0054a245
//   XREF to: 0054a245 (CONDITIONAL_JUMP)
// 0054a29e: PUSH 0x0
// 0054a2a0: PUSH EAX
// 0054a2a1: PUSH EBX
// 0054a2a2: PUSH ESI
// 0054a2a3: CALL core_pendulum.cpp_FUN_005495c0
//   XREF to: 005495c0 (UNCONDITIONAL_CALL)
// 0054a2a8: ADD ESP,0x10
// 0054a2ab: JMP 0x0054a24e
//   XREF to: 0054a24e (UNCONDITIONAL_JUMP)
// 0054a2ad: MOV ECX,dword ptr [0x02cf2bf0]
//   Label: LAB_0054a2ad
//   XREF to: 02cf2bf0 (READ)
// 0054a2b3: PUSH ECX
// 0054a2b4: PUSH EBX
// 0054a2b5: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0054a2ba: ADD ESP,0x8
// 0054a2bd: TEST EAX,EAX
// 0054a2bf: JZ 0x0054a24e
//   XREF to: 0054a24e (CONDITIONAL_JUMP)
// 0054a2c1: PUSH EAX
// 0054a2c2: PUSH 0x0
// 0054a2c4: PUSH EBX
// 0054a2c5: PUSH ESI
// 0054a2c6: CALL core_pendulum.cpp_FUN_005495c0
//   XREF to: 005495c0 (UNCONDITIONAL_CALL)
// 0054a2cb: ADD ESP,0x10
// 0054a2ce: INC EBP
// 0054a2cf: ADD EDI,0x4
// 0054a2d2: JMP 0x0054a227
//   XREF to: 0054a227 (UNCONDITIONAL_JUMP)
// 0054a2d7: MOV dword ptr [ESI + 0x440],0x1
//   Label: LAB_0054a2d7
// 0054a2e1: POP EBP
// 0054a2e2: POP EDI
// 0054a2e3: POP ESI
// 0054a2e4: POP EBX
// 0054a2e5: RET

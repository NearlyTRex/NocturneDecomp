// Name: core_door.cpp_CDoor_getMoveType_FUN_00481070
// Address: 00481070
// Address Range: [[00481070, 0048120e]]
// Convention: __cdecl
// Signature: int core_door.cpp_CDoor_getMoveType_FUN_00481070(CDoor * this_ptr)
// Cross-references:
//   core_hero.cpp_FUN_004f2d70 (004f2d70) at 004f2e80 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00481058 = 00481126
//   TerminatedCString s_The_door_is_locked_from__006212e4
//   TerminatedCString s_core_door_cpp_0062130c
//   TerminatedCString s_CDoor_getMoveType_invali_0062131d
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_door.cpp_CDoor_FUN_00481210
//   core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_getMoveType_FUN_00481070(CDoor *this_ptr)

{
  char *message;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  int in_stack_00000008;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base_actor,(CVector3f *)&stack0xffffffe8,
             (CVector3f *)(in_stack_00000008 + 0x20));
  message = support_newmsg_cpp_getLocalizedString_FUN_005441f0("The door is locked from the other side.");
  if (unaff_ESI <= 0.0) {
    if ((this_ptr->allowed_sides & 2) != 0) goto LAB_004811fd;
    if (this_ptr->allowed_sides != 0) {
      core_door_cpp_CDoor_FUN_00481210(this_ptr);
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,message,5.0);
      return 0;
    }
  }
  else {
    if ((this_ptr->allowed_sides & 1) != 0) {
LAB_004811fd:
      switch(this_ptr->door_type) {
      case 0:
        if (this_ptr->door_swing != 0) {
          unaff_ESI = -unaff_ESI;
        }
        if (this_ptr->door_state != 0) {
          unaff_ESI = -unaff_ESI;
        }
        if (0.0 <= unaff_ESI) {
          return 2;
        }
        return 3;
      case 1:
        if (this_ptr->door_state == 0) {
          return 6;
        }
        return 7;
      case 2:
        goto switchD_00481208_caseD_2;
      case 3:
        return 1;
      default:
        g_CurrentFilename = "..\\core\\door.cpp";
        g_CurrentLineNumber = 0x39e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CDoor::getMoveType - invalid door!");
        return 0;
      }
    }
    if (this_ptr->allowed_sides != 0) {
      core_door_cpp_CDoor_FUN_00481210(this_ptr);
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,message,5.0);
    }
  }
  return 0;
switchD_00481208_caseD_2:
  if (this_ptr->door_side != 1) {
    unaff_ESI = -unaff_ESI;
  }
  if (this_ptr->door_state != 0) {
    unaff_ESI = -unaff_ESI;
  }
  if (0.0 <= unaff_ESI) {
    return 4;
  }
  return 5;
}


// Assembly code:
// 00481070: PUSH EBX
//   Label: core_door.cpp_CDoor_getMoveType_FUN_00481070
// 00481071: PUSH ESI
// 00481072: PUSH EBP
// 00481073: MOV EBP,ESP
// 00481075: SUB ESP,0xc
// 00481078: AND ESP,0xfffffff8
// 0048107b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048107e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00481081: ADD EAX,0x20
// 00481084: PUSH EAX
// 00481085: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 00481089: PUSH EAX
// 0048108a: PUSH EBX
// 0048108b: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00481090: ADD ESP,0xc
// 00481093: PUSH 0x6212e4
//   XREF to: 006212e4 (DATA)
// 00481098: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0048109d: ADD ESP,0x4
// 004810a0: MOV ESI,EAX
// 004810a2: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 004810a6: FLDZ
// 004810a8: FCOMPP
// 004810aa: FNSTSW AX
// 004810ac: SAHF
// 004810ad: JNC 0x004810ea
//   XREF to: 004810ea (CONDITIONAL_JUMP)
// 004810af: TEST byte ptr [EBX + 0x9d8],0x1
// 004810b6: JNZ 0x004811fd
//   XREF to: 004811fd (CONDITIONAL_JUMP)
// 004810bc: CMP dword ptr [EBX + 0x9d8],0x0
// 004810c3: JZ 0x004810e2
//   XREF to: 004810e2 (CONDITIONAL_JUMP)
// 004810c5: PUSH EBX
// 004810c6: CALL core_door.cpp_CDoor_FUN_00481210
//   XREF to: 00481210 (UNCONDITIONAL_CALL)
// 004810cb: ADD ESP,0x4
// 004810ce: PUSH 0x40a00000
// 004810d3: PUSH ESI
// 004810d4: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004810d9: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 004810da: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004810df: ADD ESP,0xc
// 004810e2: XOR EAX,EAX
//   Label: LAB_004810e2
// 004810e4: MOV ESP,EBP
// 004810e6: POP EBP
// 004810e7: POP ESI
// 004810e8: POP EBX
// 004810e9: RET
// 004810ea: TEST byte ptr [EBX + 0x9d8],0x2
//   Label: LAB_004810ea
// 004810f1: JNZ 0x004811fd
//   XREF to: 004811fd (CONDITIONAL_JUMP)
// 004810f7: CMP dword ptr [EBX + 0x9d8],0x0
// 004810fe: JZ 0x004810e2
//   XREF to: 004810e2 (CONDITIONAL_JUMP)
// 00481100: PUSH EBX
// 00481101: CALL core_door.cpp_CDoor_FUN_00481210
//   XREF to: 00481210 (UNCONDITIONAL_CALL)
// 00481106: ADD ESP,0x4
// 00481109: PUSH 0x40a00000
// 0048110e: PUSH ESI
// 0048110f: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00481115: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 00481116: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 0048111b: ADD ESP,0xc
// 0048111e: XOR EAX,EAX
// 00481120: MOV ESP,EBP
// 00481122: POP EBP
// 00481123: POP ESI
// 00481124: POP EBX
// 00481125: RET
// 00481126: CMP dword ptr [EBX + 0x2e4],0x0
//   Label: caseD_0
// 0048112d: JNZ 0x00481155
//   XREF to: 00481155 (CONDITIONAL_JUMP)
// 0048112f: CMP dword ptr [EBX + 0x2e0],0x0
//   Label: LAB_0048112f
// 00481136: JZ 0x0048113d
//   XREF to: 0048113d (CONDITIONAL_JUMP)
// 00481138: XOR byte ptr [ESP + 0xb],0x80
//   XREF to: Stack[-0xd] (READ_WRITE)
// 0048113d: FLD float ptr [ESP + 0x8]
//   Label: LAB_0048113d
//   XREF to: Stack[-0x10] (READ)
// 00481141: FLDZ
// 00481143: FCOMPP
// 00481145: FNSTSW AX
// 00481147: SAHF
// 00481148: JBE 0x0048115c
//   XREF to: 0048115c (CONDITIONAL_JUMP)
// 0048114a: MOV EAX,0x3
// 0048114f: MOV ESP,EBP
// 00481151: POP EBP
// 00481152: POP ESI
// 00481153: POP EBX
// 00481154: RET
// 00481155: XOR byte ptr [ESP + 0xb],0x80
//   Label: LAB_00481155
//   XREF to: Stack[-0xd] (READ_WRITE)
// 0048115a: JMP 0x0048112f
//   XREF to: 0048112f (UNCONDITIONAL_JUMP)
// 0048115c: MOV EAX,0x2
//   Label: LAB_0048115c
// 00481161: MOV ESP,EBP
// 00481163: POP EBP
// 00481164: POP ESI
// 00481165: POP EBX
// 00481166: RET
// 00481167: CMP dword ptr [EBX + 0x2e0],0x0
//   Label: caseD_1
// 0048116e: JZ 0x0048117b
//   XREF to: 0048117b (CONDITIONAL_JUMP)
// 00481170: MOV EAX,0x7
// 00481175: MOV ESP,EBP
// 00481177: POP EBP
// 00481178: POP ESI
// 00481179: POP EBX
// 0048117a: RET
// 0048117b: MOV EAX,0x6
//   Label: LAB_0048117b
// 00481180: MOV ESP,EBP
// 00481182: POP EBP
// 00481183: POP ESI
// 00481184: POP EBX
// 00481185: RET
// 00481186: CMP dword ptr [EBX + 0x2dc],0x1
//   Label: caseD_2
// 0048118d: JNZ 0x004811b5
//   XREF to: 004811b5 (CONDITIONAL_JUMP)
// 0048118f: CMP dword ptr [EBX + 0x2e0],0x0
//   Label: LAB_0048118f
// 00481196: JZ 0x0048119d
//   XREF to: 0048119d (CONDITIONAL_JUMP)
// 00481198: XOR byte ptr [ESP + 0xb],0x80
//   XREF to: Stack[-0xd] (READ_WRITE)
// 0048119d: FLD float ptr [ESP + 0x8]
//   Label: LAB_0048119d
//   XREF to: Stack[-0x10] (READ)
// 004811a1: FLDZ
// 004811a3: FCOMPP
// 004811a5: FNSTSW AX
// 004811a7: SAHF
// 004811a8: JBE 0x004811bc
//   XREF to: 004811bc (CONDITIONAL_JUMP)
// 004811aa: MOV EAX,0x5
// 004811af: MOV ESP,EBP
// 004811b1: POP EBP
// 004811b2: POP ESI
// 004811b3: POP EBX
// 004811b4: RET
// 004811b5: XOR byte ptr [ESP + 0xb],0x80
//   Label: LAB_004811b5
//   XREF to: Stack[-0xd] (READ_WRITE)
// 004811ba: JMP 0x0048118f
//   XREF to: 0048118f (UNCONDITIONAL_JUMP)
// 004811bc: MOV EAX,0x4
//   Label: LAB_004811bc
// 004811c1: MOV ESP,EBP
// 004811c3: POP EBP
// 004811c4: POP ESI
// 004811c5: POP EBX
// 004811c6: RET
// 004811c7: MOV EAX,0x1
//   Label: caseD_3
// 004811cc: MOV ESP,EBP
// 004811ce: POP EBP
// 004811cf: POP ESI
// 004811d0: POP EBX
// 004811d1: RET
// 004811d2: MOV EBX,0x62130c
//   Label: default
//   XREF to: 0062130c (PARAM)
// 004811d7: MOV ESI,0x39e
// 004811dc: PUSH 0x62131d
//   XREF to: 0062131d (DATA)
// 004811e1: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004811e7: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004811ed: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004811f2: ADD ESP,0x4
// 004811f5: XOR EAX,EAX
// 004811f7: MOV ESP,EBP
// 004811f9: POP EBP
// 004811fa: POP ESI
// 004811fb: POP EBX
// 004811fc: RET
// 004811fd: MOV EAX,dword ptr [EBX + 0x2d8]
//   Label: LAB_004811fd
// 00481203: CMP EAX,0x3
// 00481206: JA 0x004811d2
//   XREF to: 004811d2 (CONDITIONAL_JUMP)
// 00481208: JMP dword ptr [EAX*0x4 + 0x481058]
//   Label: switchD
//   XREF to: 00481126 (COMPUTED_JUMP)
//   XREF to: 00481167 (COMPUTED_JUMP)
//   XREF to: 00481186 (COMPUTED_JUMP)
//   XREF to: 004811c7 (COMPUTED_JUMP)
//   XREF to: 00481058 (DATA)

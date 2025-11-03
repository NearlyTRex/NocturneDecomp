// Name: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
// Address: 004f3d80
// Address Range: [[004f3d80, 004f3ee9]]
// Convention: __cdecl
// Signature: CDemonActor * core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 (00524920) at 00524a53 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004f3d50 = 004f3d9a
//   TerminatedCString s_CGabriella_0062ece7
//   TerminatedCString s_CSvetlana_0062ecf2
//   TerminatedCString s_CStranger_0062ecfc
//   TerminatedCString s_CScat_0062ed06
//   TerminatedCString s_CBaron_0062ed0c
//   TerminatedCString s_CIcePick_0062ed13
//   TerminatedCString s_CHaystack_0062ed1c
//   TerminatedCString s_CColonel_0062ed26
//   TerminatedCString s_CMoloch_0062ed2f
//   TerminatedCString s_core_hero_cpp_0062ed37
//   TerminatedCString s_CHeroPlaceholder_createH_0062ed48
//   TerminatedCString s_core_hero_cpp_0062ed7a
//   TerminatedCString s_CHeroPlaceholder_createH_0062ed8b
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   undefined4 g_CHeroClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700

#include "nocturne.h"

CDemonActor * __cdecl
core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder *this_ptr)

{
  CDemonActor *pCVar1;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  char *class_name;
  uint class_name_hash;
  
  pCVar1 = (CDemonActor *)0x0;
  switch(in_stack_00000008) {
  case 0:
    class_name = "CGabriella";
    break;
  case 1:
    class_name = "CSvetlana";
    break;
  case 2:
    class_name = "CStranger";
    break;
  case 3:
    class_name = "CScat";
    break;
  case 4:
    class_name = "CBaron";
    break;
  case 5:
    class_name = "CIcePick";
    break;
  case 6:
    class_name = "CHaystack";
    break;
  case 7:
    class_name = "CColonel";
    break;
  case 8:
    class_name = "CMoloch";
    break;
  default:
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 0x578;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CHeroPlaceholder::createHero - invalid hero type.");
    goto LAB_004f3db9;
  }
  class_name_hash = g_CHeroClassInfo.name_hash;
  pCVar1 = core_actor_cpp_createActorByName_FUN_0040c430(class_name);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar1,class_name_hash);
LAB_004f3db9:
  if (pCVar1 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 0x57d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CHeroPlaceholder::createHero - failed.");
  }
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  (pCVar1->location).position.x = *(float *)(in_stack_0000000c + 0x20);
  (pCVar1->location).position.y = *(float *)(in_stack_0000000c + 0x24);
  (pCVar1->location).position.z = *(float *)(in_stack_0000000c + 0x28);
  (pCVar1->location).area_id = *(int *)(in_stack_0000000c + 0x2c);
  if (&pCVar1->orient != (COrientation *)(in_stack_0000000c + 0x30)) {
    (pCVar1->orient).pitch = *(float *)(in_stack_0000000c + 0x30);
    (pCVar1->orient).bank = *(float *)(in_stack_0000000c + 0x34);
    (pCVar1->orient).heading = *(float *)(in_stack_0000000c + 0x38);
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCVar1);
  return pCVar1;
}


// Assembly code:
// 004f3d80: PUSH EBX
//   Label: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
// 004f3d81: PUSH ESI
// 004f3d82: PUSH EDI
// 004f3d83: PUSH EBP
// 004f3d84: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f3d88: XOR EBX,EBX
// 004f3d8a: CMP EAX,0x8
// 004f3d8d: JA 0x004f3ec2
//   XREF to: 004f3ec2 (CONDITIONAL_JUMP)
// 004f3d93: JMP dword ptr [EAX*0x4 + 0x4f3d50]
//   Label: switchD
//   XREF to: 004f3d9a (COMPUTED_JUMP)
//   XREF to: 004f3e3b (COMPUTED_JUMP)
//   XREF to: 004f3e4c (COMPUTED_JUMP)
//   XREF to: 004f3e5d (COMPUTED_JUMP)
//   XREF to: 004f3e6e (COMPUTED_JUMP)
//   XREF to: 004f3e7e (COMPUTED_JUMP)
//   XREF to: 004f3e8f (COMPUTED_JUMP)
//   XREF to: 004f3ea0 (COMPUTED_JUMP)
//   XREF to: 004f3eb1 (COMPUTED_JUMP)
//   XREF to: 004f3d50 (DATA)
// 004f3d9a: MOV ESI,dword ptr [0x02db880c]
//   Label: caseD_0
//   XREF to: 02db880c (READ)
// 004f3da0: PUSH ESI
// 004f3da1: PUSH 0x62ece7
//   XREF to: 0062ece7 (DATA)
// 004f3da6: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   Label: LAB_004f3da6
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004f3dab: ADD ESP,0x4
// 004f3dae: PUSH EAX
// 004f3daf: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f3db4: ADD ESP,0x8
// 004f3db7: MOV EBX,EAX
// 004f3db9: TEST EBX,EBX
//   Label: LAB_004f3db9
// 004f3dbb: JNZ 0x004f3de0
//   XREF to: 004f3de0 (CONDITIONAL_JUMP)
// 004f3dbd: MOV EDI,0x62ed7a
//   XREF to: 0062ed7a (DATA)
// 004f3dc2: MOV EBP,0x57d
// 004f3dc7: PUSH 0x62ed8b
//   XREF to: 0062ed8b (DATA)
// 004f3dcc: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004f3dd2: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004f3dd8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004f3ddd: ADD ESP,0x4
// 004f3de0: PUSH EBX
//   Label: LAB_004f3de0
// 004f3de1: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004f3de6: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 004f3de7: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 004f3dec: ADD ESP,0x8
// 004f3def: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f3df3: LEA EDX,[EBX + 0x20]
// 004f3df6: MOV ECX,dword ptr [EAX + 0x20]
// 004f3df9: MOV dword ptr [EDX],ECX
// 004f3dfb: MOV ECX,dword ptr [EAX + 0x24]
// 004f3dfe: MOV dword ptr [EDX + 0x4],ECX
// 004f3e01: MOV ECX,dword ptr [EAX + 0x28]
// 004f3e04: MOV dword ptr [EDX + 0x8],ECX
// 004f3e07: MOV EAX,dword ptr [EAX + 0x2c]
// 004f3e0a: MOV dword ptr [EDX + 0xc],EAX
// 004f3e0d: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f3e11: LEA EAX,[EBX + 0x30]
// 004f3e14: ADD EDX,0x30
// 004f3e17: CMP EAX,EDX
// 004f3e19: JZ 0x004f3e2b
//   XREF to: 004f3e2b (CONDITIONAL_JUMP)
// 004f3e1b: MOV ECX,dword ptr [EDX]
// 004f3e1d: MOV dword ptr [EAX],ECX
// 004f3e1f: MOV ECX,dword ptr [EDX + 0x4]
// 004f3e22: MOV dword ptr [EAX + 0x4],ECX
// 004f3e25: MOV ECX,dword ptr [EDX + 0x8]
// 004f3e28: MOV dword ptr [EAX + 0x8],ECX
// 004f3e2b: PUSH EBX
//   Label: LAB_004f3e2b
// 004f3e2c: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004f3e31: ADD ESP,0x4
// 004f3e34: MOV EAX,EBX
// 004f3e36: POP EBP
// 004f3e37: POP EDI
// 004f3e38: POP ESI
// 004f3e39: POP EBX
// 004f3e3a: RET
// 004f3e3b: MOV EBX,dword ptr [0x02db880c]
//   Label: caseD_1
//   XREF to: 02db880c (READ)
// 004f3e41: PUSH EBX
// 004f3e42: PUSH 0x62ecf2
//   XREF to: 0062ecf2 (DATA)
// 004f3e47: JMP 0x004f3da6
//   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)
// 004f3e4c: MOV ECX,dword ptr [0x02db880c]
//   Label: caseD_2
//   XREF to: 02db880c (READ)
// 004f3e52: PUSH ECX
// 004f3e53: PUSH 0x62ecfc
//   XREF to: 0062ecfc (DATA)
// 004f3e58: JMP 0x004f3da6
//   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)
// 004f3e5d: MOV EDX,dword ptr [0x02db880c]
//   Label: caseD_3
//   XREF to: 02db880c (READ)
// 004f3e63: PUSH EDX
// 004f3e64: PUSH 0x62ed06
//   XREF to: 0062ed06 (DATA)
// 004f3e69: JMP 0x004f3da6
//   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)
// 004f3e6e: MOV EAX,[0x02db880c]
//   Label: caseD_4
//   XREF to: 02db880c (READ)
// 004f3e73: PUSH EAX
// 004f3e74: PUSH 0x62ed0c
//   XREF to: 0062ed0c (DATA)
// 004f3e79: JMP 0x004f3da6
//   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)
// 004f3e7e: MOV EBP,dword ptr [0x02db880c]
//   Label: caseD_5
//   XREF to: 02db880c (READ)
// 004f3e84: PUSH EBP
// 004f3e85: PUSH 0x62ed13
//   XREF to: 0062ed13 (DATA)
// 004f3e8a: JMP 0x004f3da6
//   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)
// 004f3e8f: MOV EDI,dword ptr [0x02db880c]
//   Label: caseD_6
//   XREF to: 02db880c (READ)
// 004f3e95: PUSH EDI
// 004f3e96: PUSH 0x62ed1c
//   XREF to: 0062ed1c (DATA)
// 004f3e9b: JMP 0x004f3da6
//   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)
// 004f3ea0: MOV ESI,dword ptr [0x02db880c]
//   Label: caseD_7
//   XREF to: 02db880c (READ)
// 004f3ea6: PUSH ESI
// 004f3ea7: PUSH 0x62ed26
//   XREF to: 0062ed26 (DATA)
// 004f3eac: JMP 0x004f3da6
//   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)
// 004f3eb1: MOV EBX,dword ptr [0x02db880c]
//   Label: caseD_8
//   XREF to: 02db880c (READ)
// 004f3eb7: PUSH EBX
// 004f3eb8: PUSH 0x62ed2f
//   XREF to: 0062ed2f (DATA)
// 004f3ebd: JMP 0x004f3da6
//   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)
// 004f3ec2: MOV EDX,0x62ed37
//   Label: default
//   XREF to: 0062ed37 (PARAM)
// 004f3ec7: MOV ECX,0x578
// 004f3ecc: PUSH 0x62ed48
//   XREF to: 0062ed48 (DATA)
// 004f3ed1: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004f3ed7: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004f3edd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004f3ee2: ADD ESP,0x4
// 004f3ee5: JMP 0x004f3db9
//   XREF to: 004f3db9 (UNCONDITIONAL_JUMP)

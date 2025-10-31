// Name: core_gore.cpp_CreateFlies_FUN_004edf30
// Address: 004edf30
// Address Range: [[004edf30, 004ee021]]
// Convention: unknown
// Signature: undefined core_gore.cpp_CreateFlies_FUN_004edf30()
// Cross-references:
//   core_gore.cpp_CGore_FUN_004ee030 (004ee030) at 004ee04d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_gore_cpp_0062e3fa
//   TerminatedCString s_core_gore_cpp_0062e40b
//   TerminatedCString s_Can_t_create_flies_0062e41c
//   double DOUBLE_0062e432 = 60
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_flies.cpp_FUN_004cbd60
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_CreateFlies(undefined1 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

CFlies * core_gore_cpp_CreateFlies_FUN_004edf30
                   (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
                   undefined4 param_5,float *param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 *param_9,float param_10)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr;
  
  this_ptr = (CFlies *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2a20,"..\\core\\gore.cpp",0x67c);
  if (this_ptr != (CFlies *)0x0) {
    this_ptr = core_flies_cpp_FUN_004cbd60(this_ptr);
  }
  if (this_ptr == (CFlies *)0x0) {
    g_CurrentFilename = "..\\core\\gore.cpp";
    g_CurrentLineNumber = 0x67d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create flies!",unaff_EBX);
  }
  fVar2 = (float)DOUBLE_0062e432;
  (this_ptr->base_actor).location.position.x = *param_6;
  (this_ptr->base_actor).location.position.y = param_6[1];
  (this_ptr->base_actor).location.position.z = param_6[2];
  iVar1 = *(int *)g_CDemonMissionPtr->field0_0x0;
  this_ptr->field1_0x158[0xc] = '\0';
  this_ptr->field1_0x158[0xd] = '\0';
  this_ptr->field1_0x158[0xe] = '\0';
  this_ptr->field1_0x158[0xf] = '\0';
  (this_ptr->base_actor).location.area_id = iVar1;
  *(undefined4 **)(this_ptr->field1_0x158 + 0x28b4) = param_9;
  *(float *)(this_ptr->field1_0x158 + 0x28bc) = fVar2 / param_10;
  if ((param_9 != (undefined4 *)0x0) && (this_ptr->field1_0x158 != (char *)param_9)) {
    *(undefined4 *)this_ptr->field1_0x158 = *param_9;
    *(undefined4 *)(this_ptr->field1_0x158 + 4) = param_9[1];
    *(undefined4 *)(this_ptr->field1_0x158 + 8) = param_9[2];
  }
  (*((this_ptr->base_actor).metadata.vtable)->setup)(&this_ptr->base_actor);
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
  return this_ptr;
}


// Assembly code:
// 004edf30: PUSH EBX
//   Label: core_gore.cpp_CreateFlies_FUN_004edf30
// 004edf31: PUSH ESI
// 004edf32: PUSH EDI
// 004edf33: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004edf37: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004edf3b: PUSH 0x67c
// 004edf40: PUSH 0x62e3fa
//   XREF to: 0062e3fa (DATA)
// 004edf45: PUSH 0x2a20
// 004edf4a: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004edf4f: ADD ESP,0xc
// 004edf52: TEST EAX,EAX
// 004edf54: JNZ 0x004ee014
//   XREF to: 004ee014 (CONDITIONAL_JUMP)
// 004edf5a: MOV EBX,EAX
//   Label: LAB_004edf5a
// 004edf5c: TEST EAX,EAX
// 004edf5e: JNZ 0x004edf83
//   XREF to: 004edf83 (CONDITIONAL_JUMP)
// 004edf60: MOV EDX,0x62e40b
//   XREF to: 0062e40b (PARAM)
// 004edf65: MOV ECX,0x67d
// 004edf6a: PUSH 0x62e41c
//   XREF to: 0062e41c (DATA)
// 004edf6f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004edf75: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004edf7b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004edf80: ADD ESP,0x4
// 004edf83: FLD float ptr [ESP + 0x1c]
//   Label: LAB_004edf83
//   XREF to: Stack[0x10] (READ)
// 004edf87: FDIVR double ptr [0x0062e432]
//   XREF to: 0062e432 (READ)
// 004edf8d: LEA EAX,[EBX + 0x20]
// 004edf90: MOV EDX,dword ptr [EDI]
// 004edf92: MOV dword ptr [EAX],EDX
// 004edf94: MOV EDX,dword ptr [EDI + 0x4]
// 004edf97: MOV dword ptr [EAX + 0x4],EDX
// 004edf9a: MOV EDX,dword ptr [EDI + 0x8]
// 004edf9d: MOV dword ptr [EAX + 0x8],EDX
// 004edfa0: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 004edfa5: MOV EAX,dword ptr [EAX]
//   XREF to: 02f33740 (READ)
// 004edfa7: MOV dword ptr [EBX + 0x164],0x0
// 004edfb1: MOV dword ptr [EBX + 0x2c],EAX
// 004edfb4: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004edfb8: MOV dword ptr [EBX + 0x2a0c],EAX
// 004edfbe: FSTP float ptr [EBX + 0x2a14]
// 004edfc4: TEST ESI,ESI
// 004edfc6: JZ 0x004edfe2
//   XREF to: 004edfe2 (CONDITIONAL_JUMP)
// 004edfc8: LEA EAX,[EBX + 0x158]
// 004edfce: CMP EAX,ESI
// 004edfd0: JZ 0x004edfe2
//   XREF to: 004edfe2 (CONDITIONAL_JUMP)
// 004edfd2: MOV EDX,dword ptr [ESI]
// 004edfd4: MOV dword ptr [EAX],EDX
// 004edfd6: MOV EDX,dword ptr [ESI + 0x4]
// 004edfd9: MOV dword ptr [EAX + 0x4],EDX
// 004edfdc: MOV EDX,dword ptr [ESI + 0x8]
// 004edfdf: MOV dword ptr [EAX + 0x8],EDX
// 004edfe2: PUSH EBX
//   Label: LAB_004edfe2
// 004edfe3: MOV EAX,dword ptr [EBX + 0x154]
// 004edfe9: CALL dword ptr [EAX]
// 004edfeb: ADD ESP,0x4
// 004edfee: PUSH EBX
// 004edfef: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004edff5: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004edff6: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 004edffb: ADD ESP,0x8
// 004edffe: PUSH EBX
// 004edfff: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004ee005: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 004ee006: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 004ee00b: ADD ESP,0x8
// 004ee00e: MOV EAX,EBX
// 004ee010: POP EDI
// 004ee011: POP ESI
// 004ee012: POP EBX
// 004ee013: RET
// 004ee014: PUSH EAX
//   Label: LAB_004ee014
// 004ee015: CALL core_flies.cpp_FUN_004cbd60
//   XREF to: 004cbd60 (UNCONDITIONAL_CALL)
// 004ee01a: ADD ESP,0x4
// 004ee01d: JMP 0x004edf5a
//   XREF to: 004edf5a (UNCONDITIONAL_JUMP)

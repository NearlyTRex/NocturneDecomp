// Name: core_mission.cpp_CDemonMission_FUN_00523cf0
// Address: 00523cf0
// Address Range: [[00523cf0, 00523e5a]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdde5 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00523fb0 (00523fb0) at 0052401f [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_005243a0 (005243a0) at 005243f4 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 00524789 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 0052363c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005386e0 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053af50 (0053af50) at 0053afb6 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d7b0 (0053d7b0) at 0053d7d2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ec80 (0053ec80) at 0053ecc0 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e2d3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005391c5 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053ce4b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538c2a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_006390af
//   TerminatedCString s_Setting_up_actors_006390c3
//   TerminatedCString s_core_mission_cpp_006390d5
//   TerminatedCString s_Setting_up_actors_006390e9
//   TerminatedCString s_Setting_up_actors_006390fb
//   TerminatedCString s_Setting_up_actors_0063910d
//   TerminatedCString s_core_mission_cpp_0063911f
//   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
//   CLevelLoader g_CLevelLoaderInstance
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_level.cpp_CLevelLoader_update_FUN_00504160
//   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523cf0(CDemonMission *this_ptr)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  CDemonActor *this_ptr_00;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  int in_stack_00000010;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x335);
  iVar5 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,unaff_EBP);
  for (iVar4 = *(int *)(in_stack_00000010 + 0x548); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    iVar5 = iVar5 + 1;
  }
  this_ptr_00 = *(CDemonActor **)(in_stack_00000010 + 0x548);
  iVar4 = 0;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    iVar3 = iVar5 * 3 >> 0x1f;
    do {
      pcVar1 = "..\\core\\mission.cpp";
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (this_ptr_00,"..\\core\\mission.cpp",0x33f);
      iVar4 = iVar4 + 1;
      (*((this_ptr_00->metadata).vtable)->setup)(this_ptr_00);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar2,(int)pcVar1);
      }
      if (iVar4 == iVar5 / 2) {
        pcVar2 = "Setting up actors";
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,(int)pcVar2);
      }
      if (iVar4 == (int)((iVar5 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2) {
        pcVar2 = "Setting up actors";
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,(int)pcVar2);
      }
      this_ptr_00 = (this_ptr_00->metadata).next_actor;
    } while (this_ptr_00 != (CDemonActor *)0x0);
  }
  *(undefined4 *)(in_stack_00000010 + 0x884) = 1;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x350);
  return;
}


// Assembly code:
// 00523cf0: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_00523cf0
// 00523cf1: PUSH ESI
// 00523cf2: PUSH EDI
// 00523cf3: PUSH EBP
// 00523cf4: SUB ESP,0x4
// 00523cf7: PUSH 0x335
// 00523cfc: PUSH 0x6390af
//   XREF to: 006390af (DATA)
// 00523d01: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 00523d06: ADD ESP,0x8
// 00523d09: XOR EDI,EDI
// 00523d0b: PUSH EDI
// 00523d0c: PUSH 0x6390c3
//   XREF to: 006390c3 (DATA)
// 00523d11: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00523d16: ADD ESP,0x4
// 00523d19: PUSH EAX
// 00523d1a: MOV EDX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 00523d20: PUSH EDX
//   XREF to: 02dcd850 (DATA)
// 00523d21: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 00523d26: ADD ESP,0xc
// 00523d29: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00523d2d: MOV EBX,dword ptr [EBX + 0x548]
// 00523d33: TEST EBX,EBX
// 00523d35: JZ 0x00523d50
//   XREF to: 00523d50 (CONDITIONAL_JUMP)
// 00523d37: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_00523d37
// 00523d3d: INC EDI
// 00523d3e: TEST EBX,EBX
// 00523d40: JNZ 0x00523d37
//   XREF to: 00523d37 (CONDITIONAL_JUMP)
// 00523d42: LEA EAX,[EAX]
// 00523d48: LEA EDX,[EDX]
//   XREF to: 02dcd850 (DATA)
// 00523d4e: MOV EAX,EAX
// 00523d50: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_00523d50
//   XREF to: Stack[0x4] (READ)
// 00523d54: MOV EBX,dword ptr [EBX + 0x548]
// 00523d5a: XOR ESI,ESI
// 00523d5c: TEST EBX,EBX
// 00523d5e: JZ 0x00523e33
//   XREF to: 00523e33 (CONDITIONAL_JUMP)
// 00523d64: LEA EAX,[EDI*0x4 + 0x0]
// 00523d6b: SUB EAX,EDI
// 00523d6d: MOV EDX,EAX
// 00523d6f: SAR EDX,0x1f
// 00523d72: SHL EDX,0x2
// 00523d75: SBB EAX,EDX
// 00523d77: SAR EAX,0x2
// 00523d7a: MOV EBP,EAX
// 00523d7c: MOV EDX,EDI
// 00523d7e: MOV EAX,EDI
// 00523d80: SAR EDX,0x1f
// 00523d83: SUB EAX,EDX
// 00523d85: SAR EAX,0x1
// 00523d87: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00523d8a: MOV EDX,EDI
// 00523d8c: MOV EAX,EDI
// 00523d8e: SAR EDX,0x1f
// 00523d91: SHL EDX,0x2
// 00523d94: SBB EAX,EDX
// 00523d96: SAR EAX,0x2
// 00523d99: MOV EDI,EAX
// 00523d9b: PUSH 0x33f
//   Label: LAB_00523d9b
// 00523da0: PUSH 0x6390d5
//   XREF to: 006390d5 (DATA)
// 00523da5: PUSH EBX
// 00523da6: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00523dab: ADD ESP,0xc
// 00523dae: MOV EAX,dword ptr [EBX + 0x154]
// 00523db4: PUSH EBX
// 00523db5: INC ESI
// 00523db6: CALL dword ptr [EAX]
// 00523db8: ADD ESP,0x4
// 00523dbb: CMP ESI,EDI
// 00523dbd: JNZ 0x00523dde
//   XREF to: 00523dde (CONDITIONAL_JUMP)
// 00523dbf: PUSH 0x0
// 00523dc1: PUSH 0x6390e9
//   XREF to: 006390e9 (DATA)
// 00523dc6: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00523dcb: ADD ESP,0x4
// 00523dce: PUSH EAX
// 00523dcf: MOV ECX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 00523dd5: PUSH ECX
//   XREF to: 02dcd850 (DATA)
// 00523dd6: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 00523ddb: ADD ESP,0xc
// 00523dde: CMP ESI,dword ptr [ESP]
//   Label: LAB_00523dde
// 00523de1: JNZ 0x00523e02
//   XREF to: 00523e02 (CONDITIONAL_JUMP)
// 00523de3: PUSH 0x0
// 00523de5: PUSH 0x6390fb
//   XREF to: 006390fb (DATA)
// 00523dea: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00523def: ADD ESP,0x4
// 00523df2: PUSH EAX
// 00523df3: MOV EDX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 00523df9: PUSH EDX
//   XREF to: 02dcd850 (DATA)
// 00523dfa: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 00523dff: ADD ESP,0xc
// 00523e02: CMP ESI,EBP
//   Label: LAB_00523e02
// 00523e04: JNZ 0x00523e25
//   XREF to: 00523e25 (CONDITIONAL_JUMP)
// 00523e06: PUSH 0x0
// 00523e08: PUSH 0x63910d
//   XREF to: 0063910d (DATA)
// 00523e0d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00523e12: ADD ESP,0x4
// 00523e15: PUSH EAX
// 00523e16: MOV ECX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 00523e1c: PUSH ECX
//   XREF to: 02dcd850 (DATA)
// 00523e1d: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 00523e22: ADD ESP,0xc
// 00523e25: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_00523e25
// 00523e2b: TEST EBX,EBX
// 00523e2d: JNZ 0x00523d9b
//   XREF to: 00523d9b (CONDITIONAL_JUMP)
// 00523e33: PUSH 0x350
//   Label: LAB_00523e33
// 00523e38: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00523e3c: PUSH 0x63911f
//   XREF to: 0063911f (DATA)
// 00523e41: MOV dword ptr [EAX + 0x884],0x1
// 00523e4b: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 00523e50: ADD ESP,0x8
// 00523e53: ADD ESP,0x4
// 00523e56: POP EBP
// 00523e57: POP EDI
// 00523e58: POP ESI
// 00523e59: POP EBX
// 00523e5a: RET

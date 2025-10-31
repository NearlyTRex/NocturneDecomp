// Name: core_set.cpp_CDemonSet_FUN_0056d2d0
// Address: 0056d2d0
// Address Range: [[0056d2d0, 0056d373]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db564 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_process_FUN_00524250 (00524250) at 00524374 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e98a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539e07 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a9e6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 005806f2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 005828e8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005848b9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ae29 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f5c1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b410 (0057b410) at 0057b4a5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b500 (0057b500) at 0057b5b7 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b600 (0057b600) at 0057b8bf [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 00581426 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c070 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057ca28 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_set_cpp_00645e0a
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
//   CDemonCamera g_CDemonCameraInstance
//   int g_MasterLightCount
//   CDemonLight*[96] g_MasterLightList
//   undefined4 DAT_03276db4
// Function calls:
//   core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
//   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
//   core_setutil.cpp_C3DSLight_doNothing_FUN_00586ca0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056d2d0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  C3DSLight *this_ptr_00;
  
  iVar3 = 0;
  if (0 < g_MasterLightCount) {
    iVar2 = 0;
    do {
      g_CurrentDebugLine = 0xa0a;
      g_CurrentDebugFilename = "..\\core\\set.cpp";
      if (*(int *)((int)g_MasterLightList + iVar2) != 0) {
        (*(code *)**(undefined4 **)(*(int *)((int)g_MasterLightList + iVar2) + 0x3c))();
      }
      iVar1 = g_MasterLightCount;
      iVar3 = iVar3 + 1;
      *(undefined4 *)((int)g_MasterLightList + iVar2) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  g_MasterLightCount = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_doNothing_FUN_00586ca0(this_ptr_00);
      iVar3 = iVar3 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < this_ptr->light_count);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0();
  core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(&g_CDemonCameraInstance);
  return;
}


// Assembly code:
// 0056d2d0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056d2d0
// 0056d2d1: PUSH ESI
// 0056d2d2: PUSH EDI
// 0056d2d3: PUSH EBP
// 0056d2d4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056d2d8: MOV EDX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0056d2de: XOR ESI,ESI
// 0056d2e0: TEST EDX,EDX
// 0056d2e2: JLE 0x0056d31c
//   XREF to: 0056d31c (CONDITIONAL_JUMP)
// 0056d2e4: XOR EBX,EBX
// 0056d2e6: MOV EBP,0xa0a
//   Label: LAB_0056d2e6
// 0056d2eb: MOV ECX,0x645e0a
//   XREF to: 00645e0a (DATA)
// 0056d2f0: MOV EAX,dword ptr [EBX + 0x3276db0]
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0056d2f6: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 0056d2fc: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0056d302: TEST EAX,EAX
// 0056d304: JNZ 0x0056d367
//   XREF to: 0056d367 (CONDITIONAL_JUMP)
// 0056d306: MOV EBP,dword ptr [0x03276dac]
//   Label: LAB_0056d306
//   XREF to: 03276dac (READ)
// 0056d30c: ADD EBX,0x4
// 0056d30f: XOR ECX,ECX
// 0056d311: INC ESI
// 0056d312: MOV dword ptr [EBX + 0x3276dac],ECX
//   XREF to: 03276db0 (WRITE)
//   XREF to: 03276db4 (WRITE)
// 0056d318: CMP ESI,EBP
// 0056d31a: JL 0x0056d2e6
//   XREF to: 0056d2e6 (CONDITIONAL_JUMP)
// 0056d31c: MOV EDX,dword ptr [EDI + 0x19a2c]
//   Label: LAB_0056d31c
// 0056d322: XOR EAX,EAX
// 0056d324: XOR EBX,EBX
// 0056d326: MOV [0x03276dac],EAX
//   XREF to: 03276dac (WRITE)
// 0056d32b: TEST EDX,EDX
// 0056d32d: JLE 0x0056d350
//   XREF to: 0056d350 (CONDITIONAL_JUMP)
// 0056d32f: LEA ESI,[EDI + 0x19a30]
// 0056d335: PUSH ESI
//   Label: LAB_0056d335
// 0056d336: CALL core_setutil.cpp_C3DSLight_doNothing_FUN_00586ca0
//   XREF to: 00586ca0 (UNCONDITIONAL_CALL)
// 0056d33b: INC EBX
// 0056d33c: ADD ESP,0x4
// 0056d33f: MOV EAX,dword ptr [EDI + 0x19a2c]
// 0056d345: ADD ESI,0x1898
// 0056d34b: CMP EBX,EAX
// 0056d34d: JL 0x0056d335
//   XREF to: 0056d335 (CONDITIONAL_JUMP)
// 0056d34f: NOP
// 0056d350: CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
//   Label: LAB_0056d350
//   XREF to: 004729c0 (UNCONDITIONAL_CALL)
// 0056d355: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056d35a: CALL core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
//   XREF to: 0044c360 (UNCONDITIONAL_CALL)
// 0056d35f: ADD ESP,0x4
// 0056d362: POP EBP
// 0056d363: POP EDI
// 0056d364: POP ESI
// 0056d365: POP EBX
// 0056d366: RET
// 0056d367: PUSH 0x2
//   Label: LAB_0056d367
// 0056d369: MOV EDX,dword ptr [EAX + 0x3c]
// 0056d36c: PUSH EAX
// 0056d36d: CALL dword ptr [EDX]
// 0056d36f: ADD ESP,0x8
// 0056d372: JMP 0x0056d306
//   XREF to: 0056d306 (UNCONDITIONAL_JUMP)

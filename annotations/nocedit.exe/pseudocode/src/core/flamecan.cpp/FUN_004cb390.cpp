// Name: core_flamecan.cpp_FUN_004cb390
// Address: 004cb390
// Address Range: [[004cb390, 004cb4bd]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb390()
// Globals:
//   float FLOAT_0062a2e8 = 0.5
//   CEventList* g_CEventListInstance = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   undefined4 DAT_02d05310
//   CFireEffect g_CFireEffectInstance
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_fire.cpp_CFireEffect_FUN_004c8c10
//   core_flame.cpp_FUN_004c9c00
//   core_flamecan.cpp_FUN_004cb340
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb390(undefined4 param_1, undefined4 param_2)
    */

void core_flamecan_cpp_FUN_004cb390(void)

{
  int iVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  
  iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                    (g_CEventListInstance,(char *)(in_stack_00000004 + 0x2dc));
  if (iVar1 == 0) {
    if (*(int *)(in_stack_00000004 + 0x2d4) == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_FUN_004cb340();
    if (*(int *)(in_stack_00000004 + 0x2d4) == 0) {
      return;
    }
  }
  core_flame_cpp_FUN_004c9c00();
  in_stack_00000008 = *(float *)(in_stack_00000004 + 0x2d8) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0x2d8) = in_stack_00000008;
  if (0.0 < in_stack_00000008) {
    return;
  }
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
  return;
}


// Assembly code:
// 004cb390: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb390
// 004cb391: SUB ESP,0x3c
// 004cb394: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004cb398: LEA EAX,[EBX + 0x2dc]
// 004cb39e: PUSH EAX
// 004cb39f: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004cb3a5: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004cb3a6: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004cb3ab: ADD ESP,0x8
// 004cb3ae: TEST EAX,EAX
// 004cb3b0: JNZ 0x004cb3c0
//   XREF to: 004cb3c0 (CONDITIONAL_JUMP)
// 004cb3b2: CMP dword ptr [EBX + 0x2d4],0x0
// 004cb3b9: JNZ 0x004cb3d7
//   XREF to: 004cb3d7 (CONDITIONAL_JUMP)
// 004cb3bb: ADD ESP,0x3c
//   Label: LAB_004cb3bb
// 004cb3be: POP EBX
// 004cb3bf: RET
// 004cb3c0: PUSH EBX
//   Label: LAB_004cb3c0
// 004cb3c1: CALL core_flamecan.cpp_FUN_004cb340
//   XREF to: 004cb340 (UNCONDITIONAL_CALL)
// 004cb3c6: ADD ESP,0x4
// 004cb3c9: CMP dword ptr [EBX + 0x2d4],0x0
// 004cb3d0: JNZ 0x004cb3d7
//   XREF to: 004cb3d7 (CONDITIONAL_JUMP)
// 004cb3d2: ADD ESP,0x3c
// 004cb3d5: POP EBX
// 004cb3d6: RET
// 004cb3d7: LEA EAX,[EBX + 0x340]
//   Label: LAB_004cb3d7
// 004cb3dd: PUSH dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 004cb3e1: PUSH EAX
// 004cb3e2: CALL core_flame.cpp_FUN_004c9c00
//   XREF to: 004c9c00 (UNCONDITIONAL_CALL)
// 004cb3e7: ADD ESP,0x8
// 004cb3ea: FLD float ptr [EBX + 0x2d8]
// 004cb3f0: FSUB float ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 004cb3f4: FST float ptr [EBX + 0x2d8]
// 004cb3fa: FLDZ
// 004cb3fc: FCOMPP
// 004cb3fe: FNSTSW AX
// 004cb400: SAHF
// 004cb401: JC 0x004cb3bb
//   XREF to: 004cb3bb (CONDITIONAL_JUMP)
// 004cb403: PUSH EDI
// 004cb404: PUSH ESI
// 004cb405: PUSH 0x1
// 004cb407: PUSH EBX
// 004cb408: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004cb40e: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004cb40f: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 004cb414: ADD ESP,0xc
// 004cb417: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 004cb41b: PUSH EDX
// 004cb41c: MOV EAX,dword ptr [EBX + 0x154]
// 004cb422: PUSH EBX
// 004cb423: CALL dword ptr [EAX + 0x14]
// 004cb426: ADD ESP,0x8
// 004cb429: FLD float ptr [ESP + 0x14]
// 004cb42d: FSUB float ptr [ESP + 0x8]
// 004cb431: FST float ptr [ESP + 0x38]
// 004cb435: FLD float ptr [0x0062a2e8]
//   XREF to: 0062a2e8 (READ)
// 004cb43b: FXCH
// 004cb43d: FMUL ST1
// 004cb43f: FLD float ptr [ESP + 0x1c]
// 004cb443: FLD float ptr [ESP + 0x18]
// 004cb447: FSUB float ptr [ESP + 0xc]
// 004cb44b: FXCH
// 004cb44d: FSUB float ptr [ESP + 0x10]
// 004cb451: FXCH
// 004cb453: FST float ptr [ESP + 0x3c]
// 004cb457: FMUL ST3
// 004cb459: FXCH
// 004cb45b: FST float ptr [ESP + 0x40]
// 004cb45f: FMULP ST3
// 004cb461: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004cb467: PUSH 0x40800000
// 004cb46c: LEA EAX,[EBX + 0x20]
// 004cb46f: PUSH 0x44bb8000
// 004cb474: ADD EBX,0x360
// 004cb47a: FXCH
// 004cb47c: FSTP float ptr [ESP + 0x34]
// 004cb480: FSTP float ptr [ESP + 0x38]
// 004cb484: FSTP float ptr [ESP + 0x3c]
// 004cb488: FLD float ptr [EAX]
// 004cb48a: FADD float ptr [ESP + 0x34]
// 004cb48e: PUSH 0x41800000
// 004cb493: FSTP float ptr [ESP + 0x2c]
// 004cb497: FLD float ptr [EAX + 0x4]
// 004cb49a: FADD float ptr [ESP + 0x3c]
// 004cb49e: PUSH EBX
// 004cb49f: FSTP float ptr [ESP + 0x34]
// 004cb4a3: FLD float ptr [EAX + 0x8]
// 004cb4a6: FADD float ptr [ESP + 0x44]
// 004cb4aa: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 004cb4ab: FSTP float ptr [ESP + 0x3c]
// 004cb4af: CALL core_fire.cpp_CFireEffect_FUN_004c8c10
//   XREF to: 004c8c10 (UNCONDITIONAL_CALL)
// 004cb4b4: ADD ESP,0x14
// 004cb4b7: POP ESI
// 004cb4b8: POP EDI
// 004cb4b9: ADD ESP,0x3c
// 004cb4bc: POP EBX
// 004cb4bd: RET

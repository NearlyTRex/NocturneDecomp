// Name: core_teleport.cpp_CTeleport_process_FUN_005daa20
// Address: 005daa20
// Address Range: [[005daa20, 005daac8]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_process_FUN_005daa20(CTeleport * this_ptr)
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_mission.cpp_CDemonMission_FUN_00524070

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_process_FUN_005daa20(CTeleport *this_ptr)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  BADSPACEBASE *in_ESP;
  float fStack_20;
  CVector3f local_14;
  
  if (*(int *)(this_ptr->field1_0x158 + 0xc) != 0) {
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&this_ptr->base_actor,&local_14,
                        &(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.
                         position);
    pCVar2 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                       (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffd8);
    if (((((pCVar2->min).x <= pCVar1->x) && ((pCVar2->min).y <= pCVar1->y)) &&
        ((pCVar2->min).z <= pCVar1->z)) &&
       (((pCVar1->x <= (pCVar2->max).x && (pCVar1->y <= (pCVar2->max).y)) &&
        (pCVar1->z <= (pCVar2->max).z)))) {
      fStack_20 = 8.601955e-39;
      core_mission_cpp_CDemonMission_FUN_00524070(g_CDemonMissionPtr);
      return;
    }
  }
  return;
}


// Assembly code:
// 005daa20: PUSH EBX
//   Label: core_teleport.cpp_CTeleport_process_FUN_005daa20
// 005daa21: PUSH ESI
// 005daa22: SUB ESP,0x24
// 005daa25: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 005daa29: CMP dword ptr [ESI + 0x164],0x0
// 005daa30: JNZ 0x005daa38
//   XREF to: 005daa38 (CONDITIONAL_JUMP)
// 005daa32: ADD ESP,0x24
//   Label: LAB_005daa32
// 005daa35: POP ESI
// 005daa36: POP EBX
// 005daa37: RET
// 005daa38: MOV EDX,dword ptr [0x02db87d0]
//   Label: LAB_005daa38
//   XREF to: 02db87d0 (READ)
// 005daa3e: MOV EDX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005daa45: ADD EDX,0x20
// 005daa48: PUSH EDX
// 005daa49: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x14] (DATA)
// 005daa4d: PUSH EAX
// 005daa4e: PUSH ESI
// 005daa4f: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005daa54: ADD ESP,0xc
// 005daa57: MOV EDX,ESP
// 005daa59: PUSH EDX
// 005daa5a: MOV EBX,EAX
// 005daa5c: MOV EAX,dword ptr [ESI + 0x154]
// 005daa62: PUSH ESI
// 005daa63: CALL dword ptr [EAX + 0x14]
// 005daa66: MOV EDX,EAX
// 005daa68: ADD ESP,0x8
// 005daa6b: FLD float ptr [EDX]
// 005daa6d: FCOMP float ptr [EBX]
// 005daa6f: FNSTSW AX
// 005daa71: SAHF
// 005daa72: JA 0x005daa32
//   XREF to: 005daa32 (CONDITIONAL_JUMP)
// 005daa74: FLD float ptr [EDX + 0x4]
// 005daa77: FCOMP float ptr [EBX + 0x4]
// 005daa7a: FNSTSW AX
// 005daa7c: SAHF
// 005daa7d: JA 0x005daa32
//   XREF to: 005daa32 (CONDITIONAL_JUMP)
// 005daa7f: FLD float ptr [EDX + 0x8]
// 005daa82: FCOMP float ptr [EBX + 0x8]
// 005daa85: FNSTSW AX
// 005daa87: SAHF
// 005daa88: JA 0x005daa32
//   XREF to: 005daa32 (CONDITIONAL_JUMP)
// 005daa8a: FLD float ptr [EDX + 0xc]
// 005daa8d: FCOMP float ptr [EBX]
// 005daa8f: FNSTSW AX
// 005daa91: SAHF
// 005daa92: JC 0x005daa32
//   XREF to: 005daa32 (CONDITIONAL_JUMP)
// 005daa94: FLD float ptr [EDX + 0x10]
// 005daa97: FCOMP float ptr [EBX + 0x4]
// 005daa9a: FNSTSW AX
// 005daa9c: SAHF
// 005daa9d: JC 0x005daa32
//   XREF to: 005daa32 (CONDITIONAL_JUMP)
// 005daa9f: FLD float ptr [EDX + 0x14]
// 005daaa2: FCOMP float ptr [EBX + 0x8]
// 005daaa5: FNSTSW AX
// 005daaa7: SAHF
// 005daaa8: JC 0x005daa32
//   XREF to: 005daa32 (CONDITIONAL_JUMP)
// 005daaaa: MOV EDX,dword ptr [ESI + 0x164]
// 005daab0: ADD EDX,0x20
// 005daab3: PUSH EDX
// 005daab4: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005daaba: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 005daabb: CALL core_mission.cpp_CDemonMission_FUN_00524070
//   XREF to: 00524070 (UNCONDITIONAL_CALL)
// 005daac0: ADD ESP,0x8
// 005daac3: ADD ESP,0x24
// 005daac6: POP ESI
// 005daac7: POP EBX
// 005daac8: RET

// Name: core_setcolid.cpp_CDemonSet_FUN_005743e0
// Address: 005743e0
// Address Range: [[005743e0, 00574432]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_FUN_005743e0(CDemonSet * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 (00524120) at 0052416c [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 (00523e60) at 00523eb8 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e559 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005399c3 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056b8a7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_FUN_005743e0(CDemonSet *this_ptr)

{
  void *pvVar1;
  CDemonSet *pCVar2;
  int iVar3;
  
  pvVar1 = this_ptr->actor_list_ptr;
  this_ptr->field19_0x14f0a0[0x7d08] = '\0';
  this_ptr->field19_0x14f0a0[0x7d09] = '\0';
  this_ptr->field19_0x14f0a0[0x7d0a] = '\0';
  this_ptr->field19_0x14f0a0[0x7d0b] = '\0';
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < (int)pvVar1) {
    do {
      if (*(int *)(*(int *)pCVar2->actor_list_data + 0x100) == 0) {
        *(int *)(this_ptr->field19_0x14f0a0 +
                *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08) * 4 + 0x7d0c) =
             *(int *)pCVar2->actor_list_data;
        *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08) =
             *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08) + 1;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar3 < (int)this_ptr->actor_list_ptr);
  }
  return;
}


// Assembly code:
// 005743e0: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_FUN_005743e0
// 005743e1: PUSH ESI
// 005743e2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005743e6: MOV ECX,dword ptr [EAX + 0x14d154]
// 005743ec: MOV dword ptr [EAX + 0x156da8],0x0
// 005743f6: XOR EDX,EDX
// 005743f8: TEST ECX,ECX
// 005743fa: JLE 0x0057441b
//   XREF to: 0057441b (CONDITIONAL_JUMP)
// 005743fc: MOV ECX,EAX
// 005743fe: MOV EBX,dword ptr [ECX + 0x14d158]
//   Label: LAB_005743fe
// 00574404: CMP dword ptr [EBX + 0x100],0x0
// 0057440b: JZ 0x0057441e
//   XREF to: 0057441e (CONDITIONAL_JUMP)
// 0057440d: INC EDX
//   Label: LAB_0057440d
// 0057440e: MOV EBX,dword ptr [EAX + 0x14d154]
// 00574414: ADD ECX,0x4
// 00574417: CMP EDX,EBX
// 00574419: JL 0x005743fe
//   XREF to: 005743fe (CONDITIONAL_JUMP)
// 0057441b: POP ESI
//   Label: LAB_0057441b
// 0057441c: POP EBX
// 0057441d: RET
// 0057441e: MOV ESI,dword ptr [EAX + 0x156da8]
//   Label: LAB_0057441e
// 00574424: MOV dword ptr [EAX + ESI*0x4 + 0x156dac],EBX
// 0057442b: INC dword ptr [EAX + 0x156da8]
// 00574431: JMP 0x0057440d
//   XREF to: 0057440d (UNCONDITIONAL_JUMP)

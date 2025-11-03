// Name: core_tentacle.cpp_CTentacle_ctor_FUN_005daf60
// Address: 005daf60
// Address Range: [[005daf60, 005dafbf]]
// Convention: __cdecl
// Signature: CTentacle * core_tentacle.cpp_CTentacle_ctor_FUN_005daf60(CTentacle * this_ptr)
// Cross-references:
//   core_tentacle.cpp_FUN_005daf20 (005daf20) at 005daf3a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_tentacle_dfm_00654db3
//   CDemonActor_vtable g_CTentacleVTable
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_005daf60(CTentacle *this_ptr)

{
  CEnemy *pCVar1;
  CTentacle *pCVar2;
  
  pCVar2 = (CTentacle *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar2->base_enemy).base_character.base_actor.vtable = &g_CTentacleVTable;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar2->base_enemy).base_character.model);
  pCVar1 = &pCVar2->base_enemy;
  (pCVar1->base_character).cloth_data[0x34c] = '\0';
  (pCVar1->base_character).cloth_data[0x34d] = '\0';
  (pCVar1->base_character).cloth_data[0x34e] = 'H';
  (pCVar1->base_character).cloth_data[0x34f] = 'B';
  pCVar1 = &pCVar2->base_enemy;
  (pCVar1->base_character).cloth_data[0x350] = '\0';
  (pCVar1->base_character).cloth_data[0x351] = '\0';
  (pCVar1->base_character).cloth_data[0x352] = -0x38;
  (pCVar1->base_character).cloth_data[0x353] = 'B';
  pCVar2->field1_0xbeb4[8] = '\0';
  pCVar2->field1_0xbeb4[9] = '\0';
  pCVar2->field1_0xbeb4[10] = '\0';
  pCVar2->field1_0xbeb4[0xb] = '\0';
  pCVar2->field1_0xbeb4[0xc] = '\0';
  pCVar2->field1_0xbeb4[0xd] = '\0';
  pCVar2->field1_0xbeb4[0xe] = '\0';
  pCVar2->field1_0xbeb4[0xf] = '\0';
  pCVar2->field1_0xbeb4[0x10] = '\0';
  pCVar2->field1_0xbeb4[0x11] = '\0';
  pCVar2->field1_0xbeb4[0x12] = '\0';
  pCVar2->field1_0xbeb4[0x13] = '\0';
  return pCVar2;
}


// Assembly code:
// 005daf60: PUSH EBX
//   Label: core_tentacle.cpp_CTentacle_ctor_FUN_005daf60
// 005daf61: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005daf65: PUSH EDX
// 005daf66: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 005daf6b: ADD ESP,0x4
// 005daf6e: PUSH 0x654db3
//   XREF to: 00654db3 (DATA)
// 005daf73: MOV EBX,EAX
// 005daf75: ADD EAX,0x158
// 005daf7a: PUSH EAX
// 005daf7b: MOV dword ptr [EAX + -0x4],0x664474
//   XREF to: 00664474 (DATA)
// 005daf82: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005daf87: MOV dword ptr [EBX + 0x2de4],0x42480000
// 005daf91: MOV dword ptr [EBX + 0x2de8],0x42c80000
// 005daf9b: MOV dword ptr [EBX + 0xbebc],0x0
// 005dafa5: ADD ESP,0x8
// 005dafa8: MOV dword ptr [EBX + 0xbec0],0x0
// 005dafb2: MOV EAX,EBX
// 005dafb4: MOV dword ptr [EBX + 0xbec4],0x0
// 005dafbe: POP EBX
// 005dafbf: RET

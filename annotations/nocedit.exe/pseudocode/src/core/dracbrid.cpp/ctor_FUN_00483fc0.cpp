// Name: core_dracbrid.cpp_ctor_FUN_00483fc0
// Address: 00483fc0
// Address Range: [[00483fc0, 004840ae]]
// Convention: __cdecl
// Signature: CDraculaBride * core_dracbrid.cpp_ctor_FUN_00483fc0(CDraculaBride * this_ptr)
// Cross-references:
//   core_dracbrid.cpp_FUN_00483f80 (00483f80) at 00483f9a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_nbride2_dfm_00621869
//   undefined4 DAT_0065cd70
//   undefined4 PTR_core_bride.cpp_FUN_0065cd71+3
//   CDemonActor_vtable PTR_core_dracbrid.cpp_DraculaBrideModels_FUN_0065cd94
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDraculaBride * __cdecl core_dracbrid_cpp_ctor_FUN_00483fc0(CDraculaBride *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CDraculaBride *pCVar4;
  CDraculaBride *pCVar5;
  CDraculaBride *pCVar6;
  
  pCVar4 = (CDraculaBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable =
       &PTR_core_dracbrid_cpp_DraculaBrideModels_FUN_0065cd94;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model);
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = '\0';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x80;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar4->field1_0xbeb4[0x2c] = '\0';
  (pCVar4->base_enemy).base_character.hit_points = 135.0;
  uVar2 = _DAT_0065cd70;
  pCVar4->mistState = 0;
  uVar3 = _PTR_core_bride_cpp_FUN_0065cd71_3;
  pCVar4->vanishTimer = 0.0;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  (pCVar4->newPos).z = 0.0;
  (pCVar4->newPos).y = (pCVar4->newPos).z;
  (pCVar4->newPos).x = (pCVar4->newPos).y;
  pCVar4->padding_0xbf64[0] = '\0';
  pCVar4->padding_0xbf64[1] = '\0';
  pCVar4->padding_0xbf64[2] = '\0';
  pCVar4->padding_0xbf64[3] = '\0';
  pCVar4->freakyVoiceNumber = 1;
  pCVar5 = pCVar4;
  do {
    pCVar6 = (CDraculaBride *)((pCVar5->base_enemy).base_character.base_actor.actor_name + 4);
    pCVar5->padding_0xbf6c[0] = '\0';
    pCVar5->padding_0xbf6c[1] = '\0';
    pCVar5->padding_0xbf6c[2] = '\0';
    pCVar5->padding_0xbf6c[3] = '\0';
    pCVar5 = pCVar6;
  } while (pCVar6 != (CDraculaBride *)(pCVar4->base_enemy).base_character.base_actor.create_event);
  pCVar4->partCount = 0;
  pCVar4->fadeTimer = 0.0;
  pCVar4->padding_0xbf50[4] = '\0';
  pCVar4->padding_0xbf50[5] = '\0';
  pCVar4->padding_0xbf50[6] = '\0';
  pCVar4->padding_0xbf50[7] = '\0';
  pCVar4->exploded = 0;
  return pCVar4;
}


// Assembly code:
// 00483fc0: PUSH ESI
//   Label: core_dracbrid.cpp_ctor_FUN_00483fc0
// 00483fc1: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00483fc5: PUSH EBX
// 00483fc6: PUSH ESI
// 00483fc7: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 00483fcc: ADD ESP,0x4
// 00483fcf: MOV EBX,EAX
// 00483fd1: PUSH 0x621869
//   XREF to: 00621869 (DATA)
// 00483fd6: MOV ESI,EAX
// 00483fd8: ADD EAX,0x158
// 00483fdd: PUSH EAX
// 00483fde: MOV dword ptr [EAX + -0x4],0x65cd94
//   XREF to: 0065cd94 (DATA)
// 00483fe5: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00483fea: MOV dword ptr [EBX + 0x2ddc],0x3f000000
// 00483ff4: MOV dword ptr [EBX + 0x2de0],0x3f800000
// 00483ffe: MOV byte ptr [EBX + 0xbee0],0x0
// 00484005: MOV dword ptr [EBX + 0x243c],0x43070000
// 0048400f: FLD float ptr [0x0065cd70]
//   XREF to: 0065cd70 (READ)
// 00484015: MOV dword ptr [EBX + 0xbf48],0x0
// 0048401f: FLD float ptr [0x0065cd74]
//   XREF to: 0065cd74 (READ)
// 00484025: MOV dword ptr [EBX + 0xbf4c],0x0
// 0048402f: LEA EAX,[EBX + 0xbf58]
// 00484035: FXCH
// 00484037: FSTP float ptr [EBX + 0x2de4]
// 0048403d: FSTP float ptr [EBX + 0x2de8]
// 00484043: MOV dword ptr [EAX + 0x8],0x0
// 0048404a: ADD ESP,0x8
// 0048404d: MOV EDX,dword ptr [EAX + 0x8]
// 00484050: MOV dword ptr [EAX + 0x4],EDX
// 00484053: MOV EDX,dword ptr [EAX + 0x4]
// 00484056: MOV dword ptr [EAX],EDX
// 00484058: MOV dword ptr [EBX + 0xbf64],0x0
// 00484062: MOV EAX,EBX
// 00484064: MOV dword ptr [EBX + 0xbf44],0x1
// 0048406e: LEA EDX,[EBX + 0x78]
// 00484071: POP EBX
// 00484072: ADD EAX,0x4
//   Label: LAB_00484072
// 00484075: MOV dword ptr [EAX + 0xbf68],0x0
// 0048407f: CMP EAX,EDX
// 00484081: JNZ 0x00484072
//   XREF to: 00484072 (CONDITIONAL_JUMP)
// 00484083: MOV dword ptr [ESI + 0xbf68],0x0
// 0048408d: MOV dword ptr [ESI + 0xbfe8],0x0
// 00484097: MOV dword ptr [ESI + 0xbf54],0x0
// 004840a1: MOV EAX,ESI
// 004840a3: MOV dword ptr [ESI + 0xbfe4],0x0
// 004840ad: POP ESI
// 004840ae: RET

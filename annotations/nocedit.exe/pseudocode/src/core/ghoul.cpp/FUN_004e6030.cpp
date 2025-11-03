// Name: core_ghoul.cpp_FUN_004e6030
// Address: 004e6030
// Address Range: [[004e6030, 004e606b]]
// Convention: __cdecl
// Signature: CGhoul * core_ghoul.cpp_FUN_004e6030(CGhoul * this_ptr)
// Cross-references:
//   core_ghoul.cpp_FUN_004e5ff0 (004e5ff0) at 004e600d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_guul_dfm_0062dafb
//   CDemonActor_vtable PTR_core_ghoul.cpp_FUN_0065ed44
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGhoul * __cdecl core_ghoul_cpp_FUN_004e6030(CGhoul *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CGhoul *pCVar4;
  float fVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 fVar7;
  float min_value;
  
  pCVar4 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_ghoul_cpp_FUN_0065ed44;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model);
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(20.0,35.0);
  fVar7 = (float10)fVar5 * (float10)DAT_0062db0a;
  min_value = 10.0;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,fVar5));
  *(int *)(pCVar4->field1_0xbeb4 + 0xc) = (int)ROUND(fVar7);
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(min_value,fVar5);
  pCVar4->arise_timer = 0xa0000;
  pCVar4->field3_0xbecc[0] = -1;
  pCVar4->field3_0xbecc[1] = -1;
  pCVar4->field3_0xbecc[2] = -1;
  pCVar4->field3_0xbecc[3] = -1;
  fVar7 = (float10)fVar5 * (float10)DAT_0062db0a;
  pCVar4->field3_0xbecc[4] = '\0';
  pCVar4->field3_0xbecc[5] = '\0';
  pCVar4->field3_0xbecc[6] = '\0';
  pCVar4->field3_0xbecc[7] = '\0';
  pCVar4->spasm_count = 2;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,fVar5));
  *(int *)(pCVar4->field1_0xbeb4 + 0x10) = (int)ROUND(fVar7);
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,(int)fVar5);
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = '@';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x40;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar4->field6_0xbee0[0x38] = '\0';
  pCVar4->field6_0xbee0[0x39] = '\0';
  pCVar4->field6_0xbee0[0x3a] = '\0';
  pCVar4->field6_0xbee0[0x3b] = '\0';
  pCVar4->field6_0xbee0[0x3c] = '\0';
  pCVar4->field6_0xbee0[0x3d] = '\0';
  pCVar4->field6_0xbee0[0x3e] = '\0';
  pCVar4->field6_0xbee0[0x3f] = '\0';
  pCVar4->field6_0xbee0[0x40] = '\0';
  pCVar4->field6_0xbee0[0x41] = '\0';
  pCVar4->field6_0xbee0[0x42] = '\0';
  pCVar4->field6_0xbee0[0x43] = '\0';
  pCVar4->field6_0xbee0[0x44] = '\0';
  uVar2 = _DAT_0065ed30;
  pCVar4->field6_0xbee0[0x45] = '\0';
  pCVar4->field6_0xbee0[0x46] = '\0';
  pCVar4->field6_0xbee0[0x47] = '\0';
  pCVar4->field6_0xbee0[0x48] = '\0';
  uVar3 = _DAT_0065ed34;
  pCVar4->field6_0xbee0[0x49] = '\0';
  pCVar4->field6_0xbee0[0x4a] = '\0';
  pCVar4->field6_0xbee0[0x4b] = '\0';
  pCVar4->lives_left = iVar6;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 004e6030: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e6030
// 004e6031: SUB ESP,0x4
// 004e6034: MOV EDX,dword ptr [ESP + 0xc]
// 004e6038: PUSH EDX
// 004e6039: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 004e603e: ADD ESP,0x4
// 004e6041: PUSH 0x62dafb
//   XREF to: 0062dafb (DATA)
// 004e6046: MOV EBX,EAX
// 004e6048: ADD EAX,0x158
// 004e604d: PUSH EAX
// 004e604e: MOV dword ptr [EAX + -0x4],0x65ed44
//   XREF to: 0065ed44 (DATA)
// 004e6055: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004e605a: ADD ESP,0x8
// 004e605d: PUSH 0x420c0000
// 004e6062: PUSH 0x41a00000
// 004e6067: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

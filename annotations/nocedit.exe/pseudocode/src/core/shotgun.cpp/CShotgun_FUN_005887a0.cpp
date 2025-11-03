// Name: core_shotgun.cpp_CShotgun_FUN_005887a0
// Address: 005887a0
// Address Range: [[005887a0, 005887e3]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_CShotgun_FUN_005887a0()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_shotgun.cpp_CShotgun_FUN_005887a0(undefined4 param_1) */

void core_shotgun_cpp_CShotgun_FUN_005887a0(void)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  undefined1 local_2c [12];
  float local_20;
  CVector3f local_1c;
  
  if (*(int *)(in_stack_00000004[4].actor_name + 8) < 1) {
    return;
  }
  local_2c._0_4_ = 6.0;
  local_2c._4_4_ = -6.0;
  local_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_1c.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_1c.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffa4,&local_1c);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)&stack0xffffffa8,(CVector3f *)&stack0xfffffff4,
                      (CVector3f *)(local_2c + 8));
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,(CVector3f *)local_2c,pCVar1);
  if (&local_1c != pCVar1) {
    local_1c.x = pCVar1->x;
    local_1c.y = pCVar1->y;
    local_1c.z = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("shell.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"shotgun-cock.wav");
  return;
}


// Assembly code:
// 005887a0: PUSH EBX
//   Label: core_shotgun.cpp_CShotgun_FUN_005887a0
// 005887a1: PUSH EBP
// 005887a2: SUB ESP,0x5c
// 005887a5: MOV EBX,dword ptr [ESP + 0x68]
// 005887a9: CMP dword ptr [EBX + 0x568],0x0
// 005887b0: JG 0x005887b8
//   XREF to: 005887b8 (CONDITIONAL_JUMP)
// 005887b2: ADD ESP,0x5c
// 005887b5: POP EBP
// 005887b6: POP EBX
// 005887b7: RET
// 005887b8: PUSH EDI
//   Label: LAB_005887b8
// 005887b9: PUSH ESI
// 005887ba: PUSH 0x3ec90fdb
// 005887bf: MOV ECX,0x40a00000
// 005887c4: MOV ESI,0x40c00000
// 005887c9: MOV EDI,0xc0c00000
// 005887ce: PUSH 0xbec90fdb
// 005887d3: MOV dword ptr [ESP + 0x44],ECX
// 005887d7: MOV dword ptr [ESP + 0x48],ESI
// 005887db: MOV dword ptr [ESP + 0x4c],EDI
// 005887df: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

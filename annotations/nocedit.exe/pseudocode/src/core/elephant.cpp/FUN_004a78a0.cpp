// Name: core_elephant.cpp_FUN_004a78a0
// Address: 004a78a0
// Address Range: [[004a78a0, 004a78d4]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a78a0()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void core_elephant_cpp_FUN_004a78a0(void)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CVector3f *pCStack_60;
  undefined1 local_2c [12];
  float local_20;
  float fStack_1c;
  
  local_2c._4_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  fStack_1c = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff9c,(CVector3f *)(local_2c + 8));
  pCStack_60 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)&pCStack_60,(CVector3f *)&stack0xffffffec,
                          (CVector3f *)local_2c);
  pCVar1 = core_actor_cpp_CDemonActor_FUN_00408e80(in_stack_00000004);
  if ((CVector3f *)(local_2c + 8) != pCVar1) {
    local_2c._8_4_ = pCVar1->x;
    local_20 = pCVar1->y;
    fStack_1c = pCVar1->z;
  }
  pCStack_60 = (CVector3f *)0x4a7968;
  core_dmodel_cpp_loadModel_FUN_00478c00("shell.kfm");
  pCStack_60 = (CVector3f *)&in_stack_00000004->orient;
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  (*((in_stack_00000004->metadata).vtable)->playSound)(in_stack_00000004,"sh-cock.wav");
  return;
}


// Assembly code:
// 004a78a0: PUSH EBX
//   Label: core_elephant.cpp_FUN_004a78a0
// 004a78a1: PUSH ESI
// 004a78a2: PUSH EDI
// 004a78a3: PUSH EBP
// 004a78a4: SUB ESP,0x5c
// 004a78a7: MOV EBX,dword ptr [ESP + 0x70]
// 004a78ab: PUSH 0x3ec90fdb
// 004a78b0: MOV EDX,0x40a00000
// 004a78b5: MOV ECX,0x40c00000
// 004a78ba: MOV ESI,0xc0c00000
// 004a78bf: PUSH 0xbec90fdb
// 004a78c4: MOV dword ptr [ESP + 0x3c],EDX
// 004a78c8: MOV dword ptr [ESP + 0x40],ECX
// 004a78cc: MOV dword ptr [ESP + 0x44],ESI
// 004a78d0: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

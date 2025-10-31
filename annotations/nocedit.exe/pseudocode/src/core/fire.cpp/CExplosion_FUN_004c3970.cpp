// Name: core_fire.cpp_CExplosion_FUN_004c3970
// Address: 004c3970
// Address Range: [[004c3970, 004c39eb]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CExplosion_FUN_004c3970(CExplosion * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c8c10 (004c8c10) at 004c8c35 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_FUN_0040cd10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_set.cpp_CDemonSet_FUN_00570fa0

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_FUN_004c3970(CExplosion *this_ptr)

{
  CDemonSet *this_ptr_00;
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  CExplosion *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  float fStack_18;
  
  if (this_ptr != in_stack_00000008) {
    *(undefined4 *)this_ptr->field0_0x0 = *(undefined4 *)in_stack_00000008->field0_0x0;
    *(undefined4 *)(this_ptr->field0_0x0 + 4) = *(undefined4 *)(in_stack_00000008->field0_0x0 + 4);
    *(undefined4 *)(this_ptr->field0_0x0 + 8) = *(undefined4 *)(in_stack_00000008->field0_0x0 + 8);
  }
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->field0_0x0[0xc] = '\0';
  this_ptr->field0_0x0[0xd] = '\0';
  this_ptr->field0_0x0[0xe] = -0x80;
  this_ptr->field0_0x0[0xf] = '?';
  *(undefined4 *)(this_ptr->field0_0x0 + 0x10) = in_stack_0000000c;
  core_set_cpp_CDemonSet_FUN_00570fa0(this_ptr_00);
  iVar3 = 0;
  uVar1 = core_actor_cpp_FUN_0040cd10();
  *(undefined4 *)(this_ptr->field0_0x0 + 0x18) = uVar1;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x14) = in_stack_00000018;
  do {
    core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
    fcos((float10)fVar2);
    fcos((float10)fStack_18);
    fsin((float10)fVar2);
    fsin((float10)fStack_18);
    core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
              (g_CFireEffectKeyFramedModels + iVar3 % 5);
    iVar3 = iVar3 + 1;
    core_fire_cpp_CFireEffect_FUN_004c7e60(g_CFireEffectPtr);
  } while (iVar3 < 10);
  return;
}


// Assembly code:
// 004c3970: PUSH EBX
//   Label: core_fire.cpp_CExplosion_FUN_004c3970
// 004c3971: PUSH ESI
// 004c3972: PUSH EDI
// 004c3973: PUSH EBP
// 004c3974: SUB ESP,0x40
// 004c3977: MOV ESI,dword ptr [ESP + 0x54]
// 004c397b: MOV EAX,dword ptr [ESP + 0x58]
// 004c397f: CMP ESI,EAX
// 004c3981: JZ 0x004c3993
//   XREF to: 004c3993 (CONDITIONAL_JUMP)
// 004c3983: MOV EDX,dword ptr [EAX]
// 004c3985: MOV dword ptr [ESI],EDX
// 004c3987: MOV EDX,dword ptr [EAX + 0x4]
// 004c398a: MOV dword ptr [ESI + 0x4],EDX
// 004c398d: MOV EDX,dword ptr [EAX + 0x8]
// 004c3990: MOV dword ptr [ESI + 0x8],EDX
// 004c3993: PUSH 0x40000000
//   Label: LAB_004c3993
// 004c3998: PUSH 0x0
// 004c399a: MOV EAX,dword ptr [ESP + 0x64]
// 004c399e: PUSH 0x0
// 004c39a0: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004c39a6: PUSH 0x43480000
// 004c39ab: MOV dword ptr [ESI + 0xc],0x3f800000
// 004c39b2: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004c39b3: MOV dword ptr [ESI + 0x10],EAX
// 004c39b6: CALL core_set.cpp_CDemonSet_FUN_00570fa0
//   XREF to: 00570fa0 (UNCONDITIONAL_CALL)
// 004c39bb: ADD ESP,0x14
// 004c39be: LEA EDI,[ESI + 0x4]
// 004c39c1: PUSH 0x3f000000
// 004c39c6: XOR EBX,EBX
// 004c39c8: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004c39cd: ADD ESP,0x4
// 004c39d0: MOV dword ptr [ESI + 0x18],EAX
// 004c39d3: MOV EAX,dword ptr [ESP + 0x60]
// 004c39d7: LEA EBP,[ESI + 0x8]
// 004c39da: MOV dword ptr [ESI + 0x14],EAX
// 004c39dd: PUSH 0x3fc90fdb
//   Label: LAB_004c39dd
// 004c39e2: PUSH 0x3f490fdb
// 004c39e7: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

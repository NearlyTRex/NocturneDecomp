// Name: core_flamegun.cpp_FUN_004cb920
// Address: 004cb920
// Address Range: [[004cb920, 004cb9ad]]
// Convention: unknown
// Signature: undefined core_flamegun.cpp_FUN_004cb920()
// Globals:
//   undefined4 DAT_0065e270
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_fire.cpp_CFireEffect_FUN_004c8ef0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb920(undefined4 param_1) */

undefined4 core_flamegun_cpp_FUN_004cb920(void)

{
  float fVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  
  if (*(int *)(in_stack_00000004[4].actor_name + 8) < 1) {
    return 0;
  }
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)&stack0xfffffffc,input_local_point);
  core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
  if (in_stack_00000004[4].location.position.x == 0.0) {
    fVar1 = 1.0 / _DAT_0065e270;
    *(int *)(in_stack_00000004[4].actor_name + 8) =
         *(int *)(in_stack_00000004[4].actor_name + 8) + -1;
    in_stack_00000004[4].location.position.y = fVar1;
  }
  in_stack_00000004[4].actor_name[0x18] = '\x01';
  in_stack_00000004[4].actor_name[0x19] = '\0';
  in_stack_00000004[4].actor_name[0x1a] = '\0';
  in_stack_00000004[4].actor_name[0x1b] = '\0';
  return 1;
}


// Assembly code:
// 004cb920: PUSH EBX
//   Label: core_flamegun.cpp_FUN_004cb920
// 004cb921: SUB ESP,0x18
// 004cb924: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004cb928: CMP dword ptr [EBX + 0x568],0x0
// 004cb92f: JG 0x004cb938
//   XREF to: 004cb938 (CONDITIONAL_JUMP)
// 004cb931: XOR EAX,EAX
// 004cb933: ADD ESP,0x18
// 004cb936: POP EBX
// 004cb937: RET
// 004cb938: PUSH ESI
//   Label: LAB_004cb938
// 004cb939: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 004cb93d: PUSH EAX
// 004cb93e: MOV EDX,dword ptr [EBX + 0x154]
// 004cb944: PUSH EBX
// 004cb945: CALL dword ptr [EDX + 0xf4]
// 004cb94b: ADD ESP,0x8
// 004cb94e: PUSH EAX
// 004cb94f: LEA EAX,[ESP + 0x14]
// 004cb953: PUSH EAX
// 004cb954: PUSH EBX
// 004cb955: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004cb95a: ADD ESP,0xc
// 004cb95d: PUSH 0x1
// 004cb95f: PUSH 0x3
// 004cb961: LEA EAX,[EBX + 0x30]
// 004cb964: PUSH EAX
// 004cb965: LEA EAX,[ESP + 0x1c]
// 004cb969: PUSH EAX
// 004cb96a: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004cb970: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004cb971: CALL core_fire.cpp_CFireEffect_FUN_004c8ef0
//   XREF to: 004c8ef0 (UNCONDITIONAL_CALL)
// 004cb976: MOV ESI,dword ptr [EBX + 0x580]
// 004cb97c: ADD ESP,0x14
// 004cb97f: TEST ESI,ESI
// 004cb981: JNZ 0x004cb999
//   XREF to: 004cb999 (CONDITIONAL_JUMP)
// 004cb983: FLD float ptr [0x0065e270]
//   XREF to: 0065e270 (READ)
// 004cb989: FLD1
// 004cb98b: FDIVRP
// 004cb98d: DEC dword ptr [EBX + 0x568]
// 004cb993: FSTP float ptr [EBX + 0x584]
// 004cb999: MOV EAX,0x1
//   Label: LAB_004cb999
// 004cb99e: MOV dword ptr [EBX + 0x578],0x1
// 004cb9a8: POP ESI
// 004cb9a9: ADD ESP,0x18
// 004cb9ac: POP EBX
// 004cb9ad: RET

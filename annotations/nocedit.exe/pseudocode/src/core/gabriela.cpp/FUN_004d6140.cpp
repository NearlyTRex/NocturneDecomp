// Name: core_gabriela.cpp_FUN_004d6140
// Address: 004d6140
// Address Range: [[004d6140, 004d6198] [004d619e, 004d6223]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6140()
// Globals:
//   double DOUBLE_0062b075 = 0.900000000000000
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 g_CDynamiteClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
//   core_cloth.cpp_FUN_0043bae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d6140(undefined4 param_1) */

int core_gabriela_cpp_FUN_004d6140(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CDemonActor *pCVar4;
  CCharacter *in_stack_00000004;
  
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(in_stack_00000004);
  if (iVar3 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base_actor);
    core_cloth_cpp_FUN_0043bae0();
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    if (((*(int *)(in_stack_00000004[2].cloth_data + 0x5388) != 0) &&
        ((**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 8))(),
        (float)DOUBLE_0062b075 < *(float *)(in_stack_00000004[2].cloth_data + 0x54fc))) &&
       ((pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x5388),
                             g_CDynamiteClassInfo.name_hash), pCVar4 == (CDemonActor *)0x0 ||
        (fVar1 = pCVar4[4].location.position.x, fVar2 = pCVar4[4].location.position.y,
        0.0 < SQRT(fVar2 * fVar2 +
                   *(float *)(pCVar4[4].actor_name + 0x1c) * *(float *)(pCVar4[4].actor_name + 0x1c)
                   + fVar1 * fVar1))))) {
      (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 0x104))();
      return iVar3;
    }
  }
  return iVar3;
}


// Assembly code:
// 004d6140: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d6140
// 004d6141: PUSH ESI
// 004d6142: PUSH EDI
// 004d6143: PUSH EBP
// 004d6144: MOV EBP,ESP
// 004d6146: MOV EBX,dword ptr [EBP + 0x14]
// 004d6149: PUSH EBX
// 004d614a: CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 004d614f: ADD ESP,0x4
// 004d6152: MOV ESI,EAX
// 004d6154: TEST EAX,EAX
// 004d6156: JNZ 0x004d6173
//   XREF to: 004d6173 (CONDITIONAL_JUMP)
// 004d6158: TEST ESI,ESI
//   Label: LAB_004d6158
// 004d615a: JZ 0x004d616c
//   XREF to: 004d616c (CONDITIONAL_JUMP)
// 004d615c: LEA EDI,[EBX + 0x1f738]
// 004d6162: MOV EAX,dword ptr [EDI + 0x330]
// 004d6168: TEST EAX,EAX
// 004d616a: JNZ 0x004d619e
//   XREF to: 004d619e (CONDITIONAL_JUMP)
// 004d616c: MOV EAX,ESI
//   Label: LAB_004d616c
// 004d616e: POP EBP
// 004d616f: POP EDI
// 004d6170: POP ESI
// 004d6171: POP EBX
// 004d6172: RET
// 004d6173: PUSH EBX
//   Label: LAB_004d6173
// 004d6174: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004d6179: ADD ESP,0x4
// 004d617c: PUSH 0x0
// 004d617e: LEA EAX,[EBX + 0x1fc14]
// 004d6184: PUSH EAX
// 004d6185: CALL core_cloth.cpp_FUN_0043bae0
//   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
// 004d618a: ADD ESP,0x8
// 004d618d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004d6193: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004d6194: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004d619e: PUSH EAX
//   Label: LAB_004d619e
// 004d619f: MOV EDX,dword ptr [EAX + 0x154]
// 004d61a5: CALL dword ptr [EDX + 0x8]
// 004d61a8: FLD float ptr [EBX + 0x1fbdc]
// 004d61ae: ADD ESP,0x4
// 004d61b1: FCOMP double ptr [0x0062b075]
//   XREF to: 0062b075 (READ)
// 004d61b7: FNSTSW AX
// 004d61b9: SAHF
// 004d61ba: JBE 0x004d616c
//   XREF to: 004d616c (CONDITIONAL_JUMP)
// 004d61bc: MOV ECX,dword ptr [0x02ceed20]
//   XREF to: 02ceed20 (READ)
// 004d61c2: PUSH ECX
// 004d61c3: MOV EAX,dword ptr [EDI + 0x330]
// 004d61c9: PUSH EAX
// 004d61ca: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d61cf: ADD ESP,0x8
// 004d61d2: TEST EAX,EAX
// 004d61d4: JZ 0x004d6201
//   XREF to: 004d6201 (CONDITIONAL_JUMP)
// 004d61d6: FLD float ptr [EAX + 0x580]
// 004d61dc: FMUL ST0
// 004d61de: FLD float ptr [EAX + 0x57c]
// 004d61e4: FMUL ST0
// 004d61e6: FADDP
// 004d61e8: FLD float ptr [EAX + 0x584]
// 004d61ee: FMUL ST0
// 004d61f0: FADDP
// 004d61f2: FSQRT
// 004d61f4: FLDZ
// 004d61f6: FCOMPP
// 004d61f8: FNSTSW AX
// 004d61fa: SAHF
// 004d61fb: JNC 0x004d616c
//   XREF to: 004d616c (CONDITIONAL_JUMP)
// 004d6201: LEA EAX,[EBX + 0x1f738]
//   Label: LAB_004d6201
// 004d6207: MOV EAX,dword ptr [EAX + 0x330]
// 004d620d: PUSH EAX
// 004d620e: MOV EBX,dword ptr [EAX + 0x154]
// 004d6214: CALL dword ptr [EBX + 0x104]
// 004d621a: ADD ESP,0x4
// 004d621d: MOV EAX,ESI
// 004d621f: POP EBP
// 004d6220: POP EDI
// 004d6221: POP ESI
// 004d6222: POP EBX
// 004d6223: RET

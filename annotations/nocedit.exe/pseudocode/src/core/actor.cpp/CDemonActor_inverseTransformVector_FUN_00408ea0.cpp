// Name: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
// Address: 00408ea0
// Address Range: [[00408ea0, 00408ebe]]
// Convention: __cdecl
// Signature: CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 0040956a [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422390 (00422390) at 004223ba [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c5f0 (0042c5f0) at 0042c731 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ded0 (0042ded0) at 0042df32 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d777 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0 (004bf7f0) at 004bf9ca [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c8487 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbf00 (004cbf00) at 004cc014 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d35c1 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2c40 (004f2c40) at 004f2d12 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c340 (0053c340) at 0053c47a [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 00573c66 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc4a7 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df550 (005df550) at 005df5b4 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df610 (005df610) at 005df67e [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e8094 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9c6f [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

CVector3f * __cdecl
core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
          (CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector)

{
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&this_ptr->orient_matrix,output_vector,input_vector);
  return output_vector;
}


// Assembly code:
// 00408ea0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
// 00408ea1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00408ea5: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00408ea9: PUSH EDX
// 00408eaa: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00408eae: PUSH EBX
// 00408eaf: ADD EAX,0x3c
// 00408eb2: PUSH EAX
// 00408eb3: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00408eb8: ADD ESP,0xc
// 00408ebb: MOV EAX,EBX
// 00408ebd: POP EBX
// 00408ebe: RET
